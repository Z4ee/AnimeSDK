#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_F2DAD7F45F518868;
namespace System { template <typename T> class Action_1; }

#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD456920)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD456960)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___C__POSTLATEUPDATE_B__20_0_OFFSET UNITYSDK_OFFSET(0xD4569D0)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___C__UPDATERENDERERVISIBILITYBATCH_B__21_0_OFFSET UNITYSDK_OFFSET(0xD456F60)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___C__UPDATE_B__17_0_OFFSET UNITYSDK_OFFSET(0xD456970)

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdLodSubSystem___c_TypeDefinitionIndex = 70397;

	class NPCCrowdLodSubSystem___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_3_F2DAD7F45F518868*>** StaticGet___9__20_0()
		{
			return (::System::Action_1<::Class_3_F2DAD7F45F518868*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x2F7B0);
		}
		static ::System::Action_1<::Class_3_F2DAD7F45F518868*>** StaticGet___9__21_0()
		{
			return (::System::Action_1<::Class_3_F2DAD7F45F518868*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x2F7B8);
		}
		static ::System::Action_1<::Class_3_F2DAD7F45F518868*>** StaticGet___9__17_0()
		{
			return (::System::Action_1<::Class_3_F2DAD7F45F518868*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x2F7C0);
		}
		static ::NPCCrowd::Lod::NPCCrowdLodSubSystem___c** StaticGet___9()
		{
			return (::NPCCrowd::Lod::NPCCrowdLodSubSystem___c**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x2F7C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Void _Update_b__17_0(::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___C__UPDATE_B__17_0_OFFSET))(this, npcComp);
		}

		::System::Void _PostLateUpdate_b__20_0(::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___C__POSTLATEUPDATE_B__20_0_OFFSET))(this, npcComp);
		}

		::System::Void _UpdateRendererVisibilityBatch_b__21_0(::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___C__UPDATERENDERERVISIBILITYBATCH_B__21_0_OFFSET))(this, npcComp);
		}
	};
}
