#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/MoleMole/Config/ReferTargetCoordsOption.h"
#include "unitysdk/Struct_2_69EDF57FCDC7C5D3.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"
#include "unitysdk/Struct_2_FC595D1A561D8C6F.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
class Class_2_167BB37617B940E3;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicString; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_CONFIG_POSROTTARGETOPTION_CLONE_OFFSET UNITYSDK_OFFSET(0x1494D000)
#define MOLEMOLE_CONFIG_POSROTTARGETOPTION_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1494CFF0)
#define MOLEMOLE_CONFIG_POSROTTARGETOPTION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1494CE80)
#define MOLEMOLE_CONFIG_POSROTTARGETOPTION_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1494D170)
#define MOLEMOLE_CONFIG_POSROTTARGETOPTION_GETATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x1494CC00)
#define MOLEMOLE_CONFIG_POSROTTARGETOPTION_GETENTITYPOSROTBYTARGET_OFFSET UNITYSDK_OFFSET(0x1494C9F0)
#define MOLEMOLE_CONFIG_POSROTTARGETOPTION_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1494D100)
#define MOLEMOLE_CONFIG_POSROTTARGETOPTION_GETOFFSETREFERTARGET_OFFSET UNITYSDK_OFFSET(0x1494CE20)
#define MOLEMOLE_CONFIG_POSROTTARGETOPTION_GETSAVEPOINTPOSROT_OFFSET UNITYSDK_OFFSET(0x1494CD30)
#define MOLEMOLE_CONFIG_POSROTTARGETOPTION_GETTARGETENTITYPOSROT_OFFSET UNITYSDK_OFFSET(0x1494C7E0)
#define MOLEMOLE_CONFIG_POSROTTARGETOPTION_GETTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x1494CC90)
#define MOLEMOLE_CONFIG_POSROTTARGETOPTION_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1494CE90)
#define MOLEMOLE_CONFIG_POSROTTARGETOPTION_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1494D1D0)
#define MOLEMOLE_CONFIG_POSROTTARGETOPTION_ISREFERTARGETCAMERA_OFFSET UNITYSDK_OFFSET(0x1494C740)
#define MOLEMOLE_CONFIG_POSROTTARGETOPTION_ISSAVEPOINTOPTION_OFFSET UNITYSDK_OFFSET(0x1494CC50)
#define MOLEMOLE_CONFIG_POSROTTARGETOPTION_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1494CEA0)
#define MOLEMOLE_CONFIG_POSROTTARGETOPTION_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1494D1E0)
#define MOLEMOLE_CONFIG_POSROTTARGETOPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1494D2B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int PosRotTargetOption_TypeDefinitionIndex = 54891;

	class PosRotTargetOption : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POSROTTARGETOPTION__CTOR_OFFSET))(this);
		}

		::System::Boolean IsReferTargetCamera(::Struct_2_FA5F50563E60AFBA sourceEntity, ::MoleMole::Config::ReferTargetCoordsOption coordsOption, ::MoleMole::Config::ReferTargetCoordsOption backupCoordsOption, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::Class_2_167BB37617B940E3* instancedAbility, ::System::Boolean forceUseBackUp)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_FA5F50563E60AFBA, ::MoleMole::Config::ReferTargetCoordsOption, ::MoleMole::Config::ReferTargetCoordsOption, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_167BB37617B940E3*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POSROTTARGETOPTION_ISREFERTARGETCAMERA_OFFSET))(this, sourceEntity, coordsOption, backupCoordsOption, caster, other, instancedAbility, forceUseBackUp);
		}

		::System::Boolean GetTargetEntityPosRot(::Struct_2_FA5F50563E60AFBA sourceEntity, ::MoleMole::Config::ReferTargetCoordsOption coordsOption, ::MoleMole::Config::ReferTargetCoordsOption backupCoordsOption, ::UnityEngine::Vector3& targetPos, ::UnityEngine::Quaternion& targetRot, ::Struct_2_FA5F50563E60AFBA& targetEntity, ::UnityEngine::Transform*& targetTrans, ::Struct_2_69EDF57FCDC7C5D3& targetCoords, ::System::Boolean& useDefaultTarget, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::Class_2_167BB37617B940E3* instancedAbility, ::MoleMole::Config::DynamicString* relativeBaseSavePoint, ::MoleMole::Config::DynamicString* relativeTargetSavePoint, ::MoleMole::Config::DynamicString* backupRelativeBaseSavePoint, ::MoleMole::Config::DynamicString* backupRelativeTargetSavePoint, ::System::Boolean forceUseBackUp)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_FA5F50563E60AFBA, ::MoleMole::Config::ReferTargetCoordsOption, ::MoleMole::Config::ReferTargetCoordsOption, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::Struct_2_FA5F50563E60AFBA&, ::UnityEngine::Transform*&, ::Struct_2_69EDF57FCDC7C5D3&, ::System::Boolean&, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_167BB37617B940E3*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POSROTTARGETOPTION_GETTARGETENTITYPOSROT_OFFSET))(this, sourceEntity, coordsOption, backupCoordsOption, targetPos, targetRot, targetEntity, targetTrans, targetCoords, useDefaultTarget, caster, other, instancedAbility, relativeBaseSavePoint, relativeTargetSavePoint, backupRelativeBaseSavePoint, backupRelativeTargetSavePoint, forceUseBackUp);
		}

		::System::Boolean GetEntityPosRotByTarget(::Struct_2_FA5F50563E60AFBA targetEntity, ::Struct_2_FA5F50563E60AFBA sourceEntity, ::MoleMole::Config::ReferTargetCoordsOption coordsOption, ::UnityEngine::Vector3& targetPos, ::UnityEngine::Quaternion& targetRot, ::UnityEngine::Transform*& targetTrans, ::Struct_2_69EDF57FCDC7C5D3& targetCoods, ::System::Boolean useDefault, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::UnityEngine::Transform* findTargetTransform, ::Class_2_167BB37617B940E3* instancedAbility, ::MoleMole::Config::DynamicString* relativeBaseSavePoint, ::MoleMole::Config::DynamicString* relativeTargetSavePoint, ::System::Boolean useLogicPosAndRot, ::Struct_2_FC595D1A561D8C6F logicPosRot)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_FA5F50563E60AFBA, ::Struct_2_FA5F50563E60AFBA, ::MoleMole::Config::ReferTargetCoordsOption, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Transform*&, ::Struct_2_69EDF57FCDC7C5D3&, ::System::Boolean, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::UnityEngine::Transform*, ::Class_2_167BB37617B940E3*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::System::Boolean, ::Struct_2_FC595D1A561D8C6F))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POSROTTARGETOPTION_GETENTITYPOSROTBYTARGET_OFFSET))(this, targetEntity, sourceEntity, coordsOption, targetPos, targetRot, targetTrans, targetCoods, useDefault, caster, other, findTargetTransform, instancedAbility, relativeBaseSavePoint, relativeTargetSavePoint, useLogicPosAndRot, logicPosRot);
		}

		::UnityEngine::Transform* GetAttachPoint(::MoleMole::Battle::Entity* sourceEntity, ::Class_2_167BB37617B940E3* instancedAbility)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POSROTTARGETOPTION_GETATTACHPOINT_OFFSET))(this, sourceEntity, instancedAbility);
		}

		::System::Boolean IsSavePointOption()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POSROTTARGETOPTION_ISSAVEPOINTOPTION_OFFSET))(this);
		}

		::Struct_2_FA5F50563E60AFBA GetTargetEntity(::MoleMole::Battle::Entity* sourceEntity, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::Class_2_167BB37617B940E3* instancedAbility)
		{
			return ((::Struct_2_FA5F50563E60AFBA(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POSROTTARGETOPTION_GETTARGETENTITY_OFFSET))(this, sourceEntity, caster, other, instancedAbility);
		}

		::System::Boolean GetSavePointPosRot(::MoleMole::Battle::Entity* sourceEntity, ::Struct_2_FC595D1A561D8C6F& posRot, ::System::Boolean& useBackUp, ::MoleMole::Config::ReferTargetCoordsOption coordsOption, ::MoleMole::Battle::Entity* caster, ::MoleMole::Config::DynamicString* relativeBaseSavePoint, ::Class_2_167BB37617B940E3* instancedAbility)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Struct_2_FC595D1A561D8C6F&, ::System::Boolean&, ::MoleMole::Config::ReferTargetCoordsOption, ::MoleMole::Battle::Entity*, ::MoleMole::Config::DynamicString*, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POSROTTARGETOPTION_GETSAVEPOINTPOSROT_OFFSET))(this, sourceEntity, posRot, useBackUp, coordsOption, caster, relativeBaseSavePoint, instancedAbility);
		}

		::System::Void GetOffsetReferTarget(::MoleMole::Config::AbilityTargetting& offsetReferTarget, ::MoleMole::Config::AbilityTargetting& backupOffsetReferTarget)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AbilityTargetting&, ::MoleMole::Config::AbilityTargetting&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POSROTTARGETOPTION_GETOFFSETREFERTARGET_OFFSET))(this, offsetReferTarget, backupOffsetReferTarget);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POSROTTARGETOPTION_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POSROTTARGETOPTION_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::PosRotTargetOption* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::PosRotTargetOption*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POSROTTARGETOPTION_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POSROTTARGETOPTION_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::PosRotTargetOption* Clone()
		{
			return ((::MoleMole::Config::PosRotTargetOption*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POSROTTARGETOPTION_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POSROTTARGETOPTION_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POSROTTARGETOPTION_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POSROTTARGETOPTION_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::PosRotTargetOption* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::PosRotTargetOption*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_POSROTTARGETOPTION_PARSEFROMFLX_OFFSET))(node);
		}
	};
}
