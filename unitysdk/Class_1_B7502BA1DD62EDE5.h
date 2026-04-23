#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class NamedCurve; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_B7502BA1DD62EDE5_METHOD_1_F66B96B9C0C97E79_OFFSET UNITYSDK_OFFSET(0x1197A470)

inline static constexpr unsigned int Class_1_B7502BA1DD62EDE5_TypeDefinitionIndex = 55396;

class Class_1_B7502BA1DD62EDE5 : public ::System::Object
{
public:
	static ::UnityEngine::AnimationCurve* Method_1_F66B96B9C0C97E79(::System::Collections::Generic::List_1<::RPG::Client::NamedCurve*>* a1, ::System::String* a2)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::System::Collections::Generic::List_1<::RPG::Client::NamedCurve*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B7502BA1DD62EDE5_METHOD_1_F66B96B9C0C97E79_OFFSET))(a1, a2);
	}
};
