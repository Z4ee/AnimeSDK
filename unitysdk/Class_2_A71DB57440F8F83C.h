#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/RPG/GameCore/IronTombProgressMode.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_105FC3176DAB4CDC;
class Class_2_64B409BD354CAAA1;
class Class_2_944300AE575F4E90;
class Class_2_DE329998EB9F7AB1;
namespace RPG::Client { class MonoInControlTip; }
namespace RPG::Client { class UIValueChangeAnimation; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_A71DB57440F8F83C_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xB458D90)
#define CLASS_2_A71DB57440F8F83C_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xB458DB0)
#define CLASS_2_A71DB57440F8F83C_METHOD_2_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0xB458F90)
#define CLASS_2_A71DB57440F8F83C_METHOD_2_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xB458DF0)
#define CLASS_2_A71DB57440F8F83C_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xB458F00)
#define CLASS_2_A71DB57440F8F83C_METHOD_2_3C4BE7D0653AE1B0_OFFSET UNITYSDK_OFFSET(0xB4597F0)
#define CLASS_2_A71DB57440F8F83C_METHOD_2_6E6682ED9FD6F719_OFFSET UNITYSDK_OFFSET(0xB459540)
#define CLASS_2_A71DB57440F8F83C_METHOD_2_A05498267EE1C590_OFFSET UNITYSDK_OFFSET(0xB459490)
#define CLASS_2_A71DB57440F8F83C_METHOD_2_AFC8215C57A0845A_OFFSET UNITYSDK_OFFSET(0xB458E40)
#define CLASS_2_A71DB57440F8F83C_METHOD_2_C764E5A33B3C4F12_OFFSET UNITYSDK_OFFSET(0xB4597A0)
#define CLASS_2_A71DB57440F8F83C_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xB458DA0)
#define CLASS_2_A71DB57440F8F83C__CTOR_OFFSET UNITYSDK_OFFSET(0xB459960)
#define CLASS_2_A71DB57440F8F83C__ONBIND_OFFSET UNITYSDK_OFFSET(0xB458CA0)
#define CLASS_2_A71DB57440F8F83C__ONTICK_OFFSET UNITYSDK_OFFSET(0xB459080)

inline static constexpr unsigned int Class_2_A71DB57440F8F83C_TypeDefinitionIndex = 71703;

class Class_2_A71DB57440F8F83C : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	// static const ::System::String* PENODFJKLGN; // 0x0
	::Class_2_DE329998EB9F7AB1* IDPANBOMBCE; // 0x60
	::RPG::Client::MonoInControlTip* HBHIMMJCGAA; // 0x68
	::Class_2_944300AE575F4E90* ADENBFMPHMB; // 0x70
	::Class_2_64B409BD354CAAA1* CGNEEONCEBG; // 0x78
	::RPG::Client::UIValueChangeAnimation* CGJKPIEFBKB; // 0x80
	::Class_1_105FC3176DAB4CDC* IGHAHBNLIJA; // 0x88
	::System::Nullable_1<::RPG::GameCore::IronTombProgressMode> NCNHCOBEHPL; // 0x90
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

	::System::Void Method_2_AFC8215C57A0845A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A71DB57440F8F83C_METHOD_2_AFC8215C57A0845A_OFFSET))(this);
	}

	::System::Void Method_2_6E6682ED9FD6F719()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A71DB57440F8F83C_METHOD_2_6E6682ED9FD6F719_OFFSET))(this);
	}

	::System::Void Method_2_3C4BE7D0653AE1B0(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A71DB57440F8F83C_METHOD_2_3C4BE7D0653AE1B0_OFFSET))(this, a1);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A71DB57440F8F83C_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::RPG::GameCore::IronTombProgressMode Method_2_C764E5A33B3C4F12()
	{
		return ((::RPG::GameCore::IronTombProgressMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A71DB57440F8F83C_METHOD_2_C764E5A33B3C4F12_OFFSET))(this);
	}
};
