#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Accessories/ENPCAccessoryItemType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD5C53E0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD5C5420)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS___C__GET_FORCESHOWEDACCESSORYITEMTYPES_B__34_0_OFFSET UNITYSDK_OFFSET(0xD5C5430)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS___C__GET_FORCESHOWEDACCESSORYITEMTYPES_B__34_1_OFFSET UNITYSDK_OFFSET(0xD5C54A0)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryUtils___c_TypeDefinitionIndex = 64550;

	class NPCAccessoryUtils___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::String*, ::NPCCrowd::Accessories::ENPCAccessoryItemType>** StaticGet___9__34_0()
		{
			return (::System::Func_2<::System::String*, ::NPCCrowd::Accessories::ENPCAccessoryItemType>**)Il2CppClass::FromTypeDefinitionIndex(NPCAccessoryUtils___c_TypeDefinitionIndex)->GetStaticField(0x3F930);
		}
		static ::System::Func_2<::NPCCrowd::Accessories::ENPCAccessoryItemType, ::System::Boolean>** StaticGet___9__34_1()
		{
			return (::System::Func_2<::NPCCrowd::Accessories::ENPCAccessoryItemType, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NPCAccessoryUtils___c_TypeDefinitionIndex)->GetStaticField(0x3F938);
		}
		static ::NPCCrowd::Accessories::NPCAccessoryUtils___c** StaticGet___9()
		{
			return (::NPCCrowd::Accessories::NPCAccessoryUtils___c**)Il2CppClass::FromTypeDefinitionIndex(NPCAccessoryUtils___c_TypeDefinitionIndex)->GetStaticField(0x3F940);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS___C__CTOR_OFFSET))(this);
		}

		::NPCCrowd::Accessories::ENPCAccessoryItemType _get_ForceShowedAccessoryItemTypes_b__34_0(::System::String* str)
		{
			return ((::NPCCrowd::Accessories::ENPCAccessoryItemType(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS___C__GET_FORCESHOWEDACCESSORYITEMTYPES_B__34_0_OFFSET))(this, str);
		}

		::System::Boolean _get_ForceShowedAccessoryItemTypes_b__34_1(::NPCCrowd::Accessories::ENPCAccessoryItemType t)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Accessories::ENPCAccessoryItemType))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYUTILS___C__GET_FORCESHOWEDACCESSORYITEMTYPES_B__34_1_OFFSET))(this, t);
		}
	};
}
