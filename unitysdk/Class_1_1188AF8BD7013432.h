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

#define CLASS_1_1188AF8BD7013432_METHOD_1_059BD73D68C71853_OFFSET UNITYSDK_OFFSET(0xB386270)
#define CLASS_1_1188AF8BD7013432_METHOD_1_0BB472DC0AD658C2_OFFSET UNITYSDK_OFFSET(0xB386700)
#define CLASS_1_1188AF8BD7013432_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xB386610)
#define CLASS_1_1188AF8BD7013432_METHOD_1_507A5122CD01412B_OFFSET UNITYSDK_OFFSET(0xB386BC0)
#define CLASS_1_1188AF8BD7013432_METHOD_1_50D6A7C67ED3EDC7_OFFSET UNITYSDK_OFFSET(0xB3859B0)
#define CLASS_1_1188AF8BD7013432_METHOD_1_6AD559F472687D8E_OFFSET UNITYSDK_OFFSET(0xB386410)
#define CLASS_1_1188AF8BD7013432_METHOD_1_739DB9F245C7FAD0_OFFSET UNITYSDK_OFFSET(0xB385A50)
#define CLASS_1_1188AF8BD7013432_METHOD_1_7A097E7EF929F289_OFFSET UNITYSDK_OFFSET(0xB385C90)
#define CLASS_1_1188AF8BD7013432_METHOD_1_7EB19CFE09DC3321_OFFSET UNITYSDK_OFFSET(0xB3868C0)
#define CLASS_1_1188AF8BD7013432_METHOD_1_9CE3056B66B7573D_OFFSET UNITYSDK_OFFSET(0xB386540)
#define CLASS_1_1188AF8BD7013432_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xB386880)
#define CLASS_1_1188AF8BD7013432_METHOD_1_A9976D5BA569414A_OFFSET UNITYSDK_OFFSET(0xB385410)
#define CLASS_1_1188AF8BD7013432_METHOD_1_ADF4AD3331B4D7AD_1_OFFSET UNITYSDK_OFFSET(0xB386140)
#define CLASS_1_1188AF8BD7013432_METHOD_1_ADF4AD3331B4D7AD_2_OFFSET UNITYSDK_OFFSET(0xB386820)
#define CLASS_1_1188AF8BD7013432_METHOD_1_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0xB3860F0)
#define CLASS_1_1188AF8BD7013432_METHOD_1_BB881F05E41D3A04_OFFSET UNITYSDK_OFFSET(0xB386030)
#define CLASS_1_1188AF8BD7013432_METHOD_1_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0xB385FB0)
#define CLASS_1_1188AF8BD7013432_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB386B70)
#define CLASS_1_1188AF8BD7013432_METHOD_1_CD37BA088172EEF7_OFFSET UNITYSDK_OFFSET(0xB386090)
#define CLASS_1_1188AF8BD7013432_METHOD_1_D9AAE950C6F28BA6_OFFSET UNITYSDK_OFFSET(0xB386190)
#define CLASS_1_1188AF8BD7013432_METHOD_1_E4FB51E946EDE8A5_OFFSET UNITYSDK_OFFSET(0xB386CD0)
#define CLASS_1_1188AF8BD7013432_METHOD_1_EBDC7A7D2F421DC3_1_OFFSET UNITYSDK_OFFSET(0xB386AF0)
#define CLASS_1_1188AF8BD7013432_METHOD_1_EBDC7A7D2F421DC3_OFFSET UNITYSDK_OFFSET(0xB386A70)
#define CLASS_1_1188AF8BD7013432__CCTOR_OFFSET UNITYSDK_OFFSET(0xB386DA0)
#define CLASS_1_1188AF8BD7013432__CTOR_OFFSET UNITYSDK_OFFSET(0xB386D90)

inline static constexpr unsigned int Class_1_1188AF8BD7013432_TypeDefinitionIndex = 69006;

class Class_1_1188AF8BD7013432 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_FHIFANIIMDJ()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1188AF8BD7013432_TypeDefinitionIndex)->GetStaticField(0x44BF0);
	}
	::RPG::Client::RPGAnimationEvent* MEDGLNFKGDC; // 0x10
	::System::Collections::Generic::Queue_1<::Class_1_1188AF8BD7013432_ScrollState>* GMACAFIDEFM; // 0x18
	::UnityEngine::Animation* OFDFAIMLJKB; // 0x20
	::UnityEngine::UI::Text* COPJABODJHP; // 0x28
	::UnityEngine::UI::Text* GAKGGMODMNP; // 0x30
	::UnityEngine::Transform* GKNBCPMJHMN; // 0x38
	::System::Action* PPNNHIGJGEP; // 0x40
	::System::Int32 ANPAHODBCOB; // 0x48
	::System::Int32 EELOAMDDHBP; // 0x4C
	::Class_1_1188AF8BD7013432_ScrollType IOAANMAGJHD; // 0x50
	::System::Int32 FFNBLDFFMCN; // 0x54
	::System::Single DKOFFPPGEFI; // 0x58
	::System::Int32 HAOPEJAGHDJ; // 0x5C
	::System::Boolean EMHAACACFOM; // 0x60
	::System::Boolean OMIPKAAHLDP; // 0x61
	::System::Boolean EOJGKPIGGGN; // 0x62
	::System::Single HGFCEHJJGCL; // 0x64
	::System::Int32 JJDGIADDPHM; // 0x68
	::Class_1_1188AF8BD7013432_ScrollState NMMHFEGBFFP; // 0x6C

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

	::System::Void Method_1_BBA49FAB086F388D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1188AF8BD7013432_METHOD_1_BBA49FAB086F388D_OFFSET))(this);
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

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1188AF8BD7013432_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_507A5122CD01412B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1188AF8BD7013432_METHOD_1_507A5122CD01412B_OFFSET))(this);
	}

	::System::Void Method_1_BB881F05E41D3A04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1188AF8BD7013432_METHOD_1_BB881F05E41D3A04_OFFSET))(this);
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

	::System::Void Method_1_739DB9F245C7FAD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1188AF8BD7013432_METHOD_1_739DB9F245C7FAD0_OFFSET))(this);
	}
};
