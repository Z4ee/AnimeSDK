#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_07BF77E88FF3817D;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class RPGAnimationEvent; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationState; }
namespace UnityEngine { class Transform; }

#define CLASS_2_245B6078FEAB660B_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xED69020)
#define CLASS_2_245B6078FEAB660B_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xED69040)
#define CLASS_2_245B6078FEAB660B_METHOD_2_017C915772AE00E9_OFFSET UNITYSDK_OFFSET(0xED69120)
#define CLASS_2_245B6078FEAB660B_METHOD_2_04EAA728819FA889_OFFSET UNITYSDK_OFFSET(0xED69470)
#define CLASS_2_245B6078FEAB660B_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xED693E0)
#define CLASS_2_245B6078FEAB660B_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xED699F0)
#define CLASS_2_245B6078FEAB660B_METHOD_2_4BAC33AC17F96A1C_OFFSET UNITYSDK_OFFSET(0xED69840)
#define CLASS_2_245B6078FEAB660B_METHOD_2_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0xED69700)
#define CLASS_2_245B6078FEAB660B_METHOD_2_78E5D10876D30BCC_OFFSET UNITYSDK_OFFSET(0xED692A0)
#define CLASS_2_245B6078FEAB660B_METHOD_2_848FDD59AB054F3D_OFFSET UNITYSDK_OFFSET(0xED69380)
#define CLASS_2_245B6078FEAB660B_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0xED690A0)
#define CLASS_2_245B6078FEAB660B_METHOD_2_D737CD2779D51A4E_OFFSET UNITYSDK_OFFSET(0xED698A0)
#define CLASS_2_245B6078FEAB660B_METHOD_2_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0xED69250)
#define CLASS_2_245B6078FEAB660B_METHOD_2_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0xED69430)
#define CLASS_2_245B6078FEAB660B_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xED69030)
#define CLASS_2_245B6078FEAB660B__CTOR_OFFSET UNITYSDK_OFFSET(0xED69A60)
#define CLASS_2_245B6078FEAB660B__ONBIND_OFFSET UNITYSDK_OFFSET(0xED68F20)
#define CLASS_2_245B6078FEAB660B__ONTICK_OFFSET UNITYSDK_OFFSET(0xED69580)

inline static constexpr unsigned int Class_2_245B6078FEAB660B_TypeDefinitionIndex = 71415;

class Class_2_245B6078FEAB660B : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	// static const ::System::String* CANLIEKIPJG; // 0x0
	// static const ::System::String* OAIMKFCDGDB; // 0x0
	// static const ::System::String* AALHGBPMDOL; // 0x0
	::RPG::Client::RPGAnimationEvent* MEDGLNFKGDC; // 0x60
	::RPG::Client::LocalizedText* PCIIKFOIAJA; // 0x68
	::UnityEngine::AnimationState* DFGNANDJMGI; // 0x70
	::UnityEngine::Animation* JPHOOFFIAAH; // 0x78
	::Class_1_07BF77E88FF3817D* GIEOINBJPBL; // 0x80
	::System::Action* PCFCFJLHLNF; // 0x88
	::UnityEngine::Animation* GNCPKHINOJL; // 0x90
	::System::Int32 _Index_k__BackingField; // 0x98
	::System::Boolean MLEJJCMIOEC; // 0x9C
	::System::Boolean BJPOBNAADML; // 0x9D
	::System::Boolean DMBFJAEAGPL; // 0x9E

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_245B6078FEAB660B__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_245B6078FEAB660B__ONBIND_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_245B6078FEAB660B_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_245B6078FEAB660B_SET_INDEX_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_245B6078FEAB660B_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_245B6078FEAB660B_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void Method_2_017C915772AE00E9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_245B6078FEAB660B_METHOD_2_017C915772AE00E9_OFFSET))(this);
	}

	::System::Void Method_2_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_245B6078FEAB660B_METHOD_2_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Void Method_2_78E5D10876D30BCC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_245B6078FEAB660B_METHOD_2_78E5D10876D30BCC_OFFSET))(this, a1);
	}

	::System::Void Method_2_848FDD59AB054F3D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_245B6078FEAB660B_METHOD_2_848FDD59AB054F3D_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_245B6078FEAB660B_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::Class_1_34917908B7833130* Method_2_F8B73ECE7F883AC1()
	{
		return ((::Class_1_34917908B7833130*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_245B6078FEAB660B_METHOD_2_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Void Method_2_04EAA728819FA889()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_245B6078FEAB660B_METHOD_2_04EAA728819FA889_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_245B6078FEAB660B__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_245B6078FEAB660B_METHOD_2_52607DE4C357D269_OFFSET))(this);
	}

	::System::Void Method_2_D737CD2779D51A4E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_245B6078FEAB660B_METHOD_2_D737CD2779D51A4E_OFFSET))(this);
	}

	::System::Void Method_2_4BAC33AC17F96A1C(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_245B6078FEAB660B_METHOD_2_4BAC33AC17F96A1C_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_245B6078FEAB660B_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}
};
