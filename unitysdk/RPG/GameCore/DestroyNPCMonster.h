#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DESTROYNPCMONSTER_METHOD_3_70393269B284653D_OFFSET UNITYSDK_OFFSET(0x1D8176B0)
#define RPG_GAMECORE_DESTROYNPCMONSTER_METHOD_3_7CF4554916DBD9A0_OFFSET UNITYSDK_OFFSET(0x1D8176F0)
#define RPG_GAMECORE_DESTROYNPCMONSTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8176E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DestroyNPCMonster_TypeDefinitionIndex = 21702;

	class DestroyNPCMonster : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GroupID; // 0x18
		::Il2CppArray<::System::UInt32>* GroupMonsterIDs; // 0x20
		::Il2CppArray<::System::String*>* UniqueNames; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYNPCMONSTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_70393269B284653D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DestroyNPCMonster*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DestroyNPCMonster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYNPCMONSTER_METHOD_3_70393269B284653D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7CF4554916DBD9A0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DestroyNPCMonster* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DestroyNPCMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYNPCMONSTER_METHOD_3_7CF4554916DBD9A0_OFFSET))(a1, a2);
		}
	};
}
