#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6D37192E992378A8;
class Class_1_8CD67563D6E43D63_1;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
template <typename T> class Class_1_970ABEDDBCF2C487;

#define CLASS_1_CA450B3CF75DEF8B_METHOD_1_16527B66F0D89B29_OFFSET UNITYSDK_OFFSET(0x15DD89B0)
#define CLASS_1_CA450B3CF75DEF8B_METHOD_1_277F8930086803D1_OFFSET UNITYSDK_OFFSET(0x15DD7B80)
#define CLASS_1_CA450B3CF75DEF8B_METHOD_1_4D851AEC7175AA9E_OFFSET UNITYSDK_OFFSET(0x15DD7620)
#define CLASS_1_CA450B3CF75DEF8B_METHOD_1_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0x15DD76D0)
#define CLASS_1_CA450B3CF75DEF8B_METHOD_1_70437D85C11C5222_OFFSET UNITYSDK_OFFSET(0x15DD7770)
#define CLASS_1_CA450B3CF75DEF8B_METHOD_1_70AA9FAF1E137E45_OFFSET UNITYSDK_OFFSET(0x15DD84F0)
#define CLASS_1_CA450B3CF75DEF8B_METHOD_1_763B70E1B527E566_OFFSET UNITYSDK_OFFSET(0x15DD7840)
#define CLASS_1_CA450B3CF75DEF8B_METHOD_1_935449379DA2082F_OFFSET UNITYSDK_OFFSET(0x15DD7EE0)
#define CLASS_1_CA450B3CF75DEF8B_METHOD_1_C6455FC04AE8930B_OFFSET UNITYSDK_OFFSET(0x15DD8660)
#define CLASS_1_CA450B3CF75DEF8B_METHOD_1_CAB09625B03CCCA7_OFFSET UNITYSDK_OFFSET(0x15DD6D90)
#define CLASS_1_CA450B3CF75DEF8B_METHOD_1_CB8E67A66CC9908E_OFFSET UNITYSDK_OFFSET(0x15DD6E40)
#define CLASS_1_CA450B3CF75DEF8B__CCTOR_OFFSET UNITYSDK_OFFSET(0x15DD6D50)
#define CLASS_1_CA450B3CF75DEF8B__CTOR_OFFSET UNITYSDK_OFFSET(0x15DD6BE0)

inline static constexpr unsigned int Class_1_CA450B3CF75DEF8B_TypeDefinitionIndex = 69340;

class Class_1_CA450B3CF75DEF8B : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CA450B3CF75DEF8B_TypeDefinitionIndex)->GetStaticField(0x44570);
	}
	::UnityEngine::Transform* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_1_6D37192E992378A8*>* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* Field_1_7; // 0x20
	::Class_1_970ABEDDBCF2C487<::Class_1_6D37192E992378A8*>* Field_1_3; // 0x28

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CA450B3CF75DEF8B__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CA450B3CF75DEF8B__CCTOR_OFFSET))();
	}

	::System::Boolean Method_1_CAB09625B03CCCA7(::Class_1_8CD67563D6E43D63_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8CD67563D6E43D63_1*))((::PBYTE)hIl2Cpp + CLASS_1_CA450B3CF75DEF8B_METHOD_1_CAB09625B03CCCA7_OFFSET))(this, a1);
	}

	::System::Void Method_1_CB8E67A66CC9908E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CA450B3CF75DEF8B_METHOD_1_CB8E67A66CC9908E_OFFSET))(this, a1);
	}

	::System::Void Method_1_763B70E1B527E566()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA450B3CF75DEF8B_METHOD_1_763B70E1B527E566_OFFSET))(this);
	}

	::System::Void Method_1_277F8930086803D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA450B3CF75DEF8B_METHOD_1_277F8930086803D1_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_935449379DA2082F(::Class_1_8CD67563D6E43D63_1* a1, ::System::Boolean a2)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::Class_1_8CD67563D6E43D63_1*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CA450B3CF75DEF8B_METHOD_1_935449379DA2082F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5022DB1DC5AA8CB4(::Class_1_6D37192E992378A8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6D37192E992378A8*))((::PBYTE)hIl2Cpp + CLASS_1_CA450B3CF75DEF8B_METHOD_1_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_1_70AA9FAF1E137E45(::System::String* a1, ::Class_1_8CD67563D6E43D63_1* a2)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::Class_1_8CD67563D6E43D63_1*))((::PBYTE)hIl2Cpp + CLASS_1_CA450B3CF75DEF8B_METHOD_1_70AA9FAF1E137E45_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_16527B66F0D89B29(::UnityEngine::GameObject* a1, ::Class_1_8CD67563D6E43D63_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::Class_1_8CD67563D6E43D63_1*))((::PBYTE)hIl2Cpp + CLASS_1_CA450B3CF75DEF8B_METHOD_1_16527B66F0D89B29_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Transform* Method_1_C6455FC04AE8930B()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA450B3CF75DEF8B_METHOD_1_C6455FC04AE8930B_OFFSET))(this);
	}

	::System::Void Method_1_70437D85C11C5222(::Class_1_6D37192E992378A8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6D37192E992378A8*))((::PBYTE)hIl2Cpp + CLASS_1_CA450B3CF75DEF8B_METHOD_1_70437D85C11C5222_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4D851AEC7175AA9E(::Class_1_6D37192E992378A8* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6D37192E992378A8*))((::PBYTE)hIl2Cpp + CLASS_1_CA450B3CF75DEF8B_METHOD_1_4D851AEC7175AA9E_OFFSET))(this, a1);
	}
};
