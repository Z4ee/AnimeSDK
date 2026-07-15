#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_GET_CONNECTEDPATHID_OFFSET UNITYSDK_OFFSET(0x19D61F10)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_GET_CONNECTORID_OFFSET UNITYSDK_OFFSET(0x19D61EC0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x19D61EE0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_GET_QUALIFIEDID_OFFSET UNITYSDK_OFFSET(0x19D61F30)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x19D62050)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x19D620D0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x19D61FD0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_SET_CONNECTEDPATHID_OFFSET UNITYSDK_OFFSET(0x19D61F20)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_SET_CONNECTORID_OFFSET UNITYSDK_OFFSET(0x19D61ED0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_SET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x19D61F00)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x19D62360)

namespace RPGTools::LDWhiteBox
{
	inline static constexpr unsigned int WhiteBoxConnector_TypeDefinitionIndex = 47116;

	class WhiteBoxConnector : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* _connectorId; // 0x18
		::UnityEngine::Vector3 _direction; // 0x20
		::System::String* _connectedPathId; // 0x30

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

		::System::String* get_QualifiedId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_GET_QUALIFIEDID_OFFSET))(this);
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
