#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_1DC128E22A3FA54F.h"
#include "unitysdk/RPG/GameCore/EnergyBarState.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_70697F531F566942_2;
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CLASS_3_AC01FCB2512C56A9_1_METHOD_3_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x17A12DE0)
#define CLASS_3_AC01FCB2512C56A9_1_METHOD_3_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x17A133B0)
#define CLASS_3_AC01FCB2512C56A9_1_METHOD_3_664C062015F0C2D3_OFFSET UNITYSDK_OFFSET(0x17A13170)
#define CLASS_3_AC01FCB2512C56A9_1_METHOD_3_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x17A13220)
#define CLASS_3_AC01FCB2512C56A9_1_METHOD_3_941C404C800CB723_OFFSET UNITYSDK_OFFSET(0x17A130E0)
#define CLASS_3_AC01FCB2512C56A9_1_METHOD_3_B03F6D31318CC2B8_OFFSET UNITYSDK_OFFSET(0x17A12E70)
#define CLASS_3_AC01FCB2512C56A9_1_METHOD_3_B19D178EAF5F28EA_OFFSET UNITYSDK_OFFSET(0x17A13420)
#define CLASS_3_AC01FCB2512C56A9_1_METHOD_3_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x17A132F0)
#define CLASS_3_AC01FCB2512C56A9_1_METHOD_3_E09237CA355C0246_OFFSET UNITYSDK_OFFSET(0x17A12A50)
#define CLASS_3_AC01FCB2512C56A9_1_ONRETURN_OFFSET UNITYSDK_OFFSET(0x17A12A00)
#define CLASS_3_AC01FCB2512C56A9_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17A13620)
#define CLASS_3_AC01FCB2512C56A9_1__ONBIND_OFFSET UNITYSDK_OFFSET(0x17A128B0)

inline static constexpr unsigned int Class_3_AC01FCB2512C56A9_1_TypeDefinitionIndex = 68507;

class Class_3_AC01FCB2512C56A9_1 : public ::Class_2_1DC128E22A3FA54F
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
	::UnityEngine::Animator* Field_3_8; // 0x68
	::UnityEngine::UI::Text* Field_3_9; // 0x70
	::UnityEngine::UI::Image* Field_3_10; // 0x78
	::UnityEngine::UI::Text* Field_3_11; // 0x80
	::UnityEngine::UI::Text* Field_3_12; // 0x88
	::UnityEngine::UI::Text* Field_3_13; // 0x90
	::UnityEngine::UI::Image* Field_3_14; // 0x98
	::RPG::GameCore::FixPoint Field_3_15; // 0xA0
	::RPG::GameCore::FixPoint Field_3_16; // 0xA8
	::System::Boolean Field_3_17; // 0xB0
	::RPG::GameCore::EnergyBarState Field_3_18; // 0xB4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC01FCB2512C56A9_1__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC01FCB2512C56A9_1__ONBIND_OFFSET))(this);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC01FCB2512C56A9_1_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_3_E09237CA355C0246(::Class_1_70697F531F566942_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70697F531F566942_2*))((::PBYTE)hIl2Cpp + CLASS_3_AC01FCB2512C56A9_1_METHOD_3_E09237CA355C0246_OFFSET))(this, a1);
	}

	::System::Void Method_3_664C062015F0C2D3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_AC01FCB2512C56A9_1_METHOD_3_664C062015F0C2D3_OFFSET))(this, a1);
	}

	::System::Void Method_3_B03F6D31318CC2B8(::Class_1_70697F531F566942_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70697F531F566942_2*))((::PBYTE)hIl2Cpp + CLASS_3_AC01FCB2512C56A9_1_METHOD_3_B03F6D31318CC2B8_OFFSET))(this, a1);
	}

	::System::Void Method_3_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_AC01FCB2512C56A9_1_METHOD_3_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_3_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC01FCB2512C56A9_1_METHOD_3_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_3_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC01FCB2512C56A9_1_METHOD_3_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::String* Method_3_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC01FCB2512C56A9_1_METHOD_3_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::Void Method_3_941C404C800CB723(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_AC01FCB2512C56A9_1_METHOD_3_941C404C800CB723_OFFSET))(this, a1);
	}

	::System::Void Method_3_B19D178EAF5F28EA(::UnityEngine::Animator* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_AC01FCB2512C56A9_1_METHOD_3_B19D178EAF5F28EA_OFFSET))(this, a1, a2);
	}
};
