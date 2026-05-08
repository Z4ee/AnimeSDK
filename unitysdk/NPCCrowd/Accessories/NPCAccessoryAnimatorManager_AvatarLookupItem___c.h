#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_AVATARLOOKUPITEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD0C4CF0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_AVATARLOOKUPITEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD0C4D30)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_AVATARLOOKUPITEM___C__GETROOTINDEX_B__8_0_OFFSET UNITYSDK_OFFSET(0xD0C4D40)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryAnimatorManager_AvatarLookupItem___c_TypeDefinitionIndex = 75925;

	class NPCAccessoryAnimatorManager_AvatarLookupItem___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NPCAccessoryAnimatorManager_AvatarLookupItem___c_TypeDefinitionIndex)->GetStaticField(0x35960);
		}
		static ::NPCCrowd::Accessories::NPCAccessoryAnimatorManager_AvatarLookupItem___c** StaticGet___9()
		{
			return (::NPCCrowd::Accessories::NPCAccessoryAnimatorManager_AvatarLookupItem___c**)Il2CppClass::FromTypeDefinitionIndex(NPCAccessoryAnimatorManager_AvatarLookupItem___c_TypeDefinitionIndex)->GetStaticField(0x35968);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_AVATARLOOKUPITEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_AVATARLOOKUPITEM___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRootIndex_b__8_0(::System::Int32 item)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYANIMATORMANAGER_AVATARLOOKUPITEM___C__GETROOTINDEX_B__8_0_OFFSET))(this, item);
		}
	};
}
