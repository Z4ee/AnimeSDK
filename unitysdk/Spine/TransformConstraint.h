#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine { class Bone; }
namespace Spine { class Skeleton; }
namespace Spine { class TransformConstraintData; }
namespace Spine { template <typename T> class ExposedList_1; }
namespace System { class String; }

#define SPINE_TRANSFORMCONSTRAINT_APPLYABSOLUTELOCAL_OFFSET UNITYSDK_OFFSET(0x1FB91110)
#define SPINE_TRANSFORMCONSTRAINT_APPLYABSOLUTEWORLD_OFFSET UNITYSDK_OFFSET(0x1FB91B30)
#define SPINE_TRANSFORMCONSTRAINT_APPLYRELATIVELOCAL_OFFSET UNITYSDK_OFFSET(0x1FB90ED0)
#define SPINE_TRANSFORMCONSTRAINT_APPLYRELATIVEWORLD_OFFSET UNITYSDK_OFFSET(0x1FB91460)
#define SPINE_TRANSFORMCONSTRAINT_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x1FB92330)
#define SPINE_TRANSFORMCONSTRAINT_GET_BONES_OFFSET UNITYSDK_OFFSET(0x1FB92240)
#define SPINE_TRANSFORMCONSTRAINT_GET_DATA_OFFSET UNITYSDK_OFFSET(0x1FB92340)
#define SPINE_TRANSFORMCONSTRAINT_GET_MIXROTATE_OFFSET UNITYSDK_OFFSET(0x1FB92270)
#define SPINE_TRANSFORMCONSTRAINT_GET_MIXSCALEX_OFFSET UNITYSDK_OFFSET(0x1FB922D0)
#define SPINE_TRANSFORMCONSTRAINT_GET_MIXSCALEY_OFFSET UNITYSDK_OFFSET(0x1FB922F0)
#define SPINE_TRANSFORMCONSTRAINT_GET_MIXSHEARY_OFFSET UNITYSDK_OFFSET(0x1FB92310)
#define SPINE_TRANSFORMCONSTRAINT_GET_MIXX_OFFSET UNITYSDK_OFFSET(0x1FB92290)
#define SPINE_TRANSFORMCONSTRAINT_GET_MIXY_OFFSET UNITYSDK_OFFSET(0x1FB922B0)
#define SPINE_TRANSFORMCONSTRAINT_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x1FB92250)
#define SPINE_TRANSFORMCONSTRAINT_SET_MIXROTATE_OFFSET UNITYSDK_OFFSET(0x1FB92280)
#define SPINE_TRANSFORMCONSTRAINT_SET_MIXSCALEX_OFFSET UNITYSDK_OFFSET(0x1FB922E0)
#define SPINE_TRANSFORMCONSTRAINT_SET_MIXSCALEY_OFFSET UNITYSDK_OFFSET(0x1FB92300)
#define SPINE_TRANSFORMCONSTRAINT_SET_MIXSHEARY_OFFSET UNITYSDK_OFFSET(0x1FB92320)
#define SPINE_TRANSFORMCONSTRAINT_SET_MIXX_OFFSET UNITYSDK_OFFSET(0x1FB922A0)
#define SPINE_TRANSFORMCONSTRAINT_SET_MIXY_OFFSET UNITYSDK_OFFSET(0x1FB922C0)
#define SPINE_TRANSFORMCONSTRAINT_SET_TARGET_OFFSET UNITYSDK_OFFSET(0x1FB92260)
#define SPINE_TRANSFORMCONSTRAINT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FB92350)
#define SPINE_TRANSFORMCONSTRAINT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1FB90E30)
#define SPINE_TRANSFORMCONSTRAINT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FB90B30)
#define SPINE_TRANSFORMCONSTRAINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB90860)

namespace Spine
{
	inline static constexpr unsigned int TransformConstraint_TypeDefinitionIndex = 33543;

	class TransformConstraint : public ::System::Object
	{
	public:
		::Spine::Bone* target; // 0x10
		::Spine::TransformConstraintData* data; // 0x18
		::Spine::ExposedList_1<::Spine::Bone*>* bones; // 0x20
		::System::Single mixRotate; // 0x28
		::System::Single mixScaleX; // 0x2C
		::System::Single mixY; // 0x30
		::System::Single mixX; // 0x34
		::System::Single mixScaleY; // 0x38
		::System::Single mixShearY; // 0x3C
		::System::Boolean active; // 0x40

		::System::Void _ctor(::Spine::TransformConstraintData* data, ::Spine::Skeleton* skeleton)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TransformConstraintData*, ::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT__CTOR_OFFSET))(this, data, skeleton);
		}

		::System::Void _ctor_1(::Spine::TransformConstraint* constraint, ::Spine::Skeleton* skeleton)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TransformConstraint*, ::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT__CTOR_1_OFFSET))(this, constraint, skeleton);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_UPDATE_OFFSET))(this);
		}

		::System::Void ApplyAbsoluteWorld()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_APPLYABSOLUTEWORLD_OFFSET))(this);
		}

		::System::Void ApplyRelativeWorld()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_APPLYRELATIVEWORLD_OFFSET))(this);
		}

		::System::Void ApplyAbsoluteLocal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_APPLYABSOLUTELOCAL_OFFSET))(this);
		}

		::System::Void ApplyRelativeLocal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_APPLYRELATIVELOCAL_OFFSET))(this);
		}

		::Spine::ExposedList_1<::Spine::Bone*>* get_Bones()
		{
			return ((::Spine::ExposedList_1<::Spine::Bone*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_GET_BONES_OFFSET))(this);
		}

		::Spine::Bone* get_Target()
		{
			return ((::Spine::Bone*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_GET_TARGET_OFFSET))(this);
		}

		::System::Void set_Target(::Spine::Bone* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Bone*))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_SET_TARGET_OFFSET))(this, value);
		}

		::System::Single get_MixRotate()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_GET_MIXROTATE_OFFSET))(this);
		}

		::System::Void set_MixRotate(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_SET_MIXROTATE_OFFSET))(this, value);
		}

		::System::Single get_MixX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_GET_MIXX_OFFSET))(this);
		}

		::System::Void set_MixX(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_SET_MIXX_OFFSET))(this, value);
		}

		::System::Single get_MixY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_GET_MIXY_OFFSET))(this);
		}

		::System::Void set_MixY(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_SET_MIXY_OFFSET))(this, value);
		}

		::System::Single get_MixScaleX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_GET_MIXSCALEX_OFFSET))(this);
		}

		::System::Void set_MixScaleX(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_SET_MIXSCALEX_OFFSET))(this, value);
		}

		::System::Single get_MixScaleY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_GET_MIXSCALEY_OFFSET))(this);
		}

		::System::Void set_MixScaleY(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_SET_MIXSCALEY_OFFSET))(this, value);
		}

		::System::Single get_MixShearY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_GET_MIXSHEARY_OFFSET))(this);
		}

		::System::Void set_MixShearY(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_SET_MIXSHEARY_OFFSET))(this, value);
		}

		::System::Boolean get_Active()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_GET_ACTIVE_OFFSET))(this);
		}

		::Spine::TransformConstraintData* get_Data()
		{
			return ((::Spine::TransformConstraintData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_GET_DATA_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_TOSTRING_OFFSET))(this);
		}
	};
}
