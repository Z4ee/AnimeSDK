#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/StageType.h"

class Class_2_3744C9F200AC03F4_Class_1_81099EFECC2F2A3F;
namespace RPG::Client { class RPGAnimationEvent; }
namespace RPG::GameCore { class BattleInstance; }
namespace UnityEngine { class Animation; }

#define CLASS_2_3744C9F200AC03F4_METHOD_2_79CDA2B709EE164A_OFFSET UNITYSDK_OFFSET(0x17852490)
#define CLASS_2_3744C9F200AC03F4_METHOD_2_A59F33F8CA7F3A80_OFFSET UNITYSDK_OFFSET(0x178521A0)
#define CLASS_2_3744C9F200AC03F4_METHOD_2_B549F04EA33A764B_OFFSET UNITYSDK_OFFSET(0x17852000)
#define CLASS_2_3744C9F200AC03F4_METHOD_2_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x17852290)
#define CLASS_2_3744C9F200AC03F4_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x17852450)
#define CLASS_2_3744C9F200AC03F4__CTOR_OFFSET UNITYSDK_OFFSET(0x17852500)
#define CLASS_2_3744C9F200AC03F4__ONBIND_OFFSET UNITYSDK_OFFSET(0x17852130)

inline static constexpr unsigned int Class_2_3744C9F200AC03F4_TypeDefinitionIndex = 68778;

class Class_2_3744C9F200AC03F4 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::RPG::GameCore::BattleInstance* Field_2_0; // 0x60
	::UnityEngine::Animation* Field_2_1; // 0x68
	::RPG::Client::RPGAnimationEvent* Field_2_2; // 0x70
	::Il2CppArray<::Class_2_3744C9F200AC03F4_Class_1_81099EFECC2F2A3F*>* Field_2_3; // 0x78
	::RPG::GameCore::StageType Field_2_4; // 0x80

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
