#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine { class Attachment; }
namespace Spine { class Bone; }
namespace Spine { class Skeleton; }
namespace Spine { class SlotData; }
namespace Spine { template <typename T> class ExposedList_1; }
namespace System { class String; }

#define SPINE_SLOT_CLAMPCOLOR_OFFSET UNITYSDK_OFFSET(0x1FB6ADC0)
#define SPINE_SLOT_CLAMPSECONDCOLOR_OFFSET UNITYSDK_OFFSET(0x1FB6C210)
#define SPINE_SLOT_GET_ATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1FB6C2C0)
#define SPINE_SLOT_GET_A_OFFSET UNITYSDK_OFFSET(0x1FB6C150)
#define SPINE_SLOT_GET_B2_OFFSET UNITYSDK_OFFSET(0x1FB6C1B0)
#define SPINE_SLOT_GET_BONE_OFFSET UNITYSDK_OFFSET(0x1FB6C0C0)
#define SPINE_SLOT_GET_B_OFFSET UNITYSDK_OFFSET(0x1FB6C130)
#define SPINE_SLOT_GET_DATA_OFFSET UNITYSDK_OFFSET(0x1FB6C0B0)
#define SPINE_SLOT_GET_DEFORM_OFFSET UNITYSDK_OFFSET(0x1FB6C3E0)
#define SPINE_SLOT_GET_G2_OFFSET UNITYSDK_OFFSET(0x1FB6C190)
#define SPINE_SLOT_GET_G_OFFSET UNITYSDK_OFFSET(0x1FB6C110)
#define SPINE_SLOT_GET_HASSECONDCOLOR_OFFSET UNITYSDK_OFFSET(0x1FB6C1D0)
#define SPINE_SLOT_GET_R2_OFFSET UNITYSDK_OFFSET(0x1FB6C170)
#define SPINE_SLOT_GET_R_OFFSET UNITYSDK_OFFSET(0x1FB6C0F0)
#define SPINE_SLOT_GET_SEQUENCEINDEX_OFFSET UNITYSDK_OFFSET(0x1FB6C3C0)
#define SPINE_SLOT_GET_SKELETON_OFFSET UNITYSDK_OFFSET(0x1FB6C0D0)
#define SPINE_SLOT_SETTOSETUPPOSE_OFFSET UNITYSDK_OFFSET(0x1FB6BD60)
#define SPINE_SLOT_SET_ATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1FB6C2D0)
#define SPINE_SLOT_SET_A_OFFSET UNITYSDK_OFFSET(0x1FB6C160)
#define SPINE_SLOT_SET_B2_OFFSET UNITYSDK_OFFSET(0x1FB6C1C0)
#define SPINE_SLOT_SET_B_OFFSET UNITYSDK_OFFSET(0x1FB6C140)
#define SPINE_SLOT_SET_DEFORM_OFFSET UNITYSDK_OFFSET(0x1FB6C3F0)
#define SPINE_SLOT_SET_G2_OFFSET UNITYSDK_OFFSET(0x1FB6C1A0)
#define SPINE_SLOT_SET_G_OFFSET UNITYSDK_OFFSET(0x1FB6C120)
#define SPINE_SLOT_SET_HASSECONDCOLOR_OFFSET UNITYSDK_OFFSET(0x1FB6C1F0)
#define SPINE_SLOT_SET_R2_OFFSET UNITYSDK_OFFSET(0x1FB6C180)
#define SPINE_SLOT_SET_R_OFFSET UNITYSDK_OFFSET(0x1FB6C100)
#define SPINE_SLOT_SET_SEQUENCEINDEX_OFFSET UNITYSDK_OFFSET(0x1FB6C3D0)
#define SPINE_SLOT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FB6C470)
#define SPINE_SLOT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FB6BF10)
#define SPINE_SLOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB6BC10)

namespace Spine
{
	inline static constexpr unsigned int Slot_TypeDefinitionIndex = 33540;

	class Slot : public ::System::Object
	{
	public:
		::Spine::SlotData* data; // 0x10
		::Spine::Attachment* attachment; // 0x18
		::Spine::Bone* bone; // 0x20
		::Spine::ExposedList_1<::System::Single>* deform; // 0x28
		::System::Single a; // 0x30
		::System::Single r2; // 0x34
		::System::Single b2; // 0x38
		::System::Single g; // 0x3C
		::System::Int32 attachmentState; // 0x40
		::System::Single b; // 0x44
		::System::Single r; // 0x48
		::System::Single g2; // 0x4C
		::System::Int32 sequenceIndex; // 0x50
		::System::Boolean hasSecondColor; // 0x54

		::System::Void _ctor(::Spine::SlotData* data, ::Spine::Bone* bone)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::SlotData*, ::Spine::Bone*))((::PBYTE)hIl2Cpp + SPINE_SLOT__CTOR_OFFSET))(this, data, bone);
		}

		::System::Void _ctor_1(::Spine::Slot* slot, ::Spine::Bone* bone)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Slot*, ::Spine::Bone*))((::PBYTE)hIl2Cpp + SPINE_SLOT__CTOR_1_OFFSET))(this, slot, bone);
		}

		::Spine::SlotData* get_Data()
		{
			return ((::Spine::SlotData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOT_GET_DATA_OFFSET))(this);
		}

		::Spine::Bone* get_Bone()
		{
			return ((::Spine::Bone*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOT_GET_BONE_OFFSET))(this);
		}

		::Spine::Skeleton* get_Skeleton()
		{
			return ((::Spine::Skeleton*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOT_GET_SKELETON_OFFSET))(this);
		}

		::System::Single get_R()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOT_GET_R_OFFSET))(this);
		}

		::System::Void set_R(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SLOT_SET_R_OFFSET))(this, value);
		}

		::System::Single get_G()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOT_GET_G_OFFSET))(this);
		}

		::System::Void set_G(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SLOT_SET_G_OFFSET))(this, value);
		}

		::System::Single get_B()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOT_GET_B_OFFSET))(this);
		}

		::System::Void set_B(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SLOT_SET_B_OFFSET))(this, value);
		}

		::System::Single get_A()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOT_GET_A_OFFSET))(this);
		}

		::System::Void set_A(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SLOT_SET_A_OFFSET))(this, value);
		}

		::System::Void ClampColor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOT_CLAMPCOLOR_OFFSET))(this);
		}

		::System::Single get_R2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOT_GET_R2_OFFSET))(this);
		}

		::System::Void set_R2(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SLOT_SET_R2_OFFSET))(this, value);
		}

		::System::Single get_G2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOT_GET_G2_OFFSET))(this);
		}

		::System::Void set_G2(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SLOT_SET_G2_OFFSET))(this, value);
		}

		::System::Single get_B2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOT_GET_B2_OFFSET))(this);
		}

		::System::Void set_B2(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SLOT_SET_B2_OFFSET))(this, value);
		}

		::System::Boolean get_HasSecondColor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOT_GET_HASSECONDCOLOR_OFFSET))(this);
		}

		::System::Void set_HasSecondColor(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_SLOT_SET_HASSECONDCOLOR_OFFSET))(this, value);
		}

		::System::Void ClampSecondColor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOT_CLAMPSECONDCOLOR_OFFSET))(this);
		}

		::Spine::Attachment* get_Attachment()
		{
			return ((::Spine::Attachment*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOT_GET_ATTACHMENT_OFFSET))(this);
		}

		::System::Void set_Attachment(::Spine::Attachment* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Attachment*))((::PBYTE)hIl2Cpp + SPINE_SLOT_SET_ATTACHMENT_OFFSET))(this, value);
		}

		::System::Int32 get_SequenceIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOT_GET_SEQUENCEINDEX_OFFSET))(this);
		}

		::System::Void set_SequenceIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_SLOT_SET_SEQUENCEINDEX_OFFSET))(this, value);
		}

		::Spine::ExposedList_1<::System::Single>* get_Deform()
		{
			return ((::Spine::ExposedList_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOT_GET_DEFORM_OFFSET))(this);
		}

		::System::Void set_Deform(::Spine::ExposedList_1<::System::Single>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::ExposedList_1<::System::Single>*))((::PBYTE)hIl2Cpp + SPINE_SLOT_SET_DEFORM_OFFSET))(this, value);
		}

		::System::Void SetToSetupPose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOT_SETTOSETUPPOSE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOT_TOSTRING_OFFSET))(this);
		}
	};
}
