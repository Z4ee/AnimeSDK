#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_46AC29DEBE45F8A8_2;
class Class_1_89120A467F7A010D_1;
class Class_2_B71FA21BC121C2FA;
class Class_2_B71FA21BC121C2FA_Class_1_8103DE5C6BE3274F;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_E7DCF214E73352E1_METHOD_2_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x15E7B270)
#define CLASS_2_E7DCF214E73352E1_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x15E7AD90)
#define CLASS_2_E7DCF214E73352E1_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x15E7B190)
#define CLASS_2_E7DCF214E73352E1_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x15E7B2C0)
#define CLASS_2_E7DCF214E73352E1_METHOD_2_494458CA7765DC42_OFFSET UNITYSDK_OFFSET(0x15E7B360)
#define CLASS_2_E7DCF214E73352E1_METHOD_2_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x15E7AB50)
#define CLASS_2_E7DCF214E73352E1_METHOD_2_57D80B372834C5D1_OFFSET UNITYSDK_OFFSET(0x15E7B310)
#define CLASS_2_E7DCF214E73352E1_METHOD_2_97428D6179B1CFD2_OFFSET UNITYSDK_OFFSET(0x15E7B020)
#define CLASS_2_E7DCF214E73352E1_METHOD_2_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0x15E7B430)
#define CLASS_2_E7DCF214E73352E1_METHOD_2_A6F74EFB6EB1C259_OFFSET UNITYSDK_OFFSET(0x15E7AE90)
#define CLASS_2_E7DCF214E73352E1_METHOD_2_A93E2DF739E86EB0_OFFSET UNITYSDK_OFFSET(0x15E7B210)
#define CLASS_2_E7DCF214E73352E1_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x15E7AA30)
#define CLASS_2_E7DCF214E73352E1_METHOD_2_C1DCC7F185AB7195_OFFSET UNITYSDK_OFFSET(0x15E7B3E0)
#define CLASS_2_E7DCF214E73352E1_METHOD_2_EC2956354B919FE0_OFFSET UNITYSDK_OFFSET(0x15E7AC10)
#define CLASS_2_E7DCF214E73352E1_METHOD_2_EDE104A2956E181A_OFFSET UNITYSDK_OFFSET(0x15E7AE10)
#define CLASS_2_E7DCF214E73352E1__CTOR_OFFSET UNITYSDK_OFFSET(0x15E7B480)
#define CLASS_2_E7DCF214E73352E1__ONBIND_OFFSET UNITYSDK_OFFSET(0x15E7A8C0)
#define CLASS_2_E7DCF214E73352E1__ONTICK_OFFSET UNITYSDK_OFFSET(0x15E7AAB0)

inline static constexpr unsigned int Class_2_E7DCF214E73352E1_TypeDefinitionIndex = 68716;

class Class_2_E7DCF214E73352E1 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::UnityEngine::UI::Image* Field_2_1; // 0x60
	::Class_1_89120A467F7A010D_1* Field_2_2; // 0x68
	::UnityEngine::Transform* Field_2_3; // 0x70
	::Class_2_B71FA21BC121C2FA_Class_1_8103DE5C6BE3274F* Field_2_4; // 0x78
	::System::Action_1<::System::Boolean>* Field_2_5; // 0x80
	::UnityEngine::Transform* Field_2_6; // 0x88
	::Class_2_B71FA21BC121C2FA* Field_2_7; // 0x90
	::System::String* Field_2_8; // 0x98
	::System::Boolean Field_2_9; // 0xA0
	::System::Boolean Field_2_10; // 0xA1

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7DCF214E73352E1__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7DCF214E73352E1__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_E7DCF214E73352E1_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E7DCF214E73352E1__ONTICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7DCF214E73352E1_METHOD_2_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::Void Method_2_EC2956354B919FE0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E7DCF214E73352E1_METHOD_2_EC2956354B919FE0_OFFSET))(this, a1);
	}

	::System::Void Method_2_EDE104A2956E181A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E7DCF214E73352E1_METHOD_2_EDE104A2956E181A_OFFSET))(this, a1);
	}

	::System::Void Method_2_A6F74EFB6EB1C259(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_2_E7DCF214E73352E1_METHOD_2_A6F74EFB6EB1C259_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E7DCF214E73352E1_METHOD_2_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_2_A93E2DF739E86EB0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E7DCF214E73352E1_METHOD_2_A93E2DF739E86EB0_OFFSET))(this, a1);
	}

	::System::Void Method_2_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E7DCF214E73352E1_METHOD_2_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E7DCF214E73352E1_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_57D80B372834C5D1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_E7DCF214E73352E1_METHOD_2_57D80B372834C5D1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7DCF214E73352E1_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::UnityEngine::RectTransform* Method_2_494458CA7765DC42()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7DCF214E73352E1_METHOD_2_494458CA7765DC42_OFFSET))(this);
	}

	::System::Void Method_2_C1DCC7F185AB7195(::System::Action_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_E7DCF214E73352E1_METHOD_2_C1DCC7F185AB7195_OFFSET))(this, a1);
	}

	::System::Void Method_2_97428D6179B1CFD2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7DCF214E73352E1_METHOD_2_97428D6179B1CFD2_OFFSET))(this);
	}

	::Class_1_46AC29DEBE45F8A8_2* Method_2_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_46AC29DEBE45F8A8_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7DCF214E73352E1_METHOD_2_9B39F7D7C1FF70D6_OFFSET))(this);
	}
};
