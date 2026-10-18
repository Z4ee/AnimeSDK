#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_CLAMPINTOOWNERREGION_OFFSET UNITYSDK_OFFSET(0xE89E500)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_CLAMPWORLDPOSITIONINTOOWNERREGION_OFFSET UNITYSDK_OFFSET(0xE89E660)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_GET_CONNECTEDPATHID_OFFSET UNITYSDK_OFFSET(0xE89E3C0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_GET_CONNECTORID_OFFSET UNITYSDK_OFFSET(0xE89E370)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_GET_CONNECTORNAME_OFFSET UNITYSDK_OFFSET(0xE89E400)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xE89E420)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0xE89E390)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_GET_QUALIFIEDID_OFFSET UNITYSDK_OFFSET(0xE89E460)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0xE89E3E0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_GET_VIEWHIDDEN_OFFSET UNITYSDK_OFFSET(0xE89E440)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE89E910)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0xE89E990)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE89E890)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_SET_CONNECTEDPATHID_OFFSET UNITYSDK_OFFSET(0xE89E3D0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_SET_CONNECTORID_OFFSET UNITYSDK_OFFSET(0xE89E380)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_SET_CONNECTORNAME_OFFSET UNITYSDK_OFFSET(0xE89E410)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_SET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xE89E430)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_SET_DIRECTION_OFFSET UNITYSDK_OFFSET(0xE89E3B0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0xE89E3F0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_SET_VIEWHIDDEN_OFFSET UNITYSDK_OFFSET(0xE89E450)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0xE89EA50)

namespace RPGTools::LDWhiteBox
{
	inline static constexpr unsigned int WhiteBoxConnector_TypeDefinitionIndex = 48952;

	class WhiteBoxConnector : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* _connectorId; // 0x18
		::UnityEngine::Vector3 _direction; // 0x20
		::System::String* _connectedPathId; // 0x30
		::System::Single _radius; // 0x38
		::System::String* _connectorName; // 0x40
		::System::String* _description; // 0x48
		::System::Boolean _viewHidden; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR__CTOR_OFFSET))(this);
		}

		::System::String* get_ConnectorId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_GET_CONNECTORID_OFFSET))(this);
		}

		::System::Void set_ConnectorId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_SET_CONNECTORID_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_Direction()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_GET_DIRECTION_OFFSET))(this);
		}

		::System::Void set_Direction(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_SET_DIRECTION_OFFSET))(this, a1);
		}

		::System::String* get_ConnectedPathId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_GET_CONNECTEDPATHID_OFFSET))(this);
		}

		::System::Void set_ConnectedPathId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_SET_CONNECTEDPATHID_OFFSET))(this, a1);
		}

		::System::Single get_Radius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_GET_RADIUS_OFFSET))(this);
		}

		::System::Void set_Radius(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_SET_RADIUS_OFFSET))(this, a1);
		}

		::System::String* get_ConnectorName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_GET_CONNECTORNAME_OFFSET))(this);
		}

		::System::Void set_ConnectorName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_SET_CONNECTORNAME_OFFSET))(this, a1);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Void set_Description(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_SET_DESCRIPTION_OFFSET))(this, a1);
		}

		::System::Boolean get_ViewHidden()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_GET_VIEWHIDDEN_OFFSET))(this);
		}

		::System::Void set_ViewHidden(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_SET_VIEWHIDDEN_OFFSET))(this, a1);
		}

		::System::String* get_QualifiedId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_GET_QUALIFIEDID_OFFSET))(this);
		}

		::System::Void ClampIntoOwnerRegion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_CLAMPINTOOWNERREGION_OFFSET))(this);
		}

		::UnityEngine::Vector3 ClampWorldPositionIntoOwnerRegion(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_CLAMPWORLDPOSITIONINTOOWNERREGION_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_ONDRAWGIZMOS_OFFSET))(this);
		}
	};
}
