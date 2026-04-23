#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/BlendMode.h"
#include "unitysdk/System/Object.h"

namespace Spine { class BoneData; }
namespace System { class String; }

#define SPINE_SLOTDATA_GET_ATTACHMENTNAME_OFFSET UNITYSDK_OFFSET(0x19E1E5A0)
#define SPINE_SLOTDATA_GET_A_OFFSET UNITYSDK_OFFSET(0x19E1E500)
#define SPINE_SLOTDATA_GET_B2_OFFSET UNITYSDK_OFFSET(0x19E1E560)
#define SPINE_SLOTDATA_GET_BLENDMODE_OFFSET UNITYSDK_OFFSET(0x19E1E5C0)
#define SPINE_SLOTDATA_GET_BONEDATA_OFFSET UNITYSDK_OFFSET(0x19E1E490)
#define SPINE_SLOTDATA_GET_B_OFFSET UNITYSDK_OFFSET(0x19E1E4E0)
#define SPINE_SLOTDATA_GET_G2_OFFSET UNITYSDK_OFFSET(0x19E1E540)
#define SPINE_SLOTDATA_GET_G_OFFSET UNITYSDK_OFFSET(0x19E1E4C0)
#define SPINE_SLOTDATA_GET_HASSECONDCOLOR_OFFSET UNITYSDK_OFFSET(0x19E1E580)
#define SPINE_SLOTDATA_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x19E1E470)
#define SPINE_SLOTDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x19E1E480)
#define SPINE_SLOTDATA_GET_R2_OFFSET UNITYSDK_OFFSET(0x19E1E520)
#define SPINE_SLOTDATA_GET_R_OFFSET UNITYSDK_OFFSET(0x19E1E4A0)
#define SPINE_SLOTDATA_SET_ATTACHMENTNAME_OFFSET UNITYSDK_OFFSET(0x19E1E5B0)
#define SPINE_SLOTDATA_SET_A_OFFSET UNITYSDK_OFFSET(0x19E1E510)
#define SPINE_SLOTDATA_SET_B2_OFFSET UNITYSDK_OFFSET(0x19E1E570)
#define SPINE_SLOTDATA_SET_BLENDMODE_OFFSET UNITYSDK_OFFSET(0x19E1E5D0)
#define SPINE_SLOTDATA_SET_B_OFFSET UNITYSDK_OFFSET(0x19E1E4F0)
#define SPINE_SLOTDATA_SET_G2_OFFSET UNITYSDK_OFFSET(0x19E1E550)
#define SPINE_SLOTDATA_SET_G_OFFSET UNITYSDK_OFFSET(0x19E1E4D0)
#define SPINE_SLOTDATA_SET_HASSECONDCOLOR_OFFSET UNITYSDK_OFFSET(0x19E1E590)
#define SPINE_SLOTDATA_SET_R2_OFFSET UNITYSDK_OFFSET(0x19E1E530)
#define SPINE_SLOTDATA_SET_R_OFFSET UNITYSDK_OFFSET(0x19E1E4B0)
#define SPINE_SLOTDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19E1E5E0)
#define SPINE_SLOTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19DEFE90)

namespace Spine
{
	inline static constexpr unsigned int SlotData_TypeDefinitionIndex = 36463;

	class SlotData : public ::System::Object
	{
	public:
		::System::String* attachmentName; // 0x10
		::Spine::BoneData* boneData; // 0x18
		::System::String* name; // 0x20
		::System::Single b; // 0x28
		::System::Single g2; // 0x2C
		::System::Single g; // 0x30
		::Spine::BlendMode blendMode; // 0x34
		::System::Single b2; // 0x38
		::System::Int32 index; // 0x3C
		::System::Boolean hasSecondColor; // 0x40
		::System::Single r2; // 0x44
		::System::Single r; // 0x48
		::System::Single a; // 0x4C

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
