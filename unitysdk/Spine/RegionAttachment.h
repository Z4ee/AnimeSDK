#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Attachment.h"

namespace Spine { class Sequence; }
namespace Spine { class Slot; }
namespace Spine { class TextureRegion; }
namespace System { class String; }

#define SPINE_REGIONATTACHMENT_COMPUTEWORLDVERTICES_OFFSET UNITYSDK_OFFSET(0x183AA800)
#define SPINE_REGIONATTACHMENT_COPY_OFFSET UNITYSDK_OFFSET(0x183AAAE0)
#define SPINE_REGIONATTACHMENT_GET_A_OFFSET UNITYSDK_OFFSET(0x183A9F30)
#define SPINE_REGIONATTACHMENT_GET_B_OFFSET UNITYSDK_OFFSET(0x183A9F10)
#define SPINE_REGIONATTACHMENT_GET_G_OFFSET UNITYSDK_OFFSET(0x183A9EF0)
#define SPINE_REGIONATTACHMENT_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x183A9EB0)
#define SPINE_REGIONATTACHMENT_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x183A9F90)
#define SPINE_REGIONATTACHMENT_GET_PATH_OFFSET UNITYSDK_OFFSET(0x183A9F50)
#define SPINE_REGIONATTACHMENT_GET_REGION_OFFSET UNITYSDK_OFFSET(0x183A9F70)
#define SPINE_REGIONATTACHMENT_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x183A9E30)
#define SPINE_REGIONATTACHMENT_GET_R_OFFSET UNITYSDK_OFFSET(0x183A9ED0)
#define SPINE_REGIONATTACHMENT_GET_SCALEX_OFFSET UNITYSDK_OFFSET(0x183A9E50)
#define SPINE_REGIONATTACHMENT_GET_SCALEY_OFFSET UNITYSDK_OFFSET(0x183A9E70)
#define SPINE_REGIONATTACHMENT_GET_SEQUENCE_OFFSET UNITYSDK_OFFSET(0x183A9FB0)
#define SPINE_REGIONATTACHMENT_GET_UVS_OFFSET UNITYSDK_OFFSET(0x183A9FA0)
#define SPINE_REGIONATTACHMENT_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x183A9E90)
#define SPINE_REGIONATTACHMENT_GET_X_OFFSET UNITYSDK_OFFSET(0x183A9DF0)
#define SPINE_REGIONATTACHMENT_GET_Y_OFFSET UNITYSDK_OFFSET(0x183A9E10)
#define SPINE_REGIONATTACHMENT_SET_A_OFFSET UNITYSDK_OFFSET(0x183A9F40)
#define SPINE_REGIONATTACHMENT_SET_B_OFFSET UNITYSDK_OFFSET(0x183A9F20)
#define SPINE_REGIONATTACHMENT_SET_G_OFFSET UNITYSDK_OFFSET(0x183A9F00)
#define SPINE_REGIONATTACHMENT_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x183A9EC0)
#define SPINE_REGIONATTACHMENT_SET_PATH_OFFSET UNITYSDK_OFFSET(0x183A9F60)
#define SPINE_REGIONATTACHMENT_SET_REGION_OFFSET UNITYSDK_OFFSET(0x183A9F80)
#define SPINE_REGIONATTACHMENT_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x183A9E40)
#define SPINE_REGIONATTACHMENT_SET_R_OFFSET UNITYSDK_OFFSET(0x183A9EE0)
#define SPINE_REGIONATTACHMENT_SET_SCALEX_OFFSET UNITYSDK_OFFSET(0x183A9E60)
#define SPINE_REGIONATTACHMENT_SET_SCALEY_OFFSET UNITYSDK_OFFSET(0x183A9E80)
#define SPINE_REGIONATTACHMENT_SET_SEQUENCE_OFFSET UNITYSDK_OFFSET(0x183A9FC0)
#define SPINE_REGIONATTACHMENT_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0x183A9EA0)
#define SPINE_REGIONATTACHMENT_SET_X_OFFSET UNITYSDK_OFFSET(0x183A9E00)
#define SPINE_REGIONATTACHMENT_SET_Y_OFFSET UNITYSDK_OFFSET(0x183A9E20)
#define SPINE_REGIONATTACHMENT_UPDATEREGION_OFFSET UNITYSDK_OFFSET(0x183AA110)
#define SPINE_REGIONATTACHMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x183A9FD0)
#define SPINE_REGIONATTACHMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x18398680)

namespace Spine
{
	inline static constexpr unsigned int RegionAttachment_TypeDefinitionIndex = 30701;

	class RegionAttachment : public ::Spine::Attachment
	{
	public:
		// static const ::System::Int32 BLX = 0x0; // 0x0
		// static const ::System::Int32 BLY = 0x1; // 0x0
		// static const ::System::Int32 ULX = 0x2; // 0x0
		// static const ::System::Int32 ULY = 0x3; // 0x0
		// static const ::System::Int32 URX = 0x4; // 0x0
		// static const ::System::Int32 URY = 0x5; // 0x0
		// static const ::System::Int32 BRX = 0x6; // 0x0
		// static const ::System::Int32 BRY = 0x7; // 0x0
		::Il2CppArray<::System::Single>* offset; // 0x18
		::Spine::Sequence* sequence; // 0x20
		::System::String* _Path_k__BackingField; // 0x28
		::Spine::TextureRegion* region; // 0x30
		::Il2CppArray<::System::Single>* uvs; // 0x38
		::System::Single x; // 0x40
		::System::Single scaleX; // 0x44
		::System::Single g; // 0x48
		::System::Single r; // 0x4C
		::System::Single width; // 0x50
		::System::Single a; // 0x54
		::System::Single scaleY; // 0x58
		::System::Single rotation; // 0x5C
		::System::Single y; // 0x60
		::System::Single b; // 0x64
		::System::Single height; // 0x68

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT__CTOR_OFFSET))(this, name);
		}

		::System::Void _ctor_1(::Spine::RegionAttachment* other)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::RegionAttachment*))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT__CTOR_1_OFFSET))(this, other);
		}

		::System::Single get_X()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_GET_X_OFFSET))(this);
		}

		::System::Void set_X(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_SET_X_OFFSET))(this, value);
		}

		::System::Single get_Y()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_GET_Y_OFFSET))(this);
		}

		::System::Void set_Y(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_SET_Y_OFFSET))(this, value);
		}

		::System::Single get_Rotation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_Rotation(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_SET_ROTATION_OFFSET))(this, value);
		}

		::System::Single get_ScaleX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_GET_SCALEX_OFFSET))(this);
		}

		::System::Void set_ScaleX(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_SET_SCALEX_OFFSET))(this, value);
		}

		::System::Single get_ScaleY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_GET_SCALEY_OFFSET))(this);
		}

		::System::Void set_ScaleY(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_SET_SCALEY_OFFSET))(this, value);
		}

		::System::Single get_Width()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_GET_WIDTH_OFFSET))(this);
		}

		::System::Void set_Width(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_SET_WIDTH_OFFSET))(this, value);
		}

		::System::Single get_Height()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_GET_HEIGHT_OFFSET))(this);
		}

		::System::Void set_Height(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_SET_HEIGHT_OFFSET))(this, value);
		}

		::System::Single get_R()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_GET_R_OFFSET))(this);
		}

		::System::Void set_R(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_SET_R_OFFSET))(this, value);
		}

		::System::Single get_G()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_GET_G_OFFSET))(this);
		}

		::System::Void set_G(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_SET_G_OFFSET))(this, value);
		}

		::System::Single get_B()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_GET_B_OFFSET))(this);
		}

		::System::Void set_B(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_SET_B_OFFSET))(this, value);
		}

		::System::Single get_A()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_GET_A_OFFSET))(this);
		}

		::System::Void set_A(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_SET_A_OFFSET))(this, value);
		}

		::System::String* get_Path()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_GET_PATH_OFFSET))(this);
		}

		::System::Void set_Path(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_SET_PATH_OFFSET))(this, value);
		}

		::Spine::TextureRegion* get_Region()
		{
			return ((::Spine::TextureRegion*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_GET_REGION_OFFSET))(this);
		}

		::System::Void set_Region(::Spine::TextureRegion* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TextureRegion*))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_SET_REGION_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Single>* get_Offset()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_GET_OFFSET_OFFSET))(this);
		}

		::Il2CppArray<::System::Single>* get_UVs()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_GET_UVS_OFFSET))(this);
		}

		::Spine::Sequence* get_Sequence()
		{
			return ((::Spine::Sequence*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_GET_SEQUENCE_OFFSET))(this);
		}

		::System::Void set_Sequence(::Spine::Sequence* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Sequence*))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_SET_SEQUENCE_OFFSET))(this, value);
		}

		::System::Void UpdateRegion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_UPDATEREGION_OFFSET))(this);
		}

		::System::Void ComputeWorldVertices(::Spine::Slot* slot, ::Il2CppArray<::System::Single>* worldVertices, ::System::Int32 offset, ::System::Int32 stride)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Slot*, ::Il2CppArray<::System::Single>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_COMPUTEWORLDVERTICES_OFFSET))(this, slot, worldVertices, offset, stride);
		}

		::Spine::Attachment* Copy()
		{
			return ((::Spine::Attachment*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_COPY_OFFSET))(this);
		}
	};
}
