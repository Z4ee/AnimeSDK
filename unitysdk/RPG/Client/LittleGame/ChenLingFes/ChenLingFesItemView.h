#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLingFes/ChenLingFesView.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_1342B57709FD7AC5;
namespace RPG { class OutlinePostFXMonoPlugin; }
namespace RPG::Client { class PropSelectionEffect; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESITEMVIEW_CLEARBREATHHOVERCOLOR_OFFSET UNITYSDK_OFFSET(0x19B94360)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESITEMVIEW_CLEAREFFECT_OFFSET UNITYSDK_OFFSET(0x19B94600)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESITEMVIEW_GET_ANIMATOR_OFFSET UNITYSDK_OFFSET(0x19B94710)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESITEMVIEW_GET_OUTLINEPOSTFXMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0x19B946C0)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESITEMVIEW_GET_PROPSELECTIONEFFECT_OFFSET UNITYSDK_OFFSET(0x19B94670)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESITEMVIEW_METHOD_7_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x19B94050)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESITEMVIEW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19B94550)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESITEMVIEW_SETDITHERALPHA_OFFSET UNITYSDK_OFFSET(0x19B93FD0)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESITEMVIEW_START_OFFSET UNITYSDK_OFFSET(0x19B94500)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESITEMVIEW_USEBREATHHOVERCOLOR_OFFSET UNITYSDK_OFFSET(0x19B942B0)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESITEMVIEW__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B94780)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESITEMVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x19B94760)

namespace RPG::Client::LittleGame::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesItemView_TypeDefinitionIndex = 73832;

	class ChenLingFesItemView : public ::RPG::Client::LittleGame::ChenLingFes::ChenLingFesView
	{
	public:
		static ::UnityEngine::Color* StaticGet_Field_7_0()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(ChenLingFesItemView_TypeDefinitionIndex)->GetStaticField(0x98F0);
		}
		static ::System::Int32* StaticGet_Field_7_1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChenLingFesItemView_TypeDefinitionIndex)->GetStaticField(0x9900);
		}
		::RPG::Client::PropSelectionEffect* Field_7_2; // 0x58
		::RPG::OutlinePostFXMonoPlugin* Field_7_3; // 0x60
		::UnityEngine::Animator* Field_7_4; // 0x68
		::Class_1_1342B57709FD7AC5* Field_7_5; // 0x70
		::System::Boolean Field_7_6; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESITEMVIEW__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESITEMVIEW__CCTOR_OFFSET))();
		}

		::System::Void SetDitherAlpha(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESITEMVIEW_SETDITHERALPHA_OFFSET))(this, a1);
		}

		::System::Void UseBreathHoverColor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESITEMVIEW_USEBREATHHOVERCOLOR_OFFSET))(this);
		}

		::System::Void ClearBreathHoverColor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESITEMVIEW_CLEARBREATHHOVERCOLOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESITEMVIEW_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESITEMVIEW_ONDESTROY_OFFSET))(this);
		}

		::System::Void ClearEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESITEMVIEW_CLEAREFFECT_OFFSET))(this);
		}

		::System::Void Method_7_A239DF324AF4215D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESITEMVIEW_METHOD_7_A239DF324AF4215D_OFFSET))(this);
		}

		::RPG::Client::PropSelectionEffect* get_PropSelectionEffect()
		{
			return ((::RPG::Client::PropSelectionEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESITEMVIEW_GET_PROPSELECTIONEFFECT_OFFSET))(this);
		}

		::RPG::OutlinePostFXMonoPlugin* get_OutlinePostFXMonoPlugin()
		{
			return ((::RPG::OutlinePostFXMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESITEMVIEW_GET_OUTLINEPOSTFXMONOPLUGIN_OFFSET))(this);
		}

		::UnityEngine::Animator* get_Animator()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESITEMVIEW_GET_ANIMATOR_OFFSET))(this);
		}
	};
}
