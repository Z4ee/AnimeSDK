#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine { class Bone; }
namespace Spine { class Skeleton; }
namespace Spine { class TransformConstraintData; }
namespace Spine { template <typename T> class ExposedList_1; }
namespace System { class String; }

#define SPINE_TRANSFORMCONSTRAINT_APPLYABSOLUTELOCAL_OFFSET UNITYSDK_OFFSET(0x183E5070)
#define SPINE_TRANSFORMCONSTRAINT_APPLYABSOLUTEWORLD_OFFSET UNITYSDK_OFFSET(0x183E5A60)
#define SPINE_TRANSFORMCONSTRAINT_APPLYRELATIVELOCAL_OFFSET UNITYSDK_OFFSET(0x183E4E40)
#define SPINE_TRANSFORMCONSTRAINT_APPLYRELATIVEWORLD_OFFSET UNITYSDK_OFFSET(0x183E53A0)
#define SPINE_TRANSFORMCONSTRAINT_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x183E62A0)
#define SPINE_TRANSFORMCONSTRAINT_GET_BONES_OFFSET UNITYSDK_OFFSET(0x183E61B0)
#define SPINE_TRANSFORMCONSTRAINT_GET_DATA_OFFSET UNITYSDK_OFFSET(0x183E62B0)
#define SPINE_TRANSFORMCONSTRAINT_GET_MIXROTATE_OFFSET UNITYSDK_OFFSET(0x183E61E0)
#define SPINE_TRANSFORMCONSTRAINT_GET_MIXSCALEX_OFFSET UNITYSDK_OFFSET(0x183E6240)
#define SPINE_TRANSFORMCONSTRAINT_GET_MIXSCALEY_OFFSET UNITYSDK_OFFSET(0x183E6260)
#define SPINE_TRANSFORMCONSTRAINT_GET_MIXSHEARY_OFFSET UNITYSDK_OFFSET(0x183E6280)
#define SPINE_TRANSFORMCONSTRAINT_GET_MIXX_OFFSET UNITYSDK_OFFSET(0x183E6200)
#define SPINE_TRANSFORMCONSTRAINT_GET_MIXY_OFFSET UNITYSDK_OFFSET(0x183E6220)
#define SPINE_TRANSFORMCONSTRAINT_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x183E61C0)
#define SPINE_TRANSFORMCONSTRAINT_SET_MIXROTATE_OFFSET UNITYSDK_OFFSET(0x183E61F0)
#define SPINE_TRANSFORMCONSTRAINT_SET_MIXSCALEX_OFFSET UNITYSDK_OFFSET(0x183E6250)
#define SPINE_TRANSFORMCONSTRAINT_SET_MIXSCALEY_OFFSET UNITYSDK_OFFSET(0x183E6270)
#define SPINE_TRANSFORMCONSTRAINT_SET_MIXSHEARY_OFFSET UNITYSDK_OFFSET(0x183E6290)
#define SPINE_TRANSFORMCONSTRAINT_SET_MIXX_OFFSET UNITYSDK_OFFSET(0x183E6210)
#define SPINE_TRANSFORMCONSTRAINT_SET_MIXY_OFFSET UNITYSDK_OFFSET(0x183E6230)
#define SPINE_TRANSFORMCONSTRAINT_SET_TARGET_OFFSET UNITYSDK_OFFSET(0x183E61D0)
#define SPINE_TRANSFORMCONSTRAINT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x183E62C0)
#define SPINE_TRANSFORMCONSTRAINT_UPDATE_OFFSET UNITYSDK_OFFSET(0x183E4D90)
#define SPINE_TRANSFORMCONSTRAINT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x183E4A80)
#define SPINE_TRANSFORMCONSTRAINT__CTOR_OFFSET UNITYSDK_OFFSET(0x183E47B0)

namespace Spine
{
	inline static constexpr unsigned int TransformConstraint_TypeDefinitionIndex = 30745;

	class TransformConstraint : public ::System::Object
	{
	public:
		::Spine::TransformConstraintData* data; // 0x10
		::Spine::ExposedList_1<::Spine::Bone*>* bones; // 0x18
		::Spine::Bone* target; // 0x20
		::System::Single mixX; // 0x28
		::System::Boolean active; // 0x2C
		::System::Single mixScaleY; // 0x30
		::System::Single mixRotate; // 0x34
		::System::Single mixShearY; // 0x38
		::System::Single mixScaleX; // 0x3C
		::System::Single mixY; // 0x40

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
