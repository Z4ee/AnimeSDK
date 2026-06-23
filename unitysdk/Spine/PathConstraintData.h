#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/ConstraintData.h"
#include "unitysdk/Spine/PositionMode.h"
#include "unitysdk/Spine/RotateMode.h"
#include "unitysdk/Spine/SpacingMode.h"

namespace Spine { class BoneData; }
namespace Spine { class SlotData; }
namespace Spine { template <typename T> class ExposedList_1; }
namespace System { class String; }

#define SPINE_PATHCONSTRAINTDATA_GET_BONES_OFFSET UNITYSDK_OFFSET(0x1E79E370)
#define SPINE_PATHCONSTRAINTDATA_GET_MIXX_OFFSET UNITYSDK_OFFSET(0x1E79E480)
#define SPINE_PATHCONSTRAINTDATA_GET_MIXY_OFFSET UNITYSDK_OFFSET(0x1E79E4A0)
#define SPINE_PATHCONSTRAINTDATA_GET_OFFSETROTATION_OFFSET UNITYSDK_OFFSET(0x1E79E400)
#define SPINE_PATHCONSTRAINTDATA_GET_POSITIONMODE_OFFSET UNITYSDK_OFFSET(0x1E79E3A0)
#define SPINE_PATHCONSTRAINTDATA_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1E79E420)
#define SPINE_PATHCONSTRAINTDATA_GET_ROTATEMIX_OFFSET UNITYSDK_OFFSET(0x1E79E460)
#define SPINE_PATHCONSTRAINTDATA_GET_ROTATEMODE_OFFSET UNITYSDK_OFFSET(0x1E79E3E0)
#define SPINE_PATHCONSTRAINTDATA_GET_SPACINGMODE_OFFSET UNITYSDK_OFFSET(0x1E79E3C0)
#define SPINE_PATHCONSTRAINTDATA_GET_SPACING_OFFSET UNITYSDK_OFFSET(0x1E79E440)
#define SPINE_PATHCONSTRAINTDATA_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x1E79E380)
#define SPINE_PATHCONSTRAINTDATA_SET_MIXX_OFFSET UNITYSDK_OFFSET(0x1E79E490)
#define SPINE_PATHCONSTRAINTDATA_SET_MIXY_OFFSET UNITYSDK_OFFSET(0x1E79E4B0)
#define SPINE_PATHCONSTRAINTDATA_SET_OFFSETROTATION_OFFSET UNITYSDK_OFFSET(0x1E79E410)
#define SPINE_PATHCONSTRAINTDATA_SET_POSITIONMODE_OFFSET UNITYSDK_OFFSET(0x1E79E3B0)
#define SPINE_PATHCONSTRAINTDATA_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1E79E430)
#define SPINE_PATHCONSTRAINTDATA_SET_ROTATEMIX_OFFSET UNITYSDK_OFFSET(0x1E79E470)
#define SPINE_PATHCONSTRAINTDATA_SET_ROTATEMODE_OFFSET UNITYSDK_OFFSET(0x1E79E3F0)
#define SPINE_PATHCONSTRAINTDATA_SET_SPACINGMODE_OFFSET UNITYSDK_OFFSET(0x1E79E3D0)
#define SPINE_PATHCONSTRAINTDATA_SET_SPACING_OFFSET UNITYSDK_OFFSET(0x1E79E450)
#define SPINE_PATHCONSTRAINTDATA_SET_TARGET_OFFSET UNITYSDK_OFFSET(0x1E79E390)
#define SPINE_PATHCONSTRAINTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E79E2C0)

namespace Spine
{
	inline static constexpr unsigned int PathConstraintData_TypeDefinitionIndex = 32886;

	class PathConstraintData : public ::Spine::ConstraintData
	{
	public:
		::Spine::SlotData* target; // 0x20
		::Spine::ExposedList_1<::Spine::BoneData*>* bones; // 0x28
		::System::Single position; // 0x30
		::System::Single spacing; // 0x34
		::System::Single mixX; // 0x38
		::Spine::RotateMode rotateMode; // 0x3C
		::System::Single mixY; // 0x40
		::System::Single offsetRotation; // 0x44
		::Spine::PositionMode positionMode; // 0x48
		::Spine::SpacingMode spacingMode; // 0x4C
		::System::Single mixRotate; // 0x50

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTDATA__CTOR_OFFSET))(this, name);
		}

		::Spine::ExposedList_1<::Spine::BoneData*>* get_Bones()
		{
			return ((::Spine::ExposedList_1<::Spine::BoneData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTDATA_GET_BONES_OFFSET))(this);
		}

		::Spine::SlotData* get_Target()
		{
			return ((::Spine::SlotData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTDATA_GET_TARGET_OFFSET))(this);
		}

		::System::Void set_Target(::Spine::SlotData* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::SlotData*))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTDATA_SET_TARGET_OFFSET))(this, value);
		}

		::Spine::PositionMode get_PositionMode()
		{
			return ((::Spine::PositionMode(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTDATA_GET_POSITIONMODE_OFFSET))(this);
		}

		::System::Void set_PositionMode(::Spine::PositionMode value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::PositionMode))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTDATA_SET_POSITIONMODE_OFFSET))(this, value);
		}

		::Spine::SpacingMode get_SpacingMode()
		{
			return ((::Spine::SpacingMode(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTDATA_GET_SPACINGMODE_OFFSET))(this);
		}

		::System::Void set_SpacingMode(::Spine::SpacingMode value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::SpacingMode))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTDATA_SET_SPACINGMODE_OFFSET))(this, value);
		}

		::Spine::RotateMode get_RotateMode()
		{
			return ((::Spine::RotateMode(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTDATA_GET_ROTATEMODE_OFFSET))(this);
		}

		::System::Void set_RotateMode(::Spine::RotateMode value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::RotateMode))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTDATA_SET_ROTATEMODE_OFFSET))(this, value);
		}

		::System::Single get_OffsetRotation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTDATA_GET_OFFSETROTATION_OFFSET))(this);
		}

		::System::Void set_OffsetRotation(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTDATA_SET_OFFSETROTATION_OFFSET))(this, value);
		}

		::System::Single get_Position()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTDATA_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTDATA_SET_POSITION_OFFSET))(this, value);
		}

		::System::Single get_Spacing()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTDATA_GET_SPACING_OFFSET))(this);
		}

		::System::Void set_Spacing(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTDATA_SET_SPACING_OFFSET))(this, value);
		}

		::System::Single get_RotateMix()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTDATA_GET_ROTATEMIX_OFFSET))(this);
		}

		::System::Void set_RotateMix(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTDATA_SET_ROTATEMIX_OFFSET))(this, value);
		}

		::System::Single get_MixX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTDATA_GET_MIXX_OFFSET))(this);
		}

		::System::Void set_MixX(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTDATA_SET_MIXX_OFFSET))(this, value);
		}

		::System::Single get_MixY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTDATA_GET_MIXY_OFFSET))(this);
		}

		::System::Void set_MixY(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_PATHCONSTRAINTDATA_SET_MIXY_OFFSET))(this, value);
		}
	};
}
