#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVCREATEGROUPENTITYV2_METHOD_3_B5DB48C66F17C04B_OFFSET UNITYSDK_OFFSET(0x1941FB00)
#define RPG_GAMECORE_ADVCREATEGROUPENTITYV2_METHOD_3_E32A7CEC7A047B8A_OFFSET UNITYSDK_OFFSET(0x1941FB80)
#define RPG_GAMECORE_ADVCREATEGROUPENTITYV2__CTOR_OFFSET UNITYSDK_OFFSET(0x1941FB50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvCreateGroupEntityV2_TypeDefinitionIndex = 19147;

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

		static ::System::Void Method_3_B5DB48C66F17C04B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvCreateGroupEntityV2*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvCreateGroupEntityV2*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCREATEGROUPENTITYV2_METHOD_3_B5DB48C66F17C04B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E32A7CEC7A047B8A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvCreateGroupEntityV2* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvCreateGroupEntityV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCREATEGROUPENTITYV2_METHOD_3_E32A7CEC7A047B8A_OFFSET))(a1, a2);
		}
	};
}
