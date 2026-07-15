#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_STARTFARMPHANTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17B620D0)

namespace RPG::Client
{
	inline static constexpr unsigned int StartFarmPhantomData_TypeDefinitionIndex = 57938;

	class StartFarmPhantomData : public ::System::Object
	{
	public:
		::System::UInt32 SelectWorldLevel; // 0x10
		::System::UInt32 FarmElementId; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARTFARMPHANTOMDATA__CTOR_OFFSET))(this);
		}
	};
}
