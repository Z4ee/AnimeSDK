#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/RPG/GameCore/StageType.h"

class Class_2_3744C9F200AC03F4_Class_1_81099EFECC2F2A3F;
namespace RPG::Client { class RPGAnimationEvent; }
namespace RPG::GameCore { class BattleInstance; }
namespace UnityEngine { class Animation; }

#define CLASS_2_3744C9F200AC03F4_METHOD_2_79CDA2B709EE164A_OFFSET UNITYSDK_OFFSET(0x18475990)
#define CLASS_2_3744C9F200AC03F4_METHOD_2_A59F33F8CA7F3A80_OFFSET UNITYSDK_OFFSET(0x184756A0)
#define CLASS_2_3744C9F200AC03F4_METHOD_2_B549F04EA33A764B_OFFSET UNITYSDK_OFFSET(0x18475500)
#define CLASS_2_3744C9F200AC03F4_METHOD_2_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x18475790)
#define CLASS_2_3744C9F200AC03F4_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18475950)
#define CLASS_2_3744C9F200AC03F4__CTOR_OFFSET UNITYSDK_OFFSET(0x18475A00)
#define CLASS_2_3744C9F200AC03F4__ONBIND_OFFSET UNITYSDK_OFFSET(0x18475630)

inline static constexpr unsigned int Class_2_3744C9F200AC03F4_TypeDefinitionIndex = 71976;

class Class_2_3744C9F200AC03F4 : public ::Class_1_34917908B7833130
{
public:
	::RPG::GameCore::BattleInstance* CKPCDFOHJIE; // 0x60
	::UnityEngine::Animation* JPHOOFFIAAH; // 0x68
	::Il2CppArray<::Class_2_3744C9F200AC03F4_Class_1_81099EFECC2F2A3F*>* DNJLAHPLLFB; // 0x70
	::RPG::Client::RPGAnimationEvent* DDCODMNKPIP; // 0x78
	::RPG::GameCore::StageType LFJEGJMCEBD; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3744C9F200AC03F4__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_B549F04EA33A764B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3744C9F200AC03F4_METHOD_2_B549F04EA33A764B_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3744C9F200AC03F4__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_A59F33F8CA7F3A80()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3744C9F200AC03F4_METHOD_2_A59F33F8CA7F3A80_OFFSET))(this);
	}

	::System::Void Method_2_D7852DE078ACC1F1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3744C9F200AC03F4_METHOD_2_D7852DE078ACC1F1_OFFSET))(this);
	}

	static ::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_3744C9F200AC03F4_METHOD_2_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_2_79CDA2B709EE164A(::Class_2_3744C9F200AC03F4* a1)
	{
		return ((::System::Void(*)(::Class_2_3744C9F200AC03F4*))((::PBYTE)hIl2Cpp + CLASS_2_3744C9F200AC03F4_METHOD_2_79CDA2B709EE164A_OFFSET))(a1);
	}
};
