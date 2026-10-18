#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MockAnimator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define CLASS_1_DA3BE93254D6E47E_METHOD_1_337C5DA8CB013AB1_OFFSET UNITYSDK_OFFSET(0x165BCF00)
#define CLASS_1_DA3BE93254D6E47E_METHOD_1_7DACACCF7CC78B3A_OFFSET UNITYSDK_OFFSET(0x165BCE70)
#define CLASS_1_DA3BE93254D6E47E_METHOD_1_8594010D6A57C9BB_OFFSET UNITYSDK_OFFSET(0x165BD0A0)

inline static constexpr unsigned int Class_1_DA3BE93254D6E47E_TypeDefinitionIndex = 73331;

class Class_1_DA3BE93254D6E47E : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::RPG::Client::MockAnimator*>** StaticGet_GEINKILMOFD()
	{
		return (::System::Collections::Generic::List_1<::RPG::Client::MockAnimator*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DA3BE93254D6E47E_TypeDefinitionIndex)->GetStaticField(0x6E8B0);
	}
	static ::System::Int32* StaticGet_CDEGBHMDMNI()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_DA3BE93254D6E47E_TypeDefinitionIndex)->GetStaticField(0x155B0);
	}

	static ::RPG::Client::MockAnimator* Method_1_7DACACCF7CC78B3A(::UnityEngine::Animator* a1)
	{
		return ((::RPG::Client::MockAnimator*(*)(::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_1_DA3BE93254D6E47E_METHOD_1_7DACACCF7CC78B3A_OFFSET))(a1);
	}

	static ::System::Void Method_1_337C5DA8CB013AB1(::RPG::Client::MockAnimator* a1)
	{
		return ((::System::Void(*)(::RPG::Client::MockAnimator*))((::PBYTE)hIl2Cpp + CLASS_1_DA3BE93254D6E47E_METHOD_1_337C5DA8CB013AB1_OFFSET))(a1);
	}

	static ::System::Void Method_1_8594010D6A57C9BB()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DA3BE93254D6E47E_METHOD_1_8594010D6A57C9BB_OFFSET))();
	}
};
