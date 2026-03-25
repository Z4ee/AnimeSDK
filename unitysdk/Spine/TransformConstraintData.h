#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/ConstraintData.h"

namespace Spine { class BoneData; }
namespace Spine { template <typename T> class ExposedList_1; }
namespace System { class String; }

#define SPINE_TRANSFORMCONSTRAINTDATA_GET_BONES_OFFSET UNITYSDK_OFFSET(0x183E62E0)
#define SPINE_TRANSFORMCONSTRAINTDATA_GET_LOCAL_OFFSET UNITYSDK_OFFSET(0x183E64B0)
#define SPINE_TRANSFORMCONSTRAINTDATA_GET_MIXROTATE_OFFSET UNITYSDK_OFFSET(0x183E6310)
#define SPINE_TRANSFORMCONSTRAINTDATA_GET_MIXSCALEX_OFFSET UNITYSDK_OFFSET(0x183E6370)
#define SPINE_TRANSFORMCONSTRAINTDATA_GET_MIXSCALEY_OFFSET UNITYSDK_OFFSET(0x183E6390)
#define SPINE_TRANSFORMCONSTRAINTDATA_GET_MIXSHEARY_OFFSET UNITYSDK_OFFSET(0x183E63B0)
#define SPINE_TRANSFORMCONSTRAINTDATA_GET_MIXX_OFFSET UNITYSDK_OFFSET(0x183E6330)
#define SPINE_TRANSFORMCONSTRAINTDATA_GET_MIXY_OFFSET UNITYSDK_OFFSET(0x183E6350)
#define SPINE_TRANSFORMCONSTRAINTDATA_GET_OFFSETROTATION_OFFSET UNITYSDK_OFFSET(0x183E63D0)
#define SPINE_TRANSFORMCONSTRAINTDATA_GET_OFFSETSCALEX_OFFSET UNITYSDK_OFFSET(0x183E6430)
#define SPINE_TRANSFORMCONSTRAINTDATA_GET_OFFSETSCALEY_OFFSET UNITYSDK_OFFSET(0x183E6450)
#define SPINE_TRANSFORMCONSTRAINTDATA_GET_OFFSETSHEARY_OFFSET UNITYSDK_OFFSET(0x183E6470)
#define SPINE_TRANSFORMCONSTRAINTDATA_GET_OFFSETX_OFFSET UNITYSDK_OFFSET(0x183E63F0)
#define SPINE_TRANSFORMCONSTRAINTDATA_GET_OFFSETY_OFFSET UNITYSDK_OFFSET(0x183E6410)
#define SPINE_TRANSFORMCONSTRAINTDATA_GET_RELATIVE_OFFSET UNITYSDK_OFFSET(0x183E6490)
#define SPINE_TRANSFORMCONSTRAINTDATA_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x183E62F0)
#define SPINE_TRANSFORMCONSTRAINTDATA_SET_LOCAL_OFFSET UNITYSDK_OFFSET(0x183E64C0)
#define SPINE_TRANSFORMCONSTRAINTDATA_SET_MIXROTATE_OFFSET UNITYSDK_OFFSET(0x183E6320)
#define SPINE_TRANSFORMCONSTRAINTDATA_SET_MIXSCALEX_OFFSET UNITYSDK_OFFSET(0x183E6380)
#define SPINE_TRANSFORMCONSTRAINTDATA_SET_MIXSCALEY_OFFSET UNITYSDK_OFFSET(0x183E63A0)
#define SPINE_TRANSFORMCONSTRAINTDATA_SET_MIXSHEARY_OFFSET UNITYSDK_OFFSET(0x183E63C0)
#define SPINE_TRANSFORMCONSTRAINTDATA_SET_MIXX_OFFSET UNITYSDK_OFFSET(0x183E6340)
#define SPINE_TRANSFORMCONSTRAINTDATA_SET_MIXY_OFFSET UNITYSDK_OFFSET(0x183E6360)
#define SPINE_TRANSFORMCONSTRAINTDATA_SET_OFFSETROTATION_OFFSET UNITYSDK_OFFSET(0x183E63E0)
#define SPINE_TRANSFORMCONSTRAINTDATA_SET_OFFSETSCALEX_OFFSET UNITYSDK_OFFSET(0x183E6440)
#define SPINE_TRANSFORMCONSTRAINTDATA_SET_OFFSETSCALEY_OFFSET UNITYSDK_OFFSET(0x183E6460)
#define SPINE_TRANSFORMCONSTRAINTDATA_SET_OFFSETSHEARY_OFFSET UNITYSDK_OFFSET(0x183E6480)
#define SPINE_TRANSFORMCONSTRAINTDATA_SET_OFFSETX_OFFSET UNITYSDK_OFFSET(0x183E6400)
#define SPINE_TRANSFORMCONSTRAINTDATA_SET_OFFSETY_OFFSET UNITYSDK_OFFSET(0x183E6420)
#define SPINE_TRANSFORMCONSTRAINTDATA_SET_RELATIVE_OFFSET UNITYSDK_OFFSET(0x183E64A0)
#define SPINE_TRANSFORMCONSTRAINTDATA_SET_TARGET_OFFSET UNITYSDK_OFFSET(0x183E6300)
#define SPINE_TRANSFORMCONSTRAINTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x183E64D0)

namespace Spine
{
	inline static constexpr unsigned int TransformConstraintData_TypeDefinitionIndex = 30746;

	class TransformConstraintData : public ::Spine::ConstraintData
	{
	public:
		::Spine::BoneData* target; // 0x20
		::Spine::ExposedList_1<::Spine::BoneData*>* bones; // 0x28
		::System::Single offsetX; // 0x30
		::System::Single offsetScaleX; // 0x34
		::System::Single mixScaleX; // 0x38
		::System::Boolean local; // 0x3C
		::System::Boolean relative; // 0x3D
		::System::Single offsetScaleY; // 0x40
		::System::Single mixScaleY; // 0x44
		::System::Single mixRotate; // 0x48
		::System::Single mixShearY; // 0x4C
		::System::Single offsetY; // 0x50
		::System::Single mixX; // 0x54
		::System::Single offsetRotation; // 0x58
		::System::Single mixY; // 0x5C
		::System::Single offsetShearY; // 0x60

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
