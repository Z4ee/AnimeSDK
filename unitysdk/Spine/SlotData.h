#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/BlendMode.h"
#include "unitysdk/System/Object.h"

namespace Spine { class BoneData; }
namespace System { class String; }

#define SPINE_SLOTDATA_GET_ATTACHMENTNAME_OFFSET UNITYSDK_OFFSET(0x183E39B0)
#define SPINE_SLOTDATA_GET_A_OFFSET UNITYSDK_OFFSET(0x183E3910)
#define SPINE_SLOTDATA_GET_B2_OFFSET UNITYSDK_OFFSET(0x183E3970)
#define SPINE_SLOTDATA_GET_BLENDMODE_OFFSET UNITYSDK_OFFSET(0x183E39D0)
#define SPINE_SLOTDATA_GET_BONEDATA_OFFSET UNITYSDK_OFFSET(0x183E38A0)
#define SPINE_SLOTDATA_GET_B_OFFSET UNITYSDK_OFFSET(0x183E38F0)
#define SPINE_SLOTDATA_GET_G2_OFFSET UNITYSDK_OFFSET(0x183E3950)
#define SPINE_SLOTDATA_GET_G_OFFSET UNITYSDK_OFFSET(0x183E38D0)
#define SPINE_SLOTDATA_GET_HASSECONDCOLOR_OFFSET UNITYSDK_OFFSET(0x183E3990)
#define SPINE_SLOTDATA_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x183E3880)
#define SPINE_SLOTDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x183E3890)
#define SPINE_SLOTDATA_GET_R2_OFFSET UNITYSDK_OFFSET(0x183E3930)
#define SPINE_SLOTDATA_GET_R_OFFSET UNITYSDK_OFFSET(0x183E38B0)
#define SPINE_SLOTDATA_SET_ATTACHMENTNAME_OFFSET UNITYSDK_OFFSET(0x183E39C0)
#define SPINE_SLOTDATA_SET_A_OFFSET UNITYSDK_OFFSET(0x183E3920)
#define SPINE_SLOTDATA_SET_B2_OFFSET UNITYSDK_OFFSET(0x183E3980)
#define SPINE_SLOTDATA_SET_BLENDMODE_OFFSET UNITYSDK_OFFSET(0x183E39E0)
#define SPINE_SLOTDATA_SET_B_OFFSET UNITYSDK_OFFSET(0x183E3900)
#define SPINE_SLOTDATA_SET_G2_OFFSET UNITYSDK_OFFSET(0x183E3960)
#define SPINE_SLOTDATA_SET_G_OFFSET UNITYSDK_OFFSET(0x183E38E0)
#define SPINE_SLOTDATA_SET_HASSECONDCOLOR_OFFSET UNITYSDK_OFFSET(0x183E39A0)
#define SPINE_SLOTDATA_SET_R2_OFFSET UNITYSDK_OFFSET(0x183E3940)
#define SPINE_SLOTDATA_SET_R_OFFSET UNITYSDK_OFFSET(0x183E38C0)
#define SPINE_SLOTDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x183E39F0)
#define SPINE_SLOTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x183B52E0)

namespace Spine
{
	inline static constexpr unsigned int SlotData_TypeDefinitionIndex = 30743;

	class SlotData : public ::System::Object
	{
	public:
		::Spine::BoneData* boneData; // 0x10
		::System::String* name; // 0x18
		::System::String* attachmentName; // 0x20
		::System::Single r2; // 0x28
		::System::Single r; // 0x2C
		::System::Single g; // 0x30
		::System::Single b2; // 0x34
		::System::Single a; // 0x38
		::System::Single b; // 0x3C
		::System::Single g2; // 0x40
		::Spine::BlendMode blendMode; // 0x44
		::System::Boolean hasSecondColor; // 0x48
		::System::Int32 index; // 0x4C

		::System::Void _ctor(::System::Int32 index, ::System::String* name, ::Spine::BoneData* boneData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::Spine::BoneData*))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA__CTOR_OFFSET))(this, index, name, boneData);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_GET_INDEX_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_GET_NAME_OFFSET))(this);
		}

		::Spine::BoneData* get_BoneData()
		{
			return ((::Spine::BoneData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_GET_BONEDATA_OFFSET))(this);
		}

		::System::Single get_R()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_GET_R_OFFSET))(this);
		}

		::System::Void set_R(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_SET_R_OFFSET))(this, value);
		}

		::System::Single get_G()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_GET_G_OFFSET))(this);
		}

		::System::Void set_G(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_SET_G_OFFSET))(this, value);
		}

		::System::Single get_B()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_GET_B_OFFSET))(this);
		}

		::System::Void set_B(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_SET_B_OFFSET))(this, value);
		}

		::System::Single get_A()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_GET_A_OFFSET))(this);
		}

		::System::Void set_A(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_SET_A_OFFSET))(this, value);
		}

		::System::Single get_R2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_GET_R2_OFFSET))(this);
		}

		::System::Void set_R2(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_SET_R2_OFFSET))(this, value);
		}

		::System::Single get_G2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_GET_G2_OFFSET))(this);
		}

		::System::Void set_G2(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_SET_G2_OFFSET))(this, value);
		}

		::System::Single get_B2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_GET_B2_OFFSET))(this);
		}

		::System::Void set_B2(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_SET_B2_OFFSET))(this, value);
		}

		::System::Boolean get_HasSecondColor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_GET_HASSECONDCOLOR_OFFSET))(this);
		}

		::System::Void set_HasSecondColor(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_SET_HASSECONDCOLOR_OFFSET))(this, value);
		}

		::System::String* get_AttachmentName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_GET_ATTACHMENTNAME_OFFSET))(this);
		}

		::System::Void set_AttachmentName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_SET_ATTACHMENTNAME_OFFSET))(this, value);
		}

		::Spine::BlendMode get_BlendMode()
		{
			return ((::Spine::BlendMode(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_GET_BLENDMODE_OFFSET))(this);
		}

		::System::Void set_BlendMode(::Spine::BlendMode value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::BlendMode))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_SET_BLENDMODE_OFFSET))(this, value);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_TOSTRING_OFFSET))(this);
		}
	};
}
