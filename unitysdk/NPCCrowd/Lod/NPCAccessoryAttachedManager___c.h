#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_F2DAD7F45F518868;
namespace System { template <typename T> class Action_1; }

#define NPCCROWD_LOD_NPCACCESSORYATTACHEDMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1150B610)
#define NPCCROWD_LOD_NPCACCESSORYATTACHEDMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1150B650)
#define NPCCROWD_LOD_NPCACCESSORYATTACHEDMANAGER___C__UPDATE_B__2_0_OFFSET UNITYSDK_OFFSET(0x1150B660)

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCAccessoryAttachedManager___c_TypeDefinitionIndex = 56600;

	class NPCAccessoryAttachedManager___c : public ::System::Object
	{
	public:
		static ::NPCCrowd::Lod::NPCAccessoryAttachedManager___c** StaticGet___9()
		{
			return (::NPCCrowd::Lod::NPCAccessoryAttachedManager___c**)Il2CppClass::FromTypeDefinitionIndex(NPCAccessoryAttachedManager___c_TypeDefinitionIndex)->GetStaticField(0x44CB0);
		}
		static ::System::Action_1<::Class_3_F2DAD7F45F518868*>** StaticGet___9__2_0()
		{
			return (::System::Action_1<::Class_3_F2DAD7F45F518868*>**)Il2CppClass::FromTypeDefinitionIndex(NPCAccessoryAttachedManager___c_TypeDefinitionIndex)->GetStaticField(0x44CB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCACCESSORYATTACHEDMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCACCESSORYATTACHEDMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Void _Update_b__2_0(::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCACCESSORYATTACHEDMANAGER___C__UPDATE_B__2_0_OFFSET))(this, npcComp);
		}
	};
}
