#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_2_4D25DAA855530C18;
namespace RPG::GameCore { class JsonConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_DAF303F39006E550_METHOD_2_2DD93B17F0589ECA_OFFSET UNITYSDK_OFFSET(0x17D8E560)
#define CLASS_2_DAF303F39006E550_METHOD_2_41C2FC8BB95016DD_OFFSET UNITYSDK_OFFSET(0x17D8E840)
#define CLASS_2_DAF303F39006E550_METHOD_2_8859F40A3E47CF22_OFFSET UNITYSDK_OFFSET(0x17D8E3F0)
#define CLASS_2_DAF303F39006E550_METHOD_2_D675670EA8F43CD1_OFFSET UNITYSDK_OFFSET(0x17D8E760)
#define CLASS_2_DAF303F39006E550__CTOR_OFFSET UNITYSDK_OFFSET(0x17D8E8A0)
#define CLASS_2_DAF303F39006E550__ONBIND_OFFSET UNITYSDK_OFFSET(0x17D8E0F0)

inline static constexpr unsigned int Class_2_DAF303F39006E550_TypeDefinitionIndex = 69064;

class Class_2_DAF303F39006E550 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::System::Collections::Generic::List_1<::Class_2_4D25DAA855530C18*>* Field_2_0; // 0x60
	::Il2CppArray<::UnityEngine::Transform*>* Field_2_1; // 0x68
	::System::String* Field_2_2; // 0x70
	::System::String* Field_2_3; // 0x78
	::Il2CppArray<::System::String*>* Field_2_4; // 0x80

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

	::System::Void Method_2_41C2FC8BB95016DD(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DAF303F39006E550_METHOD_2_41C2FC8BB95016DD_OFFSET))(this, a1);
	}

	::System::Void Method_2_2DD93B17F0589ECA(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_DAF303F39006E550_METHOD_2_2DD93B17F0589ECA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D675670EA8F43CD1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DAF303F39006E550_METHOD_2_D675670EA8F43CD1_OFFSET))(this, a1);
	}
};
