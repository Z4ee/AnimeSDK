#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine { class Bone; }
namespace Spine { class IkConstraintData; }
namespace Spine { class Skeleton; }
namespace Spine { template <typename T> class ExposedList_1; }
namespace System { class String; }

#define SPINE_IKCONSTRAINT_APPLY_1_OFFSET UNITYSDK_OFFSET(0x1839F0E0)
#define SPINE_IKCONSTRAINT_APPLY_OFFSET UNITYSDK_OFFSET(0x1839ECE0)
#define SPINE_IKCONSTRAINT_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x1839FE70)
#define SPINE_IKCONSTRAINT_GET_BENDDIRECTION_OFFSET UNITYSDK_OFFSET(0x1839FE10)
#define SPINE_IKCONSTRAINT_GET_BONES_OFFSET UNITYSDK_OFFSET(0x1839FDA0)
#define SPINE_IKCONSTRAINT_GET_COMPRESS_OFFSET UNITYSDK_OFFSET(0x1839FE30)
#define SPINE_IKCONSTRAINT_GET_DATA_OFFSET UNITYSDK_OFFSET(0x1839FE80)
#define SPINE_IKCONSTRAINT_GET_MIX_OFFSET UNITYSDK_OFFSET(0x1839FDD0)
#define SPINE_IKCONSTRAINT_GET_SOFTNESS_OFFSET UNITYSDK_OFFSET(0x1839FDF0)
#define SPINE_IKCONSTRAINT_GET_STRETCH_OFFSET UNITYSDK_OFFSET(0x1839FE50)
#define SPINE_IKCONSTRAINT_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x1839FDB0)
#define SPINE_IKCONSTRAINT_SET_BENDDIRECTION_OFFSET UNITYSDK_OFFSET(0x1839FE20)
#define SPINE_IKCONSTRAINT_SET_COMPRESS_OFFSET UNITYSDK_OFFSET(0x1839FE40)
#define SPINE_IKCONSTRAINT_SET_MIX_OFFSET UNITYSDK_OFFSET(0x1839FDE0)
#define SPINE_IKCONSTRAINT_SET_SOFTNESS_OFFSET UNITYSDK_OFFSET(0x1839FE00)
#define SPINE_IKCONSTRAINT_SET_STRETCH_OFFSET UNITYSDK_OFFSET(0x1839FE60)
#define SPINE_IKCONSTRAINT_SET_TARGET_OFFSET UNITYSDK_OFFSET(0x1839FDC0)
#define SPINE_IKCONSTRAINT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1839FE90)
#define SPINE_IKCONSTRAINT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1839EB60)
#define SPINE_IKCONSTRAINT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1839E840)
#define SPINE_IKCONSTRAINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1839E520)

namespace Spine
{
	inline static constexpr unsigned int IkConstraint_TypeDefinitionIndex = 30715;

	class IkConstraint : public ::System::Object
	{
	public:
		::Spine::ExposedList_1<::Spine::Bone*>* bones; // 0x10
		::Spine::Bone* target; // 0x18
		::Spine::IkConstraintData* data; // 0x20
		::System::Boolean compress; // 0x28
		::System::Boolean active; // 0x29
		::System::Boolean stretch; // 0x2A
		::System::Single mix; // 0x2C
		::System::Single softness; // 0x30
		::System::Int32 bendDirection; // 0x34

		::System::Void _ctor(::Spine::IkConstraintData* data, ::Spine::Skeleton* skeleton)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::IkConstraintData*, ::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINT__CTOR_OFFSET))(this, data, skeleton);
		}

		::System::Void _ctor_1(::Spine::IkConstraint* constraint, ::Spine::Skeleton* skeleton)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::IkConstraint*, ::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINT__CTOR_1_OFFSET))(this, constraint, skeleton);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINT_UPDATE_OFFSET))(this);
		}

		::Spine::ExposedList_1<::Spine::Bone*>* get_Bones()
		{
			return ((::Spine::ExposedList_1<::Spine::Bone*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINT_GET_BONES_OFFSET))(this);
		}

		::Spine::Bone* get_Target()
		{
			return ((::Spine::Bone*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINT_GET_TARGET_OFFSET))(this);
		}

		::System::Void set_Target(::Spine::Bone* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Bone*))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINT_SET_TARGET_OFFSET))(this, value);
		}

		::System::Single get_Mix()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINT_GET_MIX_OFFSET))(this);
		}

		::System::Void set_Mix(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINT_SET_MIX_OFFSET))(this, value);
		}

		::System::Single get_Softness()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINT_GET_SOFTNESS_OFFSET))(this);
		}

		::System::Void set_Softness(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINT_SET_SOFTNESS_OFFSET))(this, value);
		}

		::System::Int32 get_BendDirection()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINT_GET_BENDDIRECTION_OFFSET))(this);
		}

		::System::Void set_BendDirection(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINT_SET_BENDDIRECTION_OFFSET))(this, value);
		}

		::System::Boolean get_Compress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINT_GET_COMPRESS_OFFSET))(this);
		}

		::System::Void set_Compress(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINT_SET_COMPRESS_OFFSET))(this, value);
		}

		::System::Boolean get_Stretch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINT_GET_STRETCH_OFFSET))(this);
		}

		::System::Void set_Stretch(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINT_SET_STRETCH_OFFSET))(this, value);
		}

		::System::Boolean get_Active()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINT_GET_ACTIVE_OFFSET))(this);
		}

		::Spine::IkConstraintData* get_Data()
		{
			return ((::Spine::IkConstraintData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINT_GET_DATA_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINT_TOSTRING_OFFSET))(this);
		}

		static ::System::Void Apply(::Spine::Bone* bone, ::System::Single targetX, ::System::Single targetY, ::System::Boolean compress, ::System::Boolean stretch, ::System::Boolean uniform, ::System::Single alpha)
		{
			return ((::System::Void(*)(::Spine::Bone*, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINT_APPLY_OFFSET))(bone, targetX, targetY, compress, stretch, uniform, alpha);
		}

		static ::System::Void Apply_1(::Spine::Bone* parent, ::Spine::Bone* child, ::System::Single targetX, ::System::Single targetY, ::System::Int32 bendDir, ::System::Boolean stretch, ::System::Boolean uniform, ::System::Single softness, ::System::Single alpha)
		{
			return ((::System::Void(*)(::Spine::Bone*, ::Spine::Bone*, ::System::Single, ::System::Single, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_IKCONSTRAINT_APPLY_1_OFFSET))(parent, child, targetX, targetY, bendDir, stretch, uniform, softness, alpha);
		}
	};
}
