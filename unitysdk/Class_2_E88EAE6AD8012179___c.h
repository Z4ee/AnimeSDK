#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0A16B249216FA488;
namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_E88EAE6AD8012179___C_METHOD_1_3E8B70ACE16B51A8_OFFSET UNITYSDK_OFFSET(0x14963610)
#define CLASS_2_E88EAE6AD8012179___C_METHOD_1_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x149636E0)
#define CLASS_2_E88EAE6AD8012179___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x149635C0)
#define CLASS_2_E88EAE6AD8012179___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14963600)

inline static constexpr unsigned int Class_2_E88EAE6AD8012179___c_TypeDefinitionIndex = 63752;

class Class_2_E88EAE6AD8012179___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_0A16B249216FA488*>** StaticGet___9__16_0()
	{
		return (::System::Comparison_1<::Class_1_0A16B249216FA488*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E88EAE6AD8012179___c_TypeDefinitionIndex)->GetStaticField(0x48160);
	}
	static ::System::Action** StaticGet___9__19_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E88EAE6AD8012179___c_TypeDefinitionIndex)->GetStaticField(0x48168);
	}
	static ::Class_2_E88EAE6AD8012179___c** StaticGet___9()
	{
		return (::Class_2_E88EAE6AD8012179___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E88EAE6AD8012179___c_TypeDefinitionIndex)->GetStaticField(0x48170);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E88EAE6AD8012179___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E88EAE6AD8012179___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_3E8B70ACE16B51A8(::Class_1_0A16B249216FA488* a1, ::Class_1_0A16B249216FA488* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_0A16B249216FA488*, ::Class_1_0A16B249216FA488*))((::PBYTE)hIl2Cpp + CLASS_2_E88EAE6AD8012179___C_METHOD_1_3E8B70ACE16B51A8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E88EAE6AD8012179___C_METHOD_1_805C56F44231AEF9_OFFSET))(this);
	}
};
