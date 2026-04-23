#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DESTROYNPCMONSTER_METHOD_3_4B150DAF6771236F_OFFSET UNITYSDK_OFFSET(0x1885B700)
#define RPG_GAMECORE_DESTROYNPCMONSTER_METHOD_3_55AE5D411A652FE6_OFFSET UNITYSDK_OFFSET(0x1885B780)
#define RPG_GAMECORE_DESTROYNPCMONSTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1885B750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DestroyNPCMonster_TypeDefinitionIndex = 20804;

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

		static ::System::Void Method_3_4B150DAF6771236F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DestroyNPCMonster*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DestroyNPCMonster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYNPCMONSTER_METHOD_3_4B150DAF6771236F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_55AE5D411A652FE6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DestroyNPCMonster* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DestroyNPCMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYNPCMONSTER_METHOD_3_55AE5D411A652FE6_OFFSET))(a1, a2);
		}
	};
}
