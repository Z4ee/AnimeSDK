#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EffectMutexType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_EFFECTMUTEXCONFIGDATA_METHOD_2_1B76CF12BE3EEDF1_OFFSET UNITYSDK_OFFSET(0x196D5910)
#define RPG_GAMECORE_EFFECTMUTEXCONFIGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x196D5A60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EffectMutexConfigData_TypeDefinitionIndex = 15666;

	class EffectMutexConfigData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single MinMutexTime; // 0x10
		::RPG::GameCore::EffectMutexType MinMutexType; // 0x14
		::System::UInt32 MaxMutexCount; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTMUTEXCONFIGDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1B76CF12BE3EEDF1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EffectMutexConfigData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EffectMutexConfigData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTMUTEXCONFIGDATA_METHOD_2_1B76CF12BE3EEDF1_OFFSET))(a1, a2);
		}
	};
}
