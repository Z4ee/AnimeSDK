#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Attachment.h"

namespace Spine { class Sequence; }
namespace Spine { class Slot; }
namespace Spine { class TextureRegion; }
namespace System { class String; }

#define SPINE_REGIONATTACHMENT_COMPUTEWORLDVERTICES_OFFSET UNITYSDK_OFFSET(0x1AC611C0)
#define SPINE_REGIONATTACHMENT_COPY_OFFSET UNITYSDK_OFFSET(0x1AC61410)
#define SPINE_REGIONATTACHMENT_GET_A_OFFSET UNITYSDK_OFFSET(0x1AC60AE0)
#define SPINE_REGIONATTACHMENT_GET_B_OFFSET UNITYSDK_OFFSET(0x1AC60AC0)
#define SPINE_REGIONATTACHMENT_GET_G_OFFSET UNITYSDK_OFFSET(0x1AC60AA0)
#define SPINE_REGIONATTACHMENT_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1AC60A60)
#define SPINE_REGIONATTACHMENT_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x1AC60B40)
#define SPINE_REGIONATTACHMENT_GET_PATH_OFFSET UNITYSDK_OFFSET(0x1AC60B00)
#define SPINE_REGIONATTACHMENT_GET_REGION_OFFSET UNITYSDK_OFFSET(0x1AC60B20)
#define SPINE_REGIONATTACHMENT_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1AC609E0)
#define SPINE_REGIONATTACHMENT_GET_R_OFFSET UNITYSDK_OFFSET(0x1AC60A80)
#define SPINE_REGIONATTACHMENT_GET_SCALEX_OFFSET UNITYSDK_OFFSET(0x1AC60A00)
#define SPINE_REGIONATTACHMENT_GET_SCALEY_OFFSET UNITYSDK_OFFSET(0x1AC60A20)
#define SPINE_REGIONATTACHMENT_GET_SEQUENCE_OFFSET UNITYSDK_OFFSET(0x1AC60B60)
#define SPINE_REGIONATTACHMENT_GET_UVS_OFFSET UNITYSDK_OFFSET(0x1AC60B50)
#define SPINE_REGIONATTACHMENT_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x1AC60A40)
#define SPINE_REGIONATTACHMENT_GET_X_OFFSET UNITYSDK_OFFSET(0x1AC609A0)
#define SPINE_REGIONATTACHMENT_GET_Y_OFFSET UNITYSDK_OFFSET(0x1AC609C0)
#define SPINE_REGIONATTACHMENT_SET_A_OFFSET UNITYSDK_OFFSET(0x1AC60AF0)
#define SPINE_REGIONATTACHMENT_SET_B_OFFSET UNITYSDK_OFFSET(0x1AC60AD0)
#define SPINE_REGIONATTACHMENT_SET_G_OFFSET UNITYSDK_OFFSET(0x1AC60AB0)
#define SPINE_REGIONATTACHMENT_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1AC60A70)
#define SPINE_REGIONATTACHMENT_SET_PATH_OFFSET UNITYSDK_OFFSET(0x1AC60B10)
#define SPINE_REGIONATTACHMENT_SET_REGION_OFFSET UNITYSDK_OFFSET(0x1AC60B30)
#define SPINE_REGIONATTACHMENT_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1AC609F0)
#define SPINE_REGIONATTACHMENT_SET_R_OFFSET UNITYSDK_OFFSET(0x1AC60A90)
#define SPINE_REGIONATTACHMENT_SET_SCALEX_OFFSET UNITYSDK_OFFSET(0x1AC60A10)
#define SPINE_REGIONATTACHMENT_SET_SCALEY_OFFSET UNITYSDK_OFFSET(0x1AC60A30)
#define SPINE_REGIONATTACHMENT_SET_SEQUENCE_OFFSET UNITYSDK_OFFSET(0x1AC60B70)
#define SPINE_REGIONATTACHMENT_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0x1AC60A50)
#define SPINE_REGIONATTACHMENT_SET_X_OFFSET UNITYSDK_OFFSET(0x1AC609B0)
#define SPINE_REGIONATTACHMENT_SET_Y_OFFSET UNITYSDK_OFFSET(0x1AC609D0)
#define SPINE_REGIONATTACHMENT_UPDATEREGION_OFFSET UNITYSDK_OFFSET(0x1AC60CC0)
#define SPINE_REGIONATTACHMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AC60B80)
#define SPINE_REGIONATTACHMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC50880)

namespace Spine
{
	inline static constexpr unsigned int RegionAttachment_TypeDefinitionIndex = 36721;

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
		::System::String* _Path_k__BackingField; // 0x18
		::Il2CppArray<::System::Single>* offset; // 0x20
		::Spine::TextureRegion* region; // 0x28
		::Il2CppArray<::System::Single>* uvs; // 0x30
		::Spine::Sequence* sequence; // 0x38
		::System::Single r; // 0x40
		::System::Single a; // 0x44
		::System::Single x; // 0x48
		::System::Single y; // 0x4C
		::System::Single b; // 0x50
		::System::Single scaleY; // 0x54
		::System::Single width; // 0x58
		::System::Single scaleX; // 0x5C
		::System::Single g; // 0x60
		::System::Single rotation; // 0x64
		::System::Single height; // 0x68

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::Spine::RegionAttachment* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::RegionAttachment*))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT__CTOR_1_OFFSET))(this, a1);
		}

		::System::Single get_X()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_GET_X_OFFSET))(this);
		}

		::System::Void set_X(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_SET_X_OFFSET))(this, a1);
		}

		::System::Single get_Y()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_GET_Y_OFFSET))(this);
		}

		::System::Void set_Y(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_SET_Y_OFFSET))(this, a1);
		}

		::System::Single get_Rotation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_Rotation(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_SET_ROTATION_OFFSET))(this, a1);
		}

		::System::Single get_ScaleX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_GET_SCALEX_OFFSET))(this);
		}

		::System::Void set_ScaleX(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_SET_SCALEX_OFFSET))(this, a1);
		}

		::System::Single get_ScaleY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_GET_SCALEY_OFFSET))(this);
		}

		::System::Void set_ScaleY(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_SET_SCALEY_OFFSET))(this, a1);
		}

		::System::Single get_Width()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_GET_WIDTH_OFFSET))(this);
		}

		::System::Void set_Width(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_SET_WIDTH_OFFSET))(this, a1);
		}

		::System::Single get_Height()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_GET_HEIGHT_OFFSET))(this);
		}

		::System::Void set_Height(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_SET_HEIGHT_OFFSET))(this, a1);
		}

		::System::Single get_R()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_GET_R_OFFSET))(this);
		}

		::System::Void set_R(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_SET_R_OFFSET))(this, a1);
		}

		::System::Single get_G()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_GET_G_OFFSET))(this);
		}

		::System::Void set_G(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_SET_G_OFFSET))(this, a1);
		}

		::System::Single get_B()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_GET_B_OFFSET))(this);
		}

		::System::Void set_B(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_SET_B_OFFSET))(this, a1);
		}

		::System::Single get_A()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_GET_A_OFFSET))(this);
		}

		::System::Void set_A(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_SET_A_OFFSET))(this, a1);
		}

		::System::String* get_Path()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_GET_PATH_OFFSET))(this);
		}

		::System::Void set_Path(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_SET_PATH_OFFSET))(this, a1);
		}

		::Spine::TextureRegion* get_Region()
		{
			return ((::Spine::TextureRegion*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_GET_REGION_OFFSET))(this);
		}

		::System::Void set_Region(::Spine::TextureRegion* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TextureRegion*))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_SET_REGION_OFFSET))(this, a1);
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

		::System::Void set_Sequence(::Spine::Sequence* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Sequence*))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_SET_SEQUENCE_OFFSET))(this, a1);
		}

		::System::Void UpdateRegion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_UPDATEREGION_OFFSET))(this);
		}

		::System::Void ComputeWorldVertices(::Spine::Slot* a1, ::Il2CppArray<::System::Single>* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Slot*, ::Il2CppArray<::System::Single>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_COMPUTEWORLDVERTICES_OFFSET))(this, a1, a2, a3, a4);
		}

		::Spine::Attachment* Copy()
		{
			return ((::Spine::Attachment*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_REGIONATTACHMENT_COPY_OFFSET))(this);
		}
	};
}
