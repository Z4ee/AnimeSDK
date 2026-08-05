#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_6F5EF14512C56DB5.h"
#include "unitysdk/Enum_3_97EC0F5E46F61E50.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/Struct_2_4C8453486C91E3A1_12.h"

class Class_3_0886A771C4D53727_10;
class Class_3_6EF456A21AE85EEC_299;
class Class_3_AAC5672A3E24D096;
class Class_3_EDB10235065641EB;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_BULLETCREATE_OFFSET UNITYSDK_OFFSET(0x190B7AC0)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_BULLETHITTARGETRECORD_OFFSET UNITYSDK_OFFSET(0x190B8300)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_BULLETHIT_OFFSET UNITYSDK_OFFSET(0x190B7E80)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_CLEARBULLETRECORD_OFFSET UNITYSDK_OFFSET(0x190B6F30)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_CREATEPATTERN_OFFSET UNITYSDK_OFFSET(0x190B75F0)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_ENCODE_1_OFFSET UNITYSDK_OFFSET(0x190B8F00)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_ENCODE_OFFSET UNITYSDK_OFFSET(0x190B8E40)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_FINISHANDSENDREQUEST_OFFSET UNITYSDK_OFFSET(0x190B88F0)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_FINISHPATTERN_OFFSET UNITYSDK_OFFSET(0x190B8780)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_GETGENERALLEVELID_OFFSET UNITYSDK_OFFSET(0x190B6FD0)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_KILLENTITY_OFFSET UNITYSDK_OFFSET(0x190B7720)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x190B6DA0)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x190B6DE0)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_RECORDCHALLENGE_OFFSET UNITYSDK_OFFSET(0x190B8FC0)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_STARTBEATMAP_OFFSET UNITYSDK_OFFSET(0x190B71F0)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_USESKILL_OFFSET UNITYSDK_OFFSET(0x190B7890)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x190B9020)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x190B9040)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x190B90D0)

namespace MoleMole
{
	inline static constexpr unsigned int SummerShootingLogSubsystem_TypeDefinitionIndex = 81726;

	class SummerShootingLogSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::SummerShootingLogSubsystem*>
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_6EF456A21AE85EEC_299*>* ShootSkillInfo; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_3_0886A771C4D53727_10*>*>* ShootInfoDic; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_EDB10235065641EB*>* _patterns; // 0x20
		::Class_3_AAC5672A3E24D096* _data; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void ClearBulletRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_CLEARBULLETRECORD_OFFSET))(this);
		}

		static ::System::Int32 GetGeneralLevelID()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_GETGENERALLEVELID_OFFSET))();
		}

		::System::Void StartBeatmap(::System::String* beatmapName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_STARTBEATMAP_OFFSET))(this, beatmapName);
		}

		::System::Void CreatePattern(::System::Int32 instanceId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_CREATEPATTERN_OFFSET))(this, instanceId);
		}

		::System::Void KillEntity(::System::Int32 instanceId, ::Struct_2_4C8453486C91E3A1_12 info)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Struct_2_4C8453486C91E3A1_12))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_KILLENTITY_OFFSET))(this, instanceId, info);
		}

		::System::Void UseSkill(::System::Int32 bulletConfigId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_USESKILL_OFFSET))(this, bulletConfigId);
		}

		::System::Void BulletCreate(::System::String* weaponKey, ::System::Int32 weaponConfigId, ::System::String* bulletAbilityName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_BULLETCREATE_OFFSET))(this, weaponKey, weaponConfigId, bulletAbilityName);
		}

		::System::Void BulletHit(::System::String* weaponKey, ::System::Int32 weaponConfigId, ::System::String* bulletAbilityName, ::System::Boolean firstHit)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_BULLETHIT_OFFSET))(this, weaponKey, weaponConfigId, bulletAbilityName, firstHit);
		}

		::System::Void BulletHitTargetRecord(::System::String* weaponKey, ::System::Int32 weaponConfigId, ::System::String* bulletAbilityName, ::System::Int32 hitCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_BULLETHITTARGETRECORD_OFFSET))(this, weaponKey, weaponConfigId, bulletAbilityName, hitCount);
		}

		::System::Void FinishPattern(::System::Int32 instanceId, ::System::Int32 duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_FINISHPATTERN_OFFSET))(this, instanceId, duration);
		}

		::System::Void FinishAndSendRequest(::Enum_3_97EC0F5E46F61E50 result)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_97EC0F5E46F61E50))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_FINISHANDSENDREQUEST_OFFSET))(this, result);
		}

		static ::System::UInt32 Encode(::Enum_3_97EC0F5E46F61E50 result)
		{
			return ((::System::UInt32(*)(::Enum_3_97EC0F5E46F61E50))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_ENCODE_OFFSET))(result);
		}

		static ::System::UInt32 Encode_1(::Enum_3_6F5EF14512C56DB5 rank)
		{
			return ((::System::UInt32(*)(::Enum_3_6F5EF14512C56DB5))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_ENCODE_1_OFFSET))(rank);
		}

		::System::Void RecordChallenge(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_RECORDCHALLENGE_OFFSET))(this, success);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}
	};
}
