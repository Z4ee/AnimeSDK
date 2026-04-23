#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_CCDESCRIPTOR_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x17B9D580)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_CCDESCRIPTOR_GET_ICON_OFFSET UNITYSDK_OFFSET(0x17B9D5C0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_CCDESCRIPTOR_GET_IMAGE_OFFSET UNITYSDK_OFFSET(0x17B9D5A0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_CCDESCRIPTOR_GET_NAME_OFFSET UNITYSDK_OFFSET(0x17B9D560)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_CCDESCRIPTOR_SET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x17B9D590)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_CCDESCRIPTOR_SET_ICON_OFFSET UNITYSDK_OFFSET(0x17B9D5D0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_CCDESCRIPTOR_SET_IMAGE_OFFSET UNITYSDK_OFFSET(0x17B9D5B0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_CCDESCRIPTOR_SET_NAME_OFFSET UNITYSDK_OFFSET(0x17B9D570)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCC_CCDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x17B9D5E0)

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCc_CcDescriptor_TypeDefinitionIndex = 33783;

	class BGCc_CcDescriptor : public ::System::Attribute
	{
	public:
		::System::String* _Image_k__BackingField; // 0x10
		::System::String* _Icon_k__BackingField; // 0x18
		::System::String* _Name_k__BackingField; // 0x20
		::System::String* _Description_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_CCDESCRIPTOR__CTOR_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_CCDESCRIPTOR_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_CCDESCRIPTOR_SET_NAME_OFFSET))(this, value);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_CCDESCRIPTOR_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Void set_Description(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_CCDESCRIPTOR_SET_DESCRIPTION_OFFSET))(this, value);
		}

		::System::String* get_Image()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_CCDESCRIPTOR_GET_IMAGE_OFFSET))(this);
		}

		::System::Void set_Image(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_CCDESCRIPTOR_SET_IMAGE_OFFSET))(this, value);
		}

		::System::String* get_Icon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_CCDESCRIPTOR_GET_ICON_OFFSET))(this);
		}

		::System::Void set_Icon(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCC_CCDESCRIPTOR_SET_ICON_OFFSET))(this, value);
		}
	};
}
