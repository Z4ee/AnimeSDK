#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/LDWhiteBox/PathNodePoint.h"
#include "unitysdk/Struct_2_395B739A1AC58399_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPGTools::LDWhiteBox { class WhiteBoxConnector; }
namespace RPGTools::LDWhiteBox { class WhiteBoxRegion; }
namespace RPGTools::LDWhiteBox { class WhiteBoxRouteNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Transform; }

#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_COLLECTKNOTS_OFFSET UNITYSDK_OFFSET(0xE89F2B0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xE89EBB0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_ENDPOINTAQUALIFIEDID_OFFSET UNITYSDK_OFFSET(0xE89EBF0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_ENDPOINTA_OFFSET UNITYSDK_OFFSET(0xE89EBD0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_ENDPOINTBQUALIFIEDID_OFFSET UNITYSDK_OFFSET(0xE89EC00)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_ENDPOINTB_OFFSET UNITYSDK_OFFSET(0xE89EBE0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_MIDDLENODES_OFFSET UNITYSDK_OFFSET(0xE89EC10)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_OWNERREGION_OFFSET UNITYSDK_OFFSET(0xE89EA70)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_PATHID_OFFSET UNITYSDK_OFFSET(0xE89EA90)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_PATHNAME_OFFSET UNITYSDK_OFFSET(0xE89EB90)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0xE89EAB0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_MARKDIRTY_OFFSET UNITYSDK_OFFSET(0xE89EB50)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_METHOD_5_27A00CD55C0252F5_OFFSET UNITYSDK_OFFSET(0xE89FFC0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_METHOD_5_B321E2E2F027F639_OFFSET UNITYSDK_OFFSET(0xE89FB50)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_METHOD_5_BF9881B1343C8D87_OFFSET UNITYSDK_OFFSET(0xE89FC80)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE8A03F0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE8A0310)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE8A0260)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0xE8A0390)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_REBUILDIFDIRTY_OFFSET UNITYSDK_OFFSET(0xE89F130)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SETENDPOINTA_1_OFFSET UNITYSDK_OFFSET(0xE89ED10)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SETENDPOINTA_OFFSET UNITYSDK_OFFSET(0xE89EC20)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SETENDPOINTB_1_OFFSET UNITYSDK_OFFSET(0xE89EFD0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SETENDPOINTB_OFFSET UNITYSDK_OFFSET(0xE89EEE0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xE89EBC0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SET_OWNERREGION_OFFSET UNITYSDK_OFFSET(0xE89EA80)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SET_PATHID_OFFSET UNITYSDK_OFFSET(0xE89EAA0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SET_PATHNAME_OFFSET UNITYSDK_OFFSET(0xE89EBA0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0xE89EAC0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH__CTOR_OFFSET UNITYSDK_OFFSET(0xE8A0450)

namespace RPGTools::LDWhiteBox
{
	inline static constexpr unsigned int WhiteBoxPath_TypeDefinitionIndex = 48955;

	class WhiteBoxPath : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* _pathId; // 0x18
		::System::Single _width; // 0x20
		::System::String* _pathName; // 0x28
		::System::String* _description; // 0x30
		::System::Collections::Generic::List_1<::RPGTools::LDWhiteBox::PathNodePoint>* _middleNodes; // 0x38
		::UnityEngine::Transform* _endpointA; // 0x40
		::UnityEngine::Transform* _endpointB; // 0x48
		::System::String* _endpointAId; // 0x50
		::System::String* _endpointBId; // 0x58
		::RPGTools::LDWhiteBox::WhiteBoxRegion* _ownerRegion; // 0x60
		::UnityEngine::Mesh* JJEOBACJEEO; // 0x68
		::System::Boolean LINBEGOFFLB; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH__CTOR_OFFSET))(this);
		}

		::RPGTools::LDWhiteBox::WhiteBoxRegion* get_OwnerRegion()
		{
			return ((::RPGTools::LDWhiteBox::WhiteBoxRegion*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_OWNERREGION_OFFSET))(this);
		}

		::System::Void set_OwnerRegion(::RPGTools::LDWhiteBox::WhiteBoxRegion* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::LDWhiteBox::WhiteBoxRegion*))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SET_OWNERREGION_OFFSET))(this, a1);
		}

		::System::String* get_PathId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_PATHID_OFFSET))(this);
		}

		::System::Void set_PathId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SET_PATHID_OFFSET))(this, a1);
		}

		::System::Single get_Width()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_WIDTH_OFFSET))(this);
		}

		::System::Void set_Width(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SET_WIDTH_OFFSET))(this, a1);
		}

		::System::String* get_PathName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_PATHNAME_OFFSET))(this);
		}

		::System::Void set_PathName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SET_PATHNAME_OFFSET))(this, a1);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Void set_Description(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SET_DESCRIPTION_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_EndpointA()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_ENDPOINTA_OFFSET))(this);
		}

		::UnityEngine::Transform* get_EndpointB()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_ENDPOINTB_OFFSET))(this);
		}

		::System::String* get_EndpointAQualifiedId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_ENDPOINTAQUALIFIEDID_OFFSET))(this);
		}

		::System::String* get_EndpointBQualifiedId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_ENDPOINTBQUALIFIEDID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPGTools::LDWhiteBox::PathNodePoint>* get_MiddleNodes()
		{
			return ((::System::Collections::Generic::List_1<::RPGTools::LDWhiteBox::PathNodePoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_MIDDLENODES_OFFSET))(this);
		}

		::System::Void MarkDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_MARKDIRTY_OFFSET))(this);
		}

		::System::Void SetEndpointA(::RPGTools::LDWhiteBox::WhiteBoxConnector* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::LDWhiteBox::WhiteBoxConnector*))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SETENDPOINTA_OFFSET))(this, a1);
		}

		::System::Void SetEndpointA_1(::RPGTools::LDWhiteBox::WhiteBoxRouteNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::LDWhiteBox::WhiteBoxRouteNode*))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SETENDPOINTA_1_OFFSET))(this, a1);
		}

		::System::Void SetEndpointB(::RPGTools::LDWhiteBox::WhiteBoxConnector* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::LDWhiteBox::WhiteBoxConnector*))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SETENDPOINTB_OFFSET))(this, a1);
		}

		::System::Void SetEndpointB_1(::RPGTools::LDWhiteBox::WhiteBoxRouteNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::LDWhiteBox::WhiteBoxRouteNode*))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SETENDPOINTB_1_OFFSET))(this, a1);
		}

		::System::Void RebuildIfDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_REBUILDIFDIRTY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Struct_2_395B739A1AC58399_1>* CollectKnots()
		{
			return ((::System::Collections::Generic::List_1<::Struct_2_395B739A1AC58399_1>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_COLLECTKNOTS_OFFSET))(this);
		}

		static ::System::Void Method_5_B321E2E2F027F639(::Struct_2_395B739A1AC58399_1& a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a2, ::System::Int32 a3, ::RPGTools::LDWhiteBox::PathNodePoint a4)
		{
			return ((::System::Void(*)(::Struct_2_395B739A1AC58399_1&, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Int32, ::RPGTools::LDWhiteBox::PathNodePoint))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_METHOD_5_B321E2E2F027F639_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void Method_5_BF9881B1343C8D87(::Struct_2_395B739A1AC58399_1& a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_395B739A1AC58399_1&, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_METHOD_5_BF9881B1343C8D87_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector3 Method_5_27A00CD55C0252F5(::RPGTools::LDWhiteBox::WhiteBoxConnector* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPGTools::LDWhiteBox::WhiteBoxConnector*))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_METHOD_5_27A00CD55C0252F5_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_ONVALIDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_ONDESTROY_OFFSET))(this);
		}
	};
}
