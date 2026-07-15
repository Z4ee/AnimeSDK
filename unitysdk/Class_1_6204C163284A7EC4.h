#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class NamedCurve; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_6204C163284A7EC4_METHOD_1_D62E33ACA1054D42_OFFSET UNITYSDK_OFFSET(0x15FA92B0)

inline static constexpr unsigned int Class_1_6204C163284A7EC4_TypeDefinitionIndex = 57381;

class Class_1_6204C163284A7EC4 : public ::System::Object
{
public:
	static ::UnityEngine::AnimationCurve* Method_1_D62E33ACA1054D42(::System::Collections::Generic::List_1<::RPG::Client::NamedCurve*>* a1, ::System::String* a2)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::System::Collections::Generic::List_1<::RPG::Client::NamedCurve*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6204C163284A7EC4_METHOD_1_D62E33ACA1054D42_OFFSET))(a1, a2);
	}
};
