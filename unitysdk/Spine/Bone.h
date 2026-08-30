#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine { class BoneData; }
namespace Spine { class Skeleton; }
namespace Spine { template <typename T> class ExposedList_1; }
namespace System { class String; }

#define SPINE_BONE_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x1E5D6E40)
#define SPINE_BONE_GET_APPLIEDROTATION_OFFSET UNITYSDK_OFFSET(0x1E5D6F30)
#define SPINE_BONE_GET_ASCALEX_OFFSET UNITYSDK_OFFSET(0x1E5D6F90)
#define SPINE_BONE_GET_ASCALEY_OFFSET UNITYSDK_OFFSET(0x1E5D6FB0)
#define SPINE_BONE_GET_ASHEARX_OFFSET UNITYSDK_OFFSET(0x1E5D6FD0)
#define SPINE_BONE_GET_ASHEARY_OFFSET UNITYSDK_OFFSET(0x1E5D6FF0)
#define SPINE_BONE_GET_AX_OFFSET UNITYSDK_OFFSET(0x1E5D6F50)
#define SPINE_BONE_GET_AY_OFFSET UNITYSDK_OFFSET(0x1E5D6F70)
#define SPINE_BONE_GET_A_OFFSET UNITYSDK_OFFSET(0x1E5D7010)
#define SPINE_BONE_GET_B_OFFSET UNITYSDK_OFFSET(0x1E5D7030)
#define SPINE_BONE_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x1E5D6E30)
#define SPINE_BONE_GET_C_OFFSET UNITYSDK_OFFSET(0x1E5D7050)
#define SPINE_BONE_GET_DATA_OFFSET UNITYSDK_OFFSET(0x1E5D6E00)
#define SPINE_BONE_GET_D_OFFSET UNITYSDK_OFFSET(0x1E5D7070)
#define SPINE_BONE_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x1E5D6E20)
#define SPINE_BONE_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1E5D6E90)
#define SPINE_BONE_GET_SCALEX_OFFSET UNITYSDK_OFFSET(0x1E5D6EB0)
#define SPINE_BONE_GET_SCALEY_OFFSET UNITYSDK_OFFSET(0x1E5D6ED0)
#define SPINE_BONE_GET_SHEARX_OFFSET UNITYSDK_OFFSET(0x1E5D6EF0)
#define SPINE_BONE_GET_SHEARY_OFFSET UNITYSDK_OFFSET(0x1E5D6F10)
#define SPINE_BONE_GET_SKELETON_OFFSET UNITYSDK_OFFSET(0x1E5D6E10)
#define SPINE_BONE_GET_WORLDROTATIONX_OFFSET UNITYSDK_OFFSET(0x1E5D70D0)
#define SPINE_BONE_GET_WORLDROTATIONY_OFFSET UNITYSDK_OFFSET(0x1E5D7150)
#define SPINE_BONE_GET_WORLDSCALEX_OFFSET UNITYSDK_OFFSET(0x1E5D71B0)
#define SPINE_BONE_GET_WORLDSCALEY_OFFSET UNITYSDK_OFFSET(0x1E5D71E0)
#define SPINE_BONE_GET_WORLDTOLOCALROTATIONX_OFFSET UNITYSDK_OFFSET(0x1E5D8520)
#define SPINE_BONE_GET_WORLDTOLOCALROTATIONY_OFFSET UNITYSDK_OFFSET(0x1E5D8600)
#define SPINE_BONE_GET_WORLDX_OFFSET UNITYSDK_OFFSET(0x1E5D7090)
#define SPINE_BONE_GET_WORLDY_OFFSET UNITYSDK_OFFSET(0x1E5D70B0)
#define SPINE_BONE_GET_X_OFFSET UNITYSDK_OFFSET(0x1E5D6E50)
#define SPINE_BONE_GET_Y_OFFSET UNITYSDK_OFFSET(0x1E5D6E70)
#define SPINE_BONE_LOCALTOWORLDROTATION_OFFSET UNITYSDK_OFFSET(0x1E5D87A0)
#define SPINE_BONE_LOCALTOWORLD_OFFSET UNITYSDK_OFFSET(0x1E5D84E0)
#define SPINE_BONE_ROTATEWORLD_OFFSET UNITYSDK_OFFSET(0x1E5D8870)
#define SPINE_BONE_SETTOSETUPPOSE_OFFSET UNITYSDK_OFFSET(0x1E5D7320)
#define SPINE_BONE_SET_APPLIEDROTATION_OFFSET UNITYSDK_OFFSET(0x1E5D6F40)
#define SPINE_BONE_SET_ASCALEX_OFFSET UNITYSDK_OFFSET(0x1E5D6FA0)
#define SPINE_BONE_SET_ASCALEY_OFFSET UNITYSDK_OFFSET(0x1E5D6FC0)
#define SPINE_BONE_SET_ASHEARX_OFFSET UNITYSDK_OFFSET(0x1E5D6FE0)
#define SPINE_BONE_SET_ASHEARY_OFFSET UNITYSDK_OFFSET(0x1E5D7000)
#define SPINE_BONE_SET_AX_OFFSET UNITYSDK_OFFSET(0x1E5D6F60)
#define SPINE_BONE_SET_AY_OFFSET UNITYSDK_OFFSET(0x1E5D6F80)
#define SPINE_BONE_SET_A_OFFSET UNITYSDK_OFFSET(0x1E5D7020)
#define SPINE_BONE_SET_B_OFFSET UNITYSDK_OFFSET(0x1E5D7040)
#define SPINE_BONE_SET_C_OFFSET UNITYSDK_OFFSET(0x1E5D7060)
#define SPINE_BONE_SET_D_OFFSET UNITYSDK_OFFSET(0x1E5D7080)
#define SPINE_BONE_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1E5D6EA0)
#define SPINE_BONE_SET_SCALEX_OFFSET UNITYSDK_OFFSET(0x1E5D6EC0)
#define SPINE_BONE_SET_SCALEY_OFFSET UNITYSDK_OFFSET(0x1E5D6EE0)
#define SPINE_BONE_SET_SHEARX_OFFSET UNITYSDK_OFFSET(0x1E5D6F00)
#define SPINE_BONE_SET_SHEARY_OFFSET UNITYSDK_OFFSET(0x1E5D6F20)
#define SPINE_BONE_SET_WORLDX_OFFSET UNITYSDK_OFFSET(0x1E5D70A0)
#define SPINE_BONE_SET_WORLDY_OFFSET UNITYSDK_OFFSET(0x1E5D70C0)
#define SPINE_BONE_SET_X_OFFSET UNITYSDK_OFFSET(0x1E5D6E60)
#define SPINE_BONE_SET_Y_OFFSET UNITYSDK_OFFSET(0x1E5D6E80)
#define SPINE_BONE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5D8990)
#define SPINE_BONE_UPDATEAPPLIEDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1E5D8070)
#define SPINE_BONE_UPDATEWORLDTRANSFORM_1_OFFSET UNITYSDK_OFFSET(0x1E5D7520)
#define SPINE_BONE_UPDATEWORLDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1E5D7F70)
#define SPINE_BONE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E5D74C0)
#define SPINE_BONE_WORLDTOLOCALROTATION_OFFSET UNITYSDK_OFFSET(0x1E5D86E0)
#define SPINE_BONE_WORLDTOLOCAL_OFFSET UNITYSDK_OFFSET(0x1E5D8470)
#define SPINE_BONE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5D7380)
#define SPINE_BONE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5D7210)

namespace Spine
{
	inline static constexpr unsigned int Bone_TypeDefinitionIndex = 38367;

	class Bone : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_yDown()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Bone_TypeDefinitionIndex)->GetStaticField(0x109E0);
		}
		::Spine::Skeleton* skeleton; // 0x10
		::Spine::ExposedList_1<::Spine::Bone*>* children; // 0x18
		::Spine::Bone* parent; // 0x20
		::Spine::BoneData* data; // 0x28
		::System::Single scaleY; // 0x30
		::System::Single ay; // 0x34
		::System::Single ashearY; // 0x38
		::System::Single worldY; // 0x3C
		::System::Single shearX; // 0x40
		::System::Single arotation; // 0x44
		::System::Single c; // 0x48
		::System::Single ascaleY; // 0x4C
		::System::Single scaleX; // 0x50
		::System::Boolean active; // 0x54
		::System::Boolean sorted; // 0x55
		::System::Single y; // 0x58
		::System::Single b; // 0x5C
		::System::Single worldX; // 0x60
		::System::Single x; // 0x64
		::System::Single d; // 0x68
		::System::Single ascaleX; // 0x6C
		::System::Single rotation; // 0x70
		::System::Single a; // 0x74
		::System::Single shearY; // 0x78
		::System::Single ax; // 0x7C
		::System::Single ashearX; // 0x80

		::System::Void _ctor(::Spine::BoneData* a1, ::Spine::Skeleton* a2, ::Spine::Bone* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::BoneData*, ::Spine::Skeleton*, ::Spine::Bone*))((::PBYTE)hIl2Cpp + SPINE_BONE__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::Spine::Bone* a1, ::Spine::Skeleton* a2, ::Spine::Bone* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Bone*, ::Spine::Skeleton*, ::Spine::Bone*))((::PBYTE)hIl2Cpp + SPINE_BONE__CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::Spine::BoneData* get_Data()
		{
			return ((::Spine::BoneData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_DATA_OFFSET))(this);
		}

		::Spine::Skeleton* get_Skeleton()
		{
			return ((::Spine::Skeleton*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_SKELETON_OFFSET))(this);
		}

		::Spine::Bone* get_Parent()
		{
			return ((::Spine::Bone*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_PARENT_OFFSET))(this);
		}

		::Spine::ExposedList_1<::Spine::Bone*>* get_Children()
		{
			return ((::Spine::ExposedList_1<::Spine::Bone*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_CHILDREN_OFFSET))(this);
		}

		::System::Boolean get_Active()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_ACTIVE_OFFSET))(this);
		}

		::System::Single get_X()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_X_OFFSET))(this);
		}

		::System::Void set_X(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_X_OFFSET))(this, a1);
		}

		::System::Single get_Y()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_Y_OFFSET))(this);
		}

		::System::Void set_Y(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_Y_OFFSET))(this, a1);
		}

		::System::Single get_Rotation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_Rotation(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_ROTATION_OFFSET))(this, a1);
		}

		::System::Single get_ScaleX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_SCALEX_OFFSET))(this);
		}

		::System::Void set_ScaleX(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_SCALEX_OFFSET))(this, a1);
		}

		::System::Single get_ScaleY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_SCALEY_OFFSET))(this);
		}

		::System::Void set_ScaleY(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_SCALEY_OFFSET))(this, a1);
		}

		::System::Single get_ShearX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_SHEARX_OFFSET))(this);
		}

		::System::Void set_ShearX(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_SHEARX_OFFSET))(this, a1);
		}

		::System::Single get_ShearY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_SHEARY_OFFSET))(this);
		}

		::System::Void set_ShearY(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_SHEARY_OFFSET))(this, a1);
		}

		::System::Single get_AppliedRotation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_APPLIEDROTATION_OFFSET))(this);
		}

		::System::Void set_AppliedRotation(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_APPLIEDROTATION_OFFSET))(this, a1);
		}

		::System::Single get_AX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_AX_OFFSET))(this);
		}

		::System::Void set_AX(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_AX_OFFSET))(this, a1);
		}

		::System::Single get_AY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_AY_OFFSET))(this);
		}

		::System::Void set_AY(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_AY_OFFSET))(this, a1);
		}

		::System::Single get_AScaleX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_ASCALEX_OFFSET))(this);
		}

		::System::Void set_AScaleX(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_ASCALEX_OFFSET))(this, a1);
		}

		::System::Single get_AScaleY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_ASCALEY_OFFSET))(this);
		}

		::System::Void set_AScaleY(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_ASCALEY_OFFSET))(this, a1);
		}

		::System::Single get_AShearX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_ASHEARX_OFFSET))(this);
		}

		::System::Void set_AShearX(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_ASHEARX_OFFSET))(this, a1);
		}

		::System::Single get_AShearY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_ASHEARY_OFFSET))(this);
		}

		::System::Void set_AShearY(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_ASHEARY_OFFSET))(this, a1);
		}

		::System::Single get_A()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_A_OFFSET))(this);
		}

		::System::Void set_A(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_A_OFFSET))(this, a1);
		}

		::System::Single get_B()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_B_OFFSET))(this);
		}

		::System::Void set_B(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_B_OFFSET))(this, a1);
		}

		::System::Single get_C()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_C_OFFSET))(this);
		}

		::System::Void set_C(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_C_OFFSET))(this, a1);
		}

		::System::Single get_D()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_D_OFFSET))(this);
		}

		::System::Void set_D(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_D_OFFSET))(this, a1);
		}

		::System::Single get_WorldX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_WORLDX_OFFSET))(this);
		}

		::System::Void set_WorldX(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_WORLDX_OFFSET))(this, a1);
		}

		::System::Single get_WorldY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_WORLDY_OFFSET))(this);
		}

		::System::Void set_WorldY(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_WORLDY_OFFSET))(this, a1);
		}

		::System::Single get_WorldRotationX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_WORLDROTATIONX_OFFSET))(this);
		}

		::System::Single get_WorldRotationY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_WORLDROTATIONY_OFFSET))(this);
		}

		::System::Single get_WorldScaleX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_WORLDSCALEX_OFFSET))(this);
		}

		::System::Single get_WorldScaleY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_WORLDSCALEY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_UPDATE_OFFSET))(this);
		}

		::System::Void UpdateWorldTransform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_UPDATEWORLDTRANSFORM_OFFSET))(this);
		}

		::System::Void UpdateWorldTransform_1(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONE_UPDATEWORLDTRANSFORM_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void SetToSetupPose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_SETTOSETUPPOSE_OFFSET))(this);
		}

		::System::Void UpdateAppliedTransform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_UPDATEAPPLIEDTRANSFORM_OFFSET))(this);
		}

		::System::Void WorldToLocal(::System::Single a1, ::System::Single a2, ::System::Single& a3, ::System::Single& a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + SPINE_BONE_WORLDTOLOCAL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void LocalToWorld(::System::Single a1, ::System::Single a2, ::System::Single& a3, ::System::Single& a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + SPINE_BONE_LOCALTOWORLD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single get_WorldToLocalRotationX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_WORLDTOLOCALROTATIONX_OFFSET))(this);
		}

		::System::Single get_WorldToLocalRotationY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_WORLDTOLOCALROTATIONY_OFFSET))(this);
		}

		::System::Single WorldToLocalRotation(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONE_WORLDTOLOCALROTATION_OFFSET))(this, a1);
		}

		::System::Single LocalToWorldRotation(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONE_LOCALTOWORLDROTATION_OFFSET))(this, a1);
		}

		::System::Void RotateWorld(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONE_ROTATEWORLD_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_TOSTRING_OFFSET))(this);
		}
	};
}
