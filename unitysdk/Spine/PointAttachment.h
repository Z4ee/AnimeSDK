#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Attachment.h"

namespace Spine { class Bone; }
namespace System { class String; }

#define SPINE_POINTATTACHMENT_COMPUTEWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x1E53BC10)
#define SPINE_POINTATTACHMENT_COMPUTEWORLDROTATION_OFFSET UNITYSDK_OFFSET(0x1E53BC70)
#define SPINE_POINTATTACHMENT_COPY_OFFSET UNITYSDK_OFFSET(0x1E53BD80)
#define SPINE_POINTATTACHMENT_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1E53BB50)
#define SPINE_POINTATTACHMENT_GET_X_OFFSET UNITYSDK_OFFSET(0x1E53BB10)
#define SPINE_POINTATTACHMENT_GET_Y_OFFSET UNITYSDK_OFFSET(0x1E53BB30)
#define SPINE_POINTATTACHMENT_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1E53BB60)
#define SPINE_POINTATTACHMENT_SET_X_OFFSET UNITYSDK_OFFSET(0x1E53BB20)
#define SPINE_POINTATTACHMENT_SET_Y_OFFSET UNITYSDK_OFFSET(0x1E53BB40)
#define SPINE_POINTATTACHMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E53BBE0)
#define SPINE_POINTATTACHMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E53BB70)

namespace Spine
{
	inline static constexpr unsigned int PointAttachment_TypeDefinitionIndex = 32863;

	class PointAttachment : public ::Spine::Attachment
	{
	public:
		::System::Single y; // 0x18
		::System::Single rotation; // 0x1C
		::System::Single x; // 0x20

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_POINTATTACHMENT__CTOR_OFFSET))(this, name);
		}

		::System::Void _ctor_1(::Spine::PointAttachment* other)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::PointAttachment*))((::PBYTE)hIl2Cpp + SPINE_POINTATTACHMENT__CTOR_1_OFFSET))(this, other);
		}

		::System::Single get_X()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_POINTATTACHMENT_GET_X_OFFSET))(this);
		}

		::System::Void set_X(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_POINTATTACHMENT_SET_X_OFFSET))(this, value);
		}

		::System::Single get_Y()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_POINTATTACHMENT_GET_Y_OFFSET))(this);
		}

		::System::Void set_Y(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_POINTATTACHMENT_SET_Y_OFFSET))(this, value);
		}

		::System::Single get_Rotation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_POINTATTACHMENT_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_Rotation(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_POINTATTACHMENT_SET_ROTATION_OFFSET))(this, value);
		}

		::System::Void ComputeWorldPosition(::Spine::Bone* bone, ::System::Single& ox, ::System::Single& oy)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Bone*, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + SPINE_POINTATTACHMENT_COMPUTEWORLDPOSITION_OFFSET))(this, bone, ox, oy);
		}

		::System::Single ComputeWorldRotation(::Spine::Bone* bone)
		{
			return ((::System::Single(*)(::PVOID, ::Spine::Bone*))((::PBYTE)hIl2Cpp + SPINE_POINTATTACHMENT_COMPUTEWORLDROTATION_OFFSET))(this, bone);
		}

		::Spine::Attachment* Copy()
		{
			return ((::Spine::Attachment*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_POINTATTACHMENT_COPY_OFFSET))(this);
		}
	};
}
