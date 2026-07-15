#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/LDWhiteBox/PathNodePoint.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPGTools::LDWhiteBox { class WhiteBoxConnector; }
namespace RPGTools::LDWhiteBox { class WhiteBoxJunction; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Transform; }

#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_ENDPOINTAQUALIFIEDID_OFFSET UNITYSDK_OFFSET(0x19D62B30)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_ENDPOINTA_OFFSET UNITYSDK_OFFSET(0x19D62B10)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_ENDPOINTBQUALIFIEDID_OFFSET UNITYSDK_OFFSET(0x19D62B40)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_ENDPOINTB_OFFSET UNITYSDK_OFFSET(0x19D62B20)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_MIDDLENODES_OFFSET UNITYSDK_OFFSET(0x19D62B50)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_PATHID_OFFSET UNITYSDK_OFFSET(0x19D62A10)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x19D62A30)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_MARKDIRTY_OFFSET UNITYSDK_OFFSET(0x19D62AD0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_METHOD_5_3ADD775F2398C2F5_OFFSET UNITYSDK_OFFSET(0x19D63180)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19D636D0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x19D635F0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_ONENABLE_OFFSET UNITYSDK_OFFSET(0x19D63540)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x19D63670)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_REBUILDIFDIRTY_OFFSET UNITYSDK_OFFSET(0x19D63000)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SETENDPOINTA_1_OFFSET UNITYSDK_OFFSET(0x19D62C50)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SETENDPOINTA_OFFSET UNITYSDK_OFFSET(0x19D62B60)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SETENDPOINTB_1_OFFSET UNITYSDK_OFFSET(0x19D62EA0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SETENDPOINTB_OFFSET UNITYSDK_OFFSET(0x19D62DB0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SET_PATHID_OFFSET UNITYSDK_OFFSET(0x19D62A20)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0x19D62A40)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x19D63730)

namespace RPGTools::LDWhiteBox
{
	inline static constexpr unsigned int WhiteBoxPath_TypeDefinitionIndex = 47119;

	class WhiteBoxPath : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* _pathId; // 0x18
		::System::Single _width; // 0x20
		::System::Collections::Generic::List_1<::RPGTools::LDWhiteBox::PathNodePoint>* _middleNodes; // 0x28
		::UnityEngine::Transform* _endpointA; // 0x30
		::UnityEngine::Transform* _endpointB; // 0x38
		::System::String* _endpointAId; // 0x40
		::System::String* _endpointBId; // 0x48
		::UnityEngine::Mesh* Field_5_7; // 0x50
		::System::Boolean Field_5_8; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH__CTOR_OFFSET))(this);
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

		::System::Void SetEndpointA_1(::RPGTools::LDWhiteBox::WhiteBoxJunction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::LDWhiteBox::WhiteBoxJunction*))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SETENDPOINTA_1_OFFSET))(this, a1);
		}

		::System::Void SetEndpointB(::RPGTools::LDWhiteBox::WhiteBoxConnector* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::LDWhiteBox::WhiteBoxConnector*))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SETENDPOINTB_OFFSET))(this, a1);
		}

		::System::Void SetEndpointB_1(::RPGTools::LDWhiteBox::WhiteBoxJunction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::LDWhiteBox::WhiteBoxJunction*))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_SETENDPOINTB_1_OFFSET))(this, a1);
		}

		::System::Void RebuildIfDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_REBUILDIFDIRTY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Method_5_3ADD775F2398C2F5()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXPATH_METHOD_5_3ADD775F2398C2F5_OFFSET))(this);
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
