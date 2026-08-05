#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_6A96CF8852C977C2.h"
#include "unitysdk/MoleMole/UITwoDMapElement_Data.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_364;
class Class_2_208CC9941471731A_868;
namespace MoleMole { class UITwoDMapElement_UIController; }
namespace MoleMole { class UIWindowController; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UITWODMAPELEMENT_DATA_STREETICON_CREATEUICONTROLLER_OFFSET UNITYSDK_OFFSET(0x15EBE620)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_STREETICON_GETICONTYPE_OFFSET UNITYSDK_OFFSET(0x15EBE520)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_STREETICON_GETOFFSETPOSITION_OFFSET UNITYSDK_OFFSET(0x15EBE590)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_STREETICON_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x15EBE320)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_STREETICON_GET_ICONID_OFFSET UNITYSDK_OFFSET(0x15EBE570)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_STREETICON_GET_ROOTNAME_OFFSET UNITYSDK_OFFSET(0x15EBE6F0)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_STREETICON_SHOWPROGRESS_OFFSET UNITYSDK_OFFSET(0x15EBE730)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_STREETICON__CTOR_OFFSET UNITYSDK_OFFSET(0x15EBE330)

namespace MoleMole
{
	inline static constexpr unsigned int UITwoDMapElement_Data_StreetIcon_TypeDefinitionIndex = 66385;

	class UITwoDMapElement_Data_StreetIcon : public ::MoleMole::UITwoDMapElement_Data
	{
	public:
		::System::Action_2<::MoleMole::UITwoDMapElement_Data_StreetIcon*, ::System::Single>* OnScrollTo; // 0x58
		::Class_2_208CC9941471731A_868* _config; // 0x60
		::UnityEngine::Vector2 _offset; // 0x68

		::System::Void _ctor(::System::Int32 streetId, ::System::Single rate, ::Class_0_16E4307DCC419505_364* posProvider, ::System::Action_2<::MoleMole::UITwoDMapElement_Data_StreetIcon*, ::System::Single>* onScrollTo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::Class_0_16E4307DCC419505_364*, ::System::Action_2<::MoleMole::UITwoDMapElement_Data_StreetIcon*, ::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_STREETICON__CTOR_OFFSET))(this, streetId, rate, posProvider, onScrollTo);
		}

		::Class_2_208CC9941471731A_868* get_Config()
		{
			return ((::Class_2_208CC9941471731A_868*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_STREETICON_GET_CONFIG_OFFSET))(this);
		}

		::Enum_3_6A96CF8852C977C2 GetIconType()
		{
			return ((::Enum_3_6A96CF8852C977C2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_STREETICON_GETICONTYPE_OFFSET))(this);
		}

		::System::Int32 get_IconId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_STREETICON_GET_ICONID_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetOffsetPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_STREETICON_GETOFFSETPOSITION_OFFSET))(this);
		}

		::MoleMole::UITwoDMapElement_UIController* CreateUIController(::MoleMole::UIWindowController* parent, ::UnityEngine::Transform* root)
		{
			return ((::MoleMole::UITwoDMapElement_UIController*(*)(::PVOID, ::MoleMole::UIWindowController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_STREETICON_CREATEUICONTROLLER_OFFSET))(this, parent, root);
		}

		::System::String* get_RootName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_STREETICON_GET_ROOTNAME_OFFSET))(this);
		}

		::System::Boolean ShowProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_STREETICON_SHOWPROGRESS_OFFSET))(this);
		}
	};
}
