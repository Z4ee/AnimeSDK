#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_07BF77E88FF3817D;
namespace RPG::Client { class LocalizedTextSDF; }
namespace RPG::Client { class RPGAnimationEvent; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationState; }
namespace UnityEngine { class Transform; }

#define CLASS_2_FC7D7163762399A0_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x17CA3620)
#define CLASS_2_FC7D7163762399A0_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x17CA3640)
#define CLASS_2_FC7D7163762399A0_METHOD_2_00E2AE10E39F8790_OFFSET UNITYSDK_OFFSET(0x17CA3CA0)
#define CLASS_2_FC7D7163762399A0_METHOD_2_0D5375C87D863D2A_OFFSET UNITYSDK_OFFSET(0x17CA3A40)
#define CLASS_2_FC7D7163762399A0_METHOD_2_1C6AD2DA62FB6EB1_OFFSET UNITYSDK_OFFSET(0x17CA3720)
#define CLASS_2_FC7D7163762399A0_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x17CA39B0)
#define CLASS_2_FC7D7163762399A0_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x17CA41A0)
#define CLASS_2_FC7D7163762399A0_METHOD_2_78E5D10876D30BCC_OFFSET UNITYSDK_OFFSET(0x17CA3870)
#define CLASS_2_FC7D7163762399A0_METHOD_2_848FDD59AB054F3D_OFFSET UNITYSDK_OFFSET(0x17CA3950)
#define CLASS_2_FC7D7163762399A0_METHOD_2_8EB41A29F1F75609_OFFSET UNITYSDK_OFFSET(0x17CA3DA0)
#define CLASS_2_FC7D7163762399A0_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x17CA36A0)
#define CLASS_2_FC7D7163762399A0_METHOD_2_D737CD2779D51A4E_OFFSET UNITYSDK_OFFSET(0x17CA4050)
#define CLASS_2_FC7D7163762399A0_METHOD_2_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x17CA3820)
#define CLASS_2_FC7D7163762399A0_METHOD_2_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x17CA3A00)
#define CLASS_2_FC7D7163762399A0_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x17CA3630)
#define CLASS_2_FC7D7163762399A0__CTOR_OFFSET UNITYSDK_OFFSET(0x17CA4210)
#define CLASS_2_FC7D7163762399A0__ONBIND_OFFSET UNITYSDK_OFFSET(0x17CA2EE0)
#define CLASS_2_FC7D7163762399A0__ONTICK_OFFSET UNITYSDK_OFFSET(0x17CA3B20)

inline static constexpr unsigned int Class_2_FC7D7163762399A0_TypeDefinitionIndex = 72048;

class Class_2_FC7D7163762399A0 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	// static const ::System::Int32 JJBKIKNKMFA = 0xE; // 0x0
	// static const ::System::String* KLOHNJIJOAF; // 0x0
	// static const ::System::String* LJIKDLEPPKE; // 0x0
	// static const ::System::String* NGLELEEFOOI; // 0x0
	// static const ::System::String* LKFJNJJEBGF; // 0x0
	// static const ::System::String* EJLLLIKHKMI; // 0x0
	// static const ::System::String* JKBDJHCFKEP; // 0x0
	// static const ::System::String* KKHODKIKGED; // 0x0
	// static const ::System::String* GCJJPMICABD; // 0x0
	// static const ::System::String* GDFKDDLDACB; // 0x0
	// static const ::System::String* DJNCPMIDDJE; // 0x0
	// static const ::System::String* EFGHHFABHAJ; // 0x0
	// static const ::System::String* NEELGIMCPKF; // 0x0
	// static const ::System::String* OJHOJAAJLHN; // 0x0
	// static const ::System::String* EOIFNNGOPOL; // 0x0
	// static const ::System::String* CANLIEKIPJG; // 0x0
	// static const ::System::String* OAIMKFCDGDB; // 0x0
	// static const ::System::String* AALHGBPMDOL; // 0x0
	::System::Action* PCFCFJLHLNF; // 0x60
	::Il2CppArray<::RPG::Client::LocalizedTextSDF*>* PCIIKFOIAJA; // 0x68
	::UnityEngine::Animation* JPHOOFFIAAH; // 0x70
	::UnityEngine::AnimationState* DFGNANDJMGI; // 0x78
	::RPG::Client::RPGAnimationEvent* MEDGLNFKGDC; // 0x80
	::UnityEngine::Transform* BFLJCMLOINL; // 0x88
	::Class_1_07BF77E88FF3817D* GIEOINBJPBL; // 0x90
	::UnityEngine::Animation* GNCPKHINOJL; // 0x98
	::System::Boolean DMBFJAEAGPL; // 0xA0
	::System::Boolean BJPOBNAADML; // 0xA1
	::System::Boolean MLEJJCMIOEC; // 0xA2
	::System::Int32 _Index_k__BackingField; // 0xA4

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

	::System::Void Method_2_1C6AD2DA62FB6EB1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC7D7163762399A0_METHOD_2_1C6AD2DA62FB6EB1_OFFSET))(this);
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

	::Class_1_34917908B7833130* Method_2_F8B73ECE7F883AC1()
	{
		return ((::Class_1_34917908B7833130*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC7D7163762399A0_METHOD_2_F8B73ECE7F883AC1_OFFSET))(this);
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
