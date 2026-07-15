#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

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

#define CLASS_2_E756D2898F8156A5_METHOD_2_10F87C15A5CB72BB_OFFSET UNITYSDK_OFFSET(0x1672DD50)
#define CLASS_2_E756D2898F8156A5_METHOD_2_24A73FD2F3BEC0BF_OFFSET UNITYSDK_OFFSET(0x1672DFC0)
#define CLASS_2_E756D2898F8156A5_METHOD_2_705DFD6754A39E2E_OFFSET UNITYSDK_OFFSET(0x166FBEA0)
#define CLASS_2_E756D2898F8156A5__CTOR_OFFSET UNITYSDK_OFFSET(0x1672E150)
#define CLASS_2_E756D2898F8156A5__ONBIND_OFFSET UNITYSDK_OFFSET(0x1672DBA0)
#define CLASS_2_E756D2898F8156A5___ONBUTTONCLICK_B__9_0_OFFSET UNITYSDK_OFFSET(0x1672E1F0)

inline static constexpr unsigned int Class_2_E756D2898F8156A5_TypeDefinitionIndex = 69008;

class Class_2_E756D2898F8156A5 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_2; // 0x60
	::UnityEngine::UI::Text* Field_2_3; // 0x68
	::Class_2_5FA6F7B2482A3E07* Field_2_4; // 0x70
	::RPG::Client::AnimatorButton* Field_2_5; // 0x78
	::UnityEngine::UI::Button* Field_2_6; // 0x80
	::RPG::GameCore::BattleGridFightTeamTraitData* Field_2_7; // 0x88
	::System::Text::StringBuilder* Field_2_8; // 0x90
	::UnityEngine::UI::Text* Field_2_9; // 0x98

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
