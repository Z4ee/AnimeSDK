#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElfWaiterState.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ST_ELFBYISWAITERSTATE_METHOD_4_290D408CD374DBDE_OFFSET UNITYSDK_OFFSET(0x19C17140)
#define RPG_GAMECORE_ST_ELFBYISWAITERSTATE_METHOD_4_7079C2EC98FFE86E_OFFSET UNITYSDK_OFFSET(0x19C16EC0)
#define RPG_GAMECORE_ST_ELFBYISWAITERSTATE_METHOD_4_AC31AB97B13CFC67_OFFSET UNITYSDK_OFFSET(0x19C171C0)
#define RPG_GAMECORE_ST_ELFBYISWAITERSTATE_METHOD_4_D24C3C4AB5A0C4D8_OFFSET UNITYSDK_OFFSET(0x19C16F90)
#define RPG_GAMECORE_ST_ELFBYISWAITERSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C16F40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ElfByIsWaiterState_TypeDefinitionIndex = 20350;

	class ST_ElfByIsWaiterState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ElfWaiterState State; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_ELFBYISWAITERSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7079C2EC98FFE86E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ElfByIsWaiterState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ElfByIsWaiterState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_ELFBYISWAITERSTATE_METHOD_4_7079C2EC98FFE86E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D24C3C4AB5A0C4D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ElfByIsWaiterState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ElfByIsWaiterState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_ELFBYISWAITERSTATE_METHOD_4_D24C3C4AB5A0C4D8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_290D408CD374DBDE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ElfByIsWaiterState*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ElfByIsWaiterState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_ELFBYISWAITERSTATE_METHOD_4_290D408CD374DBDE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AC31AB97B13CFC67(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ElfByIsWaiterState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ElfByIsWaiterState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_ELFBYISWAITERSTATE_METHOD_4_AC31AB97B13CFC67_OFFSET))(a1, a2);
		}
	};
}
