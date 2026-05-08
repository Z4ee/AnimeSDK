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

#define MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_CLONE_OFFSET UNITYSDK_OFFSET(0x12425680)
#define MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_FINDBULLETENTITYBYTAG_OFFSET UNITYSDK_OFFSET(0x12423770)
#define MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x12425600)
#define MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12425080)
#define MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x124257F0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_GETENTITYPOSROTBYTARGET_OFFSET UNITYSDK_OFFSET(0x12424D50)
#define MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x12425780)
#define MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_GETTARGETENTITYPOSROT_OFFSET UNITYSDK_OFFSET(0x12422D20)
#define MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_GETTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x12424F80)
#define MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x124250E0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x12425870)
#define MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x12425450)
#define MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x12426080)
#define MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_RESOLVETARGETENTITY_OFFSET UNITYSDK_OFFSET(0x12423970)
#define MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG__CTOR_OFFSET UNITYSDK_OFFSET(0x124261E0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG___BASE_GETENTITYPOSROTBYTARGET_OFFSET UNITYSDK_OFFSET(0x124261F0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG___BASE_GETTARGETENTITYPOSROT_OFFSET UNITYSDK_OFFSET(0x124263D0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG___BASE_GETTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x124262F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPosRotBulletTag_TypeDefinitionIndex = 55402;

	class ConfigPosRotBulletTag : public ::MoleMole::Config::PosRotTargetOption
	{
	public:
		::MoleMole::Config::DynamicString* CustomKey; // 0x10
		::System::String* BulletTag; // 0x18
		::System::String* AttachPoint; // 0x20
		::System::Boolean IsUseAttachPoint; // 0x28
		::MoleMole::Config::AbilityTargetting OffsetReferTarget; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG__CTOR_OFFSET))(this);
		}

		::System::Boolean GetTargetEntityPosRot(::Struct_2_FA5F50563E60AFBA sourceEntity, ::MoleMole::Config::ReferTargetCoordsOption coordsOption, ::MoleMole::Config::ReferTargetCoordsOption backupCoordsOption, ::UnityEngine::Vector3& targetPos, ::UnityEngine::Quaternion& targetRot, ::Struct_2_FA5F50563E60AFBA& targetEntity, ::UnityEngine::Transform*& targetTrans, ::Struct_2_69EDF57FCDC7C5D3& targetCoords, ::System::Boolean& useDefaultTarget, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::Class_2_167BB37617B940E3* instancedAbility, ::MoleMole::Config::DynamicString* relativeBaseSavePoint, ::MoleMole::Config::DynamicString* relativeTargetSavePoint, ::MoleMole::Config::DynamicString* backupRelativeBaseSavePoint, ::MoleMole::Config::DynamicString* backupRelativeTargetSavePoint, ::System::Boolean forceUseBackUp)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_FA5F50563E60AFBA, ::MoleMole::Config::ReferTargetCoordsOption, ::MoleMole::Config::ReferTargetCoordsOption, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::Struct_2_FA5F50563E60AFBA&, ::UnityEngine::Transform*&, ::Struct_2_69EDF57FCDC7C5D3&, ::System::Boolean&, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_167BB37617B940E3*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_GETTARGETENTITYPOSROT_OFFSET))(this, sourceEntity, coordsOption, backupCoordsOption, targetPos, targetRot, targetEntity, targetTrans, targetCoords, useDefaultTarget, caster, other, instancedAbility, relativeBaseSavePoint, relativeTargetSavePoint, backupRelativeBaseSavePoint, backupRelativeTargetSavePoint, forceUseBackUp);
		}

		::System::Boolean GetEntityPosRotByTarget(::Struct_2_FA5F50563E60AFBA target, ::Struct_2_FA5F50563E60AFBA sourceEntity, ::MoleMole::Config::ReferTargetCoordsOption coordsOption, ::UnityEngine::Vector3& targetPos, ::UnityEngine::Quaternion& targetRot, ::UnityEngine::Transform*& targetTrans, ::Struct_2_69EDF57FCDC7C5D3& targetCoords, ::System::Boolean useDefault, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::UnityEngine::Transform* findTargetTransform, ::Class_2_167BB37617B940E3* instancedAbility, ::MoleMole::Config::DynamicString* relativeBaseSavePoint, ::MoleMole::Config::DynamicString* relativeTargetSavePoint, ::System::Boolean useLogicPosAndRot, ::Struct_2_FC595D1A561D8C6F logicPosRot)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_FA5F50563E60AFBA, ::Struct_2_FA5F50563E60AFBA, ::MoleMole::Config::ReferTargetCoordsOption, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Transform*&, ::Struct_2_69EDF57FCDC7C5D3&, ::System::Boolean, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::UnityEngine::Transform*, ::Class_2_167BB37617B940E3*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::System::Boolean, ::Struct_2_FC595D1A561D8C6F))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_GETENTITYPOSROTBYTARGET_OFFSET))(this, target, sourceEntity, coordsOption, targetPos, targetRot, targetTrans, targetCoords, useDefault, caster, other, findTargetTransform, instancedAbility, relativeBaseSavePoint, relativeTargetSavePoint, useLogicPosAndRot, logicPosRot);
		}

		::Struct_2_FA5F50563E60AFBA GetTargetEntity(::MoleMole::Battle::Entity* sourceEntity, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::Class_2_167BB37617B940E3* instancedAbility)
		{
			return ((::Struct_2_FA5F50563E60AFBA(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_GETTARGETENTITY_OFFSET))(this, sourceEntity, caster, other, instancedAbility);
		}

		::MoleMole::Battle::Entity* FindBulletEntityByTag(::MoleMole::Battle::Entity* sourceEntity)
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_FINDBULLETENTITYBYTAG_OFFSET))(this, sourceEntity);
		}

		::Struct_2_FA5F50563E60AFBA ResolveTargetEntity(::Struct_2_FA5F50563E60AFBA actor, ::MoleMole::Config::AbilityTargetting referTarget, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::MoleMole::Config::DynamicString* customKey, ::Class_2_167BB37617B940E3* instancedAbility)
		{
			return ((::Struct_2_FA5F50563E60AFBA(*)(::PVOID, ::Struct_2_FA5F50563E60AFBA, ::MoleMole::Config::AbilityTargetting, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Config::DynamicString*, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_RESOLVETARGETENTITY_OFFSET))(this, actor, referTarget, caster, other, customKey, instancedAbility);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigPosRotBulletTag* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigPosRotBulletTag*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::PosRotTargetOption* Clone()
		{
			return ((::MoleMole::Config::PosRotTargetOption*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigPosRotBulletTag* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigPosRotBulletTag*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean __base_GetEntityPosRotByTarget(::Struct_2_FA5F50563E60AFBA P0, ::Struct_2_FA5F50563E60AFBA P1, ::MoleMole::Config::ReferTargetCoordsOption P2, ::UnityEngine::Vector3& P3, ::UnityEngine::Quaternion& P4, ::UnityEngine::Transform*& P5, ::Struct_2_69EDF57FCDC7C5D3& P6, ::System::Boolean P7, ::MoleMole::Battle::Entity* P8, ::MoleMole::Battle::Entity* P9, ::UnityEngine::Transform* P10, ::Class_2_167BB37617B940E3* P11, ::MoleMole::Config::DynamicString* P12, ::MoleMole::Config::DynamicString* P13, ::System::Boolean P14, ::Struct_2_FC595D1A561D8C6F P15)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_FA5F50563E60AFBA, ::Struct_2_FA5F50563E60AFBA, ::MoleMole::Config::ReferTargetCoordsOption, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Transform*&, ::Struct_2_69EDF57FCDC7C5D3&, ::System::Boolean, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::UnityEngine::Transform*, ::Class_2_167BB37617B940E3*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::System::Boolean, ::Struct_2_FC595D1A561D8C6F))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG___BASE_GETENTITYPOSROTBYTARGET_OFFSET))(this, P0, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15);
		}

		::Struct_2_FA5F50563E60AFBA __base_GetTargetEntity(::MoleMole::Battle::Entity* P0, ::MoleMole::Battle::Entity* P1, ::MoleMole::Battle::Entity* P2, ::Class_2_167BB37617B940E3* P3)
		{
			return ((::Struct_2_FA5F50563E60AFBA(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG___BASE_GETTARGETENTITY_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Boolean __base_GetTargetEntityPosRot(::Struct_2_FA5F50563E60AFBA P0, ::MoleMole::Config::ReferTargetCoordsOption P1, ::MoleMole::Config::ReferTargetCoordsOption P2, ::UnityEngine::Vector3& P3, ::UnityEngine::Quaternion& P4, ::Struct_2_FA5F50563E60AFBA& P5, ::UnityEngine::Transform*& P6, ::Struct_2_69EDF57FCDC7C5D3& P7, ::System::Boolean& P8, ::MoleMole::Battle::Entity* P9, ::MoleMole::Battle::Entity* P10, ::Class_2_167BB37617B940E3* P11, ::MoleMole::Config::DynamicString* P12, ::MoleMole::Config::DynamicString* P13, ::MoleMole::Config::DynamicString* P14, ::MoleMole::Config::DynamicString* P15, ::System::Boolean P16)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_FA5F50563E60AFBA, ::MoleMole::Config::ReferTargetCoordsOption, ::MoleMole::Config::ReferTargetCoordsOption, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::Struct_2_FA5F50563E60AFBA&, ::UnityEngine::Transform*&, ::Struct_2_69EDF57FCDC7C5D3&, ::System::Boolean&, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_167BB37617B940E3*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTBULLETTAG___BASE_GETTARGETENTITYPOSROT_OFFSET))(this, P0, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16);
		}
	};
}
