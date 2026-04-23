#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_REPLAYCUSTOMDATA_METHOD_1_5BF0E61BD5CA40A5_OFFSET UNITYSDK_OFFSET(0xAFD5A00)
#define RPG_CLIENT_REPLAYCUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAFD5A50)

namespace RPG::Client
{
	inline static constexpr unsigned int ReplayCustomData_TypeDefinitionIndex = 56237;

	class ReplayCustomData : public ::System::Object
	{
	public:
		::System::String* DataVersion; // 0x10
		::System::String* GameCoreDataVersion; // 0x18
		::System::String* ClientVersion; // 0x20
		::System::String* CostTime; // 0x28
		::System::String* SimulateTime; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REPLAYCUSTOMDATA__CTOR_OFFSET))(this);
		}

		::System::String* Method_1_5BF0E61BD5CA40A5()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REPLAYCUSTOMDATA_METHOD_1_5BF0E61BD5CA40A5_OFFSET))(this);
		}
	};
}
