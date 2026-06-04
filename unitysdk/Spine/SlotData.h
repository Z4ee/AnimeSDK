#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/BlendMode.h"
#include "unitysdk/System/Object.h"

namespace Spine { class BoneData; }
namespace System { class String; }

#define SPINE_SLOTDATA_GET_ATTACHMENTNAME_OFFSET UNITYSDK_OFFSET(0x1AC99CE0)
#define SPINE_SLOTDATA_GET_A_OFFSET UNITYSDK_OFFSET(0x1AC99C40)
#define SPINE_SLOTDATA_GET_B2_OFFSET UNITYSDK_OFFSET(0x1AC99CA0)
#define SPINE_SLOTDATA_GET_BLENDMODE_OFFSET UNITYSDK_OFFSET(0x1AC99D00)
#define SPINE_SLOTDATA_GET_BONEDATA_OFFSET UNITYSDK_OFFSET(0x1AC99BD0)
#define SPINE_SLOTDATA_GET_B_OFFSET UNITYSDK_OFFSET(0x1AC99C20)
#define SPINE_SLOTDATA_GET_G2_OFFSET UNITYSDK_OFFSET(0x1AC99C80)
#define SPINE_SLOTDATA_GET_G_OFFSET UNITYSDK_OFFSET(0x1AC99C00)
#define SPINE_SLOTDATA_GET_HASSECONDCOLOR_OFFSET UNITYSDK_OFFSET(0x1AC99CC0)
#define SPINE_SLOTDATA_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1AC99BB0)
#define SPINE_SLOTDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1AC99BC0)
#define SPINE_SLOTDATA_GET_R2_OFFSET UNITYSDK_OFFSET(0x1AC99C60)
#define SPINE_SLOTDATA_GET_R_OFFSET UNITYSDK_OFFSET(0x1AC99BE0)
#define SPINE_SLOTDATA_SET_ATTACHMENTNAME_OFFSET UNITYSDK_OFFSET(0x1AC99CF0)
#define SPINE_SLOTDATA_SET_A_OFFSET UNITYSDK_OFFSET(0x1AC99C50)
#define SPINE_SLOTDATA_SET_B2_OFFSET UNITYSDK_OFFSET(0x1AC99CB0)
#define SPINE_SLOTDATA_SET_BLENDMODE_OFFSET UNITYSDK_OFFSET(0x1AC99D10)
#define SPINE_SLOTDATA_SET_B_OFFSET UNITYSDK_OFFSET(0x1AC99C30)
#define SPINE_SLOTDATA_SET_G2_OFFSET UNITYSDK_OFFSET(0x1AC99C90)
#define SPINE_SLOTDATA_SET_G_OFFSET UNITYSDK_OFFSET(0x1AC99C10)
#define SPINE_SLOTDATA_SET_HASSECONDCOLOR_OFFSET UNITYSDK_OFFSET(0x1AC99CD0)
#define SPINE_SLOTDATA_SET_R2_OFFSET UNITYSDK_OFFSET(0x1AC99C70)
#define SPINE_SLOTDATA_SET_R_OFFSET UNITYSDK_OFFSET(0x1AC99BF0)
#define SPINE_SLOTDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AC99D20)
#define SPINE_SLOTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC6B880)

namespace Spine
{
	inline static constexpr unsigned int SlotData_TypeDefinitionIndex = 36763;

	class SlotData : public ::System::Object
	{
	public:
		::System::String* attachmentName; // 0x10
		::System::String* name; // 0x18
		::Spine::BoneData* boneData; // 0x20
		::System::Single b2; // 0x28
		::System::Int32 index; // 0x2C
		::System::Single g; // 0x30
		::System::Single b; // 0x34
		::System::Single r2; // 0x38
		::System::Boolean hasSecondColor; // 0x3C
		::System::Single a; // 0x40
		::System::Single g2; // 0x44
		::System::Single r; // 0x48
		::Spine::BlendMode blendMode; // 0x4C

		::System::Void _ctor(::System::Int32 a1, ::System::String* a2, ::Spine::BoneData* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::Spine::BoneData*))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA__CTOR_OFFSET))(this, a1, a2, a3);
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

		::System::Void set_R(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_SET_R_OFFSET))(this, a1);
		}

		::System::Single get_G()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_GET_G_OFFSET))(this);
		}

		::System::Void set_G(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_SET_G_OFFSET))(this, a1);
		}

		::System::Single get_B()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_GET_B_OFFSET))(this);
		}

		::System::Void set_B(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_SET_B_OFFSET))(this, a1);
		}

		::System::Single get_A()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_GET_A_OFFSET))(this);
		}

		::System::Void set_A(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_SET_A_OFFSET))(this, a1);
		}

		::System::Single get_R2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_GET_R2_OFFSET))(this);
		}

		::System::Void set_R2(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_SET_R2_OFFSET))(this, a1);
		}

		::System::Single get_G2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_GET_G2_OFFSET))(this);
		}

		::System::Void set_G2(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_SET_G2_OFFSET))(this, a1);
		}

		::System::Single get_B2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_GET_B2_OFFSET))(this);
		}

		::System::Void set_B2(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_SET_B2_OFFSET))(this, a1);
		}

		::System::Boolean get_HasSecondColor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_GET_HASSECONDCOLOR_OFFSET))(this);
		}

		::System::Void set_HasSecondColor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_SET_HASSECONDCOLOR_OFFSET))(this, a1);
		}

		::System::String* get_AttachmentName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_GET_ATTACHMENTNAME_OFFSET))(this);
		}

		::System::Void set_AttachmentName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_SET_ATTACHMENTNAME_OFFSET))(this, a1);
		}

		::Spine::BlendMode get_BlendMode()
		{
			return ((::Spine::BlendMode(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_GET_BLENDMODE_OFFSET))(this);
		}

		::System::Void set_BlendMode(::Spine::BlendMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::BlendMode))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_SET_BLENDMODE_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTDATA_TOSTRING_OFFSET))(this);
		}
	};
}
