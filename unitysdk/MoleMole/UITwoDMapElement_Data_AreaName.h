#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_6A96CF8852C977C2.h"
#include "unitysdk/MoleMole/UITwoDMapElement_Data.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_274;
class Class_2_208CC9941471731A_105;
namespace MoleMole { class UITwoDMapElement_UIController; }
namespace MoleMole { class UIWindowController; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UITWODMAPELEMENT_DATA_AREANAME_CREATEUICONTROLLER_OFFSET UNITYSDK_OFFSET(0x10895E00)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_AREANAME_GETICONTYPE_OFFSET UNITYSDK_OFFSET(0x10895CE0)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_AREANAME_GETOFFSETPOSITION_OFFSET UNITYSDK_OFFSET(0x10895D50)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_AREANAME_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x10895AF0)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_AREANAME_GET_ICONID_OFFSET UNITYSDK_OFFSET(0x10895D30)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_AREANAME_GET_ROOTNAME_OFFSET UNITYSDK_OFFSET(0x10895EC0)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_AREANAME__CTOR_OFFSET UNITYSDK_OFFSET(0x10895B00)

namespace MoleMole
{
	inline static constexpr unsigned int UITwoDMapElement_Data_AreaName_TypeDefinitionIndex = 73360;

	class UITwoDMapElement_Data_AreaName : public ::MoleMole::UITwoDMapElement_Data
	{
	public:
		::System::Action_2<::MoleMole::UITwoDMapElement_Data_AreaName*, ::System::Single>* OnScrollTo; // 0x58
		::Class_2_208CC9941471731A_105* _config; // 0x60
		::UnityEngine::Vector2 _offset; // 0x68

		::System::Void _ctor(::System::Int32 areaGroupId, ::System::Single rate, ::Class_0_16E4307DCC419505_274* posProvider, ::System::Action_2<::MoleMole::UITwoDMapElement_Data_AreaName*, ::System::Single>* onScrollTo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::Class_0_16E4307DCC419505_274*, ::System::Action_2<::MoleMole::UITwoDMapElement_Data_AreaName*, ::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_AREANAME__CTOR_OFFSET))(this, areaGroupId, rate, posProvider, onScrollTo);
		}

		::Class_2_208CC9941471731A_105* get_Config()
		{
			return ((::Class_2_208CC9941471731A_105*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_AREANAME_GET_CONFIG_OFFSET))(this);
		}

		::Enum_3_6A96CF8852C977C2 GetIconType()
		{
			return ((::Enum_3_6A96CF8852C977C2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_AREANAME_GETICONTYPE_OFFSET))(this);
		}

		::System::Int32 get_IconId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_AREANAME_GET_ICONID_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetOffsetPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_AREANAME_GETOFFSETPOSITION_OFFSET))(this);
		}

		::MoleMole::UITwoDMapElement_UIController* CreateUIController(::MoleMole::UIWindowController* parent, ::UnityEngine::Transform* root)
		{
			return ((::MoleMole::UITwoDMapElement_UIController*(*)(::PVOID, ::MoleMole::UIWindowController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_AREANAME_CREATEUICONTROLLER_OFFSET))(this, parent, root);
		}

		::System::String* get_RootName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_AREANAME_GET_ROOTNAME_OFFSET))(this);
		}
	};
}
