#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::Animation { class GPUIBone; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF3F9F90)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF3F9FD0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA___C___CTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0xF3F9FE0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA___C___CTOR_B__43_1_OFFSET UNITYSDK_OFFSET(0xF3FA000)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCrowdAnimationInstancerRuntimeData___c_TypeDefinitionIndex = 48000;

	class NPCCrowdAnimationInstancerRuntimeData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::NPCCrowd::Animation::GPUIBone*, ::System::Int32>** StaticGet___9__43_1()
		{
			return (::System::Func_2<::NPCCrowd::Animation::GPUIBone*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdAnimationInstancerRuntimeData___c_TypeDefinitionIndex)->GetStaticField(0x2F6A0);
		}
		static ::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData___c** StaticGet___9()
		{
			return (::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData___c**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdAnimationInstancerRuntimeData___c_TypeDefinitionIndex)->GetStaticField(0x2F6A8);
		}
		static ::System::Func_2<::NPCCrowd::Animation::GPUIBone*, ::System::String*>** StaticGet___9__43_0()
		{
			return (::System::Func_2<::NPCCrowd::Animation::GPUIBone*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdAnimationInstancerRuntimeData___c_TypeDefinitionIndex)->GetStaticField(0x2F6B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA___C__CTOR_OFFSET))(this);
		}

		::System::String* __ctor_b__43_0(::NPCCrowd::Animation::GPUIBone* t)
		{
			return ((::System::String*(*)(::PVOID, ::NPCCrowd::Animation::GPUIBone*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA___C___CTOR_B__43_0_OFFSET))(this, t);
		}

		::System::Int32 __ctor_b__43_1(::NPCCrowd::Animation::GPUIBone* t)
		{
			return ((::System::Int32(*)(::PVOID, ::NPCCrowd::Animation::GPUIBone*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONINSTANCERRUNTIMEDATA___C___CTOR_B__43_1_OFFSET))(this, t);
		}
	};
}
