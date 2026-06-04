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
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class ContentSizeFitter; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class LayoutGroup; }

#define CLASS_2_9A66FA3BB2310F53_GET_MESSAGETYPE_OFFSET UNITYSDK_OFFSET(0xABA97F0)
#define CLASS_2_9A66FA3BB2310F53_METHOD_2_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0xABAA290)
#define CLASS_2_9A66FA3BB2310F53_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0xABAA930)
#define CLASS_2_9A66FA3BB2310F53_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xABA9E70)
#define CLASS_2_9A66FA3BB2310F53_METHOD_2_3456633D994FB6C5_OFFSET UNITYSDK_OFFSET(0xABA9ED0)
#define CLASS_2_9A66FA3BB2310F53_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xABAAC60)
#define CLASS_2_9A66FA3BB2310F53_METHOD_2_39C2C0615CAE0F74_OFFSET UNITYSDK_OFFSET(0xABA9800)
#define CLASS_2_9A66FA3BB2310F53_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xABAB330)
#define CLASS_2_9A66FA3BB2310F53_METHOD_2_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0xABAA170)
#define CLASS_2_9A66FA3BB2310F53_METHOD_2_44196695CAF284A8_OFFSET UNITYSDK_OFFSET(0xABAAF60)
#define CLASS_2_9A66FA3BB2310F53_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0xABAAA50)
#define CLASS_2_9A66FA3BB2310F53_METHOD_2_50884DFE76178C82_OFFSET UNITYSDK_OFFSET(0xABAB1B0)
#define CLASS_2_9A66FA3BB2310F53_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xABAB700)
#define CLASS_2_9A66FA3BB2310F53_METHOD_2_59F822BEBD709FE9_OFFSET UNITYSDK_OFFSET(0xABAB140)
#define CLASS_2_9A66FA3BB2310F53_METHOD_2_6DC60149A270E0D4_OFFSET UNITYSDK_OFFSET(0xABAADC0)
#define CLASS_2_9A66FA3BB2310F53_METHOD_2_6DFEF4918C679AF0_OFFSET UNITYSDK_OFFSET(0xABAA030)
#define CLASS_2_9A66FA3BB2310F53_METHOD_2_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0xABAACB0)
#define CLASS_2_9A66FA3BB2310F53_METHOD_2_709E9C02EF9B7181_OFFSET UNITYSDK_OFFSET(0xABAB520)
#define CLASS_2_9A66FA3BB2310F53_METHOD_2_76903A6ADE048EAF_OFFSET UNITYSDK_OFFSET(0xABAB5E0)
#define CLASS_2_9A66FA3BB2310F53_METHOD_2_7C7377C794E8973C_OFFSET UNITYSDK_OFFSET(0xABA9E00)
#define CLASS_2_9A66FA3BB2310F53_METHOD_2_8376FB8F62573977_OFFSET UNITYSDK_OFFSET(0xABA9C20)
#define CLASS_2_9A66FA3BB2310F53_METHOD_2_85EBE7A0BED75540_OFFSET UNITYSDK_OFFSET(0xABAB4B0)
#define CLASS_2_9A66FA3BB2310F53_METHOD_2_892F9DA89D0163F2_OFFSET UNITYSDK_OFFSET(0xABA9980)
#define CLASS_2_9A66FA3BB2310F53_METHOD_2_A552F4F9172D480A_OFFSET UNITYSDK_OFFSET(0xABAA4B0)
#define CLASS_2_9A66FA3BB2310F53_METHOD_2_AEA938E393CB58B0_OFFSET UNITYSDK_OFFSET(0xABAAEE0)
#define CLASS_2_9A66FA3BB2310F53_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xABAA9B0)
#define CLASS_2_9A66FA3BB2310F53_METHOD_2_B732DC7FA82BA621_OFFSET UNITYSDK_OFFSET(0xABAB250)
#define CLASS_2_9A66FA3BB2310F53_METHOD_2_BADDA70ED68283AE_OFFSET UNITYSDK_OFFSET(0xABAA410)
#define CLASS_2_9A66FA3BB2310F53_METHOD_2_F5EE5DF9DB6DF16B_OFFSET UNITYSDK_OFFSET(0xABAA3C0)
#define CLASS_2_9A66FA3BB2310F53__CTOR_OFFSET UNITYSDK_OFFSET(0xABAB670)
#define CLASS_2_9A66FA3BB2310F53__ONBIND_OFFSET UNITYSDK_OFFSET(0xABAA550)
#define CLASS_2_9A66FA3BB2310F53__ONTICK_OFFSET UNITYSDK_OFFSET(0xABAAAD0)
#define CLASS_2_9A66FA3BB2310F53___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xABAB6A0)
#define CLASS_2_9A66FA3BB2310F53___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0xABAB760)

inline static constexpr unsigned int Class_2_9A66FA3BB2310F53_TypeDefinitionIndex = 66857;

class Class_2_9A66FA3BB2310F53 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	::UnityEngine::Transform* Field_2_3; // 0x60
	::UnityEngine::Transform* Field_2_4; // 0x68
	::RPG::GameCore::GameEntity* Field_2_5; // 0x70
	::UnityEngine::UI::Image* Field_2_6; // 0x78
	::RPG::Client::LocalizedText* Field_2_7; // 0x80
	::UnityEngine::UI::Image* Field_2_8; // 0x88
	::UnityEngine::Transform* Field_2_9; // 0x90
	::UnityEngine::RectTransform* Field_2_10; // 0x98
	::UnityEngine::Animation* Field_2_11; // 0xA0
	::System::String* Field_2_12; // 0xA8
	::RPG::Client::UIFollow3DTarget* Field_2_13; // 0xB0
	::UnityEngine::CanvasGroup* Field_2_14; // 0xB8
	::RPG::GameCore::CharacterVisibleComponent* Field_2_15; // 0xC0
	::UnityEngine::Transform* Field_2_16; // 0xC8
	::UnityEngine::RectTransform* Field_2_17; // 0xD0
	::UnityEngine::UI::ContentSizeFitter* Field_2_18; // 0xD8
	::UnityEngine::UI::LayoutGroup* Field_2_19; // 0xE0
	::RPG::Client::LocalizedText* Field_2_20; // 0xE8
	::UnityEngine::Transform* Field_2_21; // 0xF0
	::System::Single Field_2_22; // 0xF8
	::System::Single Field_2_23; // 0xFC
	::System::Boolean Field_2_24; // 0x100
	::System::Boolean Field_2_25; // 0x101
	::System::Boolean Field_2_26; // 0x102
	::System::Single Field_2_27; // 0x104

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FloatMessageType get_MessageType()
	{
		return ((::RPG::GameCore::FloatMessageType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_GET_MESSAGETYPE_OFFSET))(this);
	}

	::System::Void Method_2_39C2C0615CAE0F74(::RPG::GameCore::GameEntity* a1, ::Class_1_69D7459C7F6EC835* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_69D7459C7F6EC835*))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_METHOD_2_39C2C0615CAE0F74_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8376FB8F62573977(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_METHOD_2_8376FB8F62573977_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_3456633D994FB6C5(::Class_1_95EEF67A826E14FF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95EEF67A826E14FF*))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_METHOD_2_3456633D994FB6C5_OFFSET))(this, a1);
	}

	::System::Void Method_2_4389275F4099DE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_METHOD_2_4389275F4099DE36_OFFSET))(this);
	}

	::System::Void Method_2_F5EE5DF9DB6DF16B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_METHOD_2_F5EE5DF9DB6DF16B_OFFSET))(this);
	}

	::System::Boolean Method_2_A552F4F9172D480A(::RPG::GameCore::FloatMessageType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FloatMessageType))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_METHOD_2_A552F4F9172D480A_OFFSET))(this, a1);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_6DC60149A270E0D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_METHOD_2_6DC60149A270E0D4_OFFSET))(this);
	}

	::System::Void Method_2_892F9DA89D0163F2(::RPG::GameCore::GameEntity* a1, ::Class_1_69D7459C7F6EC835* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_69D7459C7F6EC835*))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_METHOD_2_892F9DA89D0163F2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7C7377C794E8973C(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_METHOD_2_7C7377C794E8973C_OFFSET))(this, a1);
	}

	::System::Void Method_2_6DFEF4918C679AF0(::Class_1_95EEF67A826E14FF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95EEF67A826E14FF*))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_METHOD_2_6DFEF4918C679AF0_OFFSET))(this, a1);
	}

	::System::Void Method_2_10054BB010E03EDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_METHOD_2_10054BB010E03EDD_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_METHOD_2_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_2_59F822BEBD709FE9(::RPG::Client::TextID a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_METHOD_2_59F822BEBD709FE9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_50884DFE76178C82(::Class_1_95EEF67A826E14FF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95EEF67A826E14FF*))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_METHOD_2_50884DFE76178C82_OFFSET))(this, a1);
	}

	::System::Void Method_2_44196695CAF284A8(::Class_1_95EEF67A826E14FF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95EEF67A826E14FF*))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_METHOD_2_44196695CAF284A8_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_2_B732DC7FA82BA621()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_METHOD_2_B732DC7FA82BA621_OFFSET))(this);
	}

	::System::Void Method_2_BADDA70ED68283AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_METHOD_2_BADDA70ED68283AE_OFFSET))(this);
	}

	::System::Void Method_2_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_METHOD_2_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_2_AEA938E393CB58B0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_METHOD_2_AEA938E393CB58B0_OFFSET))(this, a1);
	}

	::System::Void Method_2_85EBE7A0BED75540(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_METHOD_2_85EBE7A0BED75540_OFFSET))(this, a1);
	}

	::System::Void Method_2_709E9C02EF9B7181(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_METHOD_2_709E9C02EF9B7181_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_70589F89E4D22649()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_METHOD_2_70589F89E4D22649_OFFSET))(this);
	}

	::System::Void Method_2_76903A6ADE048EAF(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_METHOD_2_76903A6ADE048EAF_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53___IFIXBASEPROXY__ONTICK_OFFSET))(this, a1);
	}
};
