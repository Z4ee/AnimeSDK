#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FloatMessageType.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_69D7459C7F6EC835;
class Class_1_95EEF67A826E14FF;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class UIFollow3DTarget; }
namespace RPG::GameCore { class CharacterVisibleComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class ContentSizeFitter; }
namespace UnityEngine::UI { class LayoutGroup; }

#define CLASS_2_9A66FA3BB2310F53_1_METHOD_2_0B5B8370B468828E_OFFSET UNITYSDK_OFFSET(0x11366C30)
#define CLASS_2_9A66FA3BB2310F53_1_METHOD_2_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x11367680)
#define CLASS_2_9A66FA3BB2310F53_1_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x11367E70)
#define CLASS_2_9A66FA3BB2310F53_1_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x113672C0)
#define CLASS_2_9A66FA3BB2310F53_1_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x11368290)
#define CLASS_2_9A66FA3BB2310F53_1_METHOD_2_39C2C0615CAE0F74_OFFSET UNITYSDK_OFFSET(0x11366C40)
#define CLASS_2_9A66FA3BB2310F53_1_METHOD_2_3B7145E79424FB75_OFFSET UNITYSDK_OFFSET(0x113677A0)
#define CLASS_2_9A66FA3BB2310F53_1_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x11368710)
#define CLASS_2_9A66FA3BB2310F53_1_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0x11367F80)
#define CLASS_2_9A66FA3BB2310F53_1_METHOD_2_50884DFE76178C82_OFFSET UNITYSDK_OFFSET(0x11367490)
#define CLASS_2_9A66FA3BB2310F53_1_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x11368AD0)
#define CLASS_2_9A66FA3BB2310F53_1_METHOD_2_59F822BEBD709FE9_OFFSET UNITYSDK_OFFSET(0x11368590)
#define CLASS_2_9A66FA3BB2310F53_1_METHOD_2_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0x113682E0)
#define CLASS_2_9A66FA3BB2310F53_1_METHOD_2_709E9C02EF9B7181_OFFSET UNITYSDK_OFFSET(0x113688F0)
#define CLASS_2_9A66FA3BB2310F53_1_METHOD_2_76903A6ADE048EAF_OFFSET UNITYSDK_OFFSET(0x113689B0)
#define CLASS_2_9A66FA3BB2310F53_1_METHOD_2_7C7377C794E8973C_OFFSET UNITYSDK_OFFSET(0x11367250)
#define CLASS_2_9A66FA3BB2310F53_1_METHOD_2_7F29568EA964E563_OFFSET UNITYSDK_OFFSET(0x113683E0)
#define CLASS_2_9A66FA3BB2310F53_1_METHOD_2_8376FB8F62573977_OFFSET UNITYSDK_OFFSET(0x11367080)
#define CLASS_2_9A66FA3BB2310F53_1_METHOD_2_85EBE7A0BED75540_OFFSET UNITYSDK_OFFSET(0x11368890)
#define CLASS_2_9A66FA3BB2310F53_1_METHOD_2_892F9DA89D0163F2_OFFSET UNITYSDK_OFFSET(0x11366DE0)
#define CLASS_2_9A66FA3BB2310F53_1_METHOD_2_89C03AF435ED2C78_OFFSET UNITYSDK_OFFSET(0x11368600)
#define CLASS_2_9A66FA3BB2310F53_1_METHOD_2_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0x11367550)
#define CLASS_2_9A66FA3BB2310F53_1_METHOD_2_A552F4F9172D480A_OFFSET UNITYSDK_OFFSET(0x11367910)
#define CLASS_2_9A66FA3BB2310F53_1_METHOD_2_AEA938E393CB58B0_OFFSET UNITYSDK_OFFSET(0x11368510)
#define CLASS_2_9A66FA3BB2310F53_1_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x11367EF0)
#define CLASS_2_9A66FA3BB2310F53_1_METHOD_2_B39416EBE5B2947C_OFFSET UNITYSDK_OFFSET(0x11367320)
#define CLASS_2_9A66FA3BB2310F53_1_METHOD_2_BF5E2DCAE0BF038A_OFFSET UNITYSDK_OFFSET(0x11367800)
#define CLASS_2_9A66FA3BB2310F53_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11368A40)
#define CLASS_2_9A66FA3BB2310F53_1__ONBIND_OFFSET UNITYSDK_OFFSET(0x113679C0)
#define CLASS_2_9A66FA3BB2310F53_1__ONTICK_OFFSET UNITYSDK_OFFSET(0x11368000)
#define CLASS_2_9A66FA3BB2310F53_1___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x11368A70)
#define CLASS_2_9A66FA3BB2310F53_1___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x11368B30)

inline static constexpr unsigned int Class_2_9A66FA3BB2310F53_1_TypeDefinitionIndex = 58611;

class Class_2_9A66FA3BB2310F53_1 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_13; // 0x0
	::System::String* Field_2_5; // 0x60
	::UnityEngine::Animation* Field_2_4; // 0x68
	::UnityEngine::CanvasGroup* Field_2_3; // 0x70
	::RPG::Client::LocalizedText* Field_2_1; // 0x78
	::UnityEngine::UI::ContentSizeFitter* Field_2_9; // 0x80
	::RPG::GameCore::GameEntity* Field_2_10; // 0x88
	::UnityEngine::UI::LayoutGroup* Field_2_8; // 0x90
	::RPG::Client::UIFollow3DTarget* Field_2_2; // 0x98
	::RPG::GameCore::CharacterVisibleComponent* Field_2_11; // 0xA0
	::UnityEngine::RectTransform* Field_2_6; // 0xA8
	::UnityEngine::RectTransform* Field_2_7; // 0xB0
	::System::Single Field_2_16; // 0xB8
	::System::Single Field_2_17; // 0xBC
	::System::Boolean Field_2_14; // 0xC0
	::System::Boolean Field_2_12; // 0xC1
	::System::Boolean Field_2_15; // 0xC2
	::System::Single Field_2_18; // 0xC4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_1__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FloatMessageType Method_2_0B5B8370B468828E()
	{
		return ((::RPG::GameCore::FloatMessageType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_1_METHOD_2_0B5B8370B468828E_OFFSET))(this);
	}

	::System::Void Method_2_39C2C0615CAE0F74(::RPG::GameCore::GameEntity* a1, ::Class_1_69D7459C7F6EC835* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_69D7459C7F6EC835*))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_1_METHOD_2_39C2C0615CAE0F74_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8376FB8F62573977(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_1_METHOD_2_8376FB8F62573977_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_1_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_B39416EBE5B2947C(::Class_1_95EEF67A826E14FF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95EEF67A826E14FF*))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_1_METHOD_2_B39416EBE5B2947C_OFFSET))(this, a1);
	}

	::System::Void Method_2_9E38127F40B34F1F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_1_METHOD_2_9E38127F40B34F1F_OFFSET))(this);
	}

	::System::Void Method_2_3B7145E79424FB75()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_1_METHOD_2_3B7145E79424FB75_OFFSET))(this);
	}

	::System::Boolean Method_2_A552F4F9172D480A(::RPG::GameCore::FloatMessageType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FloatMessageType))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_1_METHOD_2_A552F4F9172D480A_OFFSET))(this, a1);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_1__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_1_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_1__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_7F29568EA964E563()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_1_METHOD_2_7F29568EA964E563_OFFSET))(this);
	}

	::System::Void Method_2_892F9DA89D0163F2(::RPG::GameCore::GameEntity* a1, ::Class_1_69D7459C7F6EC835* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_69D7459C7F6EC835*))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_1_METHOD_2_892F9DA89D0163F2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7C7377C794E8973C(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_1_METHOD_2_7C7377C794E8973C_OFFSET))(this, a1);
	}

	::System::Void Method_2_50884DFE76178C82(::Class_1_95EEF67A826E14FF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95EEF67A826E14FF*))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_1_METHOD_2_50884DFE76178C82_OFFSET))(this, a1);
	}

	::System::Void Method_2_10054BB010E03EDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_1_METHOD_2_10054BB010E03EDD_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_1_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_1_METHOD_2_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_2_59F822BEBD709FE9(::RPG::Client::TextID a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_1_METHOD_2_59F822BEBD709FE9_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_1_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_2_89C03AF435ED2C78()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_1_METHOD_2_89C03AF435ED2C78_OFFSET))(this);
	}

	::System::Void Method_2_BF5E2DCAE0BF038A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_1_METHOD_2_BF5E2DCAE0BF038A_OFFSET))(this);
	}

	::System::Void Method_2_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_1_METHOD_2_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_2_AEA938E393CB58B0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_1_METHOD_2_AEA938E393CB58B0_OFFSET))(this, a1);
	}

	::System::Void Method_2_85EBE7A0BED75540(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_1_METHOD_2_85EBE7A0BED75540_OFFSET))(this, a1);
	}

	::System::Void Method_2_709E9C02EF9B7181(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_1_METHOD_2_709E9C02EF9B7181_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_70589F89E4D22649()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_1_METHOD_2_70589F89E4D22649_OFFSET))(this);
	}

	::System::Void Method_2_76903A6ADE048EAF(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_1_METHOD_2_76903A6ADE048EAF_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_1___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_1_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_1___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}
};
