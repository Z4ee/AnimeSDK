#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_D1797279B49332E9;
class Class_2_6E0B9E69D0FC929E;
class Class_2_FCB7A4BBA3DC55BF;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_2_7DBD5CFD710E5F14_METHOD_2_103FE096F3BCFEC7_OFFSET UNITYSDK_OFFSET(0x12924BE0)
#define CLASS_2_7DBD5CFD710E5F14_METHOD_2_1808E1CF7A125519_1_OFFSET UNITYSDK_OFFSET(0x129250D0)
#define CLASS_2_7DBD5CFD710E5F14_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x12924A50)
#define CLASS_2_7DBD5CFD710E5F14_METHOD_2_193C90E4C6892FC2_OFFSET UNITYSDK_OFFSET(0x12925070)
#define CLASS_2_7DBD5CFD710E5F14_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x12924EF0)
#define CLASS_2_7DBD5CFD710E5F14_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x12924920)
#define CLASS_2_7DBD5CFD710E5F14_METHOD_2_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0x12924980)
#define CLASS_2_7DBD5CFD710E5F14_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x12924B90)
#define CLASS_2_7DBD5CFD710E5F14_METHOD_2_494458CA7765DC42_OFFSET UNITYSDK_OFFSET(0x12925150)
#define CLASS_2_7DBD5CFD710E5F14_METHOD_2_7AFC74ADCC2A9C7A_1_OFFSET UNITYSDK_OFFSET(0x12925010)
#define CLASS_2_7DBD5CFD710E5F14_METHOD_2_7AFC74ADCC2A9C7A_OFFSET UNITYSDK_OFFSET(0x12924E80)
#define CLASS_2_7DBD5CFD710E5F14_METHOD_2_7B6EC255F45D034F_OFFSET UNITYSDK_OFFSET(0x12924810)
#define CLASS_2_7DBD5CFD710E5F14_METHOD_2_9094A96EEEB7AD9B_OFFSET UNITYSDK_OFFSET(0x12924AC0)
#define CLASS_2_7DBD5CFD710E5F14_METHOD_2_B2684BD6EB9B0789_OFFSET UNITYSDK_OFFSET(0x12924890)
#define CLASS_2_7DBD5CFD710E5F14_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x12924730)
#define CLASS_2_7DBD5CFD710E5F14_METHOD_2_C89A41A14F7CCD91_OFFSET UNITYSDK_OFFSET(0x12925260)
#define CLASS_2_7DBD5CFD710E5F14_METHOD_2_D5999BF4C232F1C9_OFFSET UNITYSDK_OFFSET(0x12924F70)
#define CLASS_2_7DBD5CFD710E5F14_METHOD_2_F07808AF19FA033A_OFFSET UNITYSDK_OFFSET(0x129247B0)
#define CLASS_2_7DBD5CFD710E5F14__CTOR_OFFSET UNITYSDK_OFFSET(0x129251D0)
#define CLASS_2_7DBD5CFD710E5F14__ONBIND_OFFSET UNITYSDK_OFFSET(0x129245A0)
#define CLASS_2_7DBD5CFD710E5F14___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x12925200)

inline static constexpr unsigned int Class_2_7DBD5CFD710E5F14_TypeDefinitionIndex = 66324;

class Class_2_7DBD5CFD710E5F14 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_11; // 0x0
	// static const ::System::String* Field_2_12; // 0x0
	::RPG::Client::AnimatorButton* Field_2_3; // 0x60
	::UnityEngine::Transform* Field_2_1; // 0x68
	::UnityEngine::Animator* Field_2_0; // 0x70
	::Class_1_D1797279B49332E9* Field_2_8; // 0x78
	::RPG::GameCore::BattleInstance* Field_2_7; // 0x80
	::Struct_2_96F8F0A04B900A9E Field_2_6; // 0x88
	::Class_2_FCB7A4BBA3DC55BF* Field_2_2; // 0x90
	::UnityEngine::Transform* Field_2_4; // 0x98
	::Class_2_6E0B9E69D0FC929E* Field_2_5; // 0xA0
	::RPG::GameCore::SkillData* Field_2_9; // 0xA8
	::System::Boolean Field_2_10; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DBD5CFD710E5F14__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DBD5CFD710E5F14__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_7DBD5CFD710E5F14_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void Method_2_F07808AF19FA033A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7DBD5CFD710E5F14_METHOD_2_F07808AF19FA033A_OFFSET))(this, a1);
	}

	::System::Void Method_2_7B6EC255F45D034F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7DBD5CFD710E5F14_METHOD_2_7B6EC255F45D034F_OFFSET))(this, a1);
	}

	::System::Void Method_2_B2684BD6EB9B0789(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7DBD5CFD710E5F14_METHOD_2_B2684BD6EB9B0789_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DBD5CFD710E5F14_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_283228DCA08F69C7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7DBD5CFD710E5F14_METHOD_2_283228DCA08F69C7_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DBD5CFD710E5F14_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_9094A96EEEB7AD9B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7DBD5CFD710E5F14_METHOD_2_9094A96EEEB7AD9B_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7DBD5CFD710E5F14_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_103FE096F3BCFEC7(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_2_7DBD5CFD710E5F14_METHOD_2_103FE096F3BCFEC7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7DBD5CFD710E5F14_METHOD_2_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_2_7AFC74ADCC2A9C7A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7DBD5CFD710E5F14_METHOD_2_7AFC74ADCC2A9C7A_OFFSET))(this, a1);
	}

	::System::Void Method_2_D5999BF4C232F1C9(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7DBD5CFD710E5F14_METHOD_2_D5999BF4C232F1C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_7AFC74ADCC2A9C7A_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7DBD5CFD710E5F14_METHOD_2_7AFC74ADCC2A9C7A_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_193C90E4C6892FC2(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7DBD5CFD710E5F14_METHOD_2_193C90E4C6892FC2_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1808E1CF7A125519_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DBD5CFD710E5F14_METHOD_2_1808E1CF7A125519_1_OFFSET))(this);
	}

	::UnityEngine::RectTransform* Method_2_494458CA7765DC42()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DBD5CFD710E5F14_METHOD_2_494458CA7765DC42_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DBD5CFD710E5F14___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_C89A41A14F7CCD91(::Struct_2_96F8F0A04B900A9E P0)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_7DBD5CFD710E5F14_METHOD_2_C89A41A14F7CCD91_OFFSET))(this, P0);
	}
};
