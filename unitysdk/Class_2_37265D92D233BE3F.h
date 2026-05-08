#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/Struct_2_C8629618711DF8B3.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIMainCitySidebarContext; }
namespace System { class String; }
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_2_37265D92D233BE3F_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x10FE17E0)
#define CLASS_2_37265D92D233BE3F_METHOD_2_218124418542E081_OFFSET UNITYSDK_OFFSET(0x10FE1390)
#define CLASS_2_37265D92D233BE3F_METHOD_2_8714CF4AE9195CA2_OFFSET UNITYSDK_OFFSET(0x10FE1550)
#define CLASS_2_37265D92D233BE3F_METHOD_2_8B0B28A78338F3BB_OFFSET UNITYSDK_OFFSET(0x10FE1020)
#define CLASS_2_37265D92D233BE3F_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x10FE0F80)
#define CLASS_2_37265D92D233BE3F_METHOD_2_A5F626053D86566B_OFFSET UNITYSDK_OFFSET(0x10FE0DD0)
#define CLASS_2_37265D92D233BE3F_METHOD_2_A7035ECAF0F434D7_OFFSET UNITYSDK_OFFSET(0x10FE10F0)
#define CLASS_2_37265D92D233BE3F_METHOD_2_CBAF7F43CE031FFD_OFFSET UNITYSDK_OFFSET(0x10FE0790)
#define CLASS_2_37265D92D233BE3F__CCTOR_OFFSET UNITYSDK_OFFSET(0x10FE0D90)
#define CLASS_2_37265D92D233BE3F__CTOR_OFFSET UNITYSDK_OFFSET(0x10FE0D40)

inline static constexpr unsigned int Class_2_37265D92D233BE3F_TypeDefinitionIndex = 49946;

class Class_2_37265D92D233BE3F : public ::Class_1_37DF30C8B3AA0F39
{
public:
	static ::System::String** StaticGet_Field_2_4()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_37265D92D233BE3F_TypeDefinitionIndex)->GetStaticField(0x36C90);
	}
	// static const ::System::String* Field_2_3; // 0x0
	::Class_2_000597E145D7A42A<::System::Int32>* Field_2_2; // 0x50
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_2_1; // 0x58
	::Class_2_000597E145D7A42A<::MoleMole::UIMainCitySidebarContext*>* Field_2_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37265D92D233BE3F__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_37265D92D233BE3F__CCTOR_OFFSET))();
	}

	::System::Void Method_2_CBAF7F43CE031FFD(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_37265D92D233BE3F_METHOD_2_CBAF7F43CE031FFD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A5F626053D86566B(::MoleMole::UIMainCitySidebarContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIMainCitySidebarContext*))((::PBYTE)hIl2Cpp + CLASS_2_37265D92D233BE3F_METHOD_2_A5F626053D86566B_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37265D92D233BE3F_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::MoleMole::UIControllerContextBase* Method_2_8B0B28A78338F3BB()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37265D92D233BE3F_METHOD_2_8B0B28A78338F3BB_OFFSET))(this);
	}

	::System::Void Method_2_A7035ECAF0F434D7(::Struct_2_C8629618711DF8B3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_C8629618711DF8B3&))((::PBYTE)hIl2Cpp + CLASS_2_37265D92D233BE3F_METHOD_2_A7035ECAF0F434D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_218124418542E081()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37265D92D233BE3F_METHOD_2_218124418542E081_OFFSET))(this);
	}

	::System::Void Method_2_8714CF4AE9195CA2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37265D92D233BE3F_METHOD_2_8714CF4AE9195CA2_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37265D92D233BE3F_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}
};
