#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { template <typename T> class Comparison_1; }

#define NPCCROWD_ANIMATION_ANIMATOREVENTPATTERNWRAP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF4F31C0)
#define NPCCROWD_ANIMATION_ANIMATOREVENTPATTERNWRAP___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF4F3200)
#define NPCCROWD_ANIMATION_ANIMATOREVENTPATTERNWRAP___C___CTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0xF4F3210)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimatorEventPatternWrap___c_TypeDefinitionIndex = 42809;

	class AnimatorEventPatternWrap___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::MoleMole::Config::AnimatorEvent*>** StaticGet___9__4_0()
		{
			return (::System::Comparison_1<::MoleMole::Config::AnimatorEvent*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorEventPatternWrap___c_TypeDefinitionIndex)->GetStaticField(0x40CD0);
		}
		static ::NPCCrowd::Animation::AnimatorEventPatternWrap___c** StaticGet___9()
		{
			return (::NPCCrowd::Animation::AnimatorEventPatternWrap___c**)Il2CppClass::FromTypeDefinitionIndex(AnimatorEventPatternWrap___c_TypeDefinitionIndex)->GetStaticField(0x40CD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATOREVENTPATTERNWRAP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATOREVENTPATTERNWRAP___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __ctor_b__4_0(::MoleMole::Config::AnimatorEvent* a, ::MoleMole::Config::AnimatorEvent* b)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Config::AnimatorEvent*, ::MoleMole::Config::AnimatorEvent*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATOREVENTPATTERNWRAP___C___CTOR_B__4_0_OFFSET))(this, a, b);
		}
	};
}
