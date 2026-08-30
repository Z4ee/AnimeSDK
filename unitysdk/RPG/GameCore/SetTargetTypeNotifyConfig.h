#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETTARGETTYPENOTIFYCONFIG_METHOD_2_F18C2B5E0F736C1D_OFFSET UNITYSDK_OFFSET(0x1E0920A0)
#define RPG_GAMECORE_SETTARGETTYPENOTIFYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E092160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTargetTypeNotifyConfig_TypeDefinitionIndex = 16771;

	class SetTargetTypeNotifyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 Hp; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETTYPENOTIFYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F18C2B5E0F736C1D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTargetTypeNotifyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTargetTypeNotifyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETTYPENOTIFYCONFIG_METHOD_2_F18C2B5E0F736C1D_OFFSET))(a1, a2);
		}
	};
}
