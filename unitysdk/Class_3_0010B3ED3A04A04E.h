#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_4156D5F344F828BD.h"

namespace RPG::GameCore { class LevelCharacterRevive; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_3_0010B3ED3A04A04E_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x16CFFE60)
#define CLASS_3_0010B3ED3A04A04E_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x16CFFF30)
#define CLASS_3_0010B3ED3A04A04E_METHOD_3_00149A1811A91AB3_OFFSET UNITYSDK_OFFSET(0x16CFFB60)
#define CLASS_3_0010B3ED3A04A04E_METHOD_3_0CCE495E24089803_1_OFFSET UNITYSDK_OFFSET(0x16CFFB00)
#define CLASS_3_0010B3ED3A04A04E_METHOD_3_0CCE495E24089803_OFFSET UNITYSDK_OFFSET(0x16CFF990)
#define CLASS_3_0010B3ED3A04A04E_METHOD_3_38B862BB2192EC08_OFFSET UNITYSDK_OFFSET(0x16CFF940)
#define CLASS_3_0010B3ED3A04A04E_METHOD_3_848FDD59AB054F3D_OFFSET UNITYSDK_OFFSET(0x16CFF6F0)
#define CLASS_3_0010B3ED3A04A04E_METHOD_3_907E24F785836BA0_OFFSET UNITYSDK_OFFSET(0x16CFF250)
#define CLASS_3_0010B3ED3A04A04E_METHOD_3_99D60EF23C904C6D_OFFSET UNITYSDK_OFFSET(0x16CFEB40)
#define CLASS_3_0010B3ED3A04A04E_METHOD_3_A7EB8F51231D076A_OFFSET UNITYSDK_OFFSET(0x16CFECA0)
#define CLASS_3_0010B3ED3A04A04E_METHOD_3_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x16CFFD70)
#define CLASS_3_0010B3ED3A04A04E_METHOD_3_C4E2F930A41E34C0_OFFSET UNITYSDK_OFFSET(0x16CFF9F0)
#define CLASS_3_0010B3ED3A04A04E_METHOD_3_DF2A78D8DB25ED05_1_OFFSET UNITYSDK_OFFSET(0x16CFF7C0)
#define CLASS_3_0010B3ED3A04A04E_METHOD_3_DF2A78D8DB25ED05_2_OFFSET UNITYSDK_OFFSET(0x16CFFCB0)
#define CLASS_3_0010B3ED3A04A04E_METHOD_3_DF2A78D8DB25ED05_OFFSET UNITYSDK_OFFSET(0x16CFF630)
#define CLASS_3_0010B3ED3A04A04E_METHOD_3_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x16CFF880)
#define CLASS_3_0010B3ED3A04A04E_METHOD_3_E83D3547A9015657_OFFSET UNITYSDK_OFFSET(0x16CFEDA0)
#define CLASS_3_0010B3ED3A04A04E_METHOD_3_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x16CFF5E0)
#define CLASS_3_0010B3ED3A04A04E_ONRETURN_OFFSET UNITYSDK_OFFSET(0x16CFEA90)
#define CLASS_3_0010B3ED3A04A04E__CTOR_OFFSET UNITYSDK_OFFSET(0x16D00000)
#define CLASS_3_0010B3ED3A04A04E__ONBIND_OFFSET UNITYSDK_OFFSET(0x16CFE890)

inline static constexpr unsigned int Class_3_0010B3ED3A04A04E_TypeDefinitionIndex = 68653;

class Class_3_0010B3ED3A04A04E : public ::Class_2_4156D5F344F828BD
{
public:
	// static const ::System::String* Field_3_0; // 0x0
	// static const ::System::String* Field_3_1; // 0x0
	// static const ::System::String* Field_3_2; // 0x0
	// static const ::System::String* Field_3_3; // 0x0
	// static const ::System::String* Field_3_4; // 0x0
	// static const ::System::String* Field_3_5; // 0x0
	::UnityEngine::ParticleSystem* Field_3_6; // 0xB8
	::UnityEngine::UI::Image* Field_3_7; // 0xC0
	::UnityEngine::Transform* Field_3_8; // 0xC8
	::UnityEngine::Animation* Field_3_9; // 0xD0
	::UnityEngine::UI::Image* Field_3_10; // 0xD8
	::UnityEngine::UI::Image* Field_3_11; // 0xE0
	::UnityEngine::UI::Image* Field_3_12; // 0xE8
	::UnityEngine::UI::Image* Field_3_13; // 0xF0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0010B3ED3A04A04E__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0010B3ED3A04A04E__ONBIND_OFFSET))(this);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0010B3ED3A04A04E_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_3_99D60EF23C904C6D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0010B3ED3A04A04E_METHOD_3_99D60EF23C904C6D_OFFSET))(this);
	}

	::System::Void Method_3_E83D3547A9015657()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0010B3ED3A04A04E_METHOD_3_E83D3547A9015657_OFFSET))(this);
	}

	::System::Void Method_3_907E24F785836BA0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0010B3ED3A04A04E_METHOD_3_907E24F785836BA0_OFFSET))(this);
	}

	::System::Void Method_3_F0BD65B017F2AC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0010B3ED3A04A04E_METHOD_3_F0BD65B017F2AC0B_OFFSET))(this);
	}

	::System::Void Method_3_DF2A78D8DB25ED05()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0010B3ED3A04A04E_METHOD_3_DF2A78D8DB25ED05_OFFSET))(this);
	}

	::System::Void Method_3_848FDD59AB054F3D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_0010B3ED3A04A04E_METHOD_3_848FDD59AB054F3D_OFFSET))(this, a1);
	}

	::System::Void Method_3_DF2A78D8DB25ED05_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0010B3ED3A04A04E_METHOD_3_DF2A78D8DB25ED05_1_OFFSET))(this);
	}

	::System::Void Method_3_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0010B3ED3A04A04E_METHOD_3_E11AC65AA0DC2249_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_3_38B862BB2192EC08()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0010B3ED3A04A04E_METHOD_3_38B862BB2192EC08_OFFSET))(this);
	}

	::System::Void Method_3_0CCE495E24089803(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_3_0010B3ED3A04A04E_METHOD_3_0CCE495E24089803_OFFSET))(this, a1);
	}

	::System::Void Method_3_0CCE495E24089803_1(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_3_0010B3ED3A04A04E_METHOD_3_0CCE495E24089803_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_00149A1811A91AB3(::RPG::GameCore::LevelCharacterRevive* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterRevive*))((::PBYTE)hIl2Cpp + CLASS_3_0010B3ED3A04A04E_METHOD_3_00149A1811A91AB3_OFFSET))(this, a1);
	}

	::System::Void Method_3_DF2A78D8DB25ED05_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0010B3ED3A04A04E_METHOD_3_DF2A78D8DB25ED05_2_OFFSET))(this);
	}

	::System::Boolean Method_3_C4E2F930A41E34C0(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_3_0010B3ED3A04A04E_METHOD_3_C4E2F930A41E34C0_OFFSET))(this, a1);
	}

	::System::Void Method_3_A7EB8F51231D076A(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_0010B3ED3A04A04E_METHOD_3_A7EB8F51231D076A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_0010B3ED3A04A04E_METHOD_3_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0010B3ED3A04A04E_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0010B3ED3A04A04E_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
