#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPGTools::LDWhiteBox { class WhiteBoxRegion; }
namespace System { class String; }

#define RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_CLAMPINTOOWNERREGION_OFFSET UNITYSDK_OFFSET(0xE802B00)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_GET_CONNECTEDPATHID_OFFSET UNITYSDK_OFFSET(0xE802A00)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_GET_CONNECTORID_OFFSET UNITYSDK_OFFSET(0xE8029B0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xE802A20)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0xE8029D0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_GET_QUALIFIEDID_OFFSET UNITYSDK_OFFSET(0xE802A60)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_GET_VIEWHIDDEN_OFFSET UNITYSDK_OFFSET(0xE802A40)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_METHOD_5_2C6213D33BFB37E3_OFFSET UNITYSDK_OFFSET(0xE802DB0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE802FE0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0xE803060)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE802F60)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_SET_CONNECTEDPATHID_OFFSET UNITYSDK_OFFSET(0xE802A10)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_SET_CONNECTORID_OFFSET UNITYSDK_OFFSET(0xE8029C0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_SET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xE802A30)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_SET_DIRECTION_OFFSET UNITYSDK_OFFSET(0xE8029F0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_SET_VIEWHIDDEN_OFFSET UNITYSDK_OFFSET(0xE802A50)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0xE803120)

namespace RPGTools::LDWhiteBox
{
	inline static constexpr unsigned int WhiteBoxConnector_TypeDefinitionIndex = 49380;

	class WhiteBoxConnector : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* _connectorId; // 0x18
		::UnityEngine::Vector3 _direction; // 0x20
		::System::String* _connectedPathId; // 0x30
		::System::String* _description; // 0x38
		::System::Boolean _viewHidden; // 0x40

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

		static ::UnityEngine::Vector3 Method_5_2C6213D33BFB37E3(::RPGTools::LDWhiteBox::WhiteBoxRegion* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::RPGTools::LDWhiteBox::WhiteBoxRegion*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXCONNECTOR_METHOD_5_2C6213D33BFB37E3_OFFSET))(a1, a2);
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
