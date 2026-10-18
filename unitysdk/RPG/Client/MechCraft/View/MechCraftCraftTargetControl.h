#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl_1.h"

class Class_0_16E4307DCC419505_1496;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client::MechCraft::View { class MechCraftCraftTargetAttributeControl; }
namespace UnityEngine { class RectTransform; }
template <typename T> class Class_1_D90286A3143EECEC;

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETCONTROL__BINDATTRIBUTES_OFFSET UNITYSDK_OFFSET(0xD637E60)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETCONTROL__BINDCOMMANDS_OFFSET UNITYSDK_OFFSET(0xD637BF0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xD637B80)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETCONTROL__BINDTRAITS_OFFSET UNITYSDK_OFFSET(0xD6387B0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD638C30)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftTargetControl_TypeDefinitionIndex = 79949;

	class MechCraftCraftTargetControl : public ::Sofa::BaseSofaControl_1<::Class_0_16E4307DCC419505_1496*>
	{
	public:
		::RPG::Client::AnimatorButton* _BtnExit; // 0x70
		::UnityEngine::RectTransform* _NodeAttributes; // 0x78
		::RPG::Client::MechCraft::View::MechCraftCraftTargetAttributeControl* _Attribute1; // 0x80
		::RPG::Client::MechCraft::View::MechCraftCraftTargetAttributeControl* _Attribute2; // 0x88
		::UnityEngine::RectTransform* _NodeTraits; // 0x90
		::RPG::Client::LocalizedText* _TextTraits; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1496*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1496*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETCONTROL__BINDING_OFFSET))(this, a1);
		}

		::System::Void _BindCommands(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1496*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1496*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETCONTROL__BINDCOMMANDS_OFFSET))(this, a1);
		}

		::System::Void _BindAttributes(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1496*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1496*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETCONTROL__BINDATTRIBUTES_OFFSET))(this, a1);
		}

		::System::Void _BindTraits(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1496*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1496*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETCONTROL__BINDTRAITS_OFFSET))(this, a1);
		}
	};
}
