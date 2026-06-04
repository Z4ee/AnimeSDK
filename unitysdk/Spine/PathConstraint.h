#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine { class Bone; }
namespace Spine { class PathAttachment; }
namespace Spine { class PathConstraintData; }
namespace Spine { class Skeleton; }
namespace Spine { class Slot; }
namespace Spine { template <typename T> class ExposedList_1; }
namespace System { class String; }

#define SPINE_PATHCONSTRAINT_ADDAFTERPOSITION_OFFSET UNITYSDK_OFFSET(0x1AC5C8A0)
#define SPINE_PATHCONSTRAINT_ADDBEFOREPOSITION_OFFSET UNITYSDK_OFFSET(0x1AC5C710)
#define SPINE_PATHCONSTRAINT_ADDCURVEPOSITION_OFFSET UNITYSDK_OFFSET(0x1AC5CA20)
#define SPINE_PATHCONSTRAINT_ARRAYSFILL_OFFSET UNITYSDK_OFFSET(0x1AC59B90)
#define SPINE_PATHCONSTRAINT_COMPUTEWORLDPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1AC5AC50)
#define SPINE_PATHCONSTRAINT_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x1AC5CDC0)
#define SPINE_PATHCONSTRAINT_GET_BONES_OFFSET UNITYSDK_OFFSET(0x1AC5CD90)
#define SPINE_PATHCONSTRAINT_GET_DATA_OFFSET UNITYSDK_OFFSET(0x1AC5CDD0)
#define SPINE_PATHCONSTRAINT_GET_MIXROTATE_OFFSET UNITYSDK_OFFSET(0x1AC5CD30)
#define SPINE_PATHCONSTRAINT_GET_MIXX_OFFSET UNITYSDK_OFFSET(0x1AC5CD50)
#define SPINE_PATHCONSTRAINT_GET_MIXY_OFFSET UNITYSDK_OFFSET(0x1AC5CD70)
#define SPINE_PATHCONSTRAINT_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1AC5CCF0)
#define SPINE_PATHCONSTRAINT_GET_SPACING_OFFSET UNITYSDK_OFFSET(0x1AC5CD10)
#define SPINE_PATHCONSTRAINT_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x1AC5CDA0)
#define SPINE_PATHCONSTRAINT_SET_MIXROTATE_OFFSET UNITYSDK_OFFSET(0x1AC5CD40)
#define SPINE_PATHCONSTRAINT_SET_MIXX_OFFSET UNITYSDK_OFFSET(0x1AC5CD60)
#define SPINE_PATHCONSTRAINT_SET_MIXY_OFFSET UNITYSDK_OFFSET(0x1AC5CD80)
#define SPINE_PATHCONSTRAINT_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1AC5CD00)
#define SPINE_PATHCONSTRAINT_SET_SPACING_OFFSET UNITYSDK_OFFSET(0x1AC5CD20)
#define SPINE_PATHCONSTRAINT_SET_TARGET_OFFSET UNITYSDK_OFFSET(0x1AC5CDB0)
#define SPINE_PATHCONSTRAINT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AC5CDE0)
#define SPINE_PATHCONSTRAINT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1AC59C60)
#define SPINE_PATHCONSTRAINT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AC59750)
#define SPINE_PATHCONSTRAINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC59310)

namespace Spine
{
	inline static constexpr unsigned int PathConstraint_TypeDefinitionIndex = 36742;

	class PathConstraint : public ::System::Object
	{
	public:
		// static const ::System::Int32 NONE = 0xFFFFFFFF; // 0x0
		// static const ::System::Int32 BEFORE = 0xFFFFFFFE; // 0x0
		// static const ::System::Int32 AFTER = 0xFFFFFFFD; // 0x0
		// static const ::System::Single Epsilon; // 0x0
		::Spine::ExposedList_1<::System::Single>* spaces; // 0x10
		::Spine::ExposedList_1<::System::Single>* world; // 0x18
		::Spine::PathConstraintData* data; // 0x20
		::Spine::ExposedList_1<::System::Single>* curves; // 0x28
		::Spine::ExposedList_1<::System::Single>* lengths; // 0x30
		::Il2CppArray<::System::Single>* segments; // 0x38
		::Spine::ExposedList_1<::Spine::Bone*>* bones; // 0x40
		::Spine::ExposedList_1<::System::Single>* positions; // 0x48
		::Spine::Slot* target; // 0x50
		::System::Single position; // 0x58
		::System::Single spacing; // 0x5C
		::System::Single mixRotate; // 0x60
		::System::Boolean active; // 0x64
		::System::Single mixY; // 0x68
		::System::Single mixX; // 0x6C

		::System::Void _ctor(::Spine::PathConstraintData* a1, ::Spine::Skeleton* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::PathConstraintData*, ::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::Spine::PathConstraint* a1, ::Spine::Skeleton* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::PathConstraint*, ::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT__CTOR_1_OFFSET))(this, a1, a2);
		}

		static ::System::Void ArraysFill(::Il2CppArray<::System::Single>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Single>*, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_ARRAYSFILL_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_UPDATE_OFFSET))(this);
		}

		::Il2CppArray<::System::Single>* ComputeWorldPositions(::Spine::PathAttachment* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID, ::Spine::PathAttachment*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_COMPUTEWORLDPOSITIONS_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void AddBeforePosition(::System::Single a1, ::Il2CppArray<::System::Single>* a2, ::System::Int32 a3, ::Il2CppArray<::System::Single>* a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::System::Single, ::Il2CppArray<::System::Single>*, ::System::Int32, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_ADDBEFOREPOSITION_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void AddAfterPosition(::System::Single a1, ::Il2CppArray<::System::Single>* a2, ::System::Int32 a3, ::Il2CppArray<::System::Single>* a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::System::Single, ::Il2CppArray<::System::Single>*, ::System::Int32, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_ADDAFTERPOSITION_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void AddCurvePosition(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::System::Single a9, ::Il2CppArray<::System::Single>* a10, ::System::Int32 a11, ::System::Boolean a12)
		{
			return ((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::Il2CppArray<::System::Single>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_ADDCURVEPOSITION_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
		}

		::System::Single get_Position()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_SET_POSITION_OFFSET))(this, a1);
		}

		::System::Single get_Spacing()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_GET_SPACING_OFFSET))(this);
		}

		::System::Void set_Spacing(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_SET_SPACING_OFFSET))(this, a1);
		}

		::System::Single get_MixRotate()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_GET_MIXROTATE_OFFSET))(this);
		}

		::System::Void set_MixRotate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_SET_MIXROTATE_OFFSET))(this, a1);
		}

		::System::Single get_MixX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_GET_MIXX_OFFSET))(this);
		}

		::System::Void set_MixX(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_SET_MIXX_OFFSET))(this, a1);
		}

		::System::Single get_MixY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_GET_MIXY_OFFSET))(this);
		}

		::System::Void set_MixY(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_SET_MIXY_OFFSET))(this, a1);
		}

		::Spine::ExposedList_1<::Spine::Bone*>* get_Bones()
		{
			return ((::Spine::ExposedList_1<::Spine::Bone*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_GET_BONES_OFFSET))(this);
		}

		::Spine::Slot* get_Target()
		{
			return ((::Spine::Slot*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_GET_TARGET_OFFSET))(this);
		}

		::System::Void set_Target(::Spine::Slot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Slot*))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_SET_TARGET_OFFSET))(this, a1);
		}

		::System::Boolean get_Active()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_GET_ACTIVE_OFFSET))(this);
		}

		::Spine::PathConstraintData* get_Data()
		{
			return ((::Spine::PathConstraintData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_GET_DATA_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINT_TOSTRING_OFFSET))(this);
		}
	};
}
