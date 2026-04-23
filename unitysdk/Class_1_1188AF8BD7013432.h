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

#define CLASS_1_1188AF8BD7013432_METHOD_1_059BD73D68C71853_OFFSET UNITYSDK_OFFSET(0x91EB750)
#define CLASS_1_1188AF8BD7013432_METHOD_1_0BB472DC0AD658C2_OFFSET UNITYSDK_OFFSET(0x91EBB30)
#define CLASS_1_1188AF8BD7013432_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x91EBA50)
#define CLASS_1_1188AF8BD7013432_METHOD_1_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0x91EB3F0)
#define CLASS_1_1188AF8BD7013432_METHOD_1_1B609003A2DB539A_OFFSET UNITYSDK_OFFSET(0x91EBCF0)
#define CLASS_1_1188AF8BD7013432_METHOD_1_1EBB7D682BEAC704_OFFSET UNITYSDK_OFFSET(0x91EACF0)
#define CLASS_1_1188AF8BD7013432_METHOD_1_283DA224BE06DA9F_OFFSET UNITYSDK_OFFSET(0x91EB1B0)
#define CLASS_1_1188AF8BD7013432_METHOD_1_320E60E9441D6128_OFFSET UNITYSDK_OFFSET(0x91EB920)
#define CLASS_1_1188AF8BD7013432_METHOD_1_5800B8C2CE59928F_OFFSET UNITYSDK_OFFSET(0x91EB6D0)
#define CLASS_1_1188AF8BD7013432_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x91EBCB0)
#define CLASS_1_1188AF8BD7013432_METHOD_1_ADF4AD3331B4D7AD_1_OFFSET UNITYSDK_OFFSET(0x91EB680)
#define CLASS_1_1188AF8BD7013432_METHOD_1_ADF4AD3331B4D7AD_2_OFFSET UNITYSDK_OFFSET(0x91EBC50)
#define CLASS_1_1188AF8BD7013432_METHOD_1_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x91EB630)
#define CLASS_1_1188AF8BD7013432_METHOD_1_AFAEEA2A265C17B6_OFFSET UNITYSDK_OFFSET(0x91EB110)
#define CLASS_1_1188AF8BD7013432_METHOD_1_B3A88D7849969A71_OFFSET UNITYSDK_OFFSET(0x91EB9E0)
#define CLASS_1_1188AF8BD7013432_METHOD_1_CD37BA088172EEF7_OFFSET UNITYSDK_OFFSET(0x91EB5D0)
#define CLASS_1_1188AF8BD7013432_METHOD_1_D70C8B847AF08ADE_OFFSET UNITYSDK_OFFSET(0x91EBF70)
#define CLASS_1_1188AF8BD7013432_METHOD_1_E4FB51E946EDE8A5_OFFSET UNITYSDK_OFFSET(0x91EBFF0)
#define CLASS_1_1188AF8BD7013432_METHOD_1_EBDC7A7D2F421DC3_1_OFFSET UNITYSDK_OFFSET(0x91EBEF0)
#define CLASS_1_1188AF8BD7013432_METHOD_1_EBDC7A7D2F421DC3_OFFSET UNITYSDK_OFFSET(0x91EBE70)
#define CLASS_1_1188AF8BD7013432__CCTOR_OFFSET UNITYSDK_OFFSET(0x91EC0C0)
#define CLASS_1_1188AF8BD7013432__CTOR_OFFSET UNITYSDK_OFFSET(0x91EC0B0)

inline static constexpr unsigned int Class_1_1188AF8BD7013432_TypeDefinitionIndex = 63611;

class Class_1_1188AF8BD7013432 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_18()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1188AF8BD7013432_TypeDefinitionIndex)->GetStaticField(0x68C40);
	}
	::System::Action* Field_1_15; // 0x10
	::RPG::Client::RPGAnimationEvent* Field_1_16; // 0x18
	::System::Collections::Generic::Queue_1<::Class_1_1188AF8BD7013432_ScrollState>* Field_1_17; // 0x20
	::UnityEngine::Transform* Field_1_0; // 0x28
	::UnityEngine::Animation* Field_1_5; // 0x30
	::UnityEngine::UI::Text* Field_1_4; // 0x38
	::UnityEngine::UI::Text* Field_1_3; // 0x40
	::Class_1_1188AF8BD7013432_ScrollType Field_1_2; // 0x48
	::System::Int32 Field_1_11; // 0x4C
	::System::Single Field_1_6; // 0x50
	::System::Int32 Field_1_9; // 0x54
	::System::Single Field_1_7; // 0x58
	::Class_1_1188AF8BD7013432_ScrollState Field_1_14; // 0x5C
	::System::Int32 Field_1_13; // 0x60
	::System::Int32 Field_1_10; // 0x64
	::System::Int32 Field_1_12; // 0x68
	::System::Boolean Field_1_1; // 0x6C
	::System::Boolean Field_1_8; // 0x6D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1188AF8BD7013432__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1188AF8BD7013432__CCTOR_OFFSET))();
	}

	::System::Void Method_1_1EBB7D682BEAC704(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_1188AF8BD7013432_METHOD_1_1EBB7D682BEAC704_OFFSET))(this, a1);
	}

	::System::Void Method_1_AFAEEA2A265C17B6(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1188AF8BD7013432_METHOD_1_AFAEEA2A265C17B6_OFFSET))(this, a1);
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

	::System::Void Method_1_5800B8C2CE59928F(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1188AF8BD7013432_METHOD_1_5800B8C2CE59928F_OFFSET))(this, a1);
	}

	::System::Void Method_1_320E60E9441D6128(::System::Char a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + CLASS_1_1188AF8BD7013432_METHOD_1_320E60E9441D6128_OFFSET))(this, a1);
	}

	::System::Void Method_1_B3A88D7849969A71(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1188AF8BD7013432_METHOD_1_B3A88D7849969A71_OFFSET))(this, a1);
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

	::System::Single Method_1_1B609003A2DB539A()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1188AF8BD7013432_METHOD_1_1B609003A2DB539A_OFFSET))(this);
	}

	::System::Void Method_1_EBDC7A7D2F421DC3(::System::Single a1, ::System::Int32 a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_1188AF8BD7013432_METHOD_1_EBDC7A7D2F421DC3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_EBDC7A7D2F421DC3_1(::System::Single a1, ::System::Int32 a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_1188AF8BD7013432_METHOD_1_EBDC7A7D2F421DC3_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_D70C8B847AF08ADE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1188AF8BD7013432_METHOD_1_D70C8B847AF08ADE_OFFSET))(this);
	}

	::System::String* Method_1_059BD73D68C71853(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1188AF8BD7013432_METHOD_1_059BD73D68C71853_OFFSET))(this, a1);
	}

	::System::Void Method_1_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1188AF8BD7013432_METHOD_1_17BD30EFE8176014_OFFSET))(this);
	}

	::System::String* Method_1_0BB472DC0AD658C2(::Class_1_1188AF8BD7013432_ScrollState a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_1188AF8BD7013432_ScrollState))((::PBYTE)hIl2Cpp + CLASS_1_1188AF8BD7013432_METHOD_1_0BB472DC0AD658C2_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_E4FB51E946EDE8A5(::System::Int32 a1, ::Class_1_1188AF8BD7013432_ScrollState a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::Class_1_1188AF8BD7013432_ScrollState))((::PBYTE)hIl2Cpp + CLASS_1_1188AF8BD7013432_METHOD_1_E4FB51E946EDE8A5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_283DA224BE06DA9F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1188AF8BD7013432_METHOD_1_283DA224BE06DA9F_OFFSET))(this);
	}
};
