#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/MoleMole/Config/PosRotTargetOption.h"
#include "unitysdk/MoleMole/Config/ReferTargetCoordsOption.h"
#include "unitysdk/Struct_2_69EDF57FCDC7C5D3.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"
#include "unitysdk/Struct_2_FC595D1A561D8C6F.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
class Class_2_167BB37617B940E3;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_CHOOSEENTITYORTRANSFORM_OFFSET UNITYSDK_OFFSET(0x110A53E0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_CHOOSEPOSROTTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x170B0220)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_CHOOSESPECIALTRANSFORM_OFFSET UNITYSDK_OFFSET(0x110A9910)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_CLONE_OFFSET UNITYSDK_OFFSET(0x170B23D0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x170B22E0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x170B19B0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_FROMFLX_OFFSET UNITYSDK_OFFSET(0x170B2540)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_GETABILITYTARGETOFFSETREFERENTITY_OFFSET UNITYSDK_OFFSET(0x170B0430)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_GETATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x110AAEF0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_GETENTITYPOSROTBYTARGET_OFFSET UNITYSDK_OFFSET(0x110A64C0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x170B24D0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_GETOFFSETREFERTARGET_OFFSET UNITYSDK_OFFSET(0x170B1950)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_GETSAVEPOINTPOSROT_OFFSET UNITYSDK_OFFSET(0x110AA000)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_GETSAVEPOINTROTWITHCOORDS_OFFSET UNITYSDK_OFFSET(0x110AA170)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_GETTARGETENTITYPOSROT_OFFSET UNITYSDK_OFFSET(0x110A60B0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_GETTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x110AADE0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x170B1A10)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x170B25C0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_ISREFERTARGETCAMERA_OFFSET UNITYSDK_OFFSET(0x110A5210)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_ISSAVEPOINTOPTION_OFFSET UNITYSDK_OFFSET(0x110AAD90)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_ISSPECIALITEMOPTION_OFFSET UNITYSDK_OFFSET(0x110A98C0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x170B2130)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x170B39C0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x170B3B20)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET___BASE_GETATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x170B3B40)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET___BASE_GETENTITYPOSROTBYTARGET_OFFSET UNITYSDK_OFFSET(0x170B3BE0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET___BASE_GETOFFSETREFERTARGET_OFFSET UNITYSDK_OFFSET(0x170B3EF0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET___BASE_GETSAVEPOINTPOSROT_OFFSET UNITYSDK_OFFSET(0x170B3FB0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET___BASE_GETTARGETENTITYPOSROT_OFFSET UNITYSDK_OFFSET(0x170B42D0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET___BASE_GETTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x170B4190)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET___BASE_ISREFERTARGETCAMERA_OFFSET UNITYSDK_OFFSET(0x170B4760)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET___BASE_ISSAVEPOINTOPTION_OFFSET UNITYSDK_OFFSET(0x170B48C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPosRotReferTarget_TypeDefinitionIndex = 71439;

	class ConfigPosRotReferTarget : public ::MoleMole::Config::PosRotTargetOption
	{
	public:
		::MoleMole::Config::DynamicString* CustomKey; // 0x10
		::MoleMole::Config::DynamicString* BackupAttachPoint; // 0x18
		::MoleMole::Config::DynamicString* BackupPointName; // 0x20
		::MoleMole::Config::DynamicString* BackupNodePoint; // 0x28
		::MoleMole::Config::DynamicString* AttachPoint; // 0x30
		::MoleMole::Config::DynamicString* PointName; // 0x38
		::MoleMole::Config::DynamicString* NodePoint; // 0x40
		::MoleMole::Config::DynamicString* BackupCustomKey; // 0x48
		::MoleMole::Config::AbilityTargetting OffsetReferTarget; // 0x50
		::MoleMole::Config::AbilityTargetting BackupOffsetReferTarget; // 0x54
		::System::Boolean IsUseAttachPointRotation; // 0x58
		::System::Boolean FeaturePointFirst; // 0x59
		::System::Boolean IsUseAttachPointPos; // 0x5A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET__CTOR_OFFSET))(this);
		}

		::System::Boolean IsReferTargetCamera(::Struct_2_FA5F50563E60AFBA sourceEntity, ::MoleMole::Config::ReferTargetCoordsOption coordsOption, ::MoleMole::Config::ReferTargetCoordsOption backupCoordsOption, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::Class_2_167BB37617B940E3* instancedAbility, ::System::Boolean forceUseBackUp)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_FA5F50563E60AFBA, ::MoleMole::Config::ReferTargetCoordsOption, ::MoleMole::Config::ReferTargetCoordsOption, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_167BB37617B940E3*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_ISREFERTARGETCAMERA_OFFSET))(this, sourceEntity, coordsOption, backupCoordsOption, caster, other, instancedAbility, forceUseBackUp);
		}

		::System::Boolean GetTargetEntityPosRot(::Struct_2_FA5F50563E60AFBA sourceEntity, ::MoleMole::Config::ReferTargetCoordsOption coordsOption, ::MoleMole::Config::ReferTargetCoordsOption backupCoordsOption, ::UnityEngine::Vector3& targetPos, ::UnityEngine::Quaternion& targetRot, ::Struct_2_FA5F50563E60AFBA& targetEntity, ::UnityEngine::Transform*& targetTrans, ::Struct_2_69EDF57FCDC7C5D3& targetCoods, ::System::Boolean& useDefaultTarget, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::Class_2_167BB37617B940E3* instancedAbility, ::MoleMole::Config::DynamicString* relativeBaseSavePoint, ::MoleMole::Config::DynamicString* relativeTargetSavePoint, ::MoleMole::Config::DynamicString* backupRelativeBaseSavePoint, ::MoleMole::Config::DynamicString* backupRelativeTargetSavePoint, ::System::Boolean forceUseBackUp)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_FA5F50563E60AFBA, ::MoleMole::Config::ReferTargetCoordsOption, ::MoleMole::Config::ReferTargetCoordsOption, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::Struct_2_FA5F50563E60AFBA&, ::UnityEngine::Transform*&, ::Struct_2_69EDF57FCDC7C5D3&, ::System::Boolean&, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_167BB37617B940E3*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_GETTARGETENTITYPOSROT_OFFSET))(this, sourceEntity, coordsOption, backupCoordsOption, targetPos, targetRot, targetEntity, targetTrans, targetCoods, useDefaultTarget, caster, other, instancedAbility, relativeBaseSavePoint, relativeTargetSavePoint, backupRelativeBaseSavePoint, backupRelativeTargetSavePoint, forceUseBackUp);
		}

		::System::Boolean IsSpecialItemOption(::MoleMole::Config::AbilityTargetting referTarget)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AbilityTargetting))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_ISSPECIALITEMOPTION_OFFSET))(this, referTarget);
		}

		::UnityEngine::Transform* ChooseSpecialTransform(::MoleMole::Battle::Entity* sourceEntity, ::MoleMole::Config::AbilityTargetting referTarget, ::MoleMole::Config::DynamicString* paramNodePoint, ::System::Boolean& getLogicPos, ::Struct_2_FC595D1A561D8C6F& logicPosRot, ::Class_2_167BB37617B940E3* instancedAbility)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Config::AbilityTargetting, ::MoleMole::Config::DynamicString*, ::System::Boolean&, ::Struct_2_FC595D1A561D8C6F&, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_CHOOSESPECIALTRANSFORM_OFFSET))(this, sourceEntity, referTarget, paramNodePoint, getLogicPos, logicPosRot, instancedAbility);
		}

		::System::Boolean ChooseEntityOrTransform(::Struct_2_FA5F50563E60AFBA sourceEntity, ::MoleMole::Config::AbilityTargetting referTarget, ::MoleMole::Config::AbilityTargetting backupTarget, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::Struct_2_FA5F50563E60AFBA& targetEntity, ::UnityEngine::Transform*& targetTransform, ::System::Boolean& useDefaultTarget, ::System::Boolean& useLogicPos, ::Struct_2_FC595D1A561D8C6F& logicPosRot, ::Class_2_167BB37617B940E3* instancedAbility, ::System::Boolean forceUseBackUpTarget)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_FA5F50563E60AFBA, ::MoleMole::Config::AbilityTargetting, ::MoleMole::Config::AbilityTargetting, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Struct_2_FA5F50563E60AFBA&, ::UnityEngine::Transform*&, ::System::Boolean&, ::System::Boolean&, ::Struct_2_FC595D1A561D8C6F&, ::Class_2_167BB37617B940E3*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_CHOOSEENTITYORTRANSFORM_OFFSET))(this, sourceEntity, referTarget, backupTarget, caster, other, targetEntity, targetTransform, useDefaultTarget, useLogicPos, logicPosRot, instancedAbility, forceUseBackUpTarget);
		}

		::System::Boolean GetEntityPosRotByTarget(::Struct_2_FA5F50563E60AFBA target, ::Struct_2_FA5F50563E60AFBA sourceEntity, ::MoleMole::Config::ReferTargetCoordsOption coordsOption, ::UnityEngine::Vector3& targetPos, ::UnityEngine::Quaternion& targetRot, ::UnityEngine::Transform*& targetTrans, ::Struct_2_69EDF57FCDC7C5D3& targetCoods, ::System::Boolean useDefaultTarget, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::UnityEngine::Transform* findTargetTransform, ::Class_2_167BB37617B940E3* instancedAbility, ::MoleMole::Config::DynamicString* relativeBaseSavePoint, ::MoleMole::Config::DynamicString* relativeTargetSavePoint, ::System::Boolean useLogicPosAndRot, ::Struct_2_FC595D1A561D8C6F logicPosRot)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_FA5F50563E60AFBA, ::Struct_2_FA5F50563E60AFBA, ::MoleMole::Config::ReferTargetCoordsOption, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Transform*&, ::Struct_2_69EDF57FCDC7C5D3&, ::System::Boolean, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::UnityEngine::Transform*, ::Class_2_167BB37617B940E3*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::System::Boolean, ::Struct_2_FC595D1A561D8C6F))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_GETENTITYPOSROTBYTARGET_OFFSET))(this, target, sourceEntity, coordsOption, targetPos, targetRot, targetTrans, targetCoods, useDefaultTarget, caster, other, findTargetTransform, instancedAbility, relativeBaseSavePoint, relativeTargetSavePoint, useLogicPosAndRot, logicPosRot);
		}

		::System::Boolean GetSavePointPosRot(::MoleMole::Battle::Entity* sourceEntity, ::Struct_2_FC595D1A561D8C6F& posRot, ::System::Boolean& useBackUp, ::MoleMole::Config::ReferTargetCoordsOption coordsOption, ::MoleMole::Battle::Entity* caster, ::MoleMole::Config::DynamicString* relativeBaseSavePoint, ::Class_2_167BB37617B940E3* instanceAbility)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Struct_2_FC595D1A561D8C6F&, ::System::Boolean&, ::MoleMole::Config::ReferTargetCoordsOption, ::MoleMole::Battle::Entity*, ::MoleMole::Config::DynamicString*, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_GETSAVEPOINTPOSROT_OFFSET))(this, sourceEntity, posRot, useBackUp, coordsOption, caster, relativeBaseSavePoint, instanceAbility);
		}

		static ::System::Boolean GetSavePointRotWithCoords(::MoleMole::Battle::Entity* sourceEntity, ::MoleMole::Battle::Entity* caster, ::MoleMole::Config::ReferTargetCoordsOption coordsOption, ::System::String* pointName, ::Struct_2_FC595D1A561D8C6F& posRot, ::MoleMole::Config::DynamicString* relativeBaseSavePoint, ::Class_2_167BB37617B940E3* instanceAbility)
		{
			return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Config::ReferTargetCoordsOption, ::System::String*, ::Struct_2_FC595D1A561D8C6F&, ::MoleMole::Config::DynamicString*, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_GETSAVEPOINTROTWITHCOORDS_OFFSET))(sourceEntity, caster, coordsOption, pointName, posRot, relativeBaseSavePoint, instanceAbility);
		}

		::System::Boolean IsSavePointOption()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_ISSAVEPOINTOPTION_OFFSET))(this);
		}

		::Struct_2_FA5F50563E60AFBA GetTargetEntity(::MoleMole::Battle::Entity* sourceEntity, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::Class_2_167BB37617B940E3* instancedAbility)
		{
			return ((::Struct_2_FA5F50563E60AFBA(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_GETTARGETENTITY_OFFSET))(this, sourceEntity, caster, other, instancedAbility);
		}

		::UnityEngine::Transform* GetAttachPoint(::MoleMole::Battle::Entity* sourceEntity, ::Class_2_167BB37617B940E3* instancedAbility)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_GETATTACHPOINT_OFFSET))(this, sourceEntity, instancedAbility);
		}

		::Struct_2_FA5F50563E60AFBA ChoosePosRotTargetEntity(::Struct_2_FA5F50563E60AFBA actor, ::MoleMole::Config::AbilityTargetting offsetReferTargetType, ::System::Boolean& useDefaultTarget, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::Class_2_167BB37617B940E3* instancedAbility, ::System::Boolean forceUseBackupTarget)
		{
			return ((::Struct_2_FA5F50563E60AFBA(*)(::PVOID, ::Struct_2_FA5F50563E60AFBA, ::MoleMole::Config::AbilityTargetting, ::System::Boolean&, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_167BB37617B940E3*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_CHOOSEPOSROTTARGETENTITY_OFFSET))(this, actor, offsetReferTargetType, useDefaultTarget, caster, other, instancedAbility, forceUseBackupTarget);
		}

		::System::Void GetOffsetReferTarget(::MoleMole::Config::AbilityTargetting& offsetReferTarget, ::MoleMole::Config::AbilityTargetting& backupOffsetReferTarget)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AbilityTargetting&, ::MoleMole::Config::AbilityTargetting&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_GETOFFSETREFERTARGET_OFFSET))(this, offsetReferTarget, backupOffsetReferTarget);
		}

		::Struct_2_FA5F50563E60AFBA GetAbilityTargetOffsetReferEntity(::Struct_2_FA5F50563E60AFBA actor, ::MoleMole::Config::AbilityTargetting referTarget, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::System::Boolean isBackUpTarget, ::Class_2_167BB37617B940E3* instancedAbility)
		{
			return ((::Struct_2_FA5F50563E60AFBA(*)(::PVOID, ::Struct_2_FA5F50563E60AFBA, ::MoleMole::Config::AbilityTargetting, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_GETABILITYTARGETOFFSETREFERENTITY_OFFSET))(this, actor, referTarget, caster, other, isBackUpTarget, instancedAbility);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigPosRotReferTarget* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigPosRotReferTarget*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::PosRotTargetOption* Clone()
		{
			return ((::MoleMole::Config::PosRotTargetOption*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigPosRotReferTarget* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigPosRotReferTarget*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET_PARSEFROMFLX_OFFSET))(node);
		}

		::UnityEngine::Transform* __base_GetAttachPoint(::MoleMole::Battle::Entity* P0, ::Class_2_167BB37617B940E3* P1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET___BASE_GETATTACHPOINT_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GetEntityPosRotByTarget(::Struct_2_FA5F50563E60AFBA P0, ::Struct_2_FA5F50563E60AFBA P1, ::MoleMole::Config::ReferTargetCoordsOption P2, ::UnityEngine::Vector3& P3, ::UnityEngine::Quaternion& P4, ::UnityEngine::Transform*& P5, ::Struct_2_69EDF57FCDC7C5D3& P6, ::System::Boolean P7, ::MoleMole::Battle::Entity* P8, ::MoleMole::Battle::Entity* P9, ::UnityEngine::Transform* P10, ::Class_2_167BB37617B940E3* P11, ::MoleMole::Config::DynamicString* P12, ::MoleMole::Config::DynamicString* P13, ::System::Boolean P14, ::Struct_2_FC595D1A561D8C6F P15)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_FA5F50563E60AFBA, ::Struct_2_FA5F50563E60AFBA, ::MoleMole::Config::ReferTargetCoordsOption, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Transform*&, ::Struct_2_69EDF57FCDC7C5D3&, ::System::Boolean, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::UnityEngine::Transform*, ::Class_2_167BB37617B940E3*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::System::Boolean, ::Struct_2_FC595D1A561D8C6F))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET___BASE_GETENTITYPOSROTBYTARGET_OFFSET))(this, P0, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15);
		}

		::System::Void __base_GetOffsetReferTarget(::MoleMole::Config::AbilityTargetting& P0, ::MoleMole::Config::AbilityTargetting& P1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AbilityTargetting&, ::MoleMole::Config::AbilityTargetting&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET___BASE_GETOFFSETREFERTARGET_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GetSavePointPosRot(::MoleMole::Battle::Entity* P0, ::Struct_2_FC595D1A561D8C6F& P1, ::System::Boolean& P2, ::MoleMole::Config::ReferTargetCoordsOption P3, ::MoleMole::Battle::Entity* P4, ::MoleMole::Config::DynamicString* P5, ::Class_2_167BB37617B940E3* P6)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Struct_2_FC595D1A561D8C6F&, ::System::Boolean&, ::MoleMole::Config::ReferTargetCoordsOption, ::MoleMole::Battle::Entity*, ::MoleMole::Config::DynamicString*, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET___BASE_GETSAVEPOINTPOSROT_OFFSET))(this, P0, P1, P2, P3, P4, P5, P6);
		}

		::Struct_2_FA5F50563E60AFBA __base_GetTargetEntity(::MoleMole::Battle::Entity* P0, ::MoleMole::Battle::Entity* P1, ::MoleMole::Battle::Entity* P2, ::Class_2_167BB37617B940E3* P3)
		{
			return ((::Struct_2_FA5F50563E60AFBA(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET___BASE_GETTARGETENTITY_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Boolean __base_GetTargetEntityPosRot(::Struct_2_FA5F50563E60AFBA P0, ::MoleMole::Config::ReferTargetCoordsOption P1, ::MoleMole::Config::ReferTargetCoordsOption P2, ::UnityEngine::Vector3& P3, ::UnityEngine::Quaternion& P4, ::Struct_2_FA5F50563E60AFBA& P5, ::UnityEngine::Transform*& P6, ::Struct_2_69EDF57FCDC7C5D3& P7, ::System::Boolean& P8, ::MoleMole::Battle::Entity* P9, ::MoleMole::Battle::Entity* P10, ::Class_2_167BB37617B940E3* P11, ::MoleMole::Config::DynamicString* P12, ::MoleMole::Config::DynamicString* P13, ::MoleMole::Config::DynamicString* P14, ::MoleMole::Config::DynamicString* P15, ::System::Boolean P16)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_FA5F50563E60AFBA, ::MoleMole::Config::ReferTargetCoordsOption, ::MoleMole::Config::ReferTargetCoordsOption, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::Struct_2_FA5F50563E60AFBA&, ::UnityEngine::Transform*&, ::Struct_2_69EDF57FCDC7C5D3&, ::System::Boolean&, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_167BB37617B940E3*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET___BASE_GETTARGETENTITYPOSROT_OFFSET))(this, P0, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16);
		}

		::System::Boolean __base_IsReferTargetCamera(::Struct_2_FA5F50563E60AFBA P0, ::MoleMole::Config::ReferTargetCoordsOption P1, ::MoleMole::Config::ReferTargetCoordsOption P2, ::MoleMole::Battle::Entity* P3, ::MoleMole::Battle::Entity* P4, ::Class_2_167BB37617B940E3* P5, ::System::Boolean P6)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_FA5F50563E60AFBA, ::MoleMole::Config::ReferTargetCoordsOption, ::MoleMole::Config::ReferTargetCoordsOption, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_167BB37617B940E3*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET___BASE_ISREFERTARGETCAMERA_OFFSET))(this, P0, P1, P2, P3, P4, P5, P6);
		}

		::System::Boolean __base_IsSavePointOption()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERTARGET___BASE_ISSAVEPOINTOPTION_OFFSET))(this);
		}
	};
}
