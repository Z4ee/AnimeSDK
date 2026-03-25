#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CharacterStoryMoveData_MoveMode.h"
#include "unitysdk/RPGTools/Timeline/CharacterStoryMoveData_MovePathMode.h"
#include "unitysdk/RPGTools/Timeline/CharacterStoryMoveData_MoveStopMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPGTools::Timeline { class CharacterStoryMoveData_BezierPathPoint; }
namespace RPGTools::Timeline { class CharacterStoryMoveData_PathPoint; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_GET_ENDPOSITION_OFFSET UNITYSDK_OFFSET(0xAB3CB90)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_GET_POINTCOUNT_OFFSET UNITYSDK_OFFSET(0xAB3C9B0)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_GET_STARTPOSITION_OFFSET UNITYSDK_OFFSET(0xAB3CA20)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_GET__LOCKY_OFFSET UNITYSDK_OFFSET(0xAB3D100)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_METHOD_1_0A7A666C0F9466D1_OFFSET UNITYSDK_OFFSET(0xAB3CA90)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_METHOD_1_13803BC6B54C35A0_OFFSET UNITYSDK_OFFSET(0xAB3D110)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_METHOD_1_23FE1B2C3BAED74B_OFFSET UNITYSDK_OFFSET(0xAB3D6C0)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_METHOD_1_3A2B594F0AE6254E_OFFSET UNITYSDK_OFFSET(0xAB3CC50)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_METHOD_1_59364E1DBC544866_OFFSET UNITYSDK_OFFSET(0xAB3CF50)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_METHOD_1_5BA107BF3DEB98F0_OFFSET UNITYSDK_OFFSET(0xAB3D7C0)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_METHOD_1_7670A2ED9D1471A4_OFFSET UNITYSDK_OFFSET(0xAB3D2C0)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_METHOD_1_80FF03FEFE2A8B40_OFFSET UNITYSDK_OFFSET(0xAB3E0C0)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_METHOD_1_B277D64CD33FB1C7_OFFSET UNITYSDK_OFFSET(0xAB3E5A0)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_METHOD_1_B747564CDCCF97BD_OFFSET UNITYSDK_OFFSET(0xAB3E380)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_METHOD_1_D283159DB8B9C222_OFFSET UNITYSDK_OFFSET(0xAB3D470)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_METHOD_1_EB5EA901DEC2769D_OFFSET UNITYSDK_OFFSET(0xAB3CDA0)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAB3E740)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterStoryMoveData_TypeDefinitionIndex = 38852;

	class CharacterStoryMoveData : public ::System::Object
	{
	public:
		::System::String* CharacterUniqueName; // 0x10
		::RPGTools::Timeline::CharacterStoryMoveData_MoveMode MotionFlag; // 0x18
		::RPGTools::Timeline::CharacterStoryMoveData_MoveStopMode StopMode; // 0x1C
		::System::Single MotionSpeed; // 0x20
		::System::Boolean OverrideMotionAnimStartOffset; // 0x24
		::System::Single MotionAnimStartOffset; // 0x28
		::System::Boolean OverrideMotionAnimStartTransitionDuration; // 0x2C
		::System::Single MotionAnimStartTransitionDuration; // 0x30
		::System::Boolean OverrideMotionAnimStopInfo; // 0x34
		::System::Single MotionAnimStopOffset; // 0x38
		::System::Single MotionAnimStopDuration; // 0x3C
		::System::Single MotionAnimStopLoopSpeed; // 0x40
		::RPGTools::Timeline::CharacterStoryMoveData_MovePathMode PathMode; // 0x44
		::System::Collections::Generic::List_1<::RPGTools::Timeline::CharacterStoryMoveData_PathPoint*>* PathPoints; // 0x48
		::System::Collections::Generic::List_1<::RPGTools::Timeline::CharacterStoryMoveData_BezierPathPoint*>* BezierPathPoints; // 0x50
		::System::Boolean UseOverrideTurnSpeed; // 0x58
		::System::Single OverrideTurnSpeed; // 0x5C
		::System::Boolean ForcedPathFollowing; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA__CTOR_OFFSET))(this);
		}

		::System::Int32 get_PointCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_GET_POINTCOUNT_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_StartPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_GET_STARTPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_EndPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_GET_ENDPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_1_0A7A666C0F9466D1(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_METHOD_1_0A7A666C0F9466D1_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_1_3A2B594F0AE6254E(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_METHOD_1_3A2B594F0AE6254E_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_1_EB5EA901DEC2769D(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_METHOD_1_EB5EA901DEC2769D_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_1_59364E1DBC544866(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_METHOD_1_59364E1DBC544866_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_1_13803BC6B54C35A0(::System::Int32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_METHOD_1_13803BC6B54C35A0_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 Method_1_7670A2ED9D1471A4(::System::Int32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_METHOD_1_7670A2ED9D1471A4_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 Method_1_D283159DB8B9C222(::System::Int32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_METHOD_1_D283159DB8B9C222_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 Method_1_23FE1B2C3BAED74B(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_METHOD_1_23FE1B2C3BAED74B_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 Method_1_80FF03FEFE2A8B40(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_METHOD_1_80FF03FEFE2A8B40_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Single Method_1_B747564CDCCF97BD(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4, ::System::Single a5, ::System::Single a6, ::System::Int32 a7)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_METHOD_1_B747564CDCCF97BD_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		::UnityEngine::Vector3 Method_1_5BA107BF3DEB98F0(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_METHOD_1_5BA107BF3DEB98F0_OFFSET))(this, a1, a2, a3);
		}

		::System::Single Method_1_B277D64CD33FB1C7()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_METHOD_1_B277D64CD33FB1C7_OFFSET))(this);
		}

		::System::Boolean get__LockY()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_GET__LOCKY_OFFSET))(this);
		}
	};
}
