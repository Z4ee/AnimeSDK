#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/ConstraintData.h"

namespace Spine { class BoneData; }
namespace Spine { template <typename T> class ExposedList_1; }
namespace System { class String; }

#define SPINE_TRANSFORMCONSTRAINTDATA_GET_BONES_OFFSET UNITYSDK_OFFSET(0x19E20F30)
#define SPINE_TRANSFORMCONSTRAINTDATA_GET_LOCAL_OFFSET UNITYSDK_OFFSET(0x19E21100)
#define SPINE_TRANSFORMCONSTRAINTDATA_GET_MIXROTATE_OFFSET UNITYSDK_OFFSET(0x19E20F60)
#define SPINE_TRANSFORMCONSTRAINTDATA_GET_MIXSCALEX_OFFSET UNITYSDK_OFFSET(0x19E20FC0)
#define SPINE_TRANSFORMCONSTRAINTDATA_GET_MIXSCALEY_OFFSET UNITYSDK_OFFSET(0x19E20FE0)
#define SPINE_TRANSFORMCONSTRAINTDATA_GET_MIXSHEARY_OFFSET UNITYSDK_OFFSET(0x19E21000)
#define SPINE_TRANSFORMCONSTRAINTDATA_GET_MIXX_OFFSET UNITYSDK_OFFSET(0x19E20F80)
#define SPINE_TRANSFORMCONSTRAINTDATA_GET_MIXY_OFFSET UNITYSDK_OFFSET(0x19E20FA0)
#define SPINE_TRANSFORMCONSTRAINTDATA_GET_OFFSETROTATION_OFFSET UNITYSDK_OFFSET(0x19E21020)
#define SPINE_TRANSFORMCONSTRAINTDATA_GET_OFFSETSCALEX_OFFSET UNITYSDK_OFFSET(0x19E21080)
#define SPINE_TRANSFORMCONSTRAINTDATA_GET_OFFSETSCALEY_OFFSET UNITYSDK_OFFSET(0x19E210A0)
#define SPINE_TRANSFORMCONSTRAINTDATA_GET_OFFSETSHEARY_OFFSET UNITYSDK_OFFSET(0x19E210C0)
#define SPINE_TRANSFORMCONSTRAINTDATA_GET_OFFSETX_OFFSET UNITYSDK_OFFSET(0x19E21040)
#define SPINE_TRANSFORMCONSTRAINTDATA_GET_OFFSETY_OFFSET UNITYSDK_OFFSET(0x19E21060)
#define SPINE_TRANSFORMCONSTRAINTDATA_GET_RELATIVE_OFFSET UNITYSDK_OFFSET(0x19E210E0)
#define SPINE_TRANSFORMCONSTRAINTDATA_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x19E20F40)
#define SPINE_TRANSFORMCONSTRAINTDATA_SET_LOCAL_OFFSET UNITYSDK_OFFSET(0x19E21110)
#define SPINE_TRANSFORMCONSTRAINTDATA_SET_MIXROTATE_OFFSET UNITYSDK_OFFSET(0x19E20F70)
#define SPINE_TRANSFORMCONSTRAINTDATA_SET_MIXSCALEX_OFFSET UNITYSDK_OFFSET(0x19E20FD0)
#define SPINE_TRANSFORMCONSTRAINTDATA_SET_MIXSCALEY_OFFSET UNITYSDK_OFFSET(0x19E20FF0)
#define SPINE_TRANSFORMCONSTRAINTDATA_SET_MIXSHEARY_OFFSET UNITYSDK_OFFSET(0x19E21010)
#define SPINE_TRANSFORMCONSTRAINTDATA_SET_MIXX_OFFSET UNITYSDK_OFFSET(0x19E20F90)
#define SPINE_TRANSFORMCONSTRAINTDATA_SET_MIXY_OFFSET UNITYSDK_OFFSET(0x19E20FB0)
#define SPINE_TRANSFORMCONSTRAINTDATA_SET_OFFSETROTATION_OFFSET UNITYSDK_OFFSET(0x19E21030)
#define SPINE_TRANSFORMCONSTRAINTDATA_SET_OFFSETSCALEX_OFFSET UNITYSDK_OFFSET(0x19E21090)
#define SPINE_TRANSFORMCONSTRAINTDATA_SET_OFFSETSCALEY_OFFSET UNITYSDK_OFFSET(0x19E210B0)
#define SPINE_TRANSFORMCONSTRAINTDATA_SET_OFFSETSHEARY_OFFSET UNITYSDK_OFFSET(0x19E210D0)
#define SPINE_TRANSFORMCONSTRAINTDATA_SET_OFFSETX_OFFSET UNITYSDK_OFFSET(0x19E21050)
#define SPINE_TRANSFORMCONSTRAINTDATA_SET_OFFSETY_OFFSET UNITYSDK_OFFSET(0x19E21070)
#define SPINE_TRANSFORMCONSTRAINTDATA_SET_RELATIVE_OFFSET UNITYSDK_OFFSET(0x19E210F0)
#define SPINE_TRANSFORMCONSTRAINTDATA_SET_TARGET_OFFSET UNITYSDK_OFFSET(0x19E20F50)
#define SPINE_TRANSFORMCONSTRAINTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19E21120)

namespace Spine
{
	inline static constexpr unsigned int TransformConstraintData_TypeDefinitionIndex = 36466;

	class TransformConstraintData : public ::Spine::ConstraintData
	{
	public:
		::Spine::ExposedList_1<::Spine::BoneData*>* bones; // 0x20
		::Spine::BoneData* target; // 0x28
		::System::Single mixScaleX; // 0x30
		::System::Single offsetY; // 0x34
		::System::Single mixScaleY; // 0x38
		::System::Single offsetX; // 0x3C
		::System::Single offsetScaleY; // 0x40
		::System::Single offsetRotation; // 0x44
		::System::Single offsetScaleX; // 0x48
		::System::Single mixY; // 0x4C
		::System::Single mixRotate; // 0x50
		::System::Single mixX; // 0x54
		::System::Boolean relative; // 0x58
		::System::Boolean local; // 0x59
		::System::Single offsetShearY; // 0x5C
		::System::Single mixShearY; // 0x60

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA__CTOR_OFFSET))(this, name);
		}

		::Spine::ExposedList_1<::Spine::BoneData*>* get_Bones()
		{
			return ((::Spine::ExposedList_1<::Spine::BoneData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_GET_BONES_OFFSET))(this);
		}

		::Spine::BoneData* get_Target()
		{
			return ((::Spine::BoneData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_GET_TARGET_OFFSET))(this);
		}

		::System::Void set_Target(::Spine::BoneData* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::BoneData*))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_SET_TARGET_OFFSET))(this, value);
		}

		::System::Single get_MixRotate()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_GET_MIXROTATE_OFFSET))(this);
		}

		::System::Void set_MixRotate(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_SET_MIXROTATE_OFFSET))(this, value);
		}

		::System::Single get_MixX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_GET_MIXX_OFFSET))(this);
		}

		::System::Void set_MixX(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_SET_MIXX_OFFSET))(this, value);
		}

		::System::Single get_MixY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_GET_MIXY_OFFSET))(this);
		}

		::System::Void set_MixY(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_SET_MIXY_OFFSET))(this, value);
		}

		::System::Single get_MixScaleX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_GET_MIXSCALEX_OFFSET))(this);
		}

		::System::Void set_MixScaleX(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_SET_MIXSCALEX_OFFSET))(this, value);
		}

		::System::Single get_MixScaleY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_GET_MIXSCALEY_OFFSET))(this);
		}

		::System::Void set_MixScaleY(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_SET_MIXSCALEY_OFFSET))(this, value);
		}

		::System::Single get_MixShearY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_GET_MIXSHEARY_OFFSET))(this);
		}

		::System::Void set_MixShearY(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_SET_MIXSHEARY_OFFSET))(this, value);
		}

		::System::Single get_OffsetRotation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_GET_OFFSETROTATION_OFFSET))(this);
		}

		::System::Void set_OffsetRotation(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_SET_OFFSETROTATION_OFFSET))(this, value);
		}

		::System::Single get_OffsetX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_GET_OFFSETX_OFFSET))(this);
		}

		::System::Void set_OffsetX(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_SET_OFFSETX_OFFSET))(this, value);
		}

		::System::Single get_OffsetY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_GET_OFFSETY_OFFSET))(this);
		}

		::System::Void set_OffsetY(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_SET_OFFSETY_OFFSET))(this, value);
		}

		::System::Single get_OffsetScaleX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_GET_OFFSETSCALEX_OFFSET))(this);
		}

		::System::Void set_OffsetScaleX(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_SET_OFFSETSCALEX_OFFSET))(this, value);
		}

		::System::Single get_OffsetScaleY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_GET_OFFSETSCALEY_OFFSET))(this);
		}

		::System::Void set_OffsetScaleY(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_SET_OFFSETSCALEY_OFFSET))(this, value);
		}

		::System::Single get_OffsetShearY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_GET_OFFSETSHEARY_OFFSET))(this);
		}

		::System::Void set_OffsetShearY(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_SET_OFFSETSHEARY_OFFSET))(this, value);
		}

		::System::Boolean get_Relative()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_GET_RELATIVE_OFFSET))(this);
		}

		::System::Void set_Relative(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_SET_RELATIVE_OFFSET))(this, value);
		}

		::System::Boolean get_Local()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_GET_LOCAL_OFFSET))(this);
		}

		::System::Void set_Local(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_TRANSFORMCONSTRAINTDATA_SET_LOCAL_OFFSET))(this, value);
		}
	};
}
