#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_2F9111B69E79DBBA;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class RPGAnimationEvent; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationState; }
namespace UnityEngine { class Transform; }

#define CLASS_2_E8A526B5D529DBB0_2_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x10032A60)
#define CLASS_2_E8A526B5D529DBB0_2_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x10032A80)
#define CLASS_2_E8A526B5D529DBB0_2_METHOD_2_01B78B6B0E7CB7E5_OFFSET UNITYSDK_OFFSET(0x10032E60)
#define CLASS_2_E8A526B5D529DBB0_2_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x10032DD0)
#define CLASS_2_E8A526B5D529DBB0_2_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x10033600)
#define CLASS_2_E8A526B5D529DBB0_2_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x100335A0)
#define CLASS_2_E8A526B5D529DBB0_2_METHOD_2_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x10032C40)
#define CLASS_2_E8A526B5D529DBB0_2_METHOD_2_8F60F8EA8A4B6E2F_OFFSET UNITYSDK_OFFSET(0x100332F0)
#define CLASS_2_E8A526B5D529DBB0_2_METHOD_2_941C404C800CB723_OFFSET UNITYSDK_OFFSET(0x10033240)
#define CLASS_2_E8A526B5D529DBB0_2_METHOD_2_9A6DA36CCAE7D188_OFFSET UNITYSDK_OFFSET(0x10033430)
#define CLASS_2_E8A526B5D529DBB0_2_METHOD_2_B7797AF42220DD8F_OFFSET UNITYSDK_OFFSET(0x10032D70)
#define CLASS_2_E8A526B5D529DBB0_2_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x10032AE0)
#define CLASS_2_E8A526B5D529DBB0_2_METHOD_2_C436A2848092EB88_OFFSET UNITYSDK_OFFSET(0x10032B60)
#define CLASS_2_E8A526B5D529DBB0_2_METHOD_2_C89A41A14F7CCD91_OFFSET UNITYSDK_OFFSET(0x10033530)
#define CLASS_2_E8A526B5D529DBB0_2_METHOD_2_E52129E82CD2D7F8_OFFSET UNITYSDK_OFFSET(0x100330B0)
#define CLASS_2_E8A526B5D529DBB0_2_METHOD_2_F07808AF19FA033A_OFFSET UNITYSDK_OFFSET(0x10032C90)
#define CLASS_2_E8A526B5D529DBB0_2_METHOD_2_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x10032E20)
#define CLASS_2_E8A526B5D529DBB0_2_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x10032A70)
#define CLASS_2_E8A526B5D529DBB0_2__CTOR_OFFSET UNITYSDK_OFFSET(0x10033490)
#define CLASS_2_E8A526B5D529DBB0_2__ONBIND_OFFSET UNITYSDK_OFFSET(0x10032980)
#define CLASS_2_E8A526B5D529DBB0_2__ONTICK_OFFSET UNITYSDK_OFFSET(0x10032F20)
#define CLASS_2_E8A526B5D529DBB0_2___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x100334D0)
#define CLASS_2_E8A526B5D529DBB0_2___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x10033660)

inline static constexpr unsigned int Class_2_E8A526B5D529DBB0_2_TypeDefinitionIndex = 65863;

class Class_2_E8A526B5D529DBB0_2 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_6; // 0x0
	// static const ::System::String* Field_2_7; // 0x0
	// static const ::System::String* Field_2_8; // 0x0
	::RPG::Client::RPGAnimationEvent* Field_2_5; // 0x60
	::Class_1_2F9111B69E79DBBA* Field_2_12; // 0x68
	::RPG::Client::LocalizedText* Field_2_4; // 0x70
	::UnityEngine::Animation* Field_2_1; // 0x78
	::UnityEngine::Animation* Field_2_2; // 0x80
	::System::Action* Field_2_13; // 0x88
	::UnityEngine::AnimationState* Field_2_3; // 0x90
	::System::Int32 _Index_k__BackingField; // 0x98
	::System::Boolean Field_2_11; // 0x9C
	::System::Boolean Field_2_14; // 0x9D
	::System::Boolean Field_2_10; // 0x9E

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_2__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_2__ONBIND_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_2_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_2_SET_INDEX_OFFSET))(this, value);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_2_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_2_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void Method_2_C436A2848092EB88()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_2_METHOD_2_C436A2848092EB88_OFFSET))(this);
	}

	::System::Void Method_2_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_2_METHOD_2_775B6D644F07B554_OFFSET))(this);
	}

	::System::Void Method_2_F07808AF19FA033A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_2_METHOD_2_F07808AF19FA033A_OFFSET))(this, a1);
	}

	::System::Void Method_2_B7797AF42220DD8F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_2_METHOD_2_B7797AF42220DD8F_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_2_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::Class_1_CA217ABF4E3B4F3F* Method_2_F8B73ECE7F883AC1()
	{
		return ((::Class_1_CA217ABF4E3B4F3F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_2_METHOD_2_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Void Method_2_01B78B6B0E7CB7E5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_2_METHOD_2_01B78B6B0E7CB7E5_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_2__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_E52129E82CD2D7F8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_2_METHOD_2_E52129E82CD2D7F8_OFFSET))(this);
	}

	::System::Void Method_2_8F60F8EA8A4B6E2F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_2_METHOD_2_8F60F8EA8A4B6E2F_OFFSET))(this);
	}

	::System::Void Method_2_941C404C800CB723(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_2_METHOD_2_941C404C800CB723_OFFSET))(this, a1);
	}

	::System::Void Method_2_9A6DA36CCAE7D188()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_2_METHOD_2_9A6DA36CCAE7D188_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_2___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_C89A41A14F7CCD91(::Struct_2_96F8F0A04B900A9E P0)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_2_METHOD_2_C89A41A14F7CCD91_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_2_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_2_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_2___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}
};
