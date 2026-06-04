#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine { class Bone; }
namespace Spine { class Skeleton; }
namespace Spine { class TransformConstraintData; }
namespace Spine { template <typename T> class ExposedList_1; }
namespace System { class String; }

#define SPINE_TRANSFORMCONSTRAINT_APPLYABSOLUTELOCAL_OFFSET UNITYSDK_OFFSET(0x1AC9B290)
#define SPINE_TRANSFORMCONSTRAINT_APPLYABSOLUTEWORLD_OFFSET UNITYSDK_OFFSET(0x1AC9BCA0)
#define SPINE_TRANSFORMCONSTRAINT_APPLYRELATIVELOCAL_OFFSET UNITYSDK_OFFSET(0x1AC9B070)
#define SPINE_TRANSFORMCONSTRAINT_APPLYRELATIVEWORLD_OFFSET UNITYSDK_OFFSET(0x1AC9B5C0)
#define SPINE_TRANSFORMCONSTRAINT_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x1AC9C520)
#define SPINE_TRANSFORMCONSTRAINT_GET_BONES_OFFSET UNITYSDK_OFFSET(0x1AC9C430)
#define SPINE_TRANSFORMCONSTRAINT_GET_DATA_OFFSET UNITYSDK_OFFSET(0x1AC9C530)
#define SPINE_TRANSFORMCONSTRAINT_GET_MIXROTATE_OFFSET UNITYSDK_OFFSET(0x1AC9C460)
#define SPINE_TRANSFORMCONSTRAINT_GET_MIXSCALEX_OFFSET UNITYSDK_OFFSET(0x1AC9C4C0)
#define SPINE_TRANSFORMCONSTRAINT_GET_MIXSCALEY_OFFSET UNITYSDK_OFFSET(0x1AC9C4E0)
#define SPINE_TRANSFORMCONSTRAINT_GET_MIXSHEARY_OFFSET UNITYSDK_OFFSET(0x1AC9C500)
#define SPINE_TRANSFORMCONSTRAINT_GET_MIXX_OFFSET UNITYSDK_OFFSET(0x1AC9C480)
#define SPINE_TRANSFORMCONSTRAINT_GET_MIXY_OFFSET UNITYSDK_OFFSET(0x1AC9C4A0)
#define SPINE_TRANSFORMCONSTRAINT_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x1AC9C440)
#define SPINE_TRANSFORMCONSTRAINT_SET_MIXROTATE_OFFSET UNITYSDK_OFFSET(0x1AC9C470)
#define SPINE_TRANSFORMCONSTRAINT_SET_MIXSCALEX_OFFSET UNITYSDK_OFFSET(0x1AC9C4D0)
#define SPINE_TRANSFORMCONSTRAINT_SET_MIXSCALEY_OFFSET UNITYSDK_OFFSET(0x1AC9C4F0)
#define SPINE_TRANSFORMCONSTRAINT_SET_MIXSHEARY_OFFSET UNITYSDK_OFFSET(0x1AC9C510)
#define SPINE_TRANSFORMCONSTRAINT_SET_MIXX_OFFSET UNITYSDK_OFFSET(0x1AC9C490)
#define SPINE_TRANSFORMCONSTRAINT_SET_MIXY_OFFSET UNITYSDK_OFFSET(0x1AC9C4B0)
#define SPINE_TRANSFORMCONSTRAINT_SET_TARGET_OFFSET UNITYSDK_OFFSET(0x1AC9C450)
#define SPINE_TRANSFORMCONSTRAINT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AC9C540)
#define SPINE_TRANSFORMCONSTRAINT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1AC9AFC0)
#define SPINE_TRANSFORMCONSTRAINT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AC9AD40)
#define SPINE_TRANSFORMCONSTRAINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC9AAC0)

namespace Spine
{
	inline static constexpr unsigned int TransformConstraint_TypeDefinitionIndex = 36765;

	class TransformConstraint : public ::System::Object
	{
	public:
		::Spine::Bone* target; // 0x10
		::Spine::ExposedList_1<::Spine::Bone*>* bones; // 0x18
		::Spine::TransformConstraintData* data; // 0x20
		::System::Single mixScaleX; // 0x28
		::System::Boolean active; // 0x2C
		::System::Single mixShearY; // 0x30
		::System::Single mixX; // 0x34
		::System::Single mixRotate; // 0x38
		::System::Single mixScaleY; // 0x3C
		::System::Single mixY; // 0x40

		::System::Void _ctor(::Spine::TransformConstraintData* a1, ::Spine::Skeleton* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TransformConstraintData*, ::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::Spine::TransformConstraint* a1, ::Spine::Skeleton* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TransformConstraint*, ::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT__CTOR_1_OFFSET))(this, a1, a2);
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

		::System::Void set_Target(::Spine::Bone* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Bone*))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_SET_TARGET_OFFSET))(this, a1);
		}

		::System::Single get_MixRotate()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_GET_MIXROTATE_OFFSET))(this);
		}

		::System::Void set_MixRotate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_SET_MIXROTATE_OFFSET))(this, a1);
		}

		::System::Single get_MixX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_GET_MIXX_OFFSET))(this);
		}

		::System::Void set_MixX(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_SET_MIXX_OFFSET))(this, a1);
		}

		::System::Single get_MixY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_GET_MIXY_OFFSET))(this);
		}

		::System::Void set_MixY(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_SET_MIXY_OFFSET))(this, a1);
		}

		::System::Single get_MixScaleX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_GET_MIXSCALEX_OFFSET))(this);
		}

		::System::Void set_MixScaleX(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_SET_MIXSCALEX_OFFSET))(this, a1);
		}

		::System::Single get_MixScaleY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_GET_MIXSCALEY_OFFSET))(this);
		}

		::System::Void set_MixScaleY(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_SET_MIXSCALEY_OFFSET))(this, a1);
		}

		::System::Single get_MixShearY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_GET_MIXSHEARY_OFFSET))(this);
		}

		::System::Void set_MixShearY(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINT_SET_MIXSHEARY_OFFSET))(this, a1);
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
