#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_0_16E4307DCC419505_1026;
class Class_2_4B32C3985962F5E5;
class Class_2_AF8737E878E8536B;
namespace RPG::Client { template <typename T> class NodeListViewPanel_1; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class ElationCharacterUIConfig; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_4BD56C05450EB359_METHOD_2_0DF420E95D6252BE_OFFSET UNITYSDK_OFFSET(0x140ECCB0)
#define CLASS_2_4BD56C05450EB359_METHOD_2_189CFA68765849EB_OFFSET UNITYSDK_OFFSET(0x140ECAA0)
#define CLASS_2_4BD56C05450EB359_METHOD_2_1D1713DC50EF2833_OFFSET UNITYSDK_OFFSET(0x140ECD10)
#define CLASS_2_4BD56C05450EB359_METHOD_2_421E941F0DF16850_OFFSET UNITYSDK_OFFSET(0x140EC950)
#define CLASS_2_4BD56C05450EB359_METHOD_2_439C7C960308B0ED_OFFSET UNITYSDK_OFFSET(0x140EC710)
#define CLASS_2_4BD56C05450EB359_METHOD_2_73FD5BBE218B4242_OFFSET UNITYSDK_OFFSET(0x140ECC50)
#define CLASS_2_4BD56C05450EB359_METHOD_2_C08668D77F29C4BE_OFFSET UNITYSDK_OFFSET(0x140EC7E0)
#define CLASS_2_4BD56C05450EB359__CTOR_OFFSET UNITYSDK_OFFSET(0x140ECDB0)
#define CLASS_2_4BD56C05450EB359__ONBIND_OFFSET UNITYSDK_OFFSET(0x140EC600)

inline static constexpr unsigned int Class_2_4BD56C05450EB359_TypeDefinitionIndex = 67984;

class Class_2_4BD56C05450EB359 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::RPG::Client::NodeListViewPanel_1<::Class_2_AF8737E878E8536B*>* Field_2_0; // 0x60
	::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* Field_2_1; // 0x68
	::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* Field_2_2; // 0x70
	::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* Field_2_3; // 0x78
	::UnityEngine::UI::Text* Field_2_4; // 0x80
	::Class_2_4B32C3985962F5E5* Field_2_5; // 0x88
	::UnityEngine::UI::Text* Field_2_6; // 0x90
	::RPG::Client::NodeListViewPanel_1<::Class_2_AF8737E878E8536B*>* Field_2_7; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BD56C05450EB359__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BD56C05450EB359__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_439C7C960308B0ED(::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* a3, ::RPG::GameCore::TurnBasedAbilityComponent* a4, ::RPG::GameCore::ElationCharacterUIConfig* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::ElationCharacterUIConfig*))((::PBYTE)hIl2Cpp + CLASS_2_4BD56C05450EB359_METHOD_2_439C7C960308B0ED_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_C08668D77F29C4BE(::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::RPG::GameCore::ElationCharacterUIConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::ElationCharacterUIConfig*))((::PBYTE)hIl2Cpp + CLASS_2_4BD56C05450EB359_METHOD_2_C08668D77F29C4BE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_421E941F0DF16850(::RPG::Client::NodeListViewPanel_1<::Class_2_AF8737E878E8536B*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* a2, ::UnityEngine::UI::Text* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NodeListViewPanel_1<::Class_2_AF8737E878E8536B*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*, ::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + CLASS_2_4BD56C05450EB359_METHOD_2_421E941F0DF16850_OFFSET))(this, a1, a2, a3);
	}

	::Class_0_16E4307DCC419505_1026* Method_2_189CFA68765849EB(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::Class_0_16E4307DCC419505_1026*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_4BD56C05450EB359_METHOD_2_189CFA68765849EB_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_1026* Method_2_73FD5BBE218B4242()
	{
		return ((::Class_0_16E4307DCC419505_1026*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BD56C05450EB359_METHOD_2_73FD5BBE218B4242_OFFSET))(this);
	}

	::System::Boolean Method_2_0DF420E95D6252BE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BD56C05450EB359_METHOD_2_0DF420E95D6252BE_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_2_1D1713DC50EF2833()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BD56C05450EB359_METHOD_2_1D1713DC50EF2833_OFFSET))(this);
	}
};
