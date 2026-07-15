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

#define CLASS_1_1188AF8BD7013432_METHOD_1_059BD73D68C71853_OFFSET UNITYSDK_OFFSET(0x16F076F0)
#define CLASS_1_1188AF8BD7013432_METHOD_1_0BB472DC0AD658C2_OFFSET UNITYSDK_OFFSET(0x16F07B70)
#define CLASS_1_1188AF8BD7013432_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x16F07A90)
#define CLASS_1_1188AF8BD7013432_METHOD_1_50D6A7C67ED3EDC7_OFFSET UNITYSDK_OFFSET(0x16F06F10)
#define CLASS_1_1188AF8BD7013432_METHOD_1_6AD559F472687D8E_OFFSET UNITYSDK_OFFSET(0x16F07890)
#define CLASS_1_1188AF8BD7013432_METHOD_1_739DB9F245C7FAD0_OFFSET UNITYSDK_OFFSET(0x16F06FB0)
#define CLASS_1_1188AF8BD7013432_METHOD_1_7A097E7EF929F289_OFFSET UNITYSDK_OFFSET(0x16F071F0)
#define CLASS_1_1188AF8BD7013432_METHOD_1_7EB19CFE09DC3321_OFFSET UNITYSDK_OFFSET(0x16F07D30)
#define CLASS_1_1188AF8BD7013432_METHOD_1_9CE3056B66B7573D_OFFSET UNITYSDK_OFFSET(0x16F079C0)
#define CLASS_1_1188AF8BD7013432_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x16F07CF0)
#define CLASS_1_1188AF8BD7013432_METHOD_1_A9976D5BA569414A_OFFSET UNITYSDK_OFFSET(0x16F06970)
#define CLASS_1_1188AF8BD7013432_METHOD_1_ADF4AD3331B4D7AD_1_OFFSET UNITYSDK_OFFSET(0x16F075C0)
#define CLASS_1_1188AF8BD7013432_METHOD_1_ADF4AD3331B4D7AD_2_OFFSET UNITYSDK_OFFSET(0x16F07C90)
#define CLASS_1_1188AF8BD7013432_METHOD_1_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x16F07570)
#define CLASS_1_1188AF8BD7013432_METHOD_1_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0x16F07FE0)
#define CLASS_1_1188AF8BD7013432_METHOD_1_CD37BA088172EEF7_OFFSET UNITYSDK_OFFSET(0x16F07510)
#define CLASS_1_1188AF8BD7013432_METHOD_1_D9AAE950C6F28BA6_OFFSET UNITYSDK_OFFSET(0x16F07610)
#define CLASS_1_1188AF8BD7013432_METHOD_1_E4FB51E946EDE8A5_OFFSET UNITYSDK_OFFSET(0x16F08060)
#define CLASS_1_1188AF8BD7013432_METHOD_1_EBDC7A7D2F421DC3_1_OFFSET UNITYSDK_OFFSET(0x16F07F60)
#define CLASS_1_1188AF8BD7013432_METHOD_1_EBDC7A7D2F421DC3_OFFSET UNITYSDK_OFFSET(0x16F07EE0)
#define CLASS_1_1188AF8BD7013432__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F08130)
#define CLASS_1_1188AF8BD7013432__CTOR_OFFSET UNITYSDK_OFFSET(0x16F08120)

inline static constexpr unsigned int Class_1_1188AF8BD7013432_TypeDefinitionIndex = 65931;

class Class_1_1188AF8BD7013432 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1188AF8BD7013432_TypeDefinitionIndex)->GetStaticField(0x38830);
	}
	::UnityEngine::Animation* Field_1_1; // 0x10
	::System::Action* Field_1_2; // 0x18
	::UnityEngine::UI::Text* Field_1_3; // 0x20
	::RPG::Client::RPGAnimationEvent* Field_1_4; // 0x28
	::UnityEngine::UI::Text* Field_1_5; // 0x30
	::UnityEngine::Transform* Field_1_6; // 0x38
	::System::Collections::Generic::Queue_1<::Class_1_1188AF8BD7013432_ScrollState>* Field_1_7; // 0x40
	::System::Int32 Field_1_8; // 0x48
	::System::Int32 Field_1_9; // 0x4C
	::System::Single Field_1_10; // 0x50
	::System::Int32 Field_1_11; // 0x54
	::System::Int32 Field_1_12; // 0x58
	::System::Single Field_1_13; // 0x5C
	::Class_1_1188AF8BD7013432_ScrollType Field_1_14; // 0x60
	::System::Int32 Field_1_15; // 0x64
	::Class_1_1188AF8BD7013432_ScrollState Field_1_16; // 0x68
	::System::Boolean Field_1_17; // 0x6C
	::System::Boolean Field_1_18; // 0x6D

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

	::System::Void Method_1_739DB9F245C7FAD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1188AF8BD7013432_METHOD_1_739DB9F245C7FAD0_OFFSET))(this);
	}
};
