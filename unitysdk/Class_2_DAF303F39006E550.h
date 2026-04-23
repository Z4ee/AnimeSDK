#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_2_A59D996EA4C786B3;
namespace RPG::GameCore { class JsonConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_DAF303F39006E550_METHOD_2_06610C39C836ADC8_OFFSET UNITYSDK_OFFSET(0xC0CF7F0)
#define CLASS_2_DAF303F39006E550_METHOD_2_6632BA9E17A7643A_OFFSET UNITYSDK_OFFSET(0xC0CFA40)
#define CLASS_2_DAF303F39006E550_METHOD_2_8859F40A3E47CF22_OFFSET UNITYSDK_OFFSET(0xC0CF690)
#define CLASS_2_DAF303F39006E550_METHOD_2_C3D9ED19B24574D4_OFFSET UNITYSDK_OFFSET(0xC0CFB40)
#define CLASS_2_DAF303F39006E550__CTOR_OFFSET UNITYSDK_OFFSET(0xC0CFBA0)
#define CLASS_2_DAF303F39006E550__ONBIND_OFFSET UNITYSDK_OFFSET(0xC0CF440)
#define CLASS_2_DAF303F39006E550___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xC0CFD20)

inline static constexpr unsigned int Class_2_DAF303F39006E550_TypeDefinitionIndex = 66642;

class Class_2_DAF303F39006E550 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::System::String* Field_2_2; // 0x60
	::System::Collections::Generic::List_1<::Class_2_A59D996EA4C786B3*>* Field_2_4; // 0x68
	::Il2CppArray<::UnityEngine::Transform*>* Field_2_1; // 0x70
	::Il2CppArray<::System::String*>* Field_2_0; // 0x78
	::System::String* Field_2_3; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DAF303F39006E550__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DAF303F39006E550__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_8859F40A3E47CF22(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::RPG::GameCore::JsonConfig* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::RPG::GameCore::JsonConfig*))((::PBYTE)hIl2Cpp + CLASS_2_DAF303F39006E550_METHOD_2_8859F40A3E47CF22_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_C3D9ED19B24574D4(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DAF303F39006E550_METHOD_2_C3D9ED19B24574D4_OFFSET))(this, a1);
	}

	::System::Void Method_2_06610C39C836ADC8(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_DAF303F39006E550_METHOD_2_06610C39C836ADC8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6632BA9E17A7643A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DAF303F39006E550_METHOD_2_6632BA9E17A7643A_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DAF303F39006E550___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
