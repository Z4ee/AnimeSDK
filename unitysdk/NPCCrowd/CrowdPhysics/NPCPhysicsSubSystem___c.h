#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_F2DAD7F45F518868;
namespace System { template <typename T> class Action_1; }

#define NPCCROWD_CROWDPHYSICS_NPCPHYSICSSUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFB58D60)
#define NPCCROWD_CROWDPHYSICS_NPCPHYSICSSUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFB58DA0)
#define NPCCROWD_CROWDPHYSICS_NPCPHYSICSSUBSYSTEM___C__UPDATE_B__4_0_OFFSET UNITYSDK_OFFSET(0xFB58DB0)

namespace NPCCrowd::CrowdPhysics
{
	inline static constexpr unsigned int NPCPhysicsSubSystem___c_TypeDefinitionIndex = 80921;

	class NPCPhysicsSubSystem___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_3_F2DAD7F45F518868*>** StaticGet___9__4_0()
		{
			return (::System::Action_1<::Class_3_F2DAD7F45F518868*>**)Il2CppClass::FromTypeDefinitionIndex(NPCPhysicsSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x38750);
		}
		static ::NPCCrowd::CrowdPhysics::NPCPhysicsSubSystem___c** StaticGet___9()
		{
			return (::NPCCrowd::CrowdPhysics::NPCPhysicsSubSystem___c**)Il2CppClass::FromTypeDefinitionIndex(NPCPhysicsSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x38758);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_CROWDPHYSICS_NPCPHYSICSSUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_CROWDPHYSICS_NPCPHYSICSSUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Void _Update_b__4_0(::Class_3_F2DAD7F45F518868* npcComponent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_CROWDPHYSICS_NPCPHYSICSSUBSYSTEM___C__UPDATE_B__4_0_OFFSET))(this, npcComponent);
		}
	};
}
