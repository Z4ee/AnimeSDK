#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/IronTombProgressMode.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_105FC3176DAB4CDC;
class Class_2_7F5A5441DC807564;
class Class_2_944300AE575F4E90;
class Class_2_DE329998EB9F7AB1;
namespace RPG::Client { class MonoInControlTip; }
namespace RPG::Client { class UIValueChangeAnimation; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_A71DB57440F8F83C_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x162F19E0)
#define CLASS_2_A71DB57440F8F83C_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x162F1A00)
#define CLASS_2_A71DB57440F8F83C_METHOD_2_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x162F1BE0)
#define CLASS_2_A71DB57440F8F83C_METHOD_2_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x162F1A40)
#define CLASS_2_A71DB57440F8F83C_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x162F1B50)
#define CLASS_2_A71DB57440F8F83C_METHOD_2_3C4BE7D0653AE1B0_OFFSET UNITYSDK_OFFSET(0x162F23C0)
#define CLASS_2_A71DB57440F8F83C_METHOD_2_6E6682ED9FD6F719_OFFSET UNITYSDK_OFFSET(0x162F2130)
#define CLASS_2_A71DB57440F8F83C_METHOD_2_A05498267EE1C590_OFFSET UNITYSDK_OFFSET(0x162F2080)
#define CLASS_2_A71DB57440F8F83C_METHOD_2_C764E5A33B3C4F12_OFFSET UNITYSDK_OFFSET(0x162F2370)
#define CLASS_2_A71DB57440F8F83C_METHOD_2_E26C99C52BC1E654_OFFSET UNITYSDK_OFFSET(0x162F1A90)
#define CLASS_2_A71DB57440F8F83C_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x162F19F0)
#define CLASS_2_A71DB57440F8F83C__CTOR_OFFSET UNITYSDK_OFFSET(0x162F2530)
#define CLASS_2_A71DB57440F8F83C__ONBIND_OFFSET UNITYSDK_OFFSET(0x162F18F0)
#define CLASS_2_A71DB57440F8F83C__ONTICK_OFFSET UNITYSDK_OFFSET(0x162F1CD0)

inline static constexpr unsigned int Class_2_A71DB57440F8F83C_TypeDefinitionIndex = 68457;

class Class_2_A71DB57440F8F83C : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::RPG::Client::MonoInControlTip* Field_2_1; // 0x60
	::Class_2_DE329998EB9F7AB1* Field_2_2; // 0x68
	::Class_1_105FC3176DAB4CDC* Field_2_3; // 0x70
	::RPG::Client::UIValueChangeAnimation* Field_2_4; // 0x78
	::Class_2_944300AE575F4E90* Field_2_5; // 0x80
	::Class_2_7F5A5441DC807564* Field_2_6; // 0x88
	::System::Int32 _Index_k__BackingField; // 0x90
	::System::Nullable_1<::RPG::GameCore::IronTombProgressMode> Field_2_8; // 0x94

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

	::System::Void Method_2_E26C99C52BC1E654()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A71DB57440F8F83C_METHOD_2_E26C99C52BC1E654_OFFSET))(this);
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
