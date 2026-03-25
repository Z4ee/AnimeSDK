#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_2_59443FB8B183FBD5;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class GridFightTraitConfigBase; }
namespace RPG::GameCore { class BattleGridFightTeamTraitData; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_625068BFCA65C354_METHOD_2_24A73FD2F3BEC0BF_OFFSET UNITYSDK_OFFSET(0x108F5300)
#define CLASS_2_625068BFCA65C354_METHOD_2_E2371C9CBED439B6_OFFSET UNITYSDK_OFFSET(0x108F4F30)
#define CLASS_2_625068BFCA65C354_METHOD_2_F68148C2CCDD3B16_OFFSET UNITYSDK_OFFSET(0x108F5050)
#define CLASS_2_625068BFCA65C354__CTOR_OFFSET UNITYSDK_OFFSET(0x108F5470)
#define CLASS_2_625068BFCA65C354__ONBIND_OFFSET UNITYSDK_OFFSET(0x108F4C20)
#define CLASS_2_625068BFCA65C354___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x108F5550)
#define CLASS_2_625068BFCA65C354___ONBUTTONCLICK_B__9_0_OFFSET UNITYSDK_OFFSET(0x108F5510)

inline static constexpr unsigned int Class_2_625068BFCA65C354_TypeDefinitionIndex = 59194;

class Class_2_625068BFCA65C354 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_8; // 0x0
	::UnityEngine::UI::Text* Field_2_4; // 0x60
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_7; // 0x68
	::RPG::Client::AnimatorButton* Field_2_1; // 0x70
	::UnityEngine::UI::Text* Field_2_5; // 0x78
	::Class_2_59443FB8B183FBD5* Field_2_3; // 0x80
	::UnityEngine::UI::Button* Field_2_2; // 0x88
	::System::Text::StringBuilder* Field_2_9; // 0x90
	::RPG::GameCore::BattleGridFightTeamTraitData* Field_2_6; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_625068BFCA65C354__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_625068BFCA65C354__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_E2371C9CBED439B6(::RPG::GameCore::BattleGridFightTeamTraitData* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightTeamTraitData*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_625068BFCA65C354_METHOD_2_E2371C9CBED439B6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F68148C2CCDD3B16(::RPG::Client::GridFightTraitConfigBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitConfigBase*))((::PBYTE)hIl2Cpp + CLASS_2_625068BFCA65C354_METHOD_2_F68148C2CCDD3B16_OFFSET))(this, a1);
	}

	::System::Void Method_2_24A73FD2F3BEC0BF(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_625068BFCA65C354_METHOD_2_24A73FD2F3BEC0BF_OFFSET))(this, a1);
	}

	::System::Void __OnButtonClick_b__9_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_625068BFCA65C354___ONBUTTONCLICK_B__9_0_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_625068BFCA65C354___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
