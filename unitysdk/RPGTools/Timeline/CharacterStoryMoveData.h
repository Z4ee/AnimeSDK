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

#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_GET_ENDPOSITION_OFFSET UNITYSDK_OFFSET(0xCFF48B0)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_GET_POINTCOUNT_OFFSET UNITYSDK_OFFSET(0xCFF46A0)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_GET_STARTPOSITION_OFFSET UNITYSDK_OFFSET(0xCFF4710)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_GET__LOCKY_OFFSET UNITYSDK_OFFSET(0xCFF4F00)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_METHOD_1_0A7A666C0F9466D1_OFFSET UNITYSDK_OFFSET(0xCFF4CF0)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_METHOD_1_13803BC6B54C35A0_OFFSET UNITYSDK_OFFSET(0xCFF4F10)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_METHOD_1_1CB130E56D456949_OFFSET UNITYSDK_OFFSET(0xCFF5690)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_METHOD_1_23FE1B2C3BAED74B_OFFSET UNITYSDK_OFFSET(0xCFF5590)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_METHOD_1_3208E93919C079BD_OFFSET UNITYSDK_OFFSET(0xCFF52E0)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_METHOD_1_3A2B594F0AE6254E_OFFSET UNITYSDK_OFFSET(0xCFF4970)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_METHOD_1_4AD634C3483E64F5_OFFSET UNITYSDK_OFFSET(0xCFF4AC0)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_METHOD_1_55E34085A14646D6_OFFSET UNITYSDK_OFFSET(0xCFF50C0)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_METHOD_1_5B02F1D0434EA06A_OFFSET UNITYSDK_OFFSET(0xCFF64D0)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_METHOD_1_B747564CDCCF97BD_OFFSET UNITYSDK_OFFSET(0xCFF62B0)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_METHOD_1_CD7772AD2FBA7595_OFFSET UNITYSDK_OFFSET(0xCFF4780)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_METHOD_1_DEB311B5FEAE68BE_OFFSET UNITYSDK_OFFSET(0xCFF5FC0)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCFF4570)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterStoryMoveData_TypeDefinitionIndex = 45302;

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

		::UnityEngine::Vector3 Method_1_CD7772AD2FBA7595(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_METHOD_1_CD7772AD2FBA7595_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_1_3A2B594F0AE6254E(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_METHOD_1_3A2B594F0AE6254E_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_1_4AD634C3483E64F5(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_METHOD_1_4AD634C3483E64F5_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_1_0A7A666C0F9466D1(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_METHOD_1_0A7A666C0F9466D1_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_1_13803BC6B54C35A0(::System::Int32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_METHOD_1_13803BC6B54C35A0_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 Method_1_55E34085A14646D6(::System::Int32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_METHOD_1_55E34085A14646D6_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 Method_1_3208E93919C079BD(::System::Int32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_METHOD_1_3208E93919C079BD_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 Method_1_23FE1B2C3BAED74B(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_METHOD_1_23FE1B2C3BAED74B_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 Method_1_DEB311B5FEAE68BE(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_METHOD_1_DEB311B5FEAE68BE_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Single Method_1_B747564CDCCF97BD(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4, ::System::Single a5, ::System::Single a6, ::System::Int32 a7)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_METHOD_1_B747564CDCCF97BD_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		::UnityEngine::Vector3 Method_1_1CB130E56D456949(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_METHOD_1_1CB130E56D456949_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_1_5B02F1D0434EA06A(::System::Single& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_METHOD_1_5B02F1D0434EA06A_OFFSET))(this, a1);
		}

		::System::Boolean get__LockY()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEDATA_GET__LOCKY_OFFSET))(this);
		}
	};
}
