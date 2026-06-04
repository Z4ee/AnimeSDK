#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_2_A59D996EA4C786B3;
namespace RPG::GameCore { class JsonConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_0542C9DC865E19FB_METHOD_2_41C2FC8BB95016DD_OFFSET UNITYSDK_OFFSET(0xC1E30C0)
#define CLASS_2_0542C9DC865E19FB_METHOD_2_8876B4AF629A3A6B_OFFSET UNITYSDK_OFFSET(0xC1E2C20)
#define CLASS_2_0542C9DC865E19FB_METHOD_2_9178D0680A316E5A_OFFSET UNITYSDK_OFFSET(0xC1E2D60)
#define CLASS_2_0542C9DC865E19FB_METHOD_2_D675670EA8F43CD1_OFFSET UNITYSDK_OFFSET(0xC1E2FE0)
#define CLASS_2_0542C9DC865E19FB__CTOR_OFFSET UNITYSDK_OFFSET(0xC1E3120)
#define CLASS_2_0542C9DC865E19FB__ONBIND_OFFSET UNITYSDK_OFFSET(0xC1E2950)
#define CLASS_2_0542C9DC865E19FB___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xC1E3210)

inline static constexpr unsigned int Class_2_0542C9DC865E19FB_TypeDefinitionIndex = 67582;

class Class_2_0542C9DC865E19FB : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::System::Collections::Generic::List_1<::Class_2_A59D996EA4C786B3*>* Field_2_0; // 0x60
	::System::String* Field_2_1; // 0x68
	::System::String* Field_2_2; // 0x70
	::Il2CppArray<::UnityEngine::Transform*>* Field_2_3; // 0x78
	::Il2CppArray<::System::String*>* Field_2_4; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0542C9DC865E19FB__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0542C9DC865E19FB__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_8876B4AF629A3A6B(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::RPG::GameCore::JsonConfig* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::RPG::GameCore::JsonConfig*))((::PBYTE)hIl2Cpp + CLASS_2_0542C9DC865E19FB_METHOD_2_8876B4AF629A3A6B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_41C2FC8BB95016DD(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_0542C9DC865E19FB_METHOD_2_41C2FC8BB95016DD_OFFSET))(this, a1);
	}

	::System::Void Method_2_9178D0680A316E5A(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0542C9DC865E19FB_METHOD_2_9178D0680A316E5A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D675670EA8F43CD1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_0542C9DC865E19FB_METHOD_2_D675670EA8F43CD1_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0542C9DC865E19FB___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
