#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FloatMessageType.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_2AA304B71C6E8B6D;
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

#define CLASS_2_9A66FA3BB2310F53_1_GET_MESSAGETYPE_OFFSET UNITYSDK_OFFSET(0x17A83130)
#define CLASS_2_9A66FA3BB2310F53_1_METHOD_2_0507C99F3FA45C25_OFFSET UNITYSDK_OFFSET(0x17A83E70)
#define CLASS_2_9A66FA3BB2310F53_1_METHOD_2_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x17A83BF0)
#define CLASS_2_9A66FA3BB2310F53_1_METHOD_2_1B9CC121BDC8766D_1_OFFSET UNITYSDK_OFFSET(0x17A84100)
#define CLASS_2_9A66FA3BB2310F53_1_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x17A84720)
#define CLASS_2_9A66FA3BB2310F53_1_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x17A83810)
#define CLASS_2_9A66FA3BB2310F53_1_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x17A84420)
#define CLASS_2_9A66FA3BB2310F53_1_METHOD_2_39C2C0615CAE0F74_OFFSET UNITYSDK_OFFSET(0x17A83180)
#define CLASS_2_9A66FA3BB2310F53_1_METHOD_2_3B7145E79424FB75_OFFSET UNITYSDK_OFFSET(0x17A83D10)
#define CLASS_2_9A66FA3BB2310F53_1_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x17A84910)
#define CLASS_2_9A66FA3BB2310F53_1_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0x17A84210)
#define CLASS_2_9A66FA3BB2310F53_1_METHOD_2_50884DFE76178C82_OFFSET UNITYSDK_OFFSET(0x17A839F0)
#define CLASS_2_9A66FA3BB2310F53_1_METHOD_2_59F822BEBD709FE9_OFFSET UNITYSDK_OFFSET(0x17A84790)
#define CLASS_2_9A66FA3BB2310F53_1_METHOD_2_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0x17A84470)
#define CLASS_2_9A66FA3BB2310F53_1_METHOD_2_709E9C02EF9B7181_OFFSET UNITYSDK_OFFSET(0x17A84B00)
#define CLASS_2_9A66FA3BB2310F53_1_METHOD_2_76903A6ADE048EAF_OFFSET UNITYSDK_OFFSET(0x17A84BC0)
#define CLASS_2_9A66FA3BB2310F53_1_METHOD_2_7C7377C794E8973C_OFFSET UNITYSDK_OFFSET(0x17A837A0)
#define CLASS_2_9A66FA3BB2310F53_1_METHOD_2_7F29568EA964E563_OFFSET UNITYSDK_OFFSET(0x17A84580)
#define CLASS_2_9A66FA3BB2310F53_1_METHOD_2_8376FB8F62573977_OFFSET UNITYSDK_OFFSET(0x17A835C0)
#define CLASS_2_9A66FA3BB2310F53_1_METHOD_2_85EBE7A0BED75540_OFFSET UNITYSDK_OFFSET(0x17A84A90)
#define CLASS_2_9A66FA3BB2310F53_1_METHOD_2_892F9DA89D0163F2_OFFSET UNITYSDK_OFFSET(0x17A83330)
#define CLASS_2_9A66FA3BB2310F53_1_METHOD_2_89C03AF435ED2C78_OFFSET UNITYSDK_OFFSET(0x17A84800)
#define CLASS_2_9A66FA3BB2310F53_1_METHOD_2_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0x17A83AB0)
#define CLASS_2_9A66FA3BB2310F53_1_METHOD_2_AEA938E393CB58B0_OFFSET UNITYSDK_OFFSET(0x17A846A0)
#define CLASS_2_9A66FA3BB2310F53_1_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x17A84180)
#define CLASS_2_9A66FA3BB2310F53_1_METHOD_2_B39416EBE5B2947C_OFFSET UNITYSDK_OFFSET(0x17A83870)
#define CLASS_2_9A66FA3BB2310F53_1_METHOD_2_BF5E2DCAE0BF038A_OFFSET UNITYSDK_OFFSET(0x17A83D60)
#define CLASS_2_9A66FA3BB2310F53_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17A84C50)
#define CLASS_2_9A66FA3BB2310F53_1__ONBIND_OFFSET UNITYSDK_OFFSET(0x17A83F40)
#define CLASS_2_9A66FA3BB2310F53_1__ONTICK_OFFSET UNITYSDK_OFFSET(0x17A84290)

inline static constexpr unsigned int Class_2_9A66FA3BB2310F53_1_TypeDefinitionIndex = 71483;

class Class_2_9A66FA3BB2310F53_1 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* BDACPPLKLGL; // 0x0
	// static const ::System::String* MDNFIMNHAGA; // 0x0
	::UnityEngine::CanvasGroup* JNAEPLHBGAN; // 0x60
	::UnityEngine::RectTransform* NEEDDJHCCND; // 0x68
	::RPG::Client::LocalizedText* GEPFFDDHPAI; // 0x70
	::RPG::Client::UIFollow3DTarget* LLBJOCEMNPK; // 0x78
	::UnityEngine::UI::LayoutGroup* BPPBHGGCBCH; // 0x80
	::System::String* AMMFAOBBPCN; // 0x88
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x90
	::UnityEngine::Animation* KCOAILOHDND; // 0x98
	::UnityEngine::UI::ContentSizeFitter* PFIOEBPHDFI; // 0xA0
	::RPG::GameCore::CharacterVisibleComponent* PLDFJEONENF; // 0xA8
	::UnityEngine::RectTransform* HACIPINNIOG; // 0xB0
	::System::Single IONFONLCDPF; // 0xB8
	::System::Single HBDJCFFDGDD; // 0xBC
	::System::Boolean HCGJMGFNFBL; // 0xC0
	::System::Boolean MCAPIAKDMAA; // 0xC1
	::System::Boolean POGICBHCJIB; // 0xC2
	::System::Single MFIFOONNJPE; // 0xC4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_1__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FloatMessageType get_MessageType()
	{
		return ((::RPG::GameCore::FloatMessageType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_1_GET_MESSAGETYPE_OFFSET))(this);
	}

	::System::Void Method_2_39C2C0615CAE0F74(::RPG::GameCore::GameEntity* a1, ::Class_1_2AA304B71C6E8B6D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_2AA304B71C6E8B6D*))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_1_METHOD_2_39C2C0615CAE0F74_OFFSET))(this, a1, a2);
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

	::System::Boolean Method_2_0507C99F3FA45C25(::RPG::GameCore::FloatMessageType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FloatMessageType))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_1_METHOD_2_0507C99F3FA45C25_OFFSET))(this, a1);
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

	::System::Void Method_2_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_1_METHOD_2_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_2_892F9DA89D0163F2(::RPG::GameCore::GameEntity* a1, ::Class_1_2AA304B71C6E8B6D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_2AA304B71C6E8B6D*))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_1_METHOD_2_892F9DA89D0163F2_OFFSET))(this, a1, a2);
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

	::System::Void Method_2_1B9CC121BDC8766D_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9A66FA3BB2310F53_1_METHOD_2_1B9CC121BDC8766D_1_OFFSET))(this, a1);
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
};
