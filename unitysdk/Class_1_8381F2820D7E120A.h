#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

class Class_1_F8634184B38ED7F3;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define CLASS_1_8381F2820D7E120A_METHOD_1_538B1538FFCC3586_OFFSET UNITYSDK_OFFSET(0x12EA2C80)
#define CLASS_1_8381F2820D7E120A_METHOD_1_7AD7C131DE9B7BA5_OFFSET UNITYSDK_OFFSET(0x12EA3020)
#define CLASS_1_8381F2820D7E120A__CCTOR_OFFSET UNITYSDK_OFFSET(0x12EA3420)
#define CLASS_1_8381F2820D7E120A__CTOR_OFFSET UNITYSDK_OFFSET(0x12EA33D0)

inline static constexpr unsigned int Class_1_8381F2820D7E120A_TypeDefinitionIndex = 57343;

class Class_1_8381F2820D7E120A : public ::System::Object
{
public:
	static ::RPG::MVector3* StaticGet_JDFCENAIIAG()
	{
		return (::RPG::MVector3*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8381F2820D7E120A_TypeDefinitionIndex)->GetStaticField(0x13220);
	}
	// static const ::System::Single EBDACMJDHFN; // 0x0
	::System::Collections::Generic::List_1<::Class_1_F8634184B38ED7F3*>* BPKGBGDJCHG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8381F2820D7E120A__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8381F2820D7E120A__CCTOR_OFFSET))();
	}

	::System::Void Method_1_538B1538FFCC3586(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8381F2820D7E120A_METHOD_1_538B1538FFCC3586_OFFSET))(this, a1);
	}

	::System::Void Method_1_7AD7C131DE9B7BA5(::UnityEngine::Object* a1, ::UnityEngine::Transform* a2, ::System::String* a3, ::UnityEngine::GameObject* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::UnityEngine::Transform*, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_8381F2820D7E120A_METHOD_1_7AD7C131DE9B7BA5_OFFSET))(this, a1, a2, a3, a4);
	}
};
