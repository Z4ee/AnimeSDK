#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_F2DAD7F45F518868;
class Class_3_FFD0045B4597F294;
namespace System { template <typename T1, typename T2> class Action_2; }

#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF4F41E0)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF4F4220)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___C__UPDATE_B__6_0_OFFSET UNITYSDK_OFFSET(0xF4F4230)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCAvatarSubSystem___c_TypeDefinitionIndex = 49909;

	class NPCAvatarSubSystem___c : public ::System::Object
	{
	public:
		static ::System::Action_2<::Class_3_F2DAD7F45F518868*, ::Class_3_FFD0045B4597F294*>** StaticGet___9__6_0()
		{
			return (::System::Action_2<::Class_3_F2DAD7F45F518868*, ::Class_3_FFD0045B4597F294*>**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x40CF0);
		}
		static ::NPCCrowd::Avatar::NPCAvatarSubSystem___c** StaticGet___9()
		{
			return (::NPCCrowd::Avatar::NPCAvatarSubSystem___c**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x40CF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Void _Update_b__6_0(::Class_3_F2DAD7F45F518868* npcComponent, ::Class_3_FFD0045B4597F294* materialComponent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F2DAD7F45F518868*, ::Class_3_FFD0045B4597F294*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___C__UPDATE_B__6_0_OFFSET))(this, npcComponent, materialComponent);
		}
	};
}
