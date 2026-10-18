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

#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_COLLECTKNOTS_OFFSET UNITYSDK_OFFSET(0xE894C80)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xE894580)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_ENDPOINTAQUALIFIEDID_OFFSET UNITYSDK_OFFSET(0xE8945C0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_ENDPOINTA_OFFSET UNITYSDK_OFFSET(0xE8945A0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_ENDPOINTBQUALIFIEDID_OFFSET UNITYSDK_OFFSET(0xE8945D0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_ENDPOINTB_OFFSET UNITYSDK_OFFSET(0xE8945B0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_MIDDLENODES_OFFSET UNITYSDK_OFFSET(0xE8945E0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_OWNERREGION_OFFSET UNITYSDK_OFFSET(0xE894440)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_PATHID_OFFSET UNITYSDK_OFFSET(0xE894460)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_PATHNAME_OFFSET UNITYSDK_OFFSET(0xE894560)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0xE894480)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_MARKDIRTY_OFFSET UNITYSDK_OFFSET(0xE894520)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_METHOD_5_27A00CD55C0252F5_OFFSET UNITYSDK_OFFSET(0xE895990)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_METHOD_5_B321E2E2F027F639_OFFSET UNITYSDK_OFFSET(0xE895520)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_METHOD_5_BF9881B1343C8D87_OFFSET UNITYSDK_OFFSET(0xE895650)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE895DC0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE895CE0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE895C30)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0xE895D60)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_REBUILDIFDIRTY_OFFSET UNITYSDK_OFFSET(0xE894B00)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SETENDPOINTA_1_OFFSET UNITYSDK_OFFSET(0xE8946E0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SETENDPOINTA_OFFSET UNITYSDK_OFFSET(0xE8945F0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SETENDPOINTB_1_OFFSET UNITYSDK_OFFSET(0xE8949A0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SETENDPOINTB_OFFSET UNITYSDK_OFFSET(0xE8948B0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xE894590)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SET_OWNERREGION_OFFSET UNITYSDK_OFFSET(0xE894450)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SET_PATHID_OFFSET UNITYSDK_OFFSET(0xE894470)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SET_PATHNAME_OFFSET UNITYSDK_OFFSET(0xE894570)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0xE894490)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH__CTOR_OFFSET UNITYSDK_OFFSET(0xE895E20)

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
