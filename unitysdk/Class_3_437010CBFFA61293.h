#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_4156D5F344F828BD.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/SkillSPProgressType.h"

class Class_1_05BD9C87E93CA0F8;
class Class_2_6CE592807426216E;
class Class_2_CC9EB486A8D01931;
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::GameCore { class DamageTypeRow; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_3_437010CBFFA61293_METHOD_3_1659BCB6D1A9FC34_OFFSET UNITYSDK_OFFSET(0x17C95F00)
#define CLASS_3_437010CBFFA61293_METHOD_3_42C5BADE1C9EFC80_1_OFFSET UNITYSDK_OFFSET(0x17C96CB0)
#define CLASS_3_437010CBFFA61293_METHOD_3_42C5BADE1C9EFC80_OFFSET UNITYSDK_OFFSET(0x17C96760)
#define CLASS_3_437010CBFFA61293_METHOD_3_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x17C950E0)
#define CLASS_3_437010CBFFA61293_METHOD_3_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x17C96470)
#define CLASS_3_437010CBFFA61293_METHOD_3_9094A96EEEB7AD9B_OFFSET UNITYSDK_OFFSET(0x17C96B00)
#define CLASS_3_437010CBFFA61293_METHOD_3_927FAEA36AA4115E_OFFSET UNITYSDK_OFFSET(0x17C97000)
#define CLASS_3_437010CBFFA61293_METHOD_3_A01F987742BD20DA_OFFSET UNITYSDK_OFFSET(0x17C956B0)
#define CLASS_3_437010CBFFA61293_METHOD_3_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x17C95820)
#define CLASS_3_437010CBFFA61293_METHOD_3_ABE7CF9FA1B8CCA3_OFFSET UNITYSDK_OFFSET(0x17C952A0)
#define CLASS_3_437010CBFFA61293_METHOD_3_AC96313FF120BAE7_OFFSET UNITYSDK_OFFSET(0x17C96D90)
#define CLASS_3_437010CBFFA61293_METHOD_3_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x17C96850)
#define CLASS_3_437010CBFFA61293_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x17C966D0)
#define CLASS_3_437010CBFFA61293_METHOD_3_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x17C96F20)
#define CLASS_3_437010CBFFA61293_METHOD_3_B51F0EDFD675DF68_OFFSET UNITYSDK_OFFSET(0x17C954E0)
#define CLASS_3_437010CBFFA61293_METHOD_3_EAC2737A96E071C9_OFFSET UNITYSDK_OFFSET(0x17C958E0)
#define CLASS_3_437010CBFFA61293_METHOD_3_F0D9B6AAFF504D87_OFFSET UNITYSDK_OFFSET(0x17C96500)
#define CLASS_3_437010CBFFA61293_METHOD_3_F6AE21AA4AB06AC6_OFFSET UNITYSDK_OFFSET(0x17C97090)
#define CLASS_3_437010CBFFA61293_METHOD_3_FA383E53DEC53851_OFFSET UNITYSDK_OFFSET(0x17C96360)
#define CLASS_3_437010CBFFA61293_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x17C95390)
#define CLASS_3_437010CBFFA61293_ONRETURN_OFFSET UNITYSDK_OFFSET(0x17C953F0)
#define CLASS_3_437010CBFFA61293__CTOR_OFFSET UNITYSDK_OFFSET(0x17C97250)
#define CLASS_3_437010CBFFA61293__ONBIND_OFFSET UNITYSDK_OFFSET(0x17C94E30)

inline static constexpr unsigned int Class_3_437010CBFFA61293_TypeDefinitionIndex = 68750;

class Class_3_437010CBFFA61293 : public ::Class_2_4156D5F344F828BD
{
public:
	// static const ::System::String* Field_3_0; // 0x0
	// static const ::System::String* Field_3_1; // 0x0
	// static const ::System::String* Field_3_2; // 0x0
	// static const ::System::String* Field_3_3; // 0x0
	// static const ::System::String* Field_3_4; // 0x0
	// static const ::System::String* Field_3_5; // 0x0
	// static const ::System::String* Field_3_6; // 0x0
	// static const ::System::String* Field_3_7; // 0x0
	// static const ::System::String* Field_3_8; // 0x0
	// static const ::System::String* Field_3_9; // 0x0
	::UnityEngine::UI::Image* Field_3_10; // 0xB8
	::UnityEngine::ParticleSystem* Field_3_11; // 0xC0
	::UnityEngine::Transform* Field_3_12; // 0xC8
	::UnityEngine::UI::Image* Field_3_13; // 0xD0
	::UnityEngine::UI::Image* Field_3_14; // 0xD8
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::String*>* Field_3_15; // 0xE0
	::Class_2_6CE592807426216E* Field_3_16; // 0xE8
	::Class_2_CC9EB486A8D01931* Field_3_17; // 0xF0
	::UnityEngine::Transform* Field_3_18; // 0xF8
	::UnityEngine::Animation* Field_3_19; // 0x100
	::RPG::Client::PrefabLoadMeta* Field_3_20; // 0x108
	::UnityEngine::UI::Image* Field_3_21; // 0x110
	::RPG::Client::UIStateCtrl* Field_3_22; // 0x118
	::UnityEngine::Transform* Field_3_23; // 0x120

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_437010CBFFA61293__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_437010CBFFA61293__ONBIND_OFFSET))(this);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_437010CBFFA61293_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_437010CBFFA61293_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_3_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_437010CBFFA61293_METHOD_3_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_3_ABE7CF9FA1B8CCA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_437010CBFFA61293_METHOD_3_ABE7CF9FA1B8CCA3_OFFSET))(this);
	}

	::Class_2_CC9EB486A8D01931* Method_3_B51F0EDFD675DF68(::RPG::GameCore::SkillSPProgressType a1, ::UnityEngine::Transform* a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::Class_2_CC9EB486A8D01931*(*)(::PVOID, ::RPG::GameCore::SkillSPProgressType, ::UnityEngine::Transform*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_437010CBFFA61293_METHOD_3_B51F0EDFD675DF68_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_3_A01F987742BD20DA(::RPG::GameCore::DamageTypeRow* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::DamageTypeRow*))((::PBYTE)hIl2Cpp + CLASS_3_437010CBFFA61293_METHOD_3_A01F987742BD20DA_OFFSET))(this, a1);
	}

	::System::Void Method_3_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_437010CBFFA61293_METHOD_3_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_3_EAC2737A96E071C9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_437010CBFFA61293_METHOD_3_EAC2737A96E071C9_OFFSET))(this);
	}

	::System::Void Method_3_1659BCB6D1A9FC34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_437010CBFFA61293_METHOD_3_1659BCB6D1A9FC34_OFFSET))(this);
	}

	::System::Void Method_3_FA383E53DEC53851(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_437010CBFFA61293_METHOD_3_FA383E53DEC53851_OFFSET))(this, a1);
	}

	::System::Void Method_3_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_437010CBFFA61293_METHOD_3_56CE4AFC5339F746_OFFSET))(this);
	}

	::System::Void Method_3_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_437010CBFFA61293_METHOD_3_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_3_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_437010CBFFA61293_METHOD_3_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_3_F0D9B6AAFF504D87()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_437010CBFFA61293_METHOD_3_F0D9B6AAFF504D87_OFFSET))(this);
	}

	::System::Boolean Method_3_42C5BADE1C9EFC80()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_437010CBFFA61293_METHOD_3_42C5BADE1C9EFC80_OFFSET))(this);
	}

	::System::Void Method_3_9094A96EEEB7AD9B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_437010CBFFA61293_METHOD_3_9094A96EEEB7AD9B_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_42C5BADE1C9EFC80_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_437010CBFFA61293_METHOD_3_42C5BADE1C9EFC80_1_OFFSET))(this);
	}

	::System::Void Method_3_AC96313FF120BAE7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_437010CBFFA61293_METHOD_3_AC96313FF120BAE7_OFFSET))(this);
	}

	::System::Void Method_3_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_437010CBFFA61293_METHOD_3_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Void Method_3_927FAEA36AA4115E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_437010CBFFA61293_METHOD_3_927FAEA36AA4115E_OFFSET))(this);
	}

	::System::Void Method_3_F6AE21AA4AB06AC6(::Class_1_05BD9C87E93CA0F8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_05BD9C87E93CA0F8*))((::PBYTE)hIl2Cpp + CLASS_3_437010CBFFA61293_METHOD_3_F6AE21AA4AB06AC6_OFFSET))(this, a1);
	}
};
