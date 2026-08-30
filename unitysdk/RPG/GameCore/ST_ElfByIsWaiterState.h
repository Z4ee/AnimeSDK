#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElfWaiterState.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ST_ELFBYISWAITERSTATE_METHOD_4_0F3778604904073B_OFFSET UNITYSDK_OFFSET(0x1D4C7DC0)
#define RPG_GAMECORE_ST_ELFBYISWAITERSTATE_METHOD_4_2C61F44F427D0A8D_OFFSET UNITYSDK_OFFSET(0x1D4C7BD0)
#define RPG_GAMECORE_ST_ELFBYISWAITERSTATE_METHOD_4_7F3F10AFFD20B294_OFFSET UNITYSDK_OFFSET(0x1D4C7DF0)
#define RPG_GAMECORE_ST_ELFBYISWAITERSTATE_METHOD_4_D24C3C4AB5A0C4D8_OFFSET UNITYSDK_OFFSET(0x1D4C7C10)
#define RPG_GAMECORE_ST_ELFBYISWAITERSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4C7C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ElfByIsWaiterState_TypeDefinitionIndex = 21300;

	class ST_ElfByIsWaiterState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ElfWaiterState State; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_ELFBYISWAITERSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2C61F44F427D0A8D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ElfByIsWaiterState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ElfByIsWaiterState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_ELFBYISWAITERSTATE_METHOD_4_2C61F44F427D0A8D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D24C3C4AB5A0C4D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ElfByIsWaiterState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ElfByIsWaiterState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_ELFBYISWAITERSTATE_METHOD_4_D24C3C4AB5A0C4D8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0F3778604904073B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ElfByIsWaiterState*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ElfByIsWaiterState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_ELFBYISWAITERSTATE_METHOD_4_0F3778604904073B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7F3F10AFFD20B294(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ElfByIsWaiterState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ElfByIsWaiterState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_ELFBYISWAITERSTATE_METHOD_4_7F3F10AFFD20B294_OFFSET))(a1, a2);
		}
	};
}
