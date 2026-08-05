#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_F2DAD7F45F518868;
namespace System { template <typename T> class Action_1; }

#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13DF5700)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13DF5740)
#define NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM___C__PREPARERENDERERVISIBILITYQUERY_B__18_0_OFFSET UNITYSDK_OFFSET(0x13DF5750)

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdVisibleSubSystem___c_TypeDefinitionIndex = 47201;

	class NPCCrowdVisibleSubSystem___c : public ::System::Object
	{
	public:
		static ::NPCCrowd::Lod::NPCCrowdVisibleSubSystem___c** StaticGet___9()
		{
			return (::NPCCrowd::Lod::NPCCrowdVisibleSubSystem___c**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdVisibleSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x41060);
		}
		static ::System::Action_1<::Class_3_F2DAD7F45F518868*>** StaticGet___9__18_0()
		{
			return (::System::Action_1<::Class_3_F2DAD7F45F518868*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdVisibleSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x41068);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Void _PrepareRendererVisibilityQuery_b__18_0(::Class_3_F2DAD7F45F518868* npcComp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDVISIBLESUBSYSTEM___C__PREPARERENDERERVISIBILITYQUERY_B__18_0_OFFSET))(this, npcComp);
		}
	};
}
