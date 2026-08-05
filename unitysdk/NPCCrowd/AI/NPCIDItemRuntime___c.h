#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/NPCIDItem.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define NPCCROWD_AI_NPCIDITEMRUNTIME___C__ADDITEM_B__4_0_OFFSET UNITYSDK_OFFSET(0x10B39190)
#define NPCCROWD_AI_NPCIDITEMRUNTIME___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10B39140)
#define NPCCROWD_AI_NPCIDITEMRUNTIME___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10B39180)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int NPCIDItemRuntime___c_TypeDefinitionIndex = 51604;

	class NPCIDItemRuntime___c : public ::System::Object
	{
	public:
		static ::NPCCrowd::AI::NPCIDItemRuntime___c** StaticGet___9()
		{
			return (::NPCCrowd::AI::NPCIDItemRuntime___c**)Il2CppClass::FromTypeDefinitionIndex(NPCIDItemRuntime___c_TypeDefinitionIndex)->GetStaticField(0x4C790);
		}
		static ::System::Func_2<::NPCCrowd::AI::NPCIDItem, ::System::Single>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::NPCCrowd::AI::NPCIDItem, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NPCIDItemRuntime___c_TypeDefinitionIndex)->GetStaticField(0x4C798);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCIDITEMRUNTIME___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCIDITEMRUNTIME___C__CTOR_OFFSET))(this);
		}

		::System::Single _AddItem_b__4_0(::NPCCrowd::AI::NPCIDItem i)
		{
			return ((::System::Single(*)(::PVOID, ::NPCCrowd::AI::NPCIDItem))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCIDITEMRUNTIME___C__ADDITEM_B__4_0_OFFSET))(this, i);
		}
	};
}
