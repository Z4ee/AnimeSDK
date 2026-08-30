#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5D6335AFD8B663D7_Evaluator.h"

namespace RPG::Client { class MonoValueEvaluateConfigure_FloatEvaluator; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_2_5D6335AFD8B663D7_FLOATEVALUATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16265900)
#define CLASS_2_5D6335AFD8B663D7_FLOATEVALUATOR_GET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x16265BF0)
#define CLASS_2_5D6335AFD8B663D7_FLOATEVALUATOR_GET_MINVALUE_OFFSET UNITYSDK_OFFSET(0x16265C10)
#define CLASS_2_5D6335AFD8B663D7_FLOATEVALUATOR_METHOD_2_090740344CAC81EE_OFFSET UNITYSDK_OFFSET(0x16264D70)
#define CLASS_2_5D6335AFD8B663D7_FLOATEVALUATOR_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x16263BF0)
#define CLASS_2_5D6335AFD8B663D7_FLOATEVALUATOR_METHOD_2_7F0B39539B3B3B89_OFFSET UNITYSDK_OFFSET(0x16263B90)
#define CLASS_2_5D6335AFD8B663D7_FLOATEVALUATOR_METHOD_2_816ED7FC0A7FCCD1_OFFSET UNITYSDK_OFFSET(0x16265970)
#define CLASS_2_5D6335AFD8B663D7_FLOATEVALUATOR_METHOD_2_DFEDE635B7545059_OFFSET UNITYSDK_OFFSET(0x16264E10)
#define CLASS_2_5D6335AFD8B663D7_FLOATEVALUATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x162658E0)

inline static constexpr unsigned int Class_2_5D6335AFD8B663D7_FloatEvaluator_TypeDefinitionIndex = 57589;

class Class_2_5D6335AFD8B663D7_FloatEvaluator : public ::Class_2_5D6335AFD8B663D7_Evaluator
{
public:
	// static const ::System::Int32 MAX_ITERATION_COUNT = 0x64; // 0x0
	::System::String* _BindProperty; // 0x20
	::RPG::GameCore::GameEntity* _BindEntity; // 0x28
	::RPG::Client::MonoValueEvaluateConfigure_FloatEvaluator* _Configure; // 0x30

	::System::Void _ctor(::RPG::Client::MonoValueEvaluateConfigure_FloatEvaluator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoValueEvaluateConfigure_FloatEvaluator*))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7_FLOATEVALUATOR__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7_FLOATEVALUATOR_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_7F0B39539B3B3B89(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7_FLOATEVALUATOR_METHOD_2_7F0B39539B3B3B89_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7_FLOATEVALUATOR_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_816ED7FC0A7FCCD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7_FLOATEVALUATOR_METHOD_2_816ED7FC0A7FCCD1_OFFSET))(this);
	}

	::System::Single get_MaxValue()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7_FLOATEVALUATOR_GET_MAXVALUE_OFFSET))(this);
	}

	::System::Single get_MinValue()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7_FLOATEVALUATOR_GET_MINVALUE_OFFSET))(this);
	}

	static ::System::Single Method_2_090740344CAC81EE(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7_FLOATEVALUATOR_METHOD_2_090740344CAC81EE_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_2_DFEDE635B7545059(::UnityEngine::AnimationCurve* a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5D6335AFD8B663D7_FLOATEVALUATOR_METHOD_2_DFEDE635B7545059_OFFSET))(a1, a2);
	}
};
