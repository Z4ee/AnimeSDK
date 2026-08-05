#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_F2DAD7F45F518868;
namespace System { template <typename T> class Action_1; }

#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF7764D0)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF776510)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___C__REALPOSTLATEUPDATE_B__25_0_OFFSET UNITYSDK_OFFSET(0xF776580)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___C__UPDATERENDERERVISIBILITYBATCH_B__26_0_OFFSET UNITYSDK_OFFSET(0xF776B20)
#define NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___C__UPDATE_B__20_0_OFFSET UNITYSDK_OFFSET(0xF776520)

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdLodSubSystem___c_TypeDefinitionIndex = 58304;

	class NPCCrowdLodSubSystem___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_3_F2DAD7F45F518868*>** StaticGet___9__26_0()
		{
			return (::System::Action_1<::Class_3_F2DAD7F45F518868*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x33BE0);
		}
		static ::NPCCrowd::Lod::NPCCrowdLodSubSystem___c** StaticGet___9()
		{
			return (::NPCCrowd::Lod::NPCCrowdLodSubSystem___c**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x33BE8);
		}
		static ::System::Action_1<::Class_3_F2DAD7F45F518868*>** StaticGet___9__20_0()
		{
			return (::System::Action_1<::Class_3_F2DAD7F45F518868*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x33BF0);
		}
		static ::System::Action_1<::Class_3_F2DAD7F45F518868*>** StaticGet___9__25_0()
		{
			return (::System::Action_1<::Class_3_F2DAD7F45F518868*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x33BF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Void _Update_b__20_0(::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___C__UPDATE_B__20_0_OFFSET))(this, npcComp);
		}

		::System::Void _RealPostLateUpdate_b__25_0(::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___C__REALPOSTLATEUPDATE_B__25_0_OFFSET))(this, npcComp);
		}

		::System::Void _UpdateRendererVisibilityBatch_b__26_0(::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODSUBSYSTEM___C__UPDATERENDERERVISIBILITYBATCH_B__26_0_OFFSET))(this, npcComp);
		}
	};
}
