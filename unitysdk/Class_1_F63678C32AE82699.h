#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MockAnimator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define CLASS_1_F63678C32AE82699_METHOD_1_7DACACCF7CC78B3A_OFFSET UNITYSDK_OFFSET(0x142C0200)
#define CLASS_1_F63678C32AE82699_METHOD_1_8594010D6A57C9BB_OFFSET UNITYSDK_OFFSET(0x142C04D0)
#define CLASS_1_F63678C32AE82699_METHOD_1_9792B869AD876F5F_OFFSET UNITYSDK_OFFSET(0x142C0290)

inline static constexpr unsigned int Class_1_F63678C32AE82699_TypeDefinitionIndex = 68484;

class Class_1_F63678C32AE82699 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::RPG::Client::MockAnimator*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::RPG::Client::MockAnimator*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F63678C32AE82699_TypeDefinitionIndex)->GetStaticField(0x27F00);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F63678C32AE82699_TypeDefinitionIndex)->GetStaticField(0x9780);
	}

	static ::RPG::Client::MockAnimator* Method_1_7DACACCF7CC78B3A(::UnityEngine::Animator* a1)
	{
		return ((::RPG::Client::MockAnimator*(*)(::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_1_F63678C32AE82699_METHOD_1_7DACACCF7CC78B3A_OFFSET))(a1);
	}

	static ::System::Void Method_1_9792B869AD876F5F(::RPG::Client::MockAnimator* a1)
	{
		return ((::System::Void(*)(::RPG::Client::MockAnimator*))((::PBYTE)hIl2Cpp + CLASS_1_F63678C32AE82699_METHOD_1_9792B869AD876F5F_OFFSET))(a1);
	}

	static ::System::Void Method_1_8594010D6A57C9BB()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F63678C32AE82699_METHOD_1_8594010D6A57C9BB_OFFSET))();
	}
};
