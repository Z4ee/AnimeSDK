#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_0_16E4307DCC419505_1018;
class Class_2_D994353E21027540;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_2_4BE85D776A3820AA_METHOD_2_09AB8FC0B8BA1B6E_OFFSET UNITYSDK_OFFSET(0xAC45480)
#define CLASS_2_4BE85D776A3820AA_METHOD_2_0DF420E95D6252BE_OFFSET UNITYSDK_OFFSET(0xAC45B60)
#define CLASS_2_4BE85D776A3820AA_METHOD_2_213EB2BE094A913C_OFFSET UNITYSDK_OFFSET(0xAC44FF0)
#define CLASS_2_4BE85D776A3820AA_METHOD_2_28F2C3729E175F1C_OFFSET UNITYSDK_OFFSET(0xAC452B0)
#define CLASS_2_4BE85D776A3820AA_METHOD_2_30C2D368B2361B2C_OFFSET UNITYSDK_OFFSET(0xAC44AF0)
#define CLASS_2_4BE85D776A3820AA_METHOD_2_382C1CDB29F43D9C_OFFSET UNITYSDK_OFFSET(0xAC45A70)
#define CLASS_2_4BE85D776A3820AA_METHOD_2_3D37D89D3A0B2B96_OFFSET UNITYSDK_OFFSET(0xAC458B0)
#define CLASS_2_4BE85D776A3820AA_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xAC45D70)
#define CLASS_2_4BE85D776A3820AA_METHOD_2_5D9CF83CFC617CF9_OFFSET UNITYSDK_OFFSET(0xAC45D10)
#define CLASS_2_4BE85D776A3820AA_METHOD_2_73FB9DE4849AF1B5_OFFSET UNITYSDK_OFFSET(0xAC44E40)
#define CLASS_2_4BE85D776A3820AA_METHOD_2_7AEA4B2B25797605_OFFSET UNITYSDK_OFFSET(0xAC45170)
#define CLASS_2_4BE85D776A3820AA_METHOD_2_7D125704D7ED09B7_OFFSET UNITYSDK_OFFSET(0xAC449C0)
#define CLASS_2_4BE85D776A3820AA_METHOD_2_8C6E66D260CC37AD_OFFSET UNITYSDK_OFFSET(0xAC447D0)
#define CLASS_2_4BE85D776A3820AA_METHOD_2_AF769CD15806BD66_OFFSET UNITYSDK_OFFSET(0xAC44EE0)
#define CLASS_2_4BE85D776A3820AA_METHOD_2_B3B40D6CF776C6B6_OFFSET UNITYSDK_OFFSET(0xAC44920)
#define CLASS_2_4BE85D776A3820AA_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0xAC44530)
#define CLASS_2_4BE85D776A3820AA_METHOD_2_D34723D1185A866E_OFFSET UNITYSDK_OFFSET(0xAC445B0)
#define CLASS_2_4BE85D776A3820AA_METHOD_2_E10F3359B5E0D724_OFFSET UNITYSDK_OFFSET(0xAC44D30)
#define CLASS_2_4BE85D776A3820AA_METHOD_2_FB1C56FCE4ABD259_OFFSET UNITYSDK_OFFSET(0xAC44650)
#define CLASS_2_4BE85D776A3820AA_METHOD_2_FB59E2FA262C7B16_OFFSET UNITYSDK_OFFSET(0xAC45580)
#define CLASS_2_4BE85D776A3820AA__CTOR_OFFSET UNITYSDK_OFFSET(0xAC45C70)
#define CLASS_2_4BE85D776A3820AA__ONBIND_OFFSET UNITYSDK_OFFSET(0xAC442B0)
#define CLASS_2_4BE85D776A3820AA___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xAC45CB0)

inline static constexpr unsigned int Class_2_4BE85D776A3820AA_TypeDefinitionIndex = 67172;

class Class_2_4BE85D776A3820AA : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::Class_2_D994353E21027540* Field_2_0; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_1018*>* Field_2_1; // 0x68
	::UnityEngine::Transform* Field_2_2; // 0x70
	::Class_0_16E4307DCC419505_1018* Field_2_3; // 0x78
	::Struct_2_96F8F0A04B900A9E Field_2_4; // 0x80
	::UnityEngine::Transform* Field_2_5; // 0x88
	::UnityEngine::Transform* Field_2_6; // 0x90
	::RPG::Client::UISkillIndex Field_2_7; // 0x98
	::System::Boolean Field_2_8; // 0x9C
	::System::Boolean Field_2_9; // 0x9D

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

	::System::Void Method_2_D34723D1185A866E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE85D776A3820AA_METHOD_2_D34723D1185A866E_OFFSET))(this);
	}

	::System::Void Method_2_FB1C56FCE4ABD259(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4BE85D776A3820AA_METHOD_2_FB1C56FCE4ABD259_OFFSET))(this, a1);
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

	::System::Void Method_2_AF769CD15806BD66(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4BE85D776A3820AA_METHOD_2_AF769CD15806BD66_OFFSET))(this, a1);
	}

	::System::Void Method_2_213EB2BE094A913C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_4BE85D776A3820AA_METHOD_2_213EB2BE094A913C_OFFSET))(this, a1);
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

	::System::Void Method_2_3D37D89D3A0B2B96(::RPG::GameCore::SkillData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_2_4BE85D776A3820AA_METHOD_2_3D37D89D3A0B2B96_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_0DF420E95D6252BE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE85D776A3820AA_METHOD_2_0DF420E95D6252BE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE85D776A3820AA___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5D9CF83CFC617CF9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_4BE85D776A3820AA_METHOD_2_5D9CF83CFC617CF9_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE85D776A3820AA_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
