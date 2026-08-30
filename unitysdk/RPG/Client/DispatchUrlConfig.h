#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_DISPATCHURLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8E26E0)

namespace RPG::Client
{
	inline static constexpr unsigned int DispatchUrlConfig_TypeDefinitionIndex = 60157;

	class DispatchUrlConfig : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* CnLiveUrlList; // 0x10
		::Il2CppArray<::System::String*>* CnBetaUrlList; // 0x18
		::Il2CppArray<::System::String*>* OverSeaBetaUrlList; // 0x20
		::Il2CppArray<::System::String*>* OverSeaLiveUrlList; // 0x28
		::Il2CppArray<::System::String*>* CnTestUrlList; // 0x30
		::Il2CppArray<::System::String*>* OverSeaTestUrlList; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DISPATCHURLCONFIG__CTOR_OFFSET))(this);
		}
	};
}
