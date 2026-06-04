#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/TransformMode.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SPINE_BONEDATA_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1AC53050)
#define SPINE_BONEDATA_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1AC53080)
#define SPINE_BONEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1AC53060)
#define SPINE_BONEDATA_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x1AC53070)
#define SPINE_BONEDATA_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1AC530E0)
#define SPINE_BONEDATA_GET_SCALEX_OFFSET UNITYSDK_OFFSET(0x1AC53100)
#define SPINE_BONEDATA_GET_SCALEY_OFFSET UNITYSDK_OFFSET(0x1AC53120)
#define SPINE_BONEDATA_GET_SHEARX_OFFSET UNITYSDK_OFFSET(0x1AC53140)
#define SPINE_BONEDATA_GET_SHEARY_OFFSET UNITYSDK_OFFSET(0x1AC53160)
#define SPINE_BONEDATA_GET_SKINREQUIRED_OFFSET UNITYSDK_OFFSET(0x1AC531A0)
#define SPINE_BONEDATA_GET_TRANSFORMMODE_OFFSET UNITYSDK_OFFSET(0x1AC53180)
#define SPINE_BONEDATA_GET_X_OFFSET UNITYSDK_OFFSET(0x1AC530A0)
#define SPINE_BONEDATA_GET_Y_OFFSET UNITYSDK_OFFSET(0x1AC530C0)
#define SPINE_BONEDATA_SET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1AC53090)
#define SPINE_BONEDATA_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1AC530F0)
#define SPINE_BONEDATA_SET_SCALEX_OFFSET UNITYSDK_OFFSET(0x1AC53110)
#define SPINE_BONEDATA_SET_SCALEY_OFFSET UNITYSDK_OFFSET(0x1AC53130)
#define SPINE_BONEDATA_SET_SHEARX_OFFSET UNITYSDK_OFFSET(0x1AC53150)
#define SPINE_BONEDATA_SET_SHEARY_OFFSET UNITYSDK_OFFSET(0x1AC53170)
#define SPINE_BONEDATA_SET_SKINREQUIRED_OFFSET UNITYSDK_OFFSET(0x1AC531B0)
#define SPINE_BONEDATA_SET_TRANSFORMMODE_OFFSET UNITYSDK_OFFSET(0x1AC53190)
#define SPINE_BONEDATA_SET_X_OFFSET UNITYSDK_OFFSET(0x1AC530B0)
#define SPINE_BONEDATA_SET_Y_OFFSET UNITYSDK_OFFSET(0x1AC530D0)
#define SPINE_BONEDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AC53260)
#define SPINE_BONEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC531C0)

namespace Spine
{
	inline static constexpr unsigned int BoneData_TypeDefinitionIndex = 36727;

	class BoneData : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::Spine::BoneData* parent; // 0x18
		::System::Single x; // 0x20
		::System::Boolean skinRequired; // 0x24
		::System::Single shearX; // 0x28
		::Spine::TransformMode transformMode; // 0x2C
		::System::Int32 index; // 0x30
		::System::Single shearY; // 0x34
		::System::Single scaleY; // 0x38
		::System::Single y; // 0x3C
		::System::Single scaleX; // 0x40
		::System::Single rotation; // 0x44
		::System::Single length; // 0x48

		::System::Void _ctor(::System::Int32 a1, ::System::String* a2, ::Spine::BoneData* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::Spine::BoneData*))((::PBYTE)hIl2Cpp + SPINE_BONEDATA__CTOR_OFFSET))(this, a1, a2, a3);
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

		::System::Void set_Length(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_SET_LENGTH_OFFSET))(this, a1);
		}

		::System::Single get_X()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_GET_X_OFFSET))(this);
		}

		::System::Void set_X(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_SET_X_OFFSET))(this, a1);
		}

		::System::Single get_Y()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_GET_Y_OFFSET))(this);
		}

		::System::Void set_Y(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_SET_Y_OFFSET))(this, a1);
		}

		::System::Single get_Rotation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_Rotation(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_SET_ROTATION_OFFSET))(this, a1);
		}

		::System::Single get_ScaleX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_GET_SCALEX_OFFSET))(this);
		}

		::System::Void set_ScaleX(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_SET_SCALEX_OFFSET))(this, a1);
		}

		::System::Single get_ScaleY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_GET_SCALEY_OFFSET))(this);
		}

		::System::Void set_ScaleY(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_SET_SCALEY_OFFSET))(this, a1);
		}

		::System::Single get_ShearX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_GET_SHEARX_OFFSET))(this);
		}

		::System::Void set_ShearX(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_SET_SHEARX_OFFSET))(this, a1);
		}

		::System::Single get_ShearY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_GET_SHEARY_OFFSET))(this);
		}

		::System::Void set_ShearY(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_SET_SHEARY_OFFSET))(this, a1);
		}

		::Spine::TransformMode get_TransformMode()
		{
			return ((::Spine::TransformMode(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_GET_TRANSFORMMODE_OFFSET))(this);
		}

		::System::Void set_TransformMode(::Spine::TransformMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TransformMode))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_SET_TRANSFORMMODE_OFFSET))(this, a1);
		}

		::System::Boolean get_SkinRequired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_GET_SKINREQUIRED_OFFSET))(this);
		}

		::System::Void set_SkinRequired(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_SET_SKINREQUIRED_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_TOSTRING_OFFSET))(this);
		}
	};
}
