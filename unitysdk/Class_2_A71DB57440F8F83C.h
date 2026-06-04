#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/IronTombProgressMode.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_105FC3176DAB4CDC;
class Class_2_08B1DF5A17A0044C;
class Class_2_3C3E4D0397D52DE7;
class Class_2_64B409BD354CAAA1;
namespace RPG::Client { class MonoInControlTip; }
namespace RPG::Client { class UIValueChangeAnimation; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_A71DB57440F8F83C_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1458C5D0)
#define CLASS_2_A71DB57440F8F83C_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x1458C5F0)
#define CLASS_2_A71DB57440F8F83C_METHOD_2_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x1458C810)
#define CLASS_2_A71DB57440F8F83C_METHOD_2_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x1458C600)
#define CLASS_2_A71DB57440F8F83C_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1458C780)
#define CLASS_2_A71DB57440F8F83C_METHOD_2_3C4BE7D0653AE1B0_OFFSET UNITYSDK_OFFSET(0x1458CF90)
#define CLASS_2_A71DB57440F8F83C_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x1458D200)
#define CLASS_2_A71DB57440F8F83C_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1458D1A0)
#define CLASS_2_A71DB57440F8F83C_METHOD_2_777C630B90A28EF1_OFFSET UNITYSDK_OFFSET(0x1458C650)
#define CLASS_2_A71DB57440F8F83C_METHOD_2_82B6342ECB6008E8_OFFSET UNITYSDK_OFFSET(0x1458CF70)
#define CLASS_2_A71DB57440F8F83C_METHOD_2_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x1458CDC0)
#define CLASS_2_A71DB57440F8F83C_METHOD_2_A05498267EE1C590_OFFSET UNITYSDK_OFFSET(0x1458CD10)
#define CLASS_2_A71DB57440F8F83C_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x1458C5E0)
#define CLASS_2_A71DB57440F8F83C__CTOR_OFFSET UNITYSDK_OFFSET(0x1458D100)
#define CLASS_2_A71DB57440F8F83C__ONBIND_OFFSET UNITYSDK_OFFSET(0x1458C4E0)
#define CLASS_2_A71DB57440F8F83C__ONTICK_OFFSET UNITYSDK_OFFSET(0x1458C900)
#define CLASS_2_A71DB57440F8F83C___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x1458D140)
#define CLASS_2_A71DB57440F8F83C___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x1458D260)

inline static constexpr unsigned int Class_2_A71DB57440F8F83C_TypeDefinitionIndex = 67013;

class Class_2_A71DB57440F8F83C : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::Class_2_64B409BD354CAAA1* Field_2_1; // 0x60
	::RPG::Client::MonoInControlTip* Field_2_2; // 0x68
	::Class_2_3C3E4D0397D52DE7* Field_2_3; // 0x70
	::RPG::Client::UIValueChangeAnimation* Field_2_4; // 0x78
	::Class_2_08B1DF5A17A0044C* Field_2_5; // 0x80
	::Class_1_105FC3176DAB4CDC* Field_2_6; // 0x88
	::System::Nullable_1<::RPG::GameCore::IronTombProgressMode> Field_2_7; // 0x90
	::System::Int32 _Index_k__BackingField; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A71DB57440F8F83C__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A71DB57440F8F83C__ONBIND_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A71DB57440F8F83C_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A71DB57440F8F83C_SET_INDEX_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A71DB57440F8F83C_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A71DB57440F8F83C_METHOD_2_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_2_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A71DB57440F8F83C_METHOD_2_0865E94460F11643_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A71DB57440F8F83C__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_A05498267EE1C590(::Class_1_105FC3176DAB4CDC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_105FC3176DAB4CDC*))((::PBYTE)hIl2Cpp + CLASS_2_A71DB57440F8F83C_METHOD_2_A05498267EE1C590_OFFSET))(this, a1);
	}

	::System::Void Method_2_777C630B90A28EF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A71DB57440F8F83C_METHOD_2_777C630B90A28EF1_OFFSET))(this);
	}

	::System::Void Method_2_8D61BE16C9463302()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A71DB57440F8F83C_METHOD_2_8D61BE16C9463302_OFFSET))(this);
	}

	::System::Void Method_2_3C4BE7D0653AE1B0(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A71DB57440F8F83C_METHOD_2_3C4BE7D0653AE1B0_OFFSET))(this, a1);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A71DB57440F8F83C_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::RPG::GameCore::IronTombProgressMode Method_2_82B6342ECB6008E8()
	{
		return ((::RPG::GameCore::IronTombProgressMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A71DB57440F8F83C_METHOD_2_82B6342ECB6008E8_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A71DB57440F8F83C___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A71DB57440F8F83C_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A71DB57440F8F83C_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A71DB57440F8F83C___IFIXBASEPROXY__ONTICK_OFFSET))(this, a1);
	}
};
