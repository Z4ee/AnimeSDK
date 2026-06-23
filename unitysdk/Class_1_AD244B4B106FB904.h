#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityRunState; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_AD244B4B106FB904_METHOD_1_40C1B0BD346CCBBA_OFFSET UNITYSDK_OFFSET(0x154E9FF0)
#define CLASS_1_AD244B4B106FB904_METHOD_1_627A43057F5DEAED_OFFSET UNITYSDK_OFFSET(0x154EA2A0)
#define CLASS_1_AD244B4B106FB904__CTOR_OFFSET UNITYSDK_OFFSET(0x154E9FE0)

inline static constexpr unsigned int Class_1_AD244B4B106FB904_TypeDefinitionIndex = 79874;

class Class_1_AD244B4B106FB904 : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* Field_1_4; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_5; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_6; // 0x20
	::UnityEngine::AnimationCurve* Field_1_2; // 0x28
	::System::Single Field_1_0; // 0x30
	::System::Single Field_1_3; // 0x34
	::System::Single Field_1_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD244B4B106FB904__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_40C1B0BD346CCBBA(::MoleMole::Config::ConfigEntityRunState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityRunState*))((::PBYTE)hIl2Cpp + CLASS_1_AD244B4B106FB904_METHOD_1_40C1B0BD346CCBBA_OFFSET))(this, a1);
	}

	::System::Void Method_1_627A43057F5DEAED(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AD244B4B106FB904_METHOD_1_627A43057F5DEAED_OFFSET))(this, a1);
	}
};
