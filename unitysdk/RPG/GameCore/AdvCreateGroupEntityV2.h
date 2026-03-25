#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVCREATEGROUPENTITYV2_METHOD_3_360ED04ABD9DE24A_OFFSET UNITYSDK_OFFSET(0x16F2A150)
#define RPG_GAMECORE_ADVCREATEGROUPENTITYV2_METHOD_3_9B3B57FAF5B70D31_OFFSET UNITYSDK_OFFSET(0x16F2A1D0)
#define RPG_GAMECORE_ADVCREATEGROUPENTITYV2__CTOR_OFFSET UNITYSDK_OFFSET(0x16F2A1A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvCreateGroupEntityV2_TypeDefinitionIndex = 18571;

	class AdvCreateGroupEntityV2 : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsOverrideArtModelOffset; // 0x18
		::RPG::MVector3 OverrideArtModelOffset; // 0x1C
		::Il2CppArray<::System::UInt32>* InstanceIDList; // 0x28
		::System::Boolean SkipCreated; // 0x30
		::System::UInt32 GroupID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCREATEGROUPENTITYV2__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_360ED04ABD9DE24A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvCreateGroupEntityV2*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvCreateGroupEntityV2*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCREATEGROUPENTITYV2_METHOD_3_360ED04ABD9DE24A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9B3B57FAF5B70D31(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvCreateGroupEntityV2* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvCreateGroupEntityV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCREATEGROUPENTITYV2_METHOD_3_9B3B57FAF5B70D31_OFFSET))(a1, a2);
		}
	};
}
