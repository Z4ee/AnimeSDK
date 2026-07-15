#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::GameCore { class AbilityCurrentShieldChange; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelCharacterRemoveShield; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define CLASS_2_B49E223DF80566EF_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x175F29A0)
#define CLASS_2_B49E223DF80566EF_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x175F2AC0)
#define CLASS_2_B49E223DF80566EF_METHOD_2_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x175F25A0)
#define CLASS_2_B49E223DF80566EF_METHOD_2_6916CB2AB9451DD7_OFFSET UNITYSDK_OFFSET(0x175F1A50)
#define CLASS_2_B49E223DF80566EF_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x175F1F30)
#define CLASS_2_B49E223DF80566EF_METHOD_2_A00FA3762EA46365_OFFSET UNITYSDK_OFFSET(0x175F2470)
#define CLASS_2_B49E223DF80566EF_METHOD_2_A3C36642AA77866E_OFFSET UNITYSDK_OFFSET(0x175F1D90)
#define CLASS_2_B49E223DF80566EF_METHOD_2_BA84CD6B9377DF2C_OFFSET UNITYSDK_OFFSET(0x175F2060)
#define CLASS_2_B49E223DF80566EF_METHOD_2_BD6A3C745D127D79_OFFSET UNITYSDK_OFFSET(0x175F1FB0)
#define CLASS_2_B49E223DF80566EF_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x175F28B0)
#define CLASS_2_B49E223DF80566EF_METHOD_2_C4E2F930A41E34C0_OFFSET UNITYSDK_OFFSET(0x175F26E0)
#define CLASS_2_B49E223DF80566EF_METHOD_2_C7BF9C1E6A78DCAB_OFFSET UNITYSDK_OFFSET(0x175F1780)
#define CLASS_2_B49E223DF80566EF_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x175F2680)
#define CLASS_2_B49E223DF80566EF_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x175F2600)
#define CLASS_2_B49E223DF80566EF_METHOD_2_F0CA034D8F146D0A_OFFSET UNITYSDK_OFFSET(0x175F19C0)
#define CLASS_2_B49E223DF80566EF_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x175F27F0)
#define CLASS_2_B49E223DF80566EF__CTOR_OFFSET UNITYSDK_OFFSET(0x175F2BB0)
#define CLASS_2_B49E223DF80566EF__ONBIND_OFFSET UNITYSDK_OFFSET(0x175F1700)

inline static constexpr unsigned int Class_2_B49E223DF80566EF_TypeDefinitionIndex = 68231;

class Class_2_B49E223DF80566EF : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	::RPG::Client::LocalizedText* Field_2_3; // 0x60
	::RPG::GameCore::GameEntity* Field_2_4; // 0x68
	::RPG::Client::PrefabLoadMeta* Field_2_5; // 0x70
	::UnityEngine::Transform* Field_2_6; // 0x78
	::UnityEngine::Transform* Field_2_7; // 0x80
	::UnityEngine::Animation* Field_2_8; // 0x88
	::RPG::Client::PrefabLoadMeta* Field_2_9; // 0x90
	::UnityEngine::Animation* Field_2_10; // 0x98
	::System::Int32 Field_2_11; // 0xA0
	::System::Boolean Field_2_12; // 0xA4
	::System::Boolean Field_2_13; // 0xA5

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B49E223DF80566EF__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B49E223DF80566EF__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_C7BF9C1E6A78DCAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B49E223DF80566EF_METHOD_2_C7BF9C1E6A78DCAB_OFFSET))(this);
	}

	::System::Void Method_2_F0CA034D8F146D0A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B49E223DF80566EF_METHOD_2_F0CA034D8F146D0A_OFFSET))(this);
	}

	::System::Void Method_2_BD6A3C745D127D79(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B49E223DF80566EF_METHOD_2_BD6A3C745D127D79_OFFSET))(this, a1);
	}

	::System::Void Method_2_BA84CD6B9377DF2C(::RPG::GameCore::AbilityCurrentShieldChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentShieldChange*))((::PBYTE)hIl2Cpp + CLASS_2_B49E223DF80566EF_METHOD_2_BA84CD6B9377DF2C_OFFSET))(this, a1);
	}

	::System::Void Method_2_A00FA3762EA46365(::RPG::GameCore::LevelCharacterRemoveShield* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterRemoveShield*))((::PBYTE)hIl2Cpp + CLASS_2_B49E223DF80566EF_METHOD_2_A00FA3762EA46365_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B49E223DF80566EF_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_6916CB2AB9451DD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B49E223DF80566EF_METHOD_2_6916CB2AB9451DD7_OFFSET))(this);
	}

	::System::Void Method_2_A3C36642AA77866E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B49E223DF80566EF_METHOD_2_A3C36642AA77866E_OFFSET))(this);
	}

	::System::Void Method_2_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B49E223DF80566EF_METHOD_2_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_C4E2F930A41E34C0(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_B49E223DF80566EF_METHOD_2_C4E2F930A41E34C0_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B49E223DF80566EF_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B49E223DF80566EF_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B49E223DF80566EF_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B49E223DF80566EF_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B49E223DF80566EF_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B49E223DF80566EF_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
