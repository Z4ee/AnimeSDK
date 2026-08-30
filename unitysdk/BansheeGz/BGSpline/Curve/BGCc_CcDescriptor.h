#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_CCDESCRIPTOR_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1BFF22B0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_CCDESCRIPTOR_GET_ICON_OFFSET UNITYSDK_OFFSET(0x1BFF22F0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_CCDESCRIPTOR_GET_IMAGE_OFFSET UNITYSDK_OFFSET(0x1BFF22D0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_CCDESCRIPTOR_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1BFF2290)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_CCDESCRIPTOR_SET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1BFF22C0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_CCDESCRIPTOR_SET_ICON_OFFSET UNITYSDK_OFFSET(0x1BFF2300)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_CCDESCRIPTOR_SET_IMAGE_OFFSET UNITYSDK_OFFSET(0x1BFF22E0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_CCDESCRIPTOR_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1BFF22A0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_CCDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFF2310)

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCc_CcDescriptor_TypeDefinitionIndex = 35296;

	class BGCc_CcDescriptor : public ::System::Attribute
	{
	public:
		::System::String* _Icon_k__BackingField; // 0x10
		::System::String* _Name_k__BackingField; // 0x18
		::System::String* _Image_k__BackingField; // 0x20
		::System::String* _Description_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_CCDESCRIPTOR__CTOR_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_CCDESCRIPTOR_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_CCDESCRIPTOR_SET_NAME_OFFSET))(this, a1);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_CCDESCRIPTOR_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Void set_Description(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_CCDESCRIPTOR_SET_DESCRIPTION_OFFSET))(this, a1);
		}

		::System::String* get_Image()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_CCDESCRIPTOR_GET_IMAGE_OFFSET))(this);
		}

		::System::Void set_Image(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_CCDESCRIPTOR_SET_IMAGE_OFFSET))(this, a1);
		}

		::System::String* get_Icon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_CCDESCRIPTOR_GET_ICON_OFFSET))(this);
		}

		::System::Void set_Icon(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_CCDESCRIPTOR_SET_ICON_OFFSET))(this, a1);
		}
	};
}
