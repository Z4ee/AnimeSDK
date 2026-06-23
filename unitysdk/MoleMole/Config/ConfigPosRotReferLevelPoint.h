#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/LevelPointType.h"
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

#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_CLONE_OFFSET UNITYSDK_OFFSET(0x1AA5DAB0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1AA5DA40)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AA5D5B0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1AA5DC20)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_GETENTITYPOSROTBYTARGET_OFFSET UNITYSDK_OFFSET(0x1AA5C680)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1AA5DBB0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_GETLEVELPOINTPOSROT_OFFSET UNITYSDK_OFFSET(0x1AA5ACF0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_GETPOINTNAME_OFFSET UNITYSDK_OFFSET(0x1AA5D490)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_GETTARGETENTITYPOSROT_OFFSET UNITYSDK_OFFSET(0x1AA5AAA0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AA5D610)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1AA5DCA0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AA5D890)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1AA5E280)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_PROCESSGETLEVELPOINT_OFFSET UNITYSDK_OFFSET(0x1AA5C8B0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA5E3E0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT___BASE_GETENTITYPOSROTBYTARGET_OFFSET UNITYSDK_OFFSET(0x1AA5E3F0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT___BASE_GETTARGETENTITYPOSROT_OFFSET UNITYSDK_OFFSET(0x1AA5E4F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPosRotReferLevelPoint_TypeDefinitionIndex = 40218;

	class ConfigPosRotReferLevelPoint : public ::MoleMole::Config::PosRotTargetOption
	{
	public:
		::MoleMole::Config::DynamicString* LevelPointName; // 0x10
		::MoleMole::Config::DynamicString* BackupPointName; // 0x18
		::MoleMole::Config::LevelPointType LevelPointType; // 0x20
		::MoleMole::Config::LevelPointType BackupPointType; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT__CTOR_OFFSET))(this);
		}

		::System::Boolean GetTargetEntityPosRot(::Struct_2_FA5F50563E60AFBA sourceEntity, ::MoleMole::Config::ReferTargetCoordsOption coordsOption, ::MoleMole::Config::ReferTargetCoordsOption backupCoordsOption, ::UnityEngine::Vector3& targetPos, ::UnityEngine::Quaternion& targetRot, ::Struct_2_FA5F50563E60AFBA& targetEntity, ::UnityEngine::Transform*& targetTrans, ::Struct_2_69EDF57FCDC7C5D3& targetCoords, ::System::Boolean& useDefaultTarget, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::Class_2_167BB37617B940E3* instancedAbility, ::MoleMole::Config::DynamicString* relativeBaseSavePoint, ::MoleMole::Config::DynamicString* relativeTargetSavePoint, ::MoleMole::Config::DynamicString* backupRelativeBaseSavePoint, ::MoleMole::Config::DynamicString* backupRelativeTargetSavePoint, ::System::Boolean forceUseBackUp)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_FA5F50563E60AFBA, ::MoleMole::Config::ReferTargetCoordsOption, ::MoleMole::Config::ReferTargetCoordsOption, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::Struct_2_FA5F50563E60AFBA&, ::UnityEngine::Transform*&, ::Struct_2_69EDF57FCDC7C5D3&, ::System::Boolean&, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_167BB37617B940E3*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_GETTARGETENTITYPOSROT_OFFSET))(this, sourceEntity, coordsOption, backupCoordsOption, targetPos, targetRot, targetEntity, targetTrans, targetCoords, useDefaultTarget, caster, other, instancedAbility, relativeBaseSavePoint, relativeTargetSavePoint, backupRelativeBaseSavePoint, backupRelativeTargetSavePoint, forceUseBackUp);
		}

		::System::Boolean GetEntityPosRotByTarget(::Struct_2_FA5F50563E60AFBA targetEntity, ::Struct_2_FA5F50563E60AFBA sourceEntity, ::MoleMole::Config::ReferTargetCoordsOption coordsOption, ::UnityEngine::Vector3& targetPos, ::UnityEngine::Quaternion& targetRot, ::UnityEngine::Transform*& targetTrans, ::Struct_2_69EDF57FCDC7C5D3& targetCoods, ::System::Boolean useDefault, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::UnityEngine::Transform* findTargetTransform, ::Class_2_167BB37617B940E3* instancedAbility, ::MoleMole::Config::DynamicString* relativeBaseSavePoint, ::MoleMole::Config::DynamicString* relativeTargetSavePoint, ::System::Boolean useLogicPosRot, ::Struct_2_FC595D1A561D8C6F logicPosRotResult)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_FA5F50563E60AFBA, ::Struct_2_FA5F50563E60AFBA, ::MoleMole::Config::ReferTargetCoordsOption, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Transform*&, ::Struct_2_69EDF57FCDC7C5D3&, ::System::Boolean, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::UnityEngine::Transform*, ::Class_2_167BB37617B940E3*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::System::Boolean, ::Struct_2_FC595D1A561D8C6F))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_GETENTITYPOSROTBYTARGET_OFFSET))(this, targetEntity, sourceEntity, coordsOption, targetPos, targetRot, targetTrans, targetCoods, useDefault, caster, other, findTargetTransform, instancedAbility, relativeBaseSavePoint, relativeTargetSavePoint, useLogicPosRot, logicPosRotResult);
		}

		::System::Boolean GetLevelPointPosRot(::Struct_2_FA5F50563E60AFBA sourceEntity, ::MoleMole::Config::ReferTargetCoordsOption coordsOption, ::MoleMole::Config::ReferTargetCoordsOption backupCoordsOption, ::UnityEngine::Vector3& targetPos, ::UnityEngine::Quaternion& targetRot, ::UnityEngine::Transform*& targetTrans, ::System::Boolean& useDefault, ::Struct_2_69EDF57FCDC7C5D3& targetCoods, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::UnityEngine::Transform* findTargetTransform, ::Class_2_167BB37617B940E3* instancedAbility, ::MoleMole::Config::DynamicString* relativeBaseSavePoint, ::MoleMole::Config::DynamicString* relativeTargetSavePoint, ::MoleMole::Config::DynamicString* backupRelativeBaseSavePoint, ::MoleMole::Config::DynamicString* backupRelativeTargetSavePoint, ::System::Boolean forceUseBackUp)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_FA5F50563E60AFBA, ::MoleMole::Config::ReferTargetCoordsOption, ::MoleMole::Config::ReferTargetCoordsOption, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Transform*&, ::System::Boolean&, ::Struct_2_69EDF57FCDC7C5D3&, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::UnityEngine::Transform*, ::Class_2_167BB37617B940E3*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_GETLEVELPOINTPOSROT_OFFSET))(this, sourceEntity, coordsOption, backupCoordsOption, targetPos, targetRot, targetTrans, useDefault, targetCoods, caster, other, findTargetTransform, instancedAbility, relativeBaseSavePoint, relativeTargetSavePoint, backupRelativeBaseSavePoint, backupRelativeTargetSavePoint, forceUseBackUp);
		}

		::System::Boolean ProcessGetLevelPoint(::MoleMole::Battle::Entity* sourceEntity, ::Class_2_167BB37617B940E3* instancedAbility, ::System::Boolean forceBackup, ::System::Boolean& useDefault, ::UnityEngine::Vector3& pos, ::UnityEngine::Quaternion& rot)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_2_167BB37617B940E3*, ::System::Boolean, ::System::Boolean&, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_PROCESSGETLEVELPOINT_OFFSET))(this, sourceEntity, instancedAbility, forceBackup, useDefault, pos, rot);
		}

		::System::String* GetPointName(::Class_2_167BB37617B940E3* instancedAbility, ::MoleMole::Config::DynamicString* pointName)
		{
			return ((::System::String*(*)(::PVOID, ::Class_2_167BB37617B940E3*, ::MoleMole::Config::DynamicString*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_GETPOINTNAME_OFFSET))(this, instancedAbility, pointName);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigPosRotReferLevelPoint* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigPosRotReferLevelPoint*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::PosRotTargetOption* Clone()
		{
			return ((::MoleMole::Config::PosRotTargetOption*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigPosRotReferLevelPoint* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigPosRotReferLevelPoint*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean __base_GetEntityPosRotByTarget(::Struct_2_FA5F50563E60AFBA P0, ::Struct_2_FA5F50563E60AFBA P1, ::MoleMole::Config::ReferTargetCoordsOption P2, ::UnityEngine::Vector3& P3, ::UnityEngine::Quaternion& P4, ::UnityEngine::Transform*& P5, ::Struct_2_69EDF57FCDC7C5D3& P6, ::System::Boolean P7, ::MoleMole::Battle::Entity* P8, ::MoleMole::Battle::Entity* P9, ::UnityEngine::Transform* P10, ::Class_2_167BB37617B940E3* P11, ::MoleMole::Config::DynamicString* P12, ::MoleMole::Config::DynamicString* P13, ::System::Boolean P14, ::Struct_2_FC595D1A561D8C6F P15)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_FA5F50563E60AFBA, ::Struct_2_FA5F50563E60AFBA, ::MoleMole::Config::ReferTargetCoordsOption, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Transform*&, ::Struct_2_69EDF57FCDC7C5D3&, ::System::Boolean, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::UnityEngine::Transform*, ::Class_2_167BB37617B940E3*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::System::Boolean, ::Struct_2_FC595D1A561D8C6F))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT___BASE_GETENTITYPOSROTBYTARGET_OFFSET))(this, P0, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15);
		}

		::System::Boolean __base_GetTargetEntityPosRot(::Struct_2_FA5F50563E60AFBA P0, ::MoleMole::Config::ReferTargetCoordsOption P1, ::MoleMole::Config::ReferTargetCoordsOption P2, ::UnityEngine::Vector3& P3, ::UnityEngine::Quaternion& P4, ::Struct_2_FA5F50563E60AFBA& P5, ::UnityEngine::Transform*& P6, ::Struct_2_69EDF57FCDC7C5D3& P7, ::System::Boolean& P8, ::MoleMole::Battle::Entity* P9, ::MoleMole::Battle::Entity* P10, ::Class_2_167BB37617B940E3* P11, ::MoleMole::Config::DynamicString* P12, ::MoleMole::Config::DynamicString* P13, ::MoleMole::Config::DynamicString* P14, ::MoleMole::Config::DynamicString* P15, ::System::Boolean P16)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_FA5F50563E60AFBA, ::MoleMole::Config::ReferTargetCoordsOption, ::MoleMole::Config::ReferTargetCoordsOption, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::Struct_2_FA5F50563E60AFBA&, ::UnityEngine::Transform*&, ::Struct_2_69EDF57FCDC7C5D3&, ::System::Boolean&, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_167BB37617B940E3*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT___BASE_GETTARGETENTITYPOSROT_OFFSET))(this, P0, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16);
		}
	};
}
