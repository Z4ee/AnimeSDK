#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Accessories/ENPCAccessoryItemType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCE58EB0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCE58EF0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS___C__GET_FORCESHOWEDACCESSORYITEMTYPES_B__28_0_OFFSET UNITYSDK_OFFSET(0xCE58F00)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS___C__GET_FORCESHOWEDACCESSORYITEMTYPES_B__28_1_OFFSET UNITYSDK_OFFSET(0xCE58F70)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryUtils___c_TypeDefinitionIndex = 46217;

	class NPCAccessoryUtils___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::String*, ::NPCCrowd::Accessories::ENPCAccessoryItemType>** StaticGet___9__28_0()
		{
			return (::System::Func_2<::System::String*, ::NPCCrowd::Accessories::ENPCAccessoryItemType>**)Il2CppClass::FromTypeDefinitionIndex(NPCAccessoryUtils___c_TypeDefinitionIndex)->GetStaticField(0x3D1F0);
		}
		static ::NPCCrowd::Accessories::NPCAccessoryUtils___c** StaticGet___9()
		{
			return (::NPCCrowd::Accessories::NPCAccessoryUtils___c**)Il2CppClass::FromTypeDefinitionIndex(NPCAccessoryUtils___c_TypeDefinitionIndex)->GetStaticField(0x3D1F8);
		}
		static ::System::Func_2<::NPCCrowd::Accessories::ENPCAccessoryItemType, ::System::Boolean>** StaticGet___9__28_1()
		{
			return (::System::Func_2<::NPCCrowd::Accessories::ENPCAccessoryItemType, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NPCAccessoryUtils___c_TypeDefinitionIndex)->GetStaticField(0x3D200);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS___C__CTOR_OFFSET))(this);
		}

		::NPCCrowd::Accessories::ENPCAccessoryItemType _get_ForceShowedAccessoryItemTypes_b__28_0(::System::String* str)
		{
			return ((::NPCCrowd::Accessories::ENPCAccessoryItemType(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS___C__GET_FORCESHOWEDACCESSORYITEMTYPES_B__28_0_OFFSET))(this, str);
		}

		::System::Boolean _get_ForceShowedAccessoryItemTypes_b__28_1(::NPCCrowd::Accessories::ENPCAccessoryItemType t)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Accessories::ENPCAccessoryItemType))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS___C__GET_FORCESHOWEDACCESSORYITEMTYPES_B__28_1_OFFSET))(this, t);
		}
	};
}
