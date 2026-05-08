#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/TransformMode.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SPINE_BONEDATA_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1C45F020)
#define SPINE_BONEDATA_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1C45F050)
#define SPINE_BONEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C45F030)
#define SPINE_BONEDATA_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x1C45F040)
#define SPINE_BONEDATA_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1C45F0B0)
#define SPINE_BONEDATA_GET_SCALEX_OFFSET UNITYSDK_OFFSET(0x1C45F0D0)
#define SPINE_BONEDATA_GET_SCALEY_OFFSET UNITYSDK_OFFSET(0x1C45F0F0)
#define SPINE_BONEDATA_GET_SHEARX_OFFSET UNITYSDK_OFFSET(0x1C45F110)
#define SPINE_BONEDATA_GET_SHEARY_OFFSET UNITYSDK_OFFSET(0x1C45F130)
#define SPINE_BONEDATA_GET_SKINREQUIRED_OFFSET UNITYSDK_OFFSET(0x1C45F170)
#define SPINE_BONEDATA_GET_TRANSFORMMODE_OFFSET UNITYSDK_OFFSET(0x1C45F150)
#define SPINE_BONEDATA_GET_X_OFFSET UNITYSDK_OFFSET(0x1C45F070)
#define SPINE_BONEDATA_GET_Y_OFFSET UNITYSDK_OFFSET(0x1C45F090)
#define SPINE_BONEDATA_SET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1C45F060)
#define SPINE_BONEDATA_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1C45F0C0)
#define SPINE_BONEDATA_SET_SCALEX_OFFSET UNITYSDK_OFFSET(0x1C45F0E0)
#define SPINE_BONEDATA_SET_SCALEY_OFFSET UNITYSDK_OFFSET(0x1C45F100)
#define SPINE_BONEDATA_SET_SHEARX_OFFSET UNITYSDK_OFFSET(0x1C45F120)
#define SPINE_BONEDATA_SET_SHEARY_OFFSET UNITYSDK_OFFSET(0x1C45F140)
#define SPINE_BONEDATA_SET_SKINREQUIRED_OFFSET UNITYSDK_OFFSET(0x1C45F180)
#define SPINE_BONEDATA_SET_TRANSFORMMODE_OFFSET UNITYSDK_OFFSET(0x1C45F160)
#define SPINE_BONEDATA_SET_X_OFFSET UNITYSDK_OFFSET(0x1C45F080)
#define SPINE_BONEDATA_SET_Y_OFFSET UNITYSDK_OFFSET(0x1C45F0A0)
#define SPINE_BONEDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C45F270)
#define SPINE_BONEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C45F190)

namespace Spine
{
	inline static constexpr unsigned int BoneData_TypeDefinitionIndex = 31319;

	class BoneData : public ::System::Object
	{
	public:
		::Spine::BoneData* parent; // 0x10
		::System::String* name; // 0x18
		::System::Single shearX; // 0x20
		::System::Single x; // 0x24
		::System::Single rotation; // 0x28
		::System::Boolean skinRequired; // 0x2C
		::Spine::TransformMode transformMode; // 0x30
		::System::Int32 index; // 0x34
		::System::Single y; // 0x38
		::System::Single shearY; // 0x3C
		::System::Single scaleX; // 0x40
		::System::Single scaleY; // 0x44
		::System::Single length; // 0x48

		::System::Void _ctor(::System::Int32 index, ::System::String* name, ::Spine::BoneData* parent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::Spine::BoneData*))((::PBYTE)hIl2Cpp + SPINE_BONEDATA__CTOR_OFFSET))(this, index, name, parent);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_GET_INDEX_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_GET_NAME_OFFSET))(this);
		}

		::Spine::BoneData* get_Parent()
		{
			return ((::Spine::BoneData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_GET_PARENT_OFFSET))(this);
		}

		::System::Single get_Length()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_GET_LENGTH_OFFSET))(this);
		}

		::System::Void set_Length(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_SET_LENGTH_OFFSET))(this, value);
		}

		::System::Single get_X()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_GET_X_OFFSET))(this);
		}

		::System::Void set_X(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_SET_X_OFFSET))(this, value);
		}

		::System::Single get_Y()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_GET_Y_OFFSET))(this);
		}

		::System::Void set_Y(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_SET_Y_OFFSET))(this, value);
		}

		::System::Single get_Rotation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_Rotation(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_SET_ROTATION_OFFSET))(this, value);
		}

		::System::Single get_ScaleX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_GET_SCALEX_OFFSET))(this);
		}

		::System::Void set_ScaleX(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_SET_SCALEX_OFFSET))(this, value);
		}

		::System::Single get_ScaleY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_GET_SCALEY_OFFSET))(this);
		}

		::System::Void set_ScaleY(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_SET_SCALEY_OFFSET))(this, value);
		}

		::System::Single get_ShearX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_GET_SHEARX_OFFSET))(this);
		}

		::System::Void set_ShearX(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_SET_SHEARX_OFFSET))(this, value);
		}

		::System::Single get_ShearY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_GET_SHEARY_OFFSET))(this);
		}

		::System::Void set_ShearY(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_SET_SHEARY_OFFSET))(this, value);
		}

		::Spine::TransformMode get_TransformMode()
		{
			return ((::Spine::TransformMode(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_GET_TRANSFORMMODE_OFFSET))(this);
		}

		::System::Void set_TransformMode(::Spine::TransformMode value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TransformMode))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_SET_TRANSFORMMODE_OFFSET))(this, value);
		}

		::System::Boolean get_SkinRequired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_GET_SKINREQUIRED_OFFSET))(this);
		}

		::System::Void set_SkinRequired(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_SET_SKINREQUIRED_OFFSET))(this, value);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_TOSTRING_OFFSET))(this);
		}
	};
}
