#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

class Class_2_5FA6F7B2482A3E07;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class GridFightTraitConfigBase; }
namespace RPG::GameCore { class BattleGridFightTeamTraitData; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_E756D2898F8156A5_METHOD_2_10F87C15A5CB72BB_OFFSET UNITYSDK_OFFSET(0xB1992A0)
#define CLASS_2_E756D2898F8156A5_METHOD_2_24A73FD2F3BEC0BF_OFFSET UNITYSDK_OFFSET(0xB199510)
#define CLASS_2_E756D2898F8156A5_METHOD_2_705DFD6754A39E2E_OFFSET UNITYSDK_OFFSET(0xB199110)
#define CLASS_2_E756D2898F8156A5__CTOR_OFFSET UNITYSDK_OFFSET(0xB1996A0)
#define CLASS_2_E756D2898F8156A5__ONBIND_OFFSET UNITYSDK_OFFSET(0xB198F60)
#define CLASS_2_E756D2898F8156A5___ONBUTTONCLICK_B__9_0_OFFSET UNITYSDK_OFFSET(0xB199740)

inline static constexpr unsigned int Class_2_E756D2898F8156A5_TypeDefinitionIndex = 72281;

class Class_2_E756D2898F8156A5 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	// static const ::System::String* KJOAOPHMBPI; // 0x0
	::UnityEngine::UI::Text* GIDAEFPOGHI; // 0x60
	::UnityEngine::UI::Text* PPNBGHOPMNB; // 0x68
	::RPG::Client::AnimatorButton* AAFGIHCCPOP; // 0x70
	::RPG::GameCore::BattleGridFightTeamTraitData* NHDBMHJLKNF; // 0x78
	::System::Collections::Generic::List_1<::System::UInt32>* GEKNAHPEDIE; // 0x80
	::UnityEngine::UI::Button* JJCEJBMJELA; // 0x88
	::Class_2_5FA6F7B2482A3E07* KCKANELOJKG; // 0x90
	::System::Text::StringBuilder* EEKCKMPNIPB; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E756D2898F8156A5__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E756D2898F8156A5__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_705DFD6754A39E2E(::RPG::GameCore::BattleGridFightTeamTraitData* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightTeamTraitData*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_E756D2898F8156A5_METHOD_2_705DFD6754A39E2E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_10F87C15A5CB72BB(::RPG::Client::GridFightTraitConfigBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitConfigBase*))((::PBYTE)hIl2Cpp + CLASS_2_E756D2898F8156A5_METHOD_2_10F87C15A5CB72BB_OFFSET))(this, a1);
	}

	::System::Void Method_2_24A73FD2F3BEC0BF(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E756D2898F8156A5_METHOD_2_24A73FD2F3BEC0BF_OFFSET))(this, a1);
	}

	::System::Void __OnButtonClick_b__9_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E756D2898F8156A5___ONBUTTONCLICK_B__9_0_OFFSET))(this);
	}
};
