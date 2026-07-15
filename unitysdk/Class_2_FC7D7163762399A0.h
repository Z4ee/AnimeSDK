#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_07BF77E88FF3817D;
namespace RPG::Client { class LocalizedTextSDF; }
namespace RPG::Client { class RPGAnimationEvent; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationState; }
namespace UnityEngine { class Transform; }

#define CLASS_2_FC7D7163762399A0_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1562CBB0)
#define CLASS_2_FC7D7163762399A0_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x1562CBD0)
#define CLASS_2_FC7D7163762399A0_METHOD_2_00E2AE10E39F8790_OFFSET UNITYSDK_OFFSET(0x1562D220)
#define CLASS_2_FC7D7163762399A0_METHOD_2_0D5375C87D863D2A_OFFSET UNITYSDK_OFFSET(0x1562CFD0)
#define CLASS_2_FC7D7163762399A0_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1562CF40)
#define CLASS_2_FC7D7163762399A0_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1562D730)
#define CLASS_2_FC7D7163762399A0_METHOD_2_5587AE4B03E68C58_OFFSET UNITYSDK_OFFSET(0x1562CCB0)
#define CLASS_2_FC7D7163762399A0_METHOD_2_78E5D10876D30BCC_OFFSET UNITYSDK_OFFSET(0x1562CE00)
#define CLASS_2_FC7D7163762399A0_METHOD_2_848FDD59AB054F3D_OFFSET UNITYSDK_OFFSET(0x1562CEE0)
#define CLASS_2_FC7D7163762399A0_METHOD_2_8EB41A29F1F75609_OFFSET UNITYSDK_OFFSET(0x1562D320)
#define CLASS_2_FC7D7163762399A0_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x1562CC30)
#define CLASS_2_FC7D7163762399A0_METHOD_2_D737CD2779D51A4E_OFFSET UNITYSDK_OFFSET(0x1562D5E0)
#define CLASS_2_FC7D7163762399A0_METHOD_2_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x1562CDB0)
#define CLASS_2_FC7D7163762399A0_METHOD_2_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x1562CF90)
#define CLASS_2_FC7D7163762399A0_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x1562CBC0)
#define CLASS_2_FC7D7163762399A0__CTOR_OFFSET UNITYSDK_OFFSET(0x1562D7A0)
#define CLASS_2_FC7D7163762399A0__ONBIND_OFFSET UNITYSDK_OFFSET(0x1562C490)
#define CLASS_2_FC7D7163762399A0__ONTICK_OFFSET UNITYSDK_OFFSET(0x1562D0B0)

inline static constexpr unsigned int Class_2_FC7D7163762399A0_TypeDefinitionIndex = 68850;

class Class_2_FC7D7163762399A0 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::Int32 Field_2_1 = 0xE; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	// static const ::System::String* Field_2_4; // 0x0
	// static const ::System::String* Field_2_5; // 0x0
	// static const ::System::String* Field_2_6; // 0x0
	// static const ::System::String* Field_2_7; // 0x0
	// static const ::System::String* Field_2_8; // 0x0
	// static const ::System::String* Field_2_9; // 0x0
	// static const ::System::String* Field_2_10; // 0x0
	// static const ::System::String* Field_2_11; // 0x0
	// static const ::System::String* Field_2_12; // 0x0
	// static const ::System::String* Field_2_13; // 0x0
	// static const ::System::String* Field_2_14; // 0x0
	// static const ::System::String* Field_2_15; // 0x0
	// static const ::System::String* Field_2_16; // 0x0
	// static const ::System::String* Field_2_17; // 0x0
	// static const ::System::String* Field_2_18; // 0x0
	::Class_1_07BF77E88FF3817D* Field_2_19; // 0x60
	::UnityEngine::AnimationState* Field_2_20; // 0x68
	::UnityEngine::Transform* Field_2_21; // 0x70
	::System::Action* Field_2_22; // 0x78
	::UnityEngine::Animation* Field_2_23; // 0x80
	::Il2CppArray<::RPG::Client::LocalizedTextSDF*>* Field_2_24; // 0x88
	::UnityEngine::Animation* Field_2_25; // 0x90
	::RPG::Client::RPGAnimationEvent* Field_2_26; // 0x98
	::System::Int32 _Index_k__BackingField; // 0xA0
	::System::Boolean Field_2_28; // 0xA4
	::System::Boolean Field_2_29; // 0xA5
	::System::Boolean Field_2_30; // 0xA6

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC7D7163762399A0__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC7D7163762399A0__ONBIND_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC7D7163762399A0_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FC7D7163762399A0_SET_INDEX_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC7D7163762399A0_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_FC7D7163762399A0_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void Method_2_5587AE4B03E68C58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC7D7163762399A0_METHOD_2_5587AE4B03E68C58_OFFSET))(this);
	}

	::System::Void Method_2_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC7D7163762399A0_METHOD_2_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Void Method_2_78E5D10876D30BCC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FC7D7163762399A0_METHOD_2_78E5D10876D30BCC_OFFSET))(this, a1);
	}

	::System::Void Method_2_848FDD59AB054F3D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FC7D7163762399A0_METHOD_2_848FDD59AB054F3D_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC7D7163762399A0_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::Class_1_CA217ABF4E3B4F3F* Method_2_F8B73ECE7F883AC1()
	{
		return ((::Class_1_CA217ABF4E3B4F3F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC7D7163762399A0_METHOD_2_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Void Method_2_0D5375C87D863D2A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC7D7163762399A0_METHOD_2_0D5375C87D863D2A_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FC7D7163762399A0__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_00E2AE10E39F8790()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC7D7163762399A0_METHOD_2_00E2AE10E39F8790_OFFSET))(this);
	}

	::System::Void Method_2_D737CD2779D51A4E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC7D7163762399A0_METHOD_2_D737CD2779D51A4E_OFFSET))(this);
	}

	::System::Void Method_2_8EB41A29F1F75609(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_FC7D7163762399A0_METHOD_2_8EB41A29F1F75609_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC7D7163762399A0_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}
};
