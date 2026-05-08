#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_6A96CF8852C977C2.h"
#include "unitysdk/MoleMole/UITwoDMapElement_Data.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_334;
namespace MoleMole { class UITwoDMapElement_UIController; }
namespace MoleMole { class UIWindowController; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UITWODMAPELEMENT_DATA_HOLLOWEFFECT_CREATEUICONTROLLER_OFFSET UNITYSDK_OFFSET(0xEBCC050)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_HOLLOWEFFECT_GETICONSIZE_OFFSET UNITYSDK_OFFSET(0xEBCBF20)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_HOLLOWEFFECT_GETICONTYPE_OFFSET UNITYSDK_OFFSET(0xEBCBEC0)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_HOLLOWEFFECT_GETOFFSETPOSITION_OFFSET UNITYSDK_OFFSET(0xEBCBFC0)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_HOLLOWEFFECT_GET_FORCEACTIVE_OFFSET UNITYSDK_OFFSET(0xEBCBE40)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_HOLLOWEFFECT_GET_ICONID_OFFSET UNITYSDK_OFFSET(0xEBCBF10)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_HOLLOWEFFECT_GET_ROOTNAME_OFFSET UNITYSDK_OFFSET(0xEBCC110)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_HOLLOWEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xEBCBE50)
#define MOLEMOLE_UITWODMAPELEMENT_DATA_HOLLOWEFFECT___BASE_GETICONSIZE_OFFSET UNITYSDK_OFFSET(0xEBCC150)

namespace MoleMole
{
	inline static constexpr unsigned int UITwoDMapElement_Data_HollowEffect_TypeDefinitionIndex = 49159;

	class UITwoDMapElement_Data_HollowEffect : public ::MoleMole::UITwoDMapElement_Data
	{
	public:
		::System::Int32 _id; // 0x58
		::UnityEngine::Vector2 Offset; // 0x5C
		::UnityEngine::Vector2 Offset2; // 0x64

		::System::Void _ctor(::System::Int32 id, ::Class_0_16E4307DCC419505_334* posProvider)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_0_16E4307DCC419505_334*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_HOLLOWEFFECT__CTOR_OFFSET))(this, id, posProvider);
		}

		::System::Boolean get_ForceActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_HOLLOWEFFECT_GET_FORCEACTIVE_OFFSET))(this);
		}

		::Enum_3_6A96CF8852C977C2 GetIconType()
		{
			return ((::Enum_3_6A96CF8852C977C2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_HOLLOWEFFECT_GETICONTYPE_OFFSET))(this);
		}

		::System::Int32 get_IconId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_HOLLOWEFFECT_GET_ICONID_OFFSET))(this);
		}

		::System::Single GetIconSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_HOLLOWEFFECT_GETICONSIZE_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetOffsetPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_HOLLOWEFFECT_GETOFFSETPOSITION_OFFSET))(this);
		}

		::MoleMole::UITwoDMapElement_UIController* CreateUIController(::MoleMole::UIWindowController* parent, ::UnityEngine::Transform* root)
		{
			return ((::MoleMole::UITwoDMapElement_UIController*(*)(::PVOID, ::MoleMole::UIWindowController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_HOLLOWEFFECT_CREATEUICONTROLLER_OFFSET))(this, parent, root);
		}

		::System::String* get_RootName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_HOLLOWEFFECT_GET_ROOTNAME_OFFSET))(this);
		}

		::System::Single __base_GetIconSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITWODMAPELEMENT_DATA_HOLLOWEFFECT___BASE_GETICONSIZE_OFFSET))(this);
		}
	};
}
