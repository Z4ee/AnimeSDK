#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/Struct_2_B6A3FA7992F9F37E_4.h"
#include "unitysdk/Struct_2_B7313BFA91F76DB1.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_A30838EB219F38ED;
class Class_3_55230CEF110DAF7B;
class Class_3_55230CEF110DAF7B_1;
class Class_3_61A5922E5046F385_2;
namespace MoleMole { class MonoMorphBallAttachPoints; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Collision; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ADDMECHANISMCONFIG_OFFSET UNITYSDK_OFFSET(0x118D7D70)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ADDMECHANISMCONTROL_OFFSET UNITYSDK_OFFSET(0x118D7E40)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_GET_ENABLEROBOTPLAYERLANDINGDIAG_OFFSET UNITYSDK_OFFSET(0x118CC850)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_GET_ISPOSSESSED_OFFSET UNITYSDK_OFFSET(0x118CC7F0)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_GET_POSSESSEDENTITY_OFFSET UNITYSDK_OFFSET(0x118CC810)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_GET_POSSESSEDVERSION_OFFSET UNITYSDK_OFFSET(0x118CC830)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_GET_ROBOTPLAYERLANDINGDIAGENABLED_OFFSET UNITYSDK_OFFSET(0x118CC910)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_INITSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x118CCA10)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x118CC9C0)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ONHACKLITTLEROBOTCHANGETRIGGERED_OFFSET UNITYSDK_OFFSET(0x118D7FB0)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ONHACKLITTLEROBOTSKILLTRIGGERED_OFFSET UNITYSDK_OFFSET(0x118D7F10)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ONPIPEMOVEBEGIN_OFFSET UNITYSDK_OFFSET(0x118D7C30)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ONPIPEMOVEEND_OFFSET UNITYSDK_OFFSET(0x118D7CD0)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x118CCDD0)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_POSSESSROBOT_OFFSET UNITYSDK_OFFSET(0x118D73E0)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_QUERYACTIONSTATEWITHCACHE_OFFSET UNITYSDK_OFFSET(0x118D8050)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ROBOTPLAYERLANDINGDIAGABILITY_OFFSET UNITYSDK_OFFSET(0x118D3060)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ROBOTPLAYERLANDINGDIAGADDLAYER_OFFSET UNITYSDK_OFFSET(0x118D6F30)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ROBOTPLAYERLANDINGDIAGBOOSTERBOOST_OFFSET UNITYSDK_OFFSET(0x118D0890)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ROBOTPLAYERLANDINGDIAGBOOSTERCAPTURE_OFFSET UNITYSDK_OFFSET(0x118CF650)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ROBOTPLAYERLANDINGDIAGBOOSTERCOMPONENT_OFFSET UNITYSDK_OFFSET(0x118CEE10)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ROBOTPLAYERLANDINGDIAGBOOSTERFAILURE_OFFSET UNITYSDK_OFFSET(0x118D00B0)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ROBOTPLAYERLANDINGDIAGBOOSTERRELEASE_OFFSET UNITYSDK_OFFSET(0x118D2840)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ROBOTPLAYERLANDINGDIAGCOLLIDER_OFFSET UNITYSDK_OFFSET(0x118D4960)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ROBOTPLAYERLANDINGDIAGCOLLISIONINTERNAL_OFFSET UNITYSDK_OFFSET(0x118D5310)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ROBOTPLAYERLANDINGDIAGCOLLISION_OFFSET UNITYSDK_OFFSET(0x118D50B0)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ROBOTPLAYERLANDINGDIAGDUMPENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x118D1290)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ROBOTPLAYERLANDINGDIAGENTITYID_OFFSET UNITYSDK_OFFSET(0x118CF400)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ROBOTPLAYERLANDINGDIAGGROUNDMASK_OFFSET UNITYSDK_OFFSET(0x118D63C0)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ROBOTPLAYERLANDINGDIAGHIT_OFFSET UNITYSDK_OFFSET(0x118D69E0)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ROBOTPLAYERLANDINGDIAGISACTIVEFORENTITY_OFFSET UNITYSDK_OFFSET(0x118D3730)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ROBOTPLAYERLANDINGDIAGISRELEVANTROBOT_OFFSET UNITYSDK_OFFSET(0x118D4000)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ROBOTPLAYERLANDINGDIAGLOG_OFFSET UNITYSDK_OFFSET(0x118CED80)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ROBOTPLAYERLANDINGDIAGNEARESTHIT_OFFSET UNITYSDK_OFFSET(0x118D6580)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ROBOTPLAYERLANDINGDIAGPATH_OFFSET UNITYSDK_OFFSET(0x118D6F90)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ROBOTPLAYERLANDINGDIAGPROBEMASK_OFFSET UNITYSDK_OFFSET(0x118D6D80)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ROBOTPLAYERLANDINGDIAGSAMPLE_OFFSET UNITYSDK_OFFSET(0x118CD7A0)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ROBOTPLAYERLANDINGDIAGSCENES_OFFSET UNITYSDK_OFFSET(0x118CF4A0)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ROBOTPLAYERLANDINGDIAGVECTOR_OFFSET UNITYSDK_OFFSET(0x118CFFA0)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ROBOTPLAYERLANDINGDIAGWALLIGNORE_OFFSET UNITYSDK_OFFSET(0x118D4120)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ROBOTPLAYERLANDINGDIAGWALLPASSMIXIN_OFFSET UNITYSDK_OFFSET(0x118D3880)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_SET_ENABLEROBOTPLAYERLANDINGDIAG_OFFSET UNITYSDK_OFFSET(0x118CC8B0)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_SET_ISPOSSESSED_OFFSET UNITYSDK_OFFSET(0x118CC800)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_SET_POSSESSEDENTITY_OFFSET UNITYSDK_OFFSET(0x118CC820)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_SET_POSSESSEDVERSION_OFFSET UNITYSDK_OFFSET(0x118CC840)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_SWITCHTOBALL_OFFSET UNITYSDK_OFFSET(0x118D7AF0)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_SWITCHTOROBOT_OFFSET UNITYSDK_OFFSET(0x118D7B90)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_UNPOSSESSROBOT_OFFSET UNITYSDK_OFFSET(0x118D7980)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_UPDATEGLOBALVALUE_OFFSET UNITYSDK_OFFSET(0x118CD500)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x118D8250)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x118D8190)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x118D82E0)
#define MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x118D8370)

namespace MoleMole
{
	inline static constexpr unsigned int HackLittleRobotSubsystem_TypeDefinitionIndex = 46254;

	class HackLittleRobotSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::HackLittleRobotSubsystem*>
	{
	public:
		static ::MoleMole::EntityHandle* StaticGet__robotPlayerLandingDiagEntity()
		{
			return (::MoleMole::EntityHandle*)Il2CppClass::FromTypeDefinitionIndex(HackLittleRobotSubsystem_TypeDefinitionIndex)->GetStaticField(0x3CB40);
		}
		static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_RobotPlayerLandingDiagOverlapHits()
		{
			return (::Il2CppArray<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(HackLittleRobotSubsystem_TypeDefinitionIndex)->GetStaticField(0x3CB50);
		}
		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_RobotPlayerLandingDiagRayHits()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(HackLittleRobotSubsystem_TypeDefinitionIndex)->GetStaticField(0x3CB58);
		}
		static ::System::Int32* StaticGet__robotPlayerLandingDiagSampleCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HackLittleRobotSubsystem_TypeDefinitionIndex)->GetStaticField(0xE2F0);
		}
		static ::System::Int32* StaticGet__robotPlayerLandingDiagCollisionCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HackLittleRobotSubsystem_TypeDefinitionIndex)->GetStaticField(0xE2F4);
		}
		static ::System::Single* StaticGet__robotPlayerLandingDiagUntilTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HackLittleRobotSubsystem_TypeDefinitionIndex)->GetStaticField(0xE2F8);
		}
		static ::System::Single* StaticGet__robotPlayerLandingDiagNextSampleTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(HackLittleRobotSubsystem_TypeDefinitionIndex)->GetStaticField(0xE2FC);
		}
		static ::System::Int32* StaticGet__robotPlayerLandingDiagSession()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HackLittleRobotSubsystem_TypeDefinitionIndex)->GetStaticField(0xE300);
		}
		static ::System::Boolean* StaticGet__robotPlayerLandingDiagLastGrounded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HackLittleRobotSubsystem_TypeDefinitionIndex)->GetStaticField(0xE304);
		}
		static ::System::Boolean* StaticGet__robotPlayerLandingDiagLastMorphBall()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HackLittleRobotSubsystem_TypeDefinitionIndex)->GetStaticField(0xE305);
		}
		static ::System::Boolean* StaticGet__robotPlayerLandingDiagLastRayHit()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HackLittleRobotSubsystem_TypeDefinitionIndex)->GetStaticField(0xE306);
		}
		static ::UnityEngine::Vector3* StaticGet__robotPlayerLandingDiagStartPos()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(HackLittleRobotSubsystem_TypeDefinitionIndex)->GetStaticField(0xE308);
		}
		static ::System::Int32* StaticGet__robotPlayerLandingDiagDumpCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HackLittleRobotSubsystem_TypeDefinitionIndex)->GetStaticField(0xE314);
		}
		// static const ::System::Single DefaultButtonLongPressTime; // 0x0
		// static const ::System::String* RobotPlayerLandingDiagPrefix; // 0x0
		// static const ::System::String* RobotPlayerLandingDiagBoosterWallPass; // 0x0
		// static const ::System::Single RobotPlayerLandingDiagWindowSeconds; // 0x0
		// static const ::System::Single RobotPlayerLandingDiagSampleInterval; // 0x0
		// static const ::System::Int32 RobotPlayerLandingDiagMaxDumpCount = 0x4; // 0x0
		// static const ::System::Int32 RobotPlayerLandingDiagMaxOverlapLog = 0xC; // 0x0
		// static const ::System::Int32 RobotPlayerLandingDiagMaxCollisionLog = 0xC; // 0x0
		::MoleMole::EntityHandle _PossessedEntity_k__BackingField; // 0x10
		::Class_2_A30838EB219F38ED* _stateMachine; // 0x20
		::MoleMole::MonoMorphBallAttachPoints* _morphBallAttachPoints; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::ViewObject::ViewObjectHandle>* Breakable; // 0x30
		::System::Boolean _IsPossessed_k__BackingField; // 0x38
		::System::Nullable_1<::Struct_2_B6A3FA7992F9F37E_4> _hackLittleRobotActionState; // 0x39
		::System::Int32 _PossessedVersion_k__BackingField; // 0x40
		::Struct_2_B7313BFA91F76DB1 _hackLittleRobotInputState; // 0x44
		::System::Single ButtonLongPressTime; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsPossessed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_GET_ISPOSSESSED_OFFSET))(this);
		}

		::System::Void set_IsPossessed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_SET_ISPOSSESSED_OFFSET))(this, value);
		}

		::MoleMole::EntityHandle get_PossessedEntity()
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_GET_POSSESSEDENTITY_OFFSET))(this);
		}

		::System::Void set_PossessedEntity(::MoleMole::EntityHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_SET_POSSESSEDENTITY_OFFSET))(this, value);
		}

		::System::Int32 get_PossessedVersion()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_GET_POSSESSEDVERSION_OFFSET))(this);
		}

		::System::Void set_PossessedVersion(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_SET_POSSESSEDVERSION_OFFSET))(this, value);
		}

		static ::System::Boolean get_EnableRobotPlayerLandingDiag()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_GET_ENABLEROBOTPLAYERLANDINGDIAG_OFFSET))();
		}

		static ::System::Void set_EnableRobotPlayerLandingDiag(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_SET_ENABLEROBOTPLAYERLANDINGDIAG_OFFSET))(value);
		}

		static ::System::Boolean get_RobotPlayerLandingDiagEnabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_GET_ROBOTPLAYERLANDINGDIAGENABLED_OFFSET))();
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		static ::System::Void RobotPlayerLandingDiagLog(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ROBOTPLAYERLANDINGDIAGLOG_OFFSET))(message);
		}

		static ::System::Void RobotPlayerLandingDiagBoosterComponent(::System::String* phase, ::MoleMole::EntityHandle target, ::System::Boolean hasBooster)
		{
			return ((::System::Void(*)(::System::String*, ::MoleMole::EntityHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ROBOTPLAYERLANDINGDIAGBOOSTERCOMPONENT_OFFSET))(phase, target, hasBooster);
		}

		static ::System::Void RobotPlayerLandingDiagBoosterCapture(::MoleMole::EntityHandle target, ::UnityEngine::Vector3 position, ::UnityEngine::Vector3 direction, ::System::Single speed, ::System::String* source)
		{
			return ((::System::Void(*)(::MoleMole::EntityHandle, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ROBOTPLAYERLANDINGDIAGBOOSTERCAPTURE_OFFSET))(target, position, direction, speed, source);
		}

		static ::System::Void RobotPlayerLandingDiagBoosterFailure(::MoleMole::EntityHandle target, ::UnityEngine::Vector3 position, ::System::String* reason, ::System::String* source)
		{
			return ((::System::Void(*)(::MoleMole::EntityHandle, ::UnityEngine::Vector3, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ROBOTPLAYERLANDINGDIAGBOOSTERFAILURE_OFFSET))(target, position, reason, source);
		}

		static ::System::Void RobotPlayerLandingDiagBoosterBoost(::MoleMole::EntityHandle target, ::UnityEngine::Vector3 position, ::UnityEngine::Vector3 direction, ::System::Single speed, ::System::String* source)
		{
			return ((::System::Void(*)(::MoleMole::EntityHandle, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ROBOTPLAYERLANDINGDIAGBOOSTERBOOST_OFFSET))(target, position, direction, speed, source);
		}

		static ::System::Void RobotPlayerLandingDiagBoosterRelease(::MoleMole::EntityHandle target, ::UnityEngine::Vector3 position, ::System::String* source)
		{
			return ((::System::Void(*)(::MoleMole::EntityHandle, ::UnityEngine::Vector3, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ROBOTPLAYERLANDINGDIAGBOOSTERRELEASE_OFFSET))(target, position, source);
		}

		static ::System::Void RobotPlayerLandingDiagAbility(::MoleMole::EntityHandle entity, ::System::String* abilityName, ::System::String* phase)
		{
			return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ROBOTPLAYERLANDINGDIAGABILITY_OFFSET))(entity, abilityName, phase);
		}

		static ::System::Void RobotPlayerLandingDiagWallPassMixin(::MoleMole::EntityHandle entity, ::System::String* phase, ::System::String* ignoreTag, ::System::Boolean hasSensor)
		{
			return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ROBOTPLAYERLANDINGDIAGWALLPASSMIXIN_OFFSET))(entity, phase, ignoreTag, hasSensor);
		}

		static ::System::Void RobotPlayerLandingDiagWallIgnore(::MoleMole::EntityHandle entity, ::UnityEngine::Collider* other, ::System::Boolean ignore, ::System::String* phase, ::System::Int32 ignoredCount)
		{
			return ((::System::Void(*)(::MoleMole::EntityHandle, ::UnityEngine::Collider*, ::System::Boolean, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ROBOTPLAYERLANDINGDIAGWALLIGNORE_OFFSET))(entity, other, ignore, phase, ignoredCount);
		}

		static ::System::Void RobotPlayerLandingDiagCollision(::MoleMole::EntityHandle entity, ::UnityEngine::Collision* collision)
		{
			return ((::System::Void(*)(::MoleMole::EntityHandle, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ROBOTPLAYERLANDINGDIAGCOLLISION_OFFSET))(entity, collision);
		}

		static ::System::Void RobotPlayerLandingDiagCollisionInternal(::MoleMole::EntityHandle entity, ::UnityEngine::Collision* collision)
		{
			return ((::System::Void(*)(::MoleMole::EntityHandle, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ROBOTPLAYERLANDINGDIAGCOLLISIONINTERNAL_OFFSET))(entity, collision);
		}

		static ::System::Void RobotPlayerLandingDiagSample(::MoleMole::EntityHandle entity, ::Class_3_61A5922E5046F385_2* morphBall)
		{
			return ((::System::Void(*)(::MoleMole::EntityHandle, ::Class_3_61A5922E5046F385_2*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ROBOTPLAYERLANDINGDIAGSAMPLE_OFFSET))(entity, morphBall);
		}

		static ::System::Boolean RobotPlayerLandingDiagIsRelevantRobot(::MoleMole::EntityHandle entity)
		{
			return ((::System::Boolean(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ROBOTPLAYERLANDINGDIAGISRELEVANTROBOT_OFFSET))(entity);
		}

		static ::System::Boolean RobotPlayerLandingDiagIsActiveForEntity(::MoleMole::EntityHandle entity)
		{
			return ((::System::Boolean(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ROBOTPLAYERLANDINGDIAGISACTIVEFORENTITY_OFFSET))(entity);
		}

		static ::UnityEngine::RaycastHit RobotPlayerLandingDiagNearestHit(::System::Int32 count)
		{
			return ((::UnityEngine::RaycastHit(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ROBOTPLAYERLANDINGDIAGNEARESTHIT_OFFSET))(count);
		}

		static ::System::Void RobotPlayerLandingDiagDumpEnvironment(::UnityEngine::Vector3 position, ::System::String* reason, ::System::Boolean includePath, ::System::Boolean includeOverlap)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ROBOTPLAYERLANDINGDIAGDUMPENVIRONMENT_OFFSET))(position, reason, includePath, includeOverlap);
		}

		static ::System::Int32 RobotPlayerLandingDiagGroundMask()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ROBOTPLAYERLANDINGDIAGGROUNDMASK_OFFSET))();
		}

		static ::System::Int32 RobotPlayerLandingDiagProbeMask()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ROBOTPLAYERLANDINGDIAGPROBEMASK_OFFSET))();
		}

		static ::System::Void RobotPlayerLandingDiagAddLayer(::System::Int32& mask, ::System::Int32 layer)
		{
			return ((::System::Void(*)(::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ROBOTPLAYERLANDINGDIAGADDLAYER_OFFSET))(mask, layer);
		}

		static ::System::String* RobotPlayerLandingDiagEntityId(::MoleMole::EntityHandle entity)
		{
			return ((::System::String*(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ROBOTPLAYERLANDINGDIAGENTITYID_OFFSET))(entity);
		}

		static ::System::String* RobotPlayerLandingDiagVector(::UnityEngine::Vector3 value)
		{
			return ((::System::String*(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ROBOTPLAYERLANDINGDIAGVECTOR_OFFSET))(value);
		}

		static ::System::String* RobotPlayerLandingDiagHit(::UnityEngine::RaycastHit hit)
		{
			return ((::System::String*(*)(::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ROBOTPLAYERLANDINGDIAGHIT_OFFSET))(hit);
		}

		static ::System::String* RobotPlayerLandingDiagCollider(::UnityEngine::Collider* collider, ::System::Boolean includePath)
		{
			return ((::System::String*(*)(::UnityEngine::Collider*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ROBOTPLAYERLANDINGDIAGCOLLIDER_OFFSET))(collider, includePath);
		}

		static ::System::String* RobotPlayerLandingDiagPath(::UnityEngine::Transform* transform)
		{
			return ((::System::String*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ROBOTPLAYERLANDINGDIAGPATH_OFFSET))(transform);
		}

		static ::System::String* RobotPlayerLandingDiagScenes()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ROBOTPLAYERLANDINGDIAGSCENES_OFFSET))();
		}

		::System::Void UpdateGlobalValue(::Class_3_61A5922E5046F385_2* morphBall)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_61A5922E5046F385_2*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_UPDATEGLOBALVALUE_OFFSET))(this, morphBall);
		}

		::System::Void InitStateMachine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_INITSTATEMACHINE_OFFSET))(this);
		}

		::System::Void PossessRobot(::Foundation::ViewObject::ViewObjectHandle vo, ::MoleMole::EntityHandle entity)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_POSSESSROBOT_OFFSET))(this, vo, entity);
		}

		::System::Void UnpossessRobot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_UNPOSSESSROBOT_OFFSET))(this);
		}

		::System::Void SwitchToBall()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_SWITCHTOBALL_OFFSET))(this);
		}

		::System::Void SwitchToRobot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_SWITCHTOROBOT_OFFSET))(this);
		}

		::System::Void OnPipeMoveBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ONPIPEMOVEBEGIN_OFFSET))(this);
		}

		::System::Void OnPipeMoveEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ONPIPEMOVEEND_OFFSET))(this);
		}

		::System::Boolean AddMechanismConfig(::Class_3_55230CEF110DAF7B* mechanismConfig)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_55230CEF110DAF7B*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ADDMECHANISMCONFIG_OFFSET))(this, mechanismConfig);
		}

		::System::Boolean AddMechanismControl(::Class_3_55230CEF110DAF7B_1* mechanismControl)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_55230CEF110DAF7B_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ADDMECHANISMCONTROL_OFFSET))(this, mechanismControl);
		}

		::System::Void OnHackLittleRobotSkillTriggered(::System::Int32 type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ONHACKLITTLEROBOTSKILLTRIGGERED_OFFSET))(this, type);
		}

		::System::Void OnHackLittleRobotChangeTriggered(::System::Int32 type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_ONHACKLITTLEROBOTCHANGETRIGGERED_OFFSET))(this, type);
		}

		::Struct_2_B6A3FA7992F9F37E_4 QueryActionStateWithCache()
		{
			return ((::Struct_2_B6A3FA7992F9F37E_4(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM_QUERYACTIONSTATEWITHCACHE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKLITTLEROBOTSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
