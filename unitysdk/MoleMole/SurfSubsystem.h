#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_6F5EF14512C56DB5.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/MoleMole/SurfSubsystem_GameState.h"

class Class_1_11F0E0D52D9FF574;
class Class_1_C5927B171B52FEBA;
class Class_2_208CC9941471731A_441;
namespace MoleMole { class UISummerEventSurfMainPageController; }
namespace MoleMole { class VehicleSplinePath; }
namespace MoleMole::Battle { class Entity; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_SURFSUBSYSTEM_ADDNITRO_OFFSET UNITYSDK_OFFSET(0x189133C0)
#define MOLEMOLE_SURFSUBSYSTEM_APPLYJUMPPLATFORM_OFFSET UNITYSDK_OFFSET(0x189135A0)
#define MOLEMOLE_SURFSUBSYSTEM_APPLYMAGNET_OFFSET UNITYSDK_OFFSET(0x18913670)
#define MOLEMOLE_SURFSUBSYSTEM_APPLYSPEEDCURVE_OFFSET UNITYSDK_OFFSET(0x18913460)
#define MOLEMOLE_SURFSUBSYSTEM_APPLYSUPERSTAR_OFFSET UNITYSDK_OFFSET(0x18913720)
#define MOLEMOLE_SURFSUBSYSTEM_CANPICKUPSUMMERSURFDROPITEM_OFFSET UNITYSDK_OFFSET(0x1890F7E0)
#define MOLEMOLE_SURFSUBSYSTEM_FAKEINPUT_OFFSET UNITYSDK_OFFSET(0x18913340)
#define MOLEMOLE_SURFSUBSYSTEM_FINISH_OFFSET UNITYSDK_OFFSET(0x18912610)
#define MOLEMOLE_SURFSUBSYSTEM_GETPLAYERVEHICLE_OFFSET UNITYSDK_OFFSET(0x1890FD60)
#define MOLEMOLE_SURFSUBSYSTEM_GETRATIOANDRANK_OFFSET UNITYSDK_OFFSET(0x14A237B0)
#define MOLEMOLE_SURFSUBSYSTEM_GETUIDRIFTPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x18910F70)
#define MOLEMOLE_SURFSUBSYSTEM_GET_AVERAGESPEED_OFFSET UNITYSDK_OFFSET(0x1890FDC0)
#define MOLEMOLE_SURFSUBSYSTEM_GET_LOCALAVATARSPEED_OFFSET UNITYSDK_OFFSET(0x1890FDD0)
#define MOLEMOLE_SURFSUBSYSTEM_GET_PASSEDTIME_OFFSET UNITYSDK_OFFSET(0x1890FDA0)
#define MOLEMOLE_SURFSUBSYSTEM_MUTEINPUT_OFFSET UNITYSDK_OFFSET(0x189132F0)
#define MOLEMOLE_SURFSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1890FDF0)
#define MOLEMOLE_SURFSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x189100C0)
#define MOLEMOLE_SURFSUBSYSTEM_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x18910610)
#define MOLEMOLE_SURFSUBSYSTEM_ONGAMEENTER_OFFSET UNITYSDK_OFFSET(0x189110A0)
#define MOLEMOLE_SURFSUBSYSTEM_ONGAMEEXIT_OFFSET UNITYSDK_OFFSET(0x18910380)
#define MOLEMOLE_SURFSUBSYSTEM_ONGAMERUN_OFFSET UNITYSDK_OFFSET(0x18912330)
#define MOLEMOLE_SURFSUBSYSTEM_ONPREUPDATE_OFFSET UNITYSDK_OFFSET(0x18912B20)
#define MOLEMOLE_SURFSUBSYSTEM_ONSUMMERSURFITEMGET_OFFSET UNITYSDK_OFFSET(0x14A23390)
#define MOLEMOLE_SURFSUBSYSTEM_ONSUMMERSURFTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x1890F6E0)
#define MOLEMOLE_SURFSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x189109A0)
#define MOLEMOLE_SURFSUBSYSTEM_OPENUI_OFFSET UNITYSDK_OFFSET(0x189124B0)
#define MOLEMOLE_SURFSUBSYSTEM_OVERRIDEDRIFTPARAMS_OFFSET UNITYSDK_OFFSET(0x189137A0)
#define MOLEMOLE_SURFSUBSYSTEM_REGISTERENTITYASVEHICLE_OFFSET UNITYSDK_OFFSET(0x189117B0)
#define MOLEMOLE_SURFSUBSYSTEM_SETENTITYASAVATAR_OFFSET UNITYSDK_OFFSET(0x18911FE0)
#define MOLEMOLE_SURFSUBSYSTEM_SET_PASSEDTIME_OFFSET UNITYSDK_OFFSET(0x1890FDB0)
#define MOLEMOLE_SURFSUBSYSTEM_UPDATEBYMAINPAGE_OFFSET UNITYSDK_OFFSET(0x18912CA0)
#define MOLEMOLE_SURFSUBSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x18913910)
#define MOLEMOLE_SURFSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x18913880)
#define MOLEMOLE_SURFSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x18913980)
#define MOLEMOLE_SURFSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18913A10)
#define MOLEMOLE_SURFSUBSYSTEM___BASE_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x18913AA0)
#define MOLEMOLE_SURFSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x18913B40)

namespace MoleMole
{
	inline static constexpr unsigned int SurfSubsystem_TypeDefinitionIndex = 81915;

	class SurfSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::SurfSubsystem*>
	{
	public:
		static ::System::Int32* StaticGet_DRIFT_RIGHT_TUTORIAL_NEWBIE_ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SurfSubsystem_TypeDefinitionIndex)->GetStaticField(0xB200);
		}
		static ::System::Int32* StaticGet_DRIFT_LEFT_TUTORIAL_NEWBIE_ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SurfSubsystem_TypeDefinitionIndex)->GetStaticField(0xB204);
		}
		static ::System::UInt32* StaticGet_Parameter_2_1_Surfing_Brake_Energy()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(SurfSubsystem_TypeDefinitionIndex)->GetStaticField(0xB208);
		}
		// static const ::System::String* SURF_HIDE_BATTLEUI_TAG; // 0x0
		::Class_1_11F0E0D52D9FF574* _playerVehicle; // 0x10
		::System::Collections::Generic::List_1<::Class_1_11F0E0D52D9FF574*>* _vehicleList; // 0x18
		::Class_1_C5927B171B52FEBA* _surfCamera; // 0x20
		::MoleMole::UISummerEventSurfMainPageController* _mainPage; // 0x28
		::MoleMole::VehicleSplinePath* path; // 0x30
		::System::Single fixedTime; // 0x38
		::System::Single _fakeInputTime; // 0x3C
		::System::Single _PassedTime_k__BackingField; // 0x40
		::System::Boolean _fakeInputDrift; // 0x44
		::System::Boolean _fakeInputBoost; // 0x45
		::System::Boolean _muteInput; // 0x46
		::System::Single _totalSpeed; // 0x48
		::MoleMole::SurfSubsystem_GameState _gameState; // 0x4C
		::System::Int32 _fakeInputSteer; // 0x50
		::System::Int32 _surfTriggerCount; // 0x54
		::System::Single _totalFrame; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM__CCTOR_OFFSET))();
		}

		::System::Void OnSummerSurfItemGet(::System::EventArgs* eventArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_ONSUMMERSURFITEMGET_OFFSET))(this, eventArgs);
		}

		static ::System::Boolean GetRatioAndRank(::Class_2_208CC9941471731A_441* template_, ::System::Int32 value, ::System::Single& ratio, ::Enum_3_6F5EF14512C56DB5& rank)
		{
			return ((::System::Boolean(*)(::Class_2_208CC9941471731A_441*, ::System::Int32, ::System::Single&, ::Enum_3_6F5EF14512C56DB5&))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_GETRATIOANDRANK_OFFSET))(template_, value, ratio, rank);
		}

		::System::Void OnSummerSurfTriggerEnter(::System::EventArgs* eventArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_ONSUMMERSURFTRIGGERENTER_OFFSET))(this, eventArgs);
		}

		static ::System::Boolean CanPickUpSummerSurfDropItem(::MoleMole::EntityHandle entity)
		{
			return ((::System::Boolean(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_CANPICKUPSUMMERSURFDROPITEM_OFFSET))(entity);
		}

		::System::Single get_PassedTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_GET_PASSEDTIME_OFFSET))(this);
		}

		::System::Void set_PassedTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_SET_PASSEDTIME_OFFSET))(this, value);
		}

		::System::Single get_AverageSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_GET_AVERAGESPEED_OFFSET))(this);
		}

		::System::Single get_LocalAvatarSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_GET_LOCALAVATARSPEED_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnFixedUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_ONFIXEDUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnGameEnter(::MoleMole::Battle::Entity* playerEntity, ::System::String* pathName, ::System::Boolean isReverse, ::System::String* spawnPoint)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_ONGAMEENTER_OFFSET))(this, playerEntity, pathName, isReverse, spawnPoint);
		}

		::System::Void OnGameRun()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_ONGAMERUN_OFFSET))(this);
		}

		::MoleMole::UISummerEventSurfMainPageController* OpenUI()
		{
			return ((::MoleMole::UISummerEventSurfMainPageController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_OPENUI_OFFSET))(this);
		}

		::System::Void OnGameExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_ONGAMEEXIT_OFFSET))(this);
		}

		::System::Void Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_FINISH_OFFSET))(this);
		}

		::System::Void OnPreUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_ONPREUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void MuteInput(::System::Boolean mute)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_MUTEINPUT_OFFSET))(this, mute);
		}

		::System::Void FakeInput(::System::Int32 steer, ::System::Boolean boost, ::System::Boolean drift, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_FAKEINPUT_OFFSET))(this, steer, boost, drift, duration);
		}

		::System::Void UpdateByMainPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_UPDATEBYMAINPAGE_OFFSET))(this);
		}

		::Class_1_11F0E0D52D9FF574* GetPlayerVehicle()
		{
			return ((::Class_1_11F0E0D52D9FF574*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_GETPLAYERVEHICLE_OFFSET))(this);
		}

		::System::Single GetUIDriftPercentage(::Class_1_11F0E0D52D9FF574* context)
		{
			return ((::System::Single(*)(::PVOID, ::Class_1_11F0E0D52D9FF574*))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_GETUIDRIFTPERCENTAGE_OFFSET))(this, context);
		}

		::System::Void AddNitro(::Class_1_11F0E0D52D9FF574* vehicle, ::System::Single amount)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_11F0E0D52D9FF574*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_ADDNITRO_OFFSET))(this, vehicle, amount);
		}

		::System::Void ApplySpeedCurve(::Class_1_11F0E0D52D9FF574* vehicle, ::System::Boolean isAcceleration, ::UnityEngine::AnimationCurve* speedCurve, ::System::Single duration, ::System::Single minSpeed, ::System::Single maxSpeed, ::System::Single additionalSpeed)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_11F0E0D52D9FF574*, ::System::Boolean, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_APPLYSPEEDCURVE_OFFSET))(this, vehicle, isAcceleration, speedCurve, duration, minSpeed, maxSpeed, additionalSpeed);
		}

		::System::Void ApplyJumpPlatform(::Class_1_11F0E0D52D9FF574* vehicle, ::System::Single verticalSpeed, ::System::Single horizontalSpeed, ::System::Boolean syncSpeedYaw, ::System::Single speedYaw)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_11F0E0D52D9FF574*, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_APPLYJUMPPLATFORM_OFFSET))(this, vehicle, verticalSpeed, horizontalSpeed, syncSpeedYaw, speedYaw);
		}

		::System::Void ApplyMagnet(::Class_1_11F0E0D52D9FF574* vehicle, ::System::Single magnetTime, ::System::Single magnetRangeX, ::System::Single magnetRangeZ)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_11F0E0D52D9FF574*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_APPLYMAGNET_OFFSET))(this, vehicle, magnetTime, magnetRangeX, magnetRangeZ);
		}

		::System::Void ApplySuperStar(::Class_1_11F0E0D52D9FF574* vehicle, ::System::Single superStarTime)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_11F0E0D52D9FF574*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_APPLYSUPERSTAR_OFFSET))(this, vehicle, superStarTime);
		}

		::System::Void OverrideDriftParams(::Class_1_11F0E0D52D9FF574* vehicle, ::System::Boolean enable, ::System::Int32 configId)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_11F0E0D52D9FF574*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_OVERRIDEDRIFTPARAMS_OFFSET))(this, vehicle, enable, configId);
		}

		::System::Void RegisterEntityAsVehicle(::MoleMole::Battle::Entity* entity, ::System::String* configKey, ::System::String* spawnPointName)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_REGISTERENTITYASVEHICLE_OFFSET))(this, entity, configKey, spawnPointName);
		}

		::System::Void SetEntityAsAvatar(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM_SETENTITYASAVATAR_OFFSET))(this, entity);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnFixedUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM___BASE_ONFIXEDUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
