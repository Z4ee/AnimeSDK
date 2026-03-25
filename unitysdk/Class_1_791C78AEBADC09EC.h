#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MockAnimator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define CLASS_1_791C78AEBADC09EC_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x9ED9330)
#define CLASS_1_791C78AEBADC09EC_METHOD_1_577059665189CFFF_OFFSET UNITYSDK_OFFSET(0x9ED9180)
#define CLASS_1_791C78AEBADC09EC_METHOD_1_7DACACCF7CC78B3A_OFFSET UNITYSDK_OFFSET(0x9ED90F0)

inline static constexpr unsigned int Class_1_791C78AEBADC09EC_TypeDefinitionIndex = 60096;

class Class_1_791C78AEBADC09EC : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::RPG::Client::MockAnimator*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::List_1<::RPG::Client::MockAnimator*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_791C78AEBADC09EC_TypeDefinitionIndex)->GetStaticField(0x47520);
	}
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_791C78AEBADC09EC_TypeDefinitionIndex)->GetStaticField(0x128E0);
	}

	static ::RPG::Client::MockAnimator* Method_1_7DACACCF7CC78B3A(::UnityEngine::Animator* a1)
	{
		return ((::RPG::Client::MockAnimator*(*)(::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_1_791C78AEBADC09EC_METHOD_1_7DACACCF7CC78B3A_OFFSET))(a1);
	}

	static ::System::Void Method_1_577059665189CFFF(::RPG::Client::MockAnimator* a1)
	{
		return ((::System::Void(*)(::RPG::Client::MockAnimator*))((::PBYTE)hIl2Cpp + CLASS_1_791C78AEBADC09EC_METHOD_1_577059665189CFFF_OFFSET))(a1);
	}

	static ::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_791C78AEBADC09EC_METHOD_1_151E25A63D14DDB0_OFFSET))();
	}
};
