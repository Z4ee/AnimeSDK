#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl_1.h"

class Class_0_16E4307DCC419505_1495;
namespace RPG::Client { class LocalizedText; }
namespace UnityEngine::UI { class Image; }
template <typename T> class Class_1_D90286A3143EECEC;

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETATTRIBUTECONTROL__BINDICON_OFFSET UNITYSDK_OFFSET(0xD62EA10)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETATTRIBUTECONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xD62E9B0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETATTRIBUTECONTROL__BINDTEXT_OFFSET UNITYSDK_OFFSET(0xD62EC80)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETATTRIBUTECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD62EEF0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftTargetAttributeControl_TypeDefinitionIndex = 79946;

	class MechCraftCraftTargetAttributeControl : public ::Sofa::BaseSofaControl_1<::Class_0_16E4307DCC419505_1495*>
	{
	public:
		::UnityEngine::UI::Image* _Icon; // 0x70
		::RPG::Client::LocalizedText* _Text; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETATTRIBUTECONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1495*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1495*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETATTRIBUTECONTROL__BINDING_OFFSET))(this, a1);
		}

		::System::Void _BindIcon(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1495*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1495*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETATTRIBUTECONTROL__BINDICON_OFFSET))(this, a1);
		}

		::System::Void _BindText(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1495*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1495*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETATTRIBUTECONTROL__BINDTEXT_OFFSET))(this, a1);
		}
	};
}
