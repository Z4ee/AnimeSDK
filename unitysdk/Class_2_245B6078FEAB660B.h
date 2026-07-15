#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_07BF77E88FF3817D;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class RPGAnimationEvent; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationState; }
namespace UnityEngine { class Transform; }

#define CLASS_2_245B6078FEAB660B_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x16AE3C90)
#define CLASS_2_245B6078FEAB660B_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x16AE3CB0)
#define CLASS_2_245B6078FEAB660B_METHOD_2_0D5375C87D863D2A_OFFSET UNITYSDK_OFFSET(0x16AE40B0)
#define CLASS_2_245B6078FEAB660B_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x16AE4020)
#define CLASS_2_245B6078FEAB660B_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x16AE4600)
#define CLASS_2_245B6078FEAB660B_METHOD_2_4BAC33AC17F96A1C_OFFSET UNITYSDK_OFFSET(0x16AE4450)
#define CLASS_2_245B6078FEAB660B_METHOD_2_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0x16AE4310)
#define CLASS_2_245B6078FEAB660B_METHOD_2_5587AE4B03E68C58_OFFSET UNITYSDK_OFFSET(0x16AE3D90)
#define CLASS_2_245B6078FEAB660B_METHOD_2_78E5D10876D30BCC_OFFSET UNITYSDK_OFFSET(0x16AE3EE0)
#define CLASS_2_245B6078FEAB660B_METHOD_2_848FDD59AB054F3D_OFFSET UNITYSDK_OFFSET(0x16AE3FC0)
#define CLASS_2_245B6078FEAB660B_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x16AE3D10)
#define CLASS_2_245B6078FEAB660B_METHOD_2_D737CD2779D51A4E_OFFSET UNITYSDK_OFFSET(0x16AE44B0)
#define CLASS_2_245B6078FEAB660B_METHOD_2_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x16AE3E90)
#define CLASS_2_245B6078FEAB660B_METHOD_2_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x16AE4070)
#define CLASS_2_245B6078FEAB660B_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x16AE3CA0)
#define CLASS_2_245B6078FEAB660B__CTOR_OFFSET UNITYSDK_OFFSET(0x16AE4670)
#define CLASS_2_245B6078FEAB660B__ONBIND_OFFSET UNITYSDK_OFFSET(0x16AE3BB0)
#define CLASS_2_245B6078FEAB660B__ONTICK_OFFSET UNITYSDK_OFFSET(0x16AE4190)

inline static constexpr unsigned int Class_2_245B6078FEAB660B_TypeDefinitionIndex = 68233;

class Class_2_245B6078FEAB660B : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	::Class_1_07BF77E88FF3817D* Field_2_4; // 0x60
	::UnityEngine::Animation* Field_2_5; // 0x68
	::UnityEngine::AnimationState* Field_2_6; // 0x70
	::System::Action* Field_2_7; // 0x78
	::RPG::Client::LocalizedText* Field_2_8; // 0x80
	::UnityEngine::Animation* Field_2_9; // 0x88
	::RPG::Client::RPGAnimationEvent* Field_2_10; // 0x90
	::System::Int32 _Index_k__BackingField; // 0x98
	::System::Boolean Field_2_12; // 0x9C
	::System::Boolean Field_2_13; // 0x9D
	::System::Boolean Field_2_14; // 0x9E

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

	::System::Void Method_2_5587AE4B03E68C58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_245B6078FEAB660B_METHOD_2_5587AE4B03E68C58_OFFSET))(this);
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

	::Class_1_CA217ABF4E3B4F3F* Method_2_F8B73ECE7F883AC1()
	{
		return ((::Class_1_CA217ABF4E3B4F3F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_245B6078FEAB660B_METHOD_2_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Void Method_2_0D5375C87D863D2A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_245B6078FEAB660B_METHOD_2_0D5375C87D863D2A_OFFSET))(this);
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
