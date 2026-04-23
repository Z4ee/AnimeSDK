#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_AVDMONITORPLAYERRUN_METHOD_3_3DF68FDBF17EC5BD_OFFSET UNITYSDK_OFFSET(0x186E29F0)
#define RPG_GAMECORE_AVDMONITORPLAYERRUN_METHOD_3_F47E82E3D6994403_OFFSET UNITYSDK_OFFSET(0x186E2A70)
#define RPG_GAMECORE_AVDMONITORPLAYERRUN__CTOR_OFFSET UNITYSDK_OFFSET(0x186E2A40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvdMonitorPlayerRun_TypeDefinitionIndex = 20016;

	class AvdMonitorPlayerRun : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single Duration; // 0x18
		::Il2CppArray<::RPG::GameCore::CharacterMotionFlag>* MotionFlags; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSatisfy; // 0x28
		::System::Boolean IsLoop; // 0x30
		::System::Boolean EnableFakeAvatar; // 0x31
		::RPG::GameCore::DynamicString* StopEvent; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVDMONITORPLAYERRUN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3DF68FDBF17EC5BD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AvdMonitorPlayerRun*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvdMonitorPlayerRun*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVDMONITORPLAYERRUN_METHOD_3_3DF68FDBF17EC5BD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F47E82E3D6994403(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AvdMonitorPlayerRun* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvdMonitorPlayerRun*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVDMONITORPLAYERRUN_METHOD_3_F47E82E3D6994403_OFFSET))(a1, a2);
		}
	};
}
