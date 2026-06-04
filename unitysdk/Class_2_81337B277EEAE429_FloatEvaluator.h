#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_81337B277EEAE429_Evaluator.h"

namespace RPG::Client { class MonoValueEvaluateConfigure_FloatEvaluator; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_2_81337B277EEAE429_FLOATEVALUATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x142D1690)
#define CLASS_2_81337B277EEAE429_FLOATEVALUATOR_GET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x142D1910)
#define CLASS_2_81337B277EEAE429_FLOATEVALUATOR_GET_MINVALUE_OFFSET UNITYSDK_OFFSET(0x142D1930)
#define CLASS_2_81337B277EEAE429_FLOATEVALUATOR_METHOD_2_03BFDB1C3240A55A_OFFSET UNITYSDK_OFFSET(0x142D1700)
#define CLASS_2_81337B277EEAE429_FLOATEVALUATOR_METHOD_2_090740344CAC81EE_OFFSET UNITYSDK_OFFSET(0x142D0AB0)
#define CLASS_2_81337B277EEAE429_FLOATEVALUATOR_METHOD_2_30EDFB1343978210_OFFSET UNITYSDK_OFFSET(0x142D0B50)
#define CLASS_2_81337B277EEAE429_FLOATEVALUATOR_METHOD_2_7F0B39539B3B3B89_OFFSET UNITYSDK_OFFSET(0x142CF8D0)
#define CLASS_2_81337B277EEAE429_FLOATEVALUATOR_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x142CF930)
#define CLASS_2_81337B277EEAE429_FLOATEVALUATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x142D1670)
#define CLASS_2_81337B277EEAE429_FLOATEVALUATOR___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x142D1950)

inline static constexpr unsigned int Class_2_81337B277EEAE429_FloatEvaluator_TypeDefinitionIndex = 53649;

class Class_2_81337B277EEAE429_FloatEvaluator : public ::Class_2_81337B277EEAE429_Evaluator
{
public:
	// static const ::System::Int32 MAX_ITERATION_COUNT = 0x64; // 0x0
	::RPG::Client::MonoValueEvaluateConfigure_FloatEvaluator* _Configure; // 0x20
	::System::String* _BindProperty; // 0x28
	::RPG::GameCore::GameEntity* _BindEntity; // 0x30

	::System::Void _ctor(::RPG::Client::MonoValueEvaluateConfigure_FloatEvaluator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoValueEvaluateConfigure_FloatEvaluator*))((::PBYTE)hIl2Cpp + CLASS_2_81337B277EEAE429_FLOATEVALUATOR__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81337B277EEAE429_FLOATEVALUATOR_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_7F0B39539B3B3B89(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_81337B277EEAE429_FLOATEVALUATOR_METHOD_2_7F0B39539B3B3B89_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81337B277EEAE429_FLOATEVALUATOR_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_03BFDB1C3240A55A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81337B277EEAE429_FLOATEVALUATOR_METHOD_2_03BFDB1C3240A55A_OFFSET))(this);
	}

	::System::Single get_MaxValue()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81337B277EEAE429_FLOATEVALUATOR_GET_MAXVALUE_OFFSET))(this);
	}

	::System::Single get_MinValue()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81337B277EEAE429_FLOATEVALUATOR_GET_MINVALUE_OFFSET))(this);
	}

	static ::System::Single Method_2_090740344CAC81EE(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_81337B277EEAE429_FLOATEVALUATOR_METHOD_2_090740344CAC81EE_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_2_30EDFB1343978210(::UnityEngine::AnimationCurve* a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_81337B277EEAE429_FLOATEVALUATOR_METHOD_2_30EDFB1343978210_OFFSET))(a1, a2);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81337B277EEAE429_FLOATEVALUATOR___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
