#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

class Class_0_16E4307DCC419505_1192;
class Class_2_AF8737E878E8536B;
class Class_2_E7663916379DCCE3;
namespace RPG::Client { class BattleBuffListViewData; }
namespace RPG::Client { class BeneficialBuffViewData; }
namespace RPG::Client { template <typename T> class NodeListViewPanel_1; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_FF56C2D5F7C4ACDC_METHOD_2_421E941F0DF16850_OFFSET UNITYSDK_OFFSET(0x14517E80)
#define CLASS_2_FF56C2D5F7C4ACDC_METHOD_2_65A6CCE4B514750F_OFFSET UNITYSDK_OFFSET(0x14518270)
#define CLASS_2_FF56C2D5F7C4ACDC_METHOD_2_73FD5BBE218B4242_OFFSET UNITYSDK_OFFSET(0x145181B0)
#define CLASS_2_FF56C2D5F7C4ACDC_METHOD_2_8D7A5F2D8D74D6A9_OFFSET UNITYSDK_OFFSET(0x14517CE0)
#define CLASS_2_FF56C2D5F7C4ACDC_METHOD_2_91942727C53CB21E_OFFSET UNITYSDK_OFFSET(0x14517FD0)
#define CLASS_2_FF56C2D5F7C4ACDC_METHOD_2_B53A5F98BD49257C_OFFSET UNITYSDK_OFFSET(0x14517D90)
#define CLASS_2_FF56C2D5F7C4ACDC_METHOD_2_D67046CBB357BF79_OFFSET UNITYSDK_OFFSET(0x14518210)
#define CLASS_2_FF56C2D5F7C4ACDC__CTOR_OFFSET UNITYSDK_OFFSET(0x145182D0)
#define CLASS_2_FF56C2D5F7C4ACDC__ONBIND_OFFSET UNITYSDK_OFFSET(0x14517BD0)

inline static constexpr unsigned int Class_2_FF56C2D5F7C4ACDC_TypeDefinitionIndex = 71196;

class Class_2_FF56C2D5F7C4ACDC : public ::Class_1_34917908B7833130
{
public:
	::RPG::Client::NodeListViewPanel_1<::Class_2_AF8737E878E8536B*>* JEGGMMIBIBN; // 0x60
	::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* ADEOCFAAFDP; // 0x68
	::UnityEngine::UI::Text* CAIFPFGECIN; // 0x70
	::RPG::Client::BeneficialBuffViewData* DHHFNKNNACJ; // 0x78
	::RPG::Client::NodeListViewPanel_1<::Class_2_AF8737E878E8536B*>* GIKDAFOHBJM; // 0x80
	::Class_2_E7663916379DCCE3* IJPIJOCCDOK; // 0x88
	::UnityEngine::UI::Text* PHOBDPAPHND; // 0x90
	::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* CAKCILOCMAC; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF56C2D5F7C4ACDC__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF56C2D5F7C4ACDC__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_8D7A5F2D8D74D6A9(::RPG::Client::BattleBuffListViewData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleBuffListViewData*))((::PBYTE)hIl2Cpp + CLASS_2_FF56C2D5F7C4ACDC_METHOD_2_8D7A5F2D8D74D6A9_OFFSET))(this, a1);
	}

	::System::Void Method_2_B53A5F98BD49257C(::RPG::Client::BeneficialBuffViewData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BeneficialBuffViewData*))((::PBYTE)hIl2Cpp + CLASS_2_FF56C2D5F7C4ACDC_METHOD_2_B53A5F98BD49257C_OFFSET))(this, a1);
	}

	::System::Void Method_2_421E941F0DF16850(::RPG::Client::NodeListViewPanel_1<::Class_2_AF8737E878E8536B*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* a2, ::UnityEngine::UI::Text* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NodeListViewPanel_1<::Class_2_AF8737E878E8536B*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*, ::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + CLASS_2_FF56C2D5F7C4ACDC_METHOD_2_421E941F0DF16850_OFFSET))(this, a1, a2, a3);
	}

	::Class_0_16E4307DCC419505_1192* Method_2_91942727C53CB21E(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::Class_0_16E4307DCC419505_1192*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_FF56C2D5F7C4ACDC_METHOD_2_91942727C53CB21E_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_1192* Method_2_73FD5BBE218B4242()
	{
		return ((::Class_0_16E4307DCC419505_1192*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF56C2D5F7C4ACDC_METHOD_2_73FD5BBE218B4242_OFFSET))(this);
	}

	::System::Boolean Method_2_D67046CBB357BF79()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF56C2D5F7C4ACDC_METHOD_2_D67046CBB357BF79_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_2_65A6CCE4B514750F()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF56C2D5F7C4ACDC_METHOD_2_65A6CCE4B514750F_OFFSET))(this);
	}
};
