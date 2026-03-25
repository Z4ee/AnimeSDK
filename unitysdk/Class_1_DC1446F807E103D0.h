#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class FiveDimMapSurfaceConfig; }

#define CLASS_1_DC1446F807E103D0_GET_SURFACEID_OFFSET UNITYSDK_OFFSET(0x10C83D90)
#define CLASS_1_DC1446F807E103D0_GET__CYLINDERSTARTOFFSETANGLE_OFFSET UNITYSDK_OFFSET(0x10C83DF0)
#define CLASS_1_DC1446F807E103D0_GET__CYLINDERUNITANGLE_OFFSET UNITYSDK_OFFSET(0x10C83DD0)
#define CLASS_1_DC1446F807E103D0_GET__POSITIONINFACE_OFFSET UNITYSDK_OFFSET(0x10C83DB0)
#define CLASS_1_DC1446F807E103D0_METHOD_1_4EC38B34F0D76336_OFFSET UNITYSDK_OFFSET(0x10C83D00)
#define CLASS_1_DC1446F807E103D0_METHOD_1_9597F599694D0B47_OFFSET UNITYSDK_OFFSET(0x10C83E10)
#define CLASS_1_DC1446F807E103D0_SET_SURFACEID_OFFSET UNITYSDK_OFFSET(0x10C83DA0)
#define CLASS_1_DC1446F807E103D0_SET__CYLINDERSTARTOFFSETANGLE_OFFSET UNITYSDK_OFFSET(0x10C83E00)
#define CLASS_1_DC1446F807E103D0_SET__CYLINDERUNITANGLE_OFFSET UNITYSDK_OFFSET(0x10C83DE0)
#define CLASS_1_DC1446F807E103D0_SET__POSITIONINFACE_OFFSET UNITYSDK_OFFSET(0x10C83DC0)
#define CLASS_1_DC1446F807E103D0__CTOR_OFFSET UNITYSDK_OFFSET(0x10C83D80)

inline static constexpr unsigned int Class_1_DC1446F807E103D0_TypeDefinitionIndex = 61391;

class Class_1_DC1446F807E103D0 : public ::System::Object
{
public:
	::System::Single __CylinderUnitAngle_k__BackingField; // 0x10
	::System::Single __CylinderStartOffsetAngle_k__BackingField; // 0x14
	::RPG::MVector2 __PositionInFace_k__BackingField; // 0x18
	::System::UInt32 _SurfaceID_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC1446F807E103D0__CTOR_OFFSET))(this);
	}

	static ::Class_1_DC1446F807E103D0* Method_1_4EC38B34F0D76336(::RPG::GameCore::FiveDimMapSurfaceConfig* a1)
	{
		return ((::Class_1_DC1446F807E103D0*(*)(::RPG::GameCore::FiveDimMapSurfaceConfig*))((::PBYTE)hIl2Cpp + CLASS_1_DC1446F807E103D0_METHOD_1_4EC38B34F0D76336_OFFSET))(a1);
	}

	::System::UInt32 get_SurfaceID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC1446F807E103D0_GET_SURFACEID_OFFSET))(this);
	}

	::System::Void set_SurfaceID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DC1446F807E103D0_SET_SURFACEID_OFFSET))(this, value);
	}

	::RPG::MVector2 get__PositionInFace()
	{
		return ((::RPG::MVector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC1446F807E103D0_GET__POSITIONINFACE_OFFSET))(this);
	}

	::System::Void set__PositionInFace(::RPG::MVector2 value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + CLASS_1_DC1446F807E103D0_SET__POSITIONINFACE_OFFSET))(this, value);
	}

	::System::Single get__CylinderUnitAngle()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC1446F807E103D0_GET__CYLINDERUNITANGLE_OFFSET))(this);
	}

	::System::Void set__CylinderUnitAngle(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DC1446F807E103D0_SET__CYLINDERUNITANGLE_OFFSET))(this, value);
	}

	::System::Single get__CylinderStartOffsetAngle()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC1446F807E103D0_GET__CYLINDERSTARTOFFSETANGLE_OFFSET))(this);
	}

	::System::Void set__CylinderStartOffsetAngle(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DC1446F807E103D0_SET__CYLINDERSTARTOFFSETANGLE_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 Method_1_9597F599694D0B47(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Int16 a3, ::UnityEngine::Vector2 a4)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Int16, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_DC1446F807E103D0_METHOD_1_9597F599694D0B47_OFFSET))(this, a1, a2, a3, a4);
	}
};
