#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class FiveDimMapSurfaceConfig; }

#define CLASS_1_DC1446F807E103D0_GET_SURFACEID_OFFSET UNITYSDK_OFFSET(0xB52F4C0)
#define CLASS_1_DC1446F807E103D0_GET__CYLINDERSTARTOFFSETANGLE_OFFSET UNITYSDK_OFFSET(0xB52F520)
#define CLASS_1_DC1446F807E103D0_GET__CYLINDERUNITANGLE_OFFSET UNITYSDK_OFFSET(0xB52F500)
#define CLASS_1_DC1446F807E103D0_GET__POSITIONINFACE_OFFSET UNITYSDK_OFFSET(0xB52F4E0)
#define CLASS_1_DC1446F807E103D0_METHOD_1_9597F599694D0B47_OFFSET UNITYSDK_OFFSET(0xB52F540)
#define CLASS_1_DC1446F807E103D0_METHOD_1_C3046FC4643D23A5_OFFSET UNITYSDK_OFFSET(0xB52F410)
#define CLASS_1_DC1446F807E103D0_SET_SURFACEID_OFFSET UNITYSDK_OFFSET(0xB52F4D0)
#define CLASS_1_DC1446F807E103D0_SET__CYLINDERSTARTOFFSETANGLE_OFFSET UNITYSDK_OFFSET(0xB52F530)
#define CLASS_1_DC1446F807E103D0_SET__CYLINDERUNITANGLE_OFFSET UNITYSDK_OFFSET(0xB52F510)
#define CLASS_1_DC1446F807E103D0_SET__POSITIONINFACE_OFFSET UNITYSDK_OFFSET(0xB52F4F0)
#define CLASS_1_DC1446F807E103D0__CTOR_OFFSET UNITYSDK_OFFSET(0xB52F4B0)

inline static constexpr unsigned int Class_1_DC1446F807E103D0_TypeDefinitionIndex = 74539;

class Class_1_DC1446F807E103D0 : public ::System::Object
{
public:
	::System::Single __CylinderUnitAngle_k__BackingField; // 0x10
	::System::Single __CylinderStartOffsetAngle_k__BackingField; // 0x14
	::System::UInt32 _SurfaceID_k__BackingField; // 0x18
	::RPG::MVector2 __PositionInFace_k__BackingField; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC1446F807E103D0__CTOR_OFFSET))(this);
	}

	static ::Class_1_DC1446F807E103D0* Method_1_C3046FC4643D23A5(::RPG::GameCore::FiveDimMapSurfaceConfig* a1)
	{
		return ((::Class_1_DC1446F807E103D0*(*)(::RPG::GameCore::FiveDimMapSurfaceConfig*))((::PBYTE)hIl2Cpp + CLASS_1_DC1446F807E103D0_METHOD_1_C3046FC4643D23A5_OFFSET))(a1);
	}

	::System::UInt32 get_SurfaceID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC1446F807E103D0_GET_SURFACEID_OFFSET))(this);
	}

	::System::Void set_SurfaceID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DC1446F807E103D0_SET_SURFACEID_OFFSET))(this, a1);
	}

	::RPG::MVector2 get__PositionInFace()
	{
		return ((::RPG::MVector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC1446F807E103D0_GET__POSITIONINFACE_OFFSET))(this);
	}

	::System::Void set__PositionInFace(::RPG::MVector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + CLASS_1_DC1446F807E103D0_SET__POSITIONINFACE_OFFSET))(this, a1);
	}

	::System::Single get__CylinderUnitAngle()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC1446F807E103D0_GET__CYLINDERUNITANGLE_OFFSET))(this);
	}

	::System::Void set__CylinderUnitAngle(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DC1446F807E103D0_SET__CYLINDERUNITANGLE_OFFSET))(this, a1);
	}

	::System::Single get__CylinderStartOffsetAngle()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC1446F807E103D0_GET__CYLINDERSTARTOFFSETANGLE_OFFSET))(this);
	}

	::System::Void set__CylinderStartOffsetAngle(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DC1446F807E103D0_SET__CYLINDERSTARTOFFSETANGLE_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_9597F599694D0B47(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Int16 a3, ::UnityEngine::Vector2 a4)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Int16, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_DC1446F807E103D0_METHOD_1_9597F599694D0B47_OFFSET))(this, a1, a2, a3, a4);
	}
};
