#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_0_16E4307DCC419505_1116;
class Class_2_B71FA21BC121C2FA;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_2_4BE85D776A3820AA_METHOD_2_04E967564E8CD234_OFFSET UNITYSDK_OFFSET(0xC0406D0)
#define CLASS_2_4BE85D776A3820AA_METHOD_2_09AB8FC0B8BA1B6E_OFFSET UNITYSDK_OFFSET(0xC041790)
#define CLASS_2_4BE85D776A3820AA_METHOD_2_28F2C3729E175F1C_OFFSET UNITYSDK_OFFSET(0xC041510)
#define CLASS_2_4BE85D776A3820AA_METHOD_2_30C2D368B2361B2C_OFFSET UNITYSDK_OFFSET(0xC040C80)
#define CLASS_2_4BE85D776A3820AA_METHOD_2_382C1CDB29F43D9C_OFFSET UNITYSDK_OFFSET(0xC041F50)
#define CLASS_2_4BE85D776A3820AA_METHOD_2_4BD2BFB48FF90060_OFFSET UNITYSDK_OFFSET(0xC041190)
#define CLASS_2_4BE85D776A3820AA_METHOD_2_73FB9DE4849AF1B5_OFFSET UNITYSDK_OFFSET(0xC0410E0)
#define CLASS_2_4BE85D776A3820AA_METHOD_2_7AEA4B2B25797605_OFFSET UNITYSDK_OFFSET(0xC041370)
#define CLASS_2_4BE85D776A3820AA_METHOD_2_7D125704D7ED09B7_OFFSET UNITYSDK_OFFSET(0xC040B00)
#define CLASS_2_4BE85D776A3820AA_METHOD_2_8C6E66D260CC37AD_OFFSET UNITYSDK_OFFSET(0xC0408B0)
#define CLASS_2_4BE85D776A3820AA_METHOD_2_AEE8799035F6C4DD_OFFSET UNITYSDK_OFFSET(0xC042040)
#define CLASS_2_4BE85D776A3820AA_METHOD_2_B3B40D6CF776C6B6_OFFSET UNITYSDK_OFFSET(0xC040A60)
#define CLASS_2_4BE85D776A3820AA_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0xC0405B0)
#define CLASS_2_4BE85D776A3820AA_METHOD_2_BF9C25E762BD53B3_OFFSET UNITYSDK_OFFSET(0xC040630)
#define CLASS_2_4BE85D776A3820AA_METHOD_2_D34CDF94AA551FF3_OFFSET UNITYSDK_OFFSET(0xC041E40)
#define CLASS_2_4BE85D776A3820AA_METHOD_2_E10F3359B5E0D724_OFFSET UNITYSDK_OFFSET(0xC040F80)
#define CLASS_2_4BE85D776A3820AA_METHOD_2_E7955EC696E7ED3A_OFFSET UNITYSDK_OFFSET(0xC0412C0)
#define CLASS_2_4BE85D776A3820AA_METHOD_2_FB59E2FA262C7B16_OFFSET UNITYSDK_OFFSET(0xC0418E0)
#define CLASS_2_4BE85D776A3820AA__CTOR_OFFSET UNITYSDK_OFFSET(0xC042250)
#define CLASS_2_4BE85D776A3820AA__ONBIND_OFFSET UNITYSDK_OFFSET(0xC040340)

inline static constexpr unsigned int Class_2_4BE85D776A3820AA_TypeDefinitionIndex = 71823;

class Class_2_4BE85D776A3820AA : public ::Class_1_34917908B7833130
{
public:
	::Struct_2_96F8F0A04B900A9E PMECLILMEDH; // 0x60
	::UnityEngine::Transform* FHDELHMLMFO; // 0x68
	::UnityEngine::Transform* AIDIMEHEEMI; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_1116*>* IIJHLCMENFP; // 0x78
	::Class_0_16E4307DCC419505_1116* EHKGJMGCEOL; // 0x80
	::Class_2_B71FA21BC121C2FA* HPADAGJIHAO; // 0x88
	::UnityEngine::Transform* EPBGHBLAOCO; // 0x90
	::System::Boolean IDBHEIBEGBA; // 0x98
	::System::Boolean FHBNNGCEPFD; // 0x99
	::RPG::Client::UISkillIndex FFNBLDFFMCN; // 0x9C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE85D776A3820AA__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE85D776A3820AA__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_4BE85D776A3820AA_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void Method_2_BF9C25E762BD53B3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE85D776A3820AA_METHOD_2_BF9C25E762BD53B3_OFFSET))(this);
	}

	::System::Void Method_2_04E967564E8CD234(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4BE85D776A3820AA_METHOD_2_04E967564E8CD234_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C6E66D260CC37AD(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4BE85D776A3820AA_METHOD_2_8C6E66D260CC37AD_OFFSET))(this, a1);
	}

	::System::Void Method_2_B3B40D6CF776C6B6(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_2_4BE85D776A3820AA_METHOD_2_B3B40D6CF776C6B6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_30C2D368B2361B2C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4BE85D776A3820AA_METHOD_2_30C2D368B2361B2C_OFFSET))(this, a1);
	}

	::System::Void Method_2_E10F3359B5E0D724(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4BE85D776A3820AA_METHOD_2_E10F3359B5E0D724_OFFSET))(this, a1);
	}

	::System::Void Method_2_73FB9DE4849AF1B5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4BE85D776A3820AA_METHOD_2_73FB9DE4849AF1B5_OFFSET))(this, a1);
	}

	::System::Void Method_2_4BD2BFB48FF90060(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4BE85D776A3820AA_METHOD_2_4BD2BFB48FF90060_OFFSET))(this, a1);
	}

	::System::Void Method_2_E7955EC696E7ED3A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_4BE85D776A3820AA_METHOD_2_E7955EC696E7ED3A_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_7AEA4B2B25797605()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE85D776A3820AA_METHOD_2_7AEA4B2B25797605_OFFSET))(this);
	}

	::UnityEngine::RectTransform* Method_2_28F2C3729E175F1C()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE85D776A3820AA_METHOD_2_28F2C3729E175F1C_OFFSET))(this);
	}

	::System::Void Method_2_09AB8FC0B8BA1B6E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4BE85D776A3820AA_METHOD_2_09AB8FC0B8BA1B6E_OFFSET))(this, a1);
	}

	::System::Void Method_2_7D125704D7ED09B7(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_2_4BE85D776A3820AA_METHOD_2_7D125704D7ED09B7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FB59E2FA262C7B16(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_2_4BE85D776A3820AA_METHOD_2_FB59E2FA262C7B16_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_382C1CDB29F43D9C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_4BE85D776A3820AA_METHOD_2_382C1CDB29F43D9C_OFFSET))(this, a1);
	}

	::System::Void Method_2_D34CDF94AA551FF3(::RPG::GameCore::SkillData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_2_4BE85D776A3820AA_METHOD_2_D34CDF94AA551FF3_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_AEE8799035F6C4DD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE85D776A3820AA_METHOD_2_AEE8799035F6C4DD_OFFSET))(this);
	}
};
