#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/ProceduralAnimDamperParam.h"
#include "unitysdk/MoleMole/Battle/ProceduralAnimFixedParam.h"
#include "unitysdk/MoleMole/Battle/ProceduralAnimType.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneRotateBone_LocalAxisType.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_8377BAB19A574A40;
class Class_2_E57CEAB8F723AEA1;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_CALCLAMPEDANGLESINGED_OFFSET UNITYSDK_OFFSET(0x1928C650)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_CALLIMITMIDDLE_OFFSET UNITYSDK_OFFSET(0x192899B0)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_CALSIGNEDANGLE_OFFSET UNITYSDK_OFFSET(0x1928BF00)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_CHECKJOINKEY_OFFSET UNITYSDK_OFFSET(0x1928A810)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x19289920)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_DRAWAXIS_OFFSET UNITYSDK_OFFSET(0x1928BEB0)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_GETTARGETPOS_OFFSET UNITYSDK_OFFSET(0x1928AE80)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_IGNOREOTHERWHENSAMEKEY_OFFSET UNITYSDK_OFFSET(0x1928A630)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_JOINOTHERZONE_OFFSET UNITYSDK_OFFSET(0x1928A4C0)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_LOCALAXISTYPE2VEC3_OFFSET UNITYSDK_OFFSET(0x1928A090)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x19289A80)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1928C1A0)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_PROCESSFIXEDANIMATORPARAM_OFFSET UNITYSDK_OFFSET(0x1928BB10)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_RELEASESAMEKEYIGNORE_OFFSET UNITYSDK_OFFSET(0x1928C420)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_REVISEBYLIMIT_OFFSET UNITYSDK_OFFSET(0x1928B970)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_ROTATETOTARGET_OFFSET UNITYSDK_OFFSET(0x1928AF30)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_UPDATELOCALROTATECOORDINATE_OFFSET UNITYSDK_OFFSET(0x1928B7A0)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_UPDATEROTATE_OFFSET UNITYSDK_OFFSET(0x1928A970)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE__CTOR_OFFSET UNITYSDK_OFFSET(0x1928CA80)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x1928CAC0)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x1928CB90)
#define MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1928CC40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneRotateBone_TypeDefinitionIndex = 41455;

	class AnimatorZoneRotateBone : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::MoleMole::Battle::ProceduralAnimFixedParam TickFixedParam; // 0x50
		::MoleMole::Config::ConfigPosRot* ConfigPosRot; // 0x90
		::System::Collections::Generic::List_1<::System::String*>* JoinZoneKeyList; // 0x98
		::System::String* ZoneKey; // 0xA0
		::System::String* RotateBoneName; // 0xA8
		::MoleMole::Battle::ProceduralAnimFixedParam ExitFixedParam; // 0xB0
		::MoleMole::Battle::ProceduralAnimType TickAnimType; // 0xF0
		::System::Single SelfRotAngleOffset; // 0xF4
		::MoleMole::Config::AnimatorZoneRotateBone_LocalAxisType UpAxisType; // 0xF8
		::MoleMole::Battle::ProceduralAnimDamperParam TickDamperParam; // 0xFC
		::MoleMole::Battle::ProceduralAnimDamperParam ExitDamperParam; // 0x10C
		::MoleMole::Battle::ProceduralAnimType ExitAnimType; // 0x11C
		::MoleMole::Config::AnimatorZoneRotateBone_LocalAxisType ForwardAxisType; // 0x120
		::System::Boolean ExitNeedReset; // 0x124
		::System::Boolean InverseUpAxis; // 0x125
		::System::Boolean InverseForwardAxis; // 0x126
		::System::Single RotAngleLimitLeft; // 0x128
		::System::Single RotAngleLimitRight; // 0x12C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE__CTOR_OFFSET))(this);
		}

		::Class_1_8377BAB19A574A40* CreateZoneInfoInstance()
		{
			return ((::Class_1_8377BAB19A574A40*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void CalLimitMiddle(::Class_2_E57CEAB8F723AEA1* zi)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_E57CEAB8F723AEA1*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_CALLIMITMIDDLE_OFFSET))(this, zi);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Boolean CheckJoinKey(::System::Int32 key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_CHECKJOINKEY_OFFSET))(this, key);
		}

		::System::Single JoinOtherZone(::Class_2_E57CEAB8F723AEA1* zi)
		{
			return ((::System::Single(*)(::PVOID, ::Class_2_E57CEAB8F723AEA1*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_JOINOTHERZONE_OFFSET))(this, zi);
		}

		::System::Void UpdateRotate(::MoleMole::Battle::Entity* entity, ::Class_2_E57CEAB8F723AEA1* zi)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_2_E57CEAB8F723AEA1*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_UPDATEROTATE_OFFSET))(this, entity, zi);
		}

		::System::Void RotateToTarget(::Class_2_E57CEAB8F723AEA1* zi, ::MoleMole::Battle::Entity* entity, ::UnityEngine::Vector3 targetDir, ::UnityEngine::Quaternion sourceRotation, ::System::Boolean useLimit)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_E57CEAB8F723AEA1*, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_ROTATETOTARGET_OFFSET))(this, zi, entity, targetDir, sourceRotation, useLimit);
		}

		::System::Void DrawAxis(::Class_2_E57CEAB8F723AEA1* zi)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_E57CEAB8F723AEA1*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_DRAWAXIS_OFFSET))(this, zi);
		}

		::System::Void CalSignedAngle(::Class_2_E57CEAB8F723AEA1* zi, ::System::Single limitAngle, ::System::Boolean outsideOfLimit, ::System::Single& f, ::UnityEngine::Vector3& projectTargetDirInZox, ::UnityEngine::Quaternion& quaternion)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_E57CEAB8F723AEA1*, ::System::Single, ::System::Boolean, ::System::Single&, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_CALSIGNEDANGLE_OFFSET))(this, zi, limitAngle, outsideOfLimit, f, projectTargetDirInZox, quaternion);
		}

		::System::Void ReviseByLimit(::Class_2_E57CEAB8F723AEA1* zi, ::System::Single& signedAngle, ::UnityEngine::Vector3& projectTargetDirInZOX, ::UnityEngine::Quaternion& customSpaceDeltaRot)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_E57CEAB8F723AEA1*, ::System::Single&, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_REVISEBYLIMIT_OFFSET))(this, zi, signedAngle, projectTargetDirInZOX, customSpaceDeltaRot);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void ProcessFixedAnimatorParam(::Class_2_E57CEAB8F723AEA1* zi, ::MoleMole::Battle::ProceduralAnimFixedParam param)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_E57CEAB8F723AEA1*, ::MoleMole::Battle::ProceduralAnimFixedParam))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_PROCESSFIXEDANIMATORPARAM_OFFSET))(this, zi, param);
		}

		::System::Void IgnoreOtherWhenSameKey(::Class_2_E57CEAB8F723AEA1* zi)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_E57CEAB8F723AEA1*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_IGNOREOTHERWHENSAMEKEY_OFFSET))(this, zi);
		}

		::System::Void ReleaseSameKeyIgnore(::Class_2_E57CEAB8F723AEA1* zi)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_E57CEAB8F723AEA1*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_RELEASESAMEKEYIGNORE_OFFSET))(this, zi);
		}

		::System::Single CalClampedAngleSinged(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to, ::UnityEngine::Vector3 axisUp)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_CALCLAMPEDANGLESINGED_OFFSET))(this, from, to, axisUp);
		}

		::System::Void UpdateLocalRotateCoordinate(::Class_2_E57CEAB8F723AEA1* zi, ::UnityEngine::Vector3& axisUpFinal, ::UnityEngine::Vector3& axisForwardFinal, ::UnityEngine::Vector3& axisRightFinal)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_E57CEAB8F723AEA1*, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_UPDATELOCALROTATECOORDINATE_OFFSET))(this, zi, axisUpFinal, axisForwardFinal, axisRightFinal);
		}

		::UnityEngine::Vector3 GetTargetPos(::MoleMole::Battle::Entity* entity)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_GETTARGETPOS_OFFSET))(this, entity);
		}

		::UnityEngine::Vector3 LocalAxisType2Vec3(::Class_2_E57CEAB8F723AEA1* zi, ::UnityEngine::Transform* t, ::MoleMole::Config::AnimatorZoneRotateBone_LocalAxisType type, ::System::Boolean inverse)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_2_E57CEAB8F723AEA1*, ::UnityEngine::Transform*, ::MoleMole::Config::AnimatorZoneRotateBone_LocalAxisType, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE_LOCALAXISTYPE2VEC3_OFFSET))(this, zi, t, type, inverse);
		}

		::Class_1_8377BAB19A574A40* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_8377BAB19A574A40*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEROTATEBONE___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
