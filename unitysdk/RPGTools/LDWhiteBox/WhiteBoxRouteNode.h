#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/LDWhiteBox/RouteNodeConnectivity.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPGTools::LDWhiteBox { class WhiteBoxRegion; }
namespace System { class String; }

#define RPGTOOLS_LDWHITEBOX_WHITEBOXROUTENODE_GET_CONNECTIVITY_OFFSET UNITYSDK_OFFSET(0xE8982B0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXROUTENODE_GET_DEGREE_OFFSET UNITYSDK_OFFSET(0xE897B80)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXROUTENODE_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xE897B60)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXROUTENODE_GET_DISCCOLOR_OFFSET UNITYSDK_OFFSET(0xE8988C0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXROUTENODE_GET_OWNERREGION_OFFSET UNITYSDK_OFFSET(0xE8983C0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXROUTENODE_GET_QUALIFIEDID_OFFSET UNITYSDK_OFFSET(0xE894840)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXROUTENODE_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0xE897B20)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXROUTENODE_GET_ROUTENODEID_OFFSET UNITYSDK_OFFSET(0xE897B00)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXROUTENODE_GET_ROUTENODENAME_OFFSET UNITYSDK_OFFSET(0xE897B40)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXROUTENODE_GET_VIEWHIDDEN_OFFSET UNITYSDK_OFFSET(0xE8983A0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXROUTENODE_METHOD_5_552DBFAFADD8E461_OFFSET UNITYSDK_OFFSET(0xE8987F0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXROUTENODE_METHOD_5_D2E361942858DD7C_OFFSET UNITYSDK_OFFSET(0xE897B90)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXROUTENODE_METHOD_5_E040D11DA77BBB84_OFFSET UNITYSDK_OFFSET(0xE898340)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXROUTENODE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE8985F0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXROUTENODE_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0xE898670)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXROUTENODE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE898570)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXROUTENODE_SET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xE897B70)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXROUTENODE_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0xE897B30)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXROUTENODE_SET_ROUTENODEID_OFFSET UNITYSDK_OFFSET(0xE897B10)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXROUTENODE_SET_ROUTENODENAME_OFFSET UNITYSDK_OFFSET(0xE897B50)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXROUTENODE_SET_VIEWHIDDEN_OFFSET UNITYSDK_OFFSET(0xE8983B0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXROUTENODE__CTOR_OFFSET UNITYSDK_OFFSET(0xE8989E0)

namespace RPGTools::LDWhiteBox
{
	inline static constexpr unsigned int WhiteBoxRouteNode_TypeDefinitionIndex = 48962;

	class WhiteBoxRouteNode : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* _routeNodeId; // 0x18
		::System::Single _radius; // 0x20
		::System::String* _routeNodeName; // 0x28
		::System::String* _description; // 0x30
		::System::Boolean _viewHidden; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXROUTENODE__CTOR_OFFSET))(this);
		}

		::System::String* get_RouteNodeId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXROUTENODE_GET_ROUTENODEID_OFFSET))(this);
		}

		::System::Void set_RouteNodeId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXROUTENODE_SET_ROUTENODEID_OFFSET))(this, a1);
		}

		::System::Single get_Radius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXROUTENODE_GET_RADIUS_OFFSET))(this);
		}

		::System::Void set_Radius(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXROUTENODE_SET_RADIUS_OFFSET))(this, a1);
		}

		::System::String* get_RouteNodeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXROUTENODE_GET_ROUTENODENAME_OFFSET))(this);
		}

		::System::Void set_RouteNodeName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXROUTENODE_SET_ROUTENODENAME_OFFSET))(this, a1);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXROUTENODE_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Void set_Description(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXROUTENODE_SET_DESCRIPTION_OFFSET))(this, a1);
		}

		::System::Int32 get_Degree()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXROUTENODE_GET_DEGREE_OFFSET))(this);
		}

		::RPGTools::LDWhiteBox::RouteNodeConnectivity get_Connectivity()
		{
			return ((::RPGTools::LDWhiteBox::RouteNodeConnectivity(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXROUTENODE_GET_CONNECTIVITY_OFFSET))(this);
		}

		::System::Boolean get_ViewHidden()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXROUTENODE_GET_VIEWHIDDEN_OFFSET))(this);
		}

		::System::Void set_ViewHidden(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXROUTENODE_SET_VIEWHIDDEN_OFFSET))(this, a1);
		}

		::System::String* get_QualifiedId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXROUTENODE_GET_QUALIFIEDID_OFFSET))(this);
		}

		::RPGTools::LDWhiteBox::WhiteBoxRegion* get_OwnerRegion()
		{
			return ((::RPGTools::LDWhiteBox::WhiteBoxRegion*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXROUTENODE_GET_OWNERREGION_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXROUTENODE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXROUTENODE_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXROUTENODE_ONDRAWGIZMOS_OFFSET))(this);
		}

		::UnityEngine::Color get_DiscColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXROUTENODE_GET_DISCCOLOR_OFFSET))(this);
		}

		::System::Int32 Method_5_D2E361942858DD7C()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXROUTENODE_METHOD_5_D2E361942858DD7C_OFFSET))(this);
		}

		static ::RPGTools::LDWhiteBox::RouteNodeConnectivity Method_5_E040D11DA77BBB84(::System::Int32 a1)
		{
			return ((::RPGTools::LDWhiteBox::RouteNodeConnectivity(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXROUTENODE_METHOD_5_E040D11DA77BBB84_OFFSET))(a1);
		}

		static ::UnityEngine::Color Method_5_552DBFAFADD8E461(::RPGTools::LDWhiteBox::RouteNodeConnectivity a1)
		{
			return ((::UnityEngine::Color(*)(::RPGTools::LDWhiteBox::RouteNodeConnectivity))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXROUTENODE_METHOD_5_552DBFAFADD8E461_OFFSET))(a1);
		}
	};
}
