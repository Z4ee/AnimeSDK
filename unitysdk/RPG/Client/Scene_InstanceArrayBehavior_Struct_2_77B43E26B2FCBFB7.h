#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_STRUCT_2_77B43E26B2FCBFB7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3B732D0)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_STRUCT_2_77B43E26B2FCBFB7_EQUALS_OFFSET UNITYSDK_OFFSET(0x3B73260)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_STRUCT_2_77B43E26B2FCBFB7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3B732E0)
#define RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_STRUCT_2_77B43E26B2FCBFB7__CTOR_OFFSET UNITYSDK_OFFSET(0x18A0)

namespace RPG::Client
{
	inline static constexpr unsigned int Scene_InstanceArrayBehavior_Struct_2_77B43E26B2FCBFB7_TypeDefinitionIndex = 70808;

	struct alignas(4) Scene_InstanceArrayBehavior_Struct_2_77B43E26B2FCBFB7
	{
		::System::Int32 EANDBJKBOHB; // 0x10
		::System::Int32 GIDLGKABJJM; // 0x14
		::System::Int32 PDHOJECNGIC; // 0x18

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_STRUCT_2_77B43E26B2FCBFB7__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Equals(::RPG::Client::Scene_InstanceArrayBehavior_Struct_2_77B43E26B2FCBFB7 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Scene_InstanceArrayBehavior_Struct_2_77B43E26B2FCBFB7))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_STRUCT_2_77B43E26B2FCBFB7_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_STRUCT_2_77B43E26B2FCBFB7_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYBEHAVIOR_STRUCT_2_77B43E26B2FCBFB7_GETHASHCODE_OFFSET))(this);
		}
	};
}
