#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine { class Attachment; }
namespace Spine { class Bone; }
namespace Spine { class IUpdatable; }
namespace Spine { class IkConstraint; }
namespace Spine { class PathConstraint; }
namespace Spine { class SkeletonData; }
namespace Spine { class Skin; }
namespace Spine { class Slot; }
namespace Spine { class TransformConstraint; }
namespace Spine { template <typename T> class ExposedList_1; }
namespace System { class String; }

#define SPINE_SKELETON_FINDBONE_OFFSET UNITYSDK_OFFSET(0x1C1FD620)
#define SPINE_SKELETON_FINDIKCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1C1FDC50)
#define SPINE_SKELETON_FINDPATHCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1C1FDE90)
#define SPINE_SKELETON_FINDSLOT_OFFSET UNITYSDK_OFFSET(0x1C1FD740)
#define SPINE_SKELETON_FINDTRANSFORMCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1C1FDD70)
#define SPINE_SKELETON_GETATTACHMENT_1_OFFSET UNITYSDK_OFFSET(0x1C1FD940)
#define SPINE_SKELETON_GETATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1C1FD900)
#define SPINE_SKELETON_GETBOUNDS_OFFSET UNITYSDK_OFFSET(0x1C1FDFE0)
#define SPINE_SKELETON_GET_A_OFFSET UNITYSDK_OFFSET(0x1C1F9FC0)
#define SPINE_SKELETON_GET_BONES_OFFSET UNITYSDK_OFFSET(0x1C1F9DE0)
#define SPINE_SKELETON_GET_B_OFFSET UNITYSDK_OFFSET(0x1C1F9FA0)
#define SPINE_SKELETON_GET_DATA_OFFSET UNITYSDK_OFFSET(0x1C1F9DD0)
#define SPINE_SKELETON_GET_DRAWORDER_OFFSET UNITYSDK_OFFSET(0x1C1F9E10)
#define SPINE_SKELETON_GET_FLIPX_OFFSET UNITYSDK_OFFSET(0x1C1FA070)
#define SPINE_SKELETON_GET_FLIPY_OFFSET UNITYSDK_OFFSET(0x1C1FA0C0)
#define SPINE_SKELETON_GET_G_OFFSET UNITYSDK_OFFSET(0x1C1F9F80)
#define SPINE_SKELETON_GET_IKCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1C1F9E20)
#define SPINE_SKELETON_GET_PATHCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1C1F9E30)
#define SPINE_SKELETON_GET_ROOTBONE_OFFSET UNITYSDK_OFFSET(0x1C1FA110)
#define SPINE_SKELETON_GET_R_OFFSET UNITYSDK_OFFSET(0x1C1F9F60)
#define SPINE_SKELETON_GET_SCALEX_OFFSET UNITYSDK_OFFSET(0x1C1FA020)
#define SPINE_SKELETON_GET_SCALEY_OFFSET UNITYSDK_OFFSET(0x1C1FA040)
#define SPINE_SKELETON_GET_SKIN_OFFSET UNITYSDK_OFFSET(0x1C1F9E50)
#define SPINE_SKELETON_GET_SLOTS_OFFSET UNITYSDK_OFFSET(0x1C1F9E00)
#define SPINE_SKELETON_GET_TRANSFORMCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1C1F9E40)
#define SPINE_SKELETON_GET_UPDATECACHELIST_OFFSET UNITYSDK_OFFSET(0x1C1F9DF0)
#define SPINE_SKELETON_GET_X_OFFSET UNITYSDK_OFFSET(0x1C1F9FE0)
#define SPINE_SKELETON_GET_Y_OFFSET UNITYSDK_OFFSET(0x1C1FA000)
#define SPINE_SKELETON_SETATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1C1FDA00)
#define SPINE_SKELETON_SETBONESTOSETUPPOSE_OFFSET UNITYSDK_OFFSET(0x1C1FD2C0)
#define SPINE_SKELETON_SETSKIN_1_OFFSET UNITYSDK_OFFSET(0x1C1F9E70)
#define SPINE_SKELETON_SETSKIN_OFFSET UNITYSDK_OFFSET(0x1C1FD860)
#define SPINE_SKELETON_SETSLOTSTOSETUPPOSE_OFFSET UNITYSDK_OFFSET(0x1C1FD590)
#define SPINE_SKELETON_SETTOSETUPPOSE_OFFSET UNITYSDK_OFFSET(0x1C1FD2A0)
#define SPINE_SKELETON_SET_A_OFFSET UNITYSDK_OFFSET(0x1C1F9FD0)
#define SPINE_SKELETON_SET_B_OFFSET UNITYSDK_OFFSET(0x1C1F9FB0)
#define SPINE_SKELETON_SET_FLIPX_OFFSET UNITYSDK_OFFSET(0x1C1FA080)
#define SPINE_SKELETON_SET_FLIPY_OFFSET UNITYSDK_OFFSET(0x1C1FA0D0)
#define SPINE_SKELETON_SET_G_OFFSET UNITYSDK_OFFSET(0x1C1F9F90)
#define SPINE_SKELETON_SET_R_OFFSET UNITYSDK_OFFSET(0x1C1F9F70)
#define SPINE_SKELETON_SET_SCALEX_OFFSET UNITYSDK_OFFSET(0x1C1FA030)
#define SPINE_SKELETON_SET_SCALEY_OFFSET UNITYSDK_OFFSET(0x1C1FA060)
#define SPINE_SKELETON_SET_SKIN_OFFSET UNITYSDK_OFFSET(0x1C1F9E60)
#define SPINE_SKELETON_SET_X_OFFSET UNITYSDK_OFFSET(0x1C1F9FF0)
#define SPINE_SKELETON_SET_Y_OFFSET UNITYSDK_OFFSET(0x1C1FA010)
#define SPINE_SKELETON_SORTBONE_OFFSET UNITYSDK_OFFSET(0x1C1FC620)
#define SPINE_SKELETON_SORTIKCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1C1FBE30)
#define SPINE_SKELETON_SORTPATHCONSTRAINTATTACHMENT_1_OFFSET UNITYSDK_OFFSET(0x1C1FCB00)
#define SPINE_SKELETON_SORTPATHCONSTRAINTATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1C1FC750)
#define SPINE_SKELETON_SORTPATHCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1C1FC330)
#define SPINE_SKELETON_SORTRESET_OFFSET UNITYSDK_OFFSET(0x1C1FC6B0)
#define SPINE_SKELETON_SORTTRANSFORMCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1C1FC070)
#define SPINE_SKELETON_UPDATECACHE_OFFSET UNITYSDK_OFFSET(0x1C1FAC00)
#define SPINE_SKELETON_UPDATEWORLDTRANSFORM_1_OFFSET UNITYSDK_OFFSET(0x1C1FCEA0)
#define SPINE_SKELETON_UPDATEWORLDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1C1FCC80)
#define SPINE_SKELETON__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C1FB020)
#define SPINE_SKELETON__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1FA160)

namespace Spine
{
	inline static constexpr unsigned int Skeleton_TypeDefinitionIndex = 31339;

	class Skeleton : public ::System::Object
	{
	public:
		::Spine::ExposedList_1<::Spine::Bone*>* bones; // 0x10
		::Spine::ExposedList_1<::Spine::Slot*>* drawOrder; // 0x18
		::Spine::ExposedList_1<::Spine::IkConstraint*>* ikConstraints; // 0x20
		::Spine::ExposedList_1<::Spine::PathConstraint*>* pathConstraints; // 0x28
		::Spine::ExposedList_1<::Spine::IUpdatable*>* updateCache; // 0x30
		::Spine::ExposedList_1<::Spine::TransformConstraint*>* transformConstraints; // 0x38
		::Spine::SkeletonData* data; // 0x40
		::Spine::ExposedList_1<::Spine::Slot*>* slots; // 0x48
		::Spine::Skin* skin; // 0x50
		::System::Single y; // 0x58
		::System::Single r; // 0x5C
		::System::Single b; // 0x60
		::System::Single scaleX; // 0x64
		::System::Single a; // 0x68
		::System::Single x; // 0x6C
		::System::Single g; // 0x70
		::System::Single scaleY; // 0x74

		::System::Void _ctor(::Spine::SkeletonData* data)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::SkeletonData*))((::PBYTE)hIl2Cpp + SPINE_SKELETON__CTOR_OFFSET))(this, data);
		}

		::System::Void _ctor_1(::Spine::Skeleton* skeleton)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_SKELETON__CTOR_1_OFFSET))(this, skeleton);
		}

		::Spine::SkeletonData* get_Data()
		{
			return ((::Spine::SkeletonData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_DATA_OFFSET))(this);
		}

		::Spine::ExposedList_1<::Spine::Bone*>* get_Bones()
		{
			return ((::Spine::ExposedList_1<::Spine::Bone*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_BONES_OFFSET))(this);
		}

		::Spine::ExposedList_1<::Spine::IUpdatable*>* get_UpdateCacheList()
		{
			return ((::Spine::ExposedList_1<::Spine::IUpdatable*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_UPDATECACHELIST_OFFSET))(this);
		}

		::Spine::ExposedList_1<::Spine::Slot*>* get_Slots()
		{
			return ((::Spine::ExposedList_1<::Spine::Slot*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_SLOTS_OFFSET))(this);
		}

		::Spine::ExposedList_1<::Spine::Slot*>* get_DrawOrder()
		{
			return ((::Spine::ExposedList_1<::Spine::Slot*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_DRAWORDER_OFFSET))(this);
		}

		::Spine::ExposedList_1<::Spine::IkConstraint*>* get_IkConstraints()
		{
			return ((::Spine::ExposedList_1<::Spine::IkConstraint*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_IKCONSTRAINTS_OFFSET))(this);
		}

		::Spine::ExposedList_1<::Spine::PathConstraint*>* get_PathConstraints()
		{
			return ((::Spine::ExposedList_1<::Spine::PathConstraint*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_PATHCONSTRAINTS_OFFSET))(this);
		}

		::Spine::ExposedList_1<::Spine::TransformConstraint*>* get_TransformConstraints()
		{
			return ((::Spine::ExposedList_1<::Spine::TransformConstraint*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_TRANSFORMCONSTRAINTS_OFFSET))(this);
		}

		::Spine::Skin* get_Skin()
		{
			return ((::Spine::Skin*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_SKIN_OFFSET))(this);
		}

		::System::Void set_Skin(::Spine::Skin* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skin*))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SET_SKIN_OFFSET))(this, value);
		}

		::System::Single get_R()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_R_OFFSET))(this);
		}

		::System::Void set_R(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SET_R_OFFSET))(this, value);
		}

		::System::Single get_G()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_G_OFFSET))(this);
		}

		::System::Void set_G(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SET_G_OFFSET))(this, value);
		}

		::System::Single get_B()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_B_OFFSET))(this);
		}

		::System::Void set_B(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SET_B_OFFSET))(this, value);
		}

		::System::Single get_A()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_A_OFFSET))(this);
		}

		::System::Void set_A(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SET_A_OFFSET))(this, value);
		}

		::System::Single get_X()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_X_OFFSET))(this);
		}

		::System::Void set_X(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SET_X_OFFSET))(this, value);
		}

		::System::Single get_Y()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_Y_OFFSET))(this);
		}

		::System::Void set_Y(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SET_Y_OFFSET))(this, value);
		}

		::System::Single get_ScaleX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_SCALEX_OFFSET))(this);
		}

		::System::Void set_ScaleX(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SET_SCALEX_OFFSET))(this, value);
		}

		::System::Single get_ScaleY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_SCALEY_OFFSET))(this);
		}

		::System::Void set_ScaleY(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SET_SCALEY_OFFSET))(this, value);
		}

		::System::Boolean get_FlipX()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_FLIPX_OFFSET))(this);
		}

		::System::Void set_FlipX(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SET_FLIPX_OFFSET))(this, value);
		}

		::System::Boolean get_FlipY()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_FLIPY_OFFSET))(this);
		}

		::System::Void set_FlipY(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SET_FLIPY_OFFSET))(this, value);
		}

		::Spine::Bone* get_RootBone()
		{
			return ((::Spine::Bone*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GET_ROOTBONE_OFFSET))(this);
		}

		::System::Void UpdateCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_UPDATECACHE_OFFSET))(this);
		}

		::System::Void SortIkConstraint(::Spine::IkConstraint* constraint)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::IkConstraint*))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SORTIKCONSTRAINT_OFFSET))(this, constraint);
		}

		::System::Void SortTransformConstraint(::Spine::TransformConstraint* constraint)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TransformConstraint*))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SORTTRANSFORMCONSTRAINT_OFFSET))(this, constraint);
		}

		::System::Void SortPathConstraint(::Spine::PathConstraint* constraint)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::PathConstraint*))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SORTPATHCONSTRAINT_OFFSET))(this, constraint);
		}

		::System::Void SortPathConstraintAttachment(::Spine::Skin* skin, ::System::Int32 slotIndex, ::Spine::Bone* slotBone)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skin*, ::System::Int32, ::Spine::Bone*))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SORTPATHCONSTRAINTATTACHMENT_OFFSET))(this, skin, slotIndex, slotBone);
		}

		::System::Void SortPathConstraintAttachment_1(::Spine::Attachment* attachment, ::Spine::Bone* slotBone)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Attachment*, ::Spine::Bone*))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SORTPATHCONSTRAINTATTACHMENT_1_OFFSET))(this, attachment, slotBone);
		}

		::System::Void SortBone(::Spine::Bone* bone)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Bone*))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SORTBONE_OFFSET))(this, bone);
		}

		static ::System::Void SortReset(::Spine::ExposedList_1<::Spine::Bone*>* bones)
		{
			return ((::System::Void(*)(::Spine::ExposedList_1<::Spine::Bone*>*))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SORTRESET_OFFSET))(bones);
		}

		::System::Void UpdateWorldTransform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_UPDATEWORLDTRANSFORM_OFFSET))(this);
		}

		::System::Void UpdateWorldTransform_1(::Spine::Bone* parent)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Bone*))((::PBYTE)hIl2Cpp + SPINE_SKELETON_UPDATEWORLDTRANSFORM_1_OFFSET))(this, parent);
		}

		::System::Void SetToSetupPose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SETTOSETUPPOSE_OFFSET))(this);
		}

		::System::Void SetBonesToSetupPose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SETBONESTOSETUPPOSE_OFFSET))(this);
		}

		::System::Void SetSlotsToSetupPose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SETSLOTSTOSETUPPOSE_OFFSET))(this);
		}

		::Spine::Bone* FindBone(::System::String* boneName)
		{
			return ((::Spine::Bone*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETON_FINDBONE_OFFSET))(this, boneName);
		}

		::Spine::Slot* FindSlot(::System::String* slotName)
		{
			return ((::Spine::Slot*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETON_FINDSLOT_OFFSET))(this, slotName);
		}

		::System::Void SetSkin(::System::String* skinName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SETSKIN_OFFSET))(this, skinName);
		}

		::System::Void SetSkin_1(::Spine::Skin* newSkin)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skin*))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SETSKIN_1_OFFSET))(this, newSkin);
		}

		::Spine::Attachment* GetAttachment(::System::String* slotName, ::System::String* attachmentName)
		{
			return ((::Spine::Attachment*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GETATTACHMENT_OFFSET))(this, slotName, attachmentName);
		}

		::Spine::Attachment* GetAttachment_1(::System::Int32 slotIndex, ::System::String* attachmentName)
		{
			return ((::Spine::Attachment*(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GETATTACHMENT_1_OFFSET))(this, slotIndex, attachmentName);
		}

		::System::Void SetAttachment(::System::String* slotName, ::System::String* attachmentName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETON_SETATTACHMENT_OFFSET))(this, slotName, attachmentName);
		}

		::Spine::IkConstraint* FindIkConstraint(::System::String* constraintName)
		{
			return ((::Spine::IkConstraint*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETON_FINDIKCONSTRAINT_OFFSET))(this, constraintName);
		}

		::Spine::TransformConstraint* FindTransformConstraint(::System::String* constraintName)
		{
			return ((::Spine::TransformConstraint*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETON_FINDTRANSFORMCONSTRAINT_OFFSET))(this, constraintName);
		}

		::Spine::PathConstraint* FindPathConstraint(::System::String* constraintName)
		{
			return ((::Spine::PathConstraint*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETON_FINDPATHCONSTRAINT_OFFSET))(this, constraintName);
		}

		::System::Void GetBounds(::System::Single& x, ::System::Single& y, ::System::Single& width, ::System::Single& height, ::Il2CppArray<::System::Single>*& vertexBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&, ::Il2CppArray<::System::Single>*&))((::PBYTE)hIl2Cpp + SPINE_SKELETON_GETBOUNDS_OFFSET))(this, x, y, width, height, vertexBuffer);
		}
	};
}
