#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1188AF8BD7013432_ScrollState.h"
#include "unitysdk/Class_1_1188AF8BD7013432_ScrollType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RPGAnimationEvent; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_1_1188AF8BD7013432_METHOD_1_059BD73D68C71853_OFFSET UNITYSDK_OFFSET(0xB545360)
#define CLASS_1_1188AF8BD7013432_METHOD_1_0BB472DC0AD658C2_OFFSET UNITYSDK_OFFSET(0xB5457E0)
#define CLASS_1_1188AF8BD7013432_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xB545700)
#define CLASS_1_1188AF8BD7013432_METHOD_1_50D6A7C67ED3EDC7_OFFSET UNITYSDK_OFFSET(0xB544B80)
#define CLASS_1_1188AF8BD7013432_METHOD_1_6AD559F472687D8E_OFFSET UNITYSDK_OFFSET(0xB545500)
#define CLASS_1_1188AF8BD7013432_METHOD_1_6E6682ED9FD6F719_OFFSET UNITYSDK_OFFSET(0xB544C20)
#define CLASS_1_1188AF8BD7013432_METHOD_1_7A097E7EF929F289_OFFSET UNITYSDK_OFFSET(0xB544E60)
#define CLASS_1_1188AF8BD7013432_METHOD_1_7EB19CFE09DC3321_OFFSET UNITYSDK_OFFSET(0xB5459A0)
#define CLASS_1_1188AF8BD7013432_METHOD_1_9CE3056B66B7573D_OFFSET UNITYSDK_OFFSET(0xB545630)
#define CLASS_1_1188AF8BD7013432_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xB545960)
#define CLASS_1_1188AF8BD7013432_METHOD_1_A9976D5BA569414A_OFFSET UNITYSDK_OFFSET(0xB5445E0)
#define CLASS_1_1188AF8BD7013432_METHOD_1_ADF4AD3331B4D7AD_1_OFFSET UNITYSDK_OFFSET(0xB545230)
#define CLASS_1_1188AF8BD7013432_METHOD_1_ADF4AD3331B4D7AD_2_OFFSET UNITYSDK_OFFSET(0xB545900)
#define CLASS_1_1188AF8BD7013432_METHOD_1_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0xB5451E0)
#define CLASS_1_1188AF8BD7013432_METHOD_1_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0xB545C50)
#define CLASS_1_1188AF8BD7013432_METHOD_1_CD37BA088172EEF7_OFFSET UNITYSDK_OFFSET(0xB545180)
#define CLASS_1_1188AF8BD7013432_METHOD_1_D9AAE950C6F28BA6_OFFSET UNITYSDK_OFFSET(0xB545280)
#define CLASS_1_1188AF8BD7013432_METHOD_1_E4FB51E946EDE8A5_OFFSET UNITYSDK_OFFSET(0xB545CD0)
#define CLASS_1_1188AF8BD7013432_METHOD_1_EBDC7A7D2F421DC3_1_OFFSET UNITYSDK_OFFSET(0xB545BD0)
#define CLASS_1_1188AF8BD7013432_METHOD_1_EBDC7A7D2F421DC3_OFFSET UNITYSDK_OFFSET(0xB545B50)
#define CLASS_1_1188AF8BD7013432__CCTOR_OFFSET UNITYSDK_OFFSET(0xB545DA0)
#define CLASS_1_1188AF8BD7013432__CTOR_OFFSET UNITYSDK_OFFSET(0xB545D90)

inline static constexpr unsigned int Class_1_1188AF8BD7013432_TypeDefinitionIndex = 68970;

class Class_1_1188AF8BD7013432 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_FHIFANIIMDJ()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1188AF8BD7013432_TypeDefinitionIndex)->GetStaticField(0x60CB0);
	}
	::System::Collections::Generic::Queue_1<::Class_1_1188AF8BD7013432_ScrollState>* GMACAFIDEFM; // 0x10
	::UnityEngine::UI::Text* GAKGGMODMNP; // 0x18
	::RPG::Client::RPGAnimationEvent* MEDGLNFKGDC; // 0x20
	::UnityEngine::Animation* OFDFAIMLJKB; // 0x28
	::UnityEngine::Transform* GKNBCPMJHMN; // 0x30
	::System::Action* PPNNHIGJGEP; // 0x38
	::UnityEngine::UI::Text* COPJABODJHP; // 0x40
	::Class_1_1188AF8BD7013432_ScrollType IOAANMAGJHD; // 0x48
	::System::Int32 ANPAHODBCOB; // 0x4C
	::System::Int32 EELOAMDDHBP; // 0x50
	::System::Single HGFCEHJJGCL; // 0x54
	::System::Single DKOFFPPGEFI; // 0x58
	::Class_1_1188AF8BD7013432_ScrollState NMMHFEGBFFP; // 0x5C
	::System::Int32 JJDGIADDPHM; // 0x60
	::System::Int32 FFNBLDFFMCN; // 0x64
	::System::Boolean OMIPKAAHLDP; // 0x68
	::System::Boolean EMHAACACFOM; // 0x69
	::System::Int32 HAOPEJAGHDJ; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1188AF8BD7013432__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1188AF8BD7013432__CCTOR_OFFSET))();
	}

	::System::Void Method_1_A9976D5BA569414A(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_1188AF8BD7013432_METHOD_1_A9976D5BA569414A_OFFSET))(this, a1);
	}

	::System::Void Method_1_50D6A7C67ED3EDC7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1188AF8BD7013432_METHOD_1_50D6A7C67ED3EDC7_OFFSET))(this, a1);
	}

	::System::Void Method_1_CD37BA088172EEF7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1188AF8BD7013432_METHOD_1_CD37BA088172EEF7_OFFSET))(this, a1);
	}

	::System::Void Method_1_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1188AF8BD7013432_METHOD_1_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Void Method_1_ADF4AD3331B4D7AD_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1188AF8BD7013432_METHOD_1_ADF4AD3331B4D7AD_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_D9AAE950C6F28BA6(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1188AF8BD7013432_METHOD_1_D9AAE950C6F28BA6_OFFSET))(this, a1);
	}

	::System::Void Method_1_6AD559F472687D8E(::System::Char a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + CLASS_1_1188AF8BD7013432_METHOD_1_6AD559F472687D8E_OFFSET))(this, a1);
	}

	::System::Void Method_1_9CE3056B66B7573D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1188AF8BD7013432_METHOD_1_9CE3056B66B7573D_OFFSET))(this, a1);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1188AF8BD7013432_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_ADF4AD3331B4D7AD_2(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1188AF8BD7013432_METHOD_1_ADF4AD3331B4D7AD_2_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1188AF8BD7013432_METHOD_1_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Single Method_1_7EB19CFE09DC3321()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1188AF8BD7013432_METHOD_1_7EB19CFE09DC3321_OFFSET))(this);
	}

	::System::Void Method_1_EBDC7A7D2F421DC3(::System::Single a1, ::System::Int32 a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_1188AF8BD7013432_METHOD_1_EBDC7A7D2F421DC3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_EBDC7A7D2F421DC3_1(::System::Single a1, ::System::Int32 a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_1188AF8BD7013432_METHOD_1_EBDC7A7D2F421DC3_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_BBA49FAB086F388D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1188AF8BD7013432_METHOD_1_BBA49FAB086F388D_OFFSET))(this);
	}

	::System::String* Method_1_059BD73D68C71853(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1188AF8BD7013432_METHOD_1_059BD73D68C71853_OFFSET))(this, a1);
	}

	::System::Void Method_1_7A097E7EF929F289()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1188AF8BD7013432_METHOD_1_7A097E7EF929F289_OFFSET))(this);
	}

	::System::String* Method_1_0BB472DC0AD658C2(::Class_1_1188AF8BD7013432_ScrollState a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_1188AF8BD7013432_ScrollState))((::PBYTE)hIl2Cpp + CLASS_1_1188AF8BD7013432_METHOD_1_0BB472DC0AD658C2_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_E4FB51E946EDE8A5(::System::Int32 a1, ::Class_1_1188AF8BD7013432_ScrollState a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::Class_1_1188AF8BD7013432_ScrollState))((::PBYTE)hIl2Cpp + CLASS_1_1188AF8BD7013432_METHOD_1_E4FB51E946EDE8A5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6E6682ED9FD6F719()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1188AF8BD7013432_METHOD_1_6E6682ED9FD6F719_OFFSET))(this);
	}
};
