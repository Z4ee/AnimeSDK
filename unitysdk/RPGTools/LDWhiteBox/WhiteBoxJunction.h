#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/LDWhiteBox/JunctionType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPGTools::LDWhiteBox { class WhiteBoxRegion; }
namespace System { class String; }

#define RPGTOOLS_LDWHITEBOX_WHITEBOXJUNCTION_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x19D62400)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXJUNCTION_GET_JUNCTIONID_OFFSET UNITYSDK_OFFSET(0x19D62380)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXJUNCTION_GET_JUNCTIONNAME_OFFSET UNITYSDK_OFFSET(0x19D623E0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXJUNCTION_GET_JUNCTIONTYPE_OFFSET UNITYSDK_OFFSET(0x19D623A0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXJUNCTION_GET_OWNERREGION_OFFSET UNITYSDK_OFFSET(0x19D62490)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXJUNCTION_GET_QUALIFIEDID_OFFSET UNITYSDK_OFFSET(0x19D62420)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXJUNCTION_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x19D623C0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXJUNCTION_METHOD_5_57D95388FFE72045_OFFSET UNITYSDK_OFFSET(0x19D62930)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXJUNCTION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x19D626C0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXJUNCTION_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x19D62740)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXJUNCTION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x19D62640)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXJUNCTION_SET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x19D62410)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXJUNCTION_SET_JUNCTIONID_OFFSET UNITYSDK_OFFSET(0x19D62390)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXJUNCTION_SET_JUNCTIONNAME_OFFSET UNITYSDK_OFFSET(0x19D623F0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXJUNCTION_SET_JUNCTIONTYPE_OFFSET UNITYSDK_OFFSET(0x19D623B0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXJUNCTION_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0x19D623D0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXJUNCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19D62A00)

namespace RPGTools::LDWhiteBox
{
	inline static constexpr unsigned int WhiteBoxJunction_TypeDefinitionIndex = 47117;

	class WhiteBoxJunction : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* _junctionId; // 0x18
		::RPGTools::LDWhiteBox::JunctionType _jtype; // 0x20
		::System::Single _radius; // 0x24
		::System::String* _jname; // 0x28
		::System::String* _description; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXJUNCTION__CTOR_OFFSET))(this);
		}

		::System::String* get_JunctionId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXJUNCTION_GET_JUNCTIONID_OFFSET))(this);
		}

		::System::Void set_JunctionId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXJUNCTION_SET_JUNCTIONID_OFFSET))(this, a1);
		}

		::RPGTools::LDWhiteBox::JunctionType get_JunctionType()
		{
			return ((::RPGTools::LDWhiteBox::JunctionType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXJUNCTION_GET_JUNCTIONTYPE_OFFSET))(this);
		}

		::System::Void set_JunctionType(::RPGTools::LDWhiteBox::JunctionType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::LDWhiteBox::JunctionType))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXJUNCTION_SET_JUNCTIONTYPE_OFFSET))(this, a1);
		}

		::System::Single get_Radius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXJUNCTION_GET_RADIUS_OFFSET))(this);
		}

		::System::Void set_Radius(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXJUNCTION_SET_RADIUS_OFFSET))(this, a1);
		}

		::System::String* get_JunctionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXJUNCTION_GET_JUNCTIONNAME_OFFSET))(this);
		}

		::System::Void set_JunctionName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXJUNCTION_SET_JUNCTIONNAME_OFFSET))(this, a1);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXJUNCTION_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Void set_Description(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXJUNCTION_SET_DESCRIPTION_OFFSET))(this, a1);
		}

		::System::String* get_QualifiedId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXJUNCTION_GET_QUALIFIEDID_OFFSET))(this);
		}

		::RPGTools::LDWhiteBox::WhiteBoxRegion* get_OwnerRegion()
		{
			return ((::RPGTools::LDWhiteBox::WhiteBoxRegion*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXJUNCTION_GET_OWNERREGION_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXJUNCTION_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXJUNCTION_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXJUNCTION_ONDRAWGIZMOS_OFFSET))(this);
		}

		static ::UnityEngine::Color Method_5_57D95388FFE72045(::RPGTools::LDWhiteBox::JunctionType a1)
		{
			return ((::UnityEngine::Color(*)(::RPGTools::LDWhiteBox::JunctionType))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXJUNCTION_METHOD_5_57D95388FFE72045_OFFSET))(a1);
		}
	};
}
