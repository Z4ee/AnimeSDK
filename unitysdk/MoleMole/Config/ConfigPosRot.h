#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ReferTargetCoordsOption.h"
#include "unitysdk/Struct_2_4B21424E3D00C7BC.h"
#include "unitysdk/Struct_2_69EDF57FCDC7C5D3.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"
#include "unitysdk/Struct_2_FC595D1A561D8C6F.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
class Class_2_167BB37617B940E3;
class Class_3_DFD5D1FDB9D2A4AC;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicString; }
namespace MoleMole::Config { class OffsetGroup; }
namespace MoleMole::Config { class PosRotTargetOption; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_CONFIG_CONFIGPOSROT_CHOOSEENTITYPOSROTBYTARGET_OFFSET UNITYSDK_OFFSET(0x181CBC50)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_CHOOSEENTITYPOSROT_OFFSET UNITYSDK_OFFSET(0x181CB900)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_DORAYCASTGROUND_OFFSET UNITYSDK_OFFSET(0x181CEE50)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_DRAWPOSROT_OFFSET UNITYSDK_OFFSET(0x181CB350)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x181CFF20)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x181D0460)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_GETATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x181CF450)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_GETFINALPOSROT_OFFSET UNITYSDK_OFFSET(0x181CDEE0)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_GETPOSROOTANDRESULT_OFFSET UNITYSDK_OFFSET(0x181CD4B0)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_GETPOSROTBYTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x181CD0A0)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_GETPOSROTINFO_OFFSET UNITYSDK_OFFSET(0x181CF510)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_GETPOSROT_1_OFFSET UNITYSDK_OFFSET(0x181CC0F0)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_GETPOSROT_OFFSET UNITYSDK_OFFSET(0x181CB5B0)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x181CFF80)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x181D04E0)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_ISREFERTARGETCAMERA_OFFSET UNITYSDK_OFFSET(0x181CFE10)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_RAWGETPOSROOT_OFFSET UNITYSDK_OFFSET(0x181CC820)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x181CFDC0)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_TRYGETTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x181CBF60)
#define MOLEMOLE_CONFIG_CONFIGPOSROT__CCTOR_OFFSET UNITYSDK_OFFSET(0x181D14B0)
#define MOLEMOLE_CONFIG_CONFIGPOSROT__CTOR_OFFSET UNITYSDK_OFFSET(0x181CB830)
#define MOLEMOLE_CONFIG_CONFIGPOSROT___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x181D1630)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPosRot_TypeDefinitionIndex = 54018;

	class ConfigPosRot : public ::System::Object
	{
	public:
		static ::MoleMole::Config::ConfigPosRot** StaticGet_DEFAULT()
		{
			return (::MoleMole::Config::ConfigPosRot**)Il2CppClass::FromTypeDefinitionIndex(ConfigPosRot_TypeDefinitionIndex)->GetStaticField(0x44B30);
		}
		static ::Struct_2_FC595D1A561D8C6F* StaticGet_cachedPosRot()
		{
			return (::Struct_2_FC595D1A561D8C6F*)Il2CppClass::FromTypeDefinitionIndex(ConfigPosRot_TypeDefinitionIndex)->GetStaticField(0x10A90);
		}
		// static const ::System::Single DEFAULT_RAYCAST_LENGTH; // 0x0
		::MoleMole::Config::DynamicString* BackupRelativeBaseSavePoint; // 0x10
		::MoleMole::Config::DynamicString* BackupRelativeTargetSavePoint; // 0x18
		::MoleMole::Config::DynamicString* RelativeBaseSavePoint; // 0x20
		::MoleMole::Config::PosRotTargetOption* TargetOption; // 0x28
		::MoleMole::Config::DynamicString* RelativeTargetSavePoint; // 0x30
		::MoleMole::Config::OffsetGroup* Offset; // 0x38
		::UnityEngine::RaycastHit _hitInfo; // 0x40
		::System::Boolean NeedRaycastGround; // 0x74
		::MoleMole::Config::ReferTargetCoordsOption CoordsOption; // 0x78
		::MoleMole::Config::ReferTargetCoordsOption BackupCoordsOption; // 0x7C
		::System::Single RaycastGroundOffset; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT__CCTOR_OFFSET))();
		}

		::System::Void DrawPosRot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_DRAWPOSROT_OFFSET))(this);
		}

		::System::Boolean ChooseEntityPosRot(::Struct_2_FA5F50563E60AFBA actor, ::MoleMole::Config::PosRotTargetOption* targetOption, ::UnityEngine::Vector3& targetPos, ::UnityEngine::Quaternion& targetRot, ::Struct_2_FA5F50563E60AFBA& targetEntity, ::UnityEngine::Transform*& targetTrans, ::Struct_2_69EDF57FCDC7C5D3& targetCoords, ::System::Boolean& useDefaultTarget, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::Class_2_167BB37617B940E3* instancedAbility, ::System::Boolean forceUseBackUp)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_FA5F50563E60AFBA, ::MoleMole::Config::PosRotTargetOption*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::Struct_2_FA5F50563E60AFBA&, ::UnityEngine::Transform*&, ::Struct_2_69EDF57FCDC7C5D3&, ::System::Boolean&, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_167BB37617B940E3*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_CHOOSEENTITYPOSROT_OFFSET))(this, actor, targetOption, targetPos, targetRot, targetEntity, targetTrans, targetCoords, useDefaultTarget, caster, other, instancedAbility, forceUseBackUp);
		}

		::System::Boolean ChooseEntityPosRotByTarget(::Struct_2_FA5F50563E60AFBA actor, ::Struct_2_FA5F50563E60AFBA targetEntity, ::MoleMole::Config::PosRotTargetOption* targetOption, ::UnityEngine::Vector3& targetPos, ::UnityEngine::Quaternion& targetRot, ::UnityEngine::Transform*& targetTrans, ::Struct_2_69EDF57FCDC7C5D3& targetCoords, ::Class_2_167BB37617B940E3* instancedAbility)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_FA5F50563E60AFBA, ::Struct_2_FA5F50563E60AFBA, ::MoleMole::Config::PosRotTargetOption*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Transform*&, ::Struct_2_69EDF57FCDC7C5D3&, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_CHOOSEENTITYPOSROTBYTARGET_OFFSET))(this, actor, targetEntity, targetOption, targetPos, targetRot, targetTrans, targetCoords, instancedAbility);
		}

		::System::Boolean TryGetTargetEntity(::MoleMole::Battle::Entity* sourceEntity, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::Struct_2_FA5F50563E60AFBA& targetEntity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Struct_2_FA5F50563E60AFBA&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_TRYGETTARGETENTITY_OFFSET))(this, sourceEntity, caster, other, targetEntity);
		}

		::System::Boolean GetPosRot(::MoleMole::Battle::Entity* sourceEntity, ::Struct_2_FC595D1A561D8C6F& posRot, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::Class_2_167BB37617B940E3* instancedAbility)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Struct_2_FC595D1A561D8C6F&, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_GETPOSROT_OFFSET))(this, sourceEntity, posRot, caster, other, instancedAbility);
		}

		::System::Boolean GetPosRot_1(::Struct_2_FA5F50563E60AFBA sourceEntity, ::Struct_2_FC595D1A561D8C6F& posRot, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::System::Boolean isUseCachedPosRot, ::Class_2_167BB37617B940E3* instancedAbility)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_FA5F50563E60AFBA, ::Struct_2_FC595D1A561D8C6F&, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_GETPOSROT_1_OFFSET))(this, sourceEntity, posRot, caster, other, isUseCachedPosRot, instancedAbility);
		}

		::System::Boolean GetPosRotByTargetEntity(::Struct_2_FA5F50563E60AFBA sourceEntity, ::Struct_2_FA5F50563E60AFBA targetEntity, ::Struct_2_FC595D1A561D8C6F& posRot, ::Class_2_167BB37617B940E3* instancedAbility)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_FA5F50563E60AFBA, ::Struct_2_FA5F50563E60AFBA, ::Struct_2_FC595D1A561D8C6F&, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_GETPOSROTBYTARGETENTITY_OFFSET))(this, sourceEntity, targetEntity, posRot, instancedAbility);
		}

		::System::Boolean GetPosRootAndResult(::Struct_2_FA5F50563E60AFBA sourceEntity, ::Struct_2_FC595D1A561D8C6F& posRot, ::Struct_2_FA5F50563E60AFBA& findTarget, ::System::Boolean& useDefaultTarget, ::UnityEngine::Vector3 changePosVectorValue, ::System::Boolean changePosOffset, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::Class_2_167BB37617B940E3* instancedAbility, ::System::Boolean isReverseOffsetX, ::System::Boolean forceUseBackUp)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_FA5F50563E60AFBA, ::Struct_2_FC595D1A561D8C6F&, ::Struct_2_FA5F50563E60AFBA&, ::System::Boolean&, ::UnityEngine::Vector3, ::System::Boolean, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_167BB37617B940E3*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_GETPOSROOTANDRESULT_OFFSET))(this, sourceEntity, posRot, findTarget, useDefaultTarget, changePosVectorValue, changePosOffset, caster, other, instancedAbility, isReverseOffsetX, forceUseBackUp);
		}

		::System::Boolean RawGetPosRoot(::Struct_2_FA5F50563E60AFBA sourceEntity, ::Struct_2_FC595D1A561D8C6F& posRot, ::UnityEngine::Vector3 changePosVectorValue, ::System::Boolean changePosOffset, ::System::Boolean isReverseOffsetX, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::System::Boolean isUseCachedPosRot, ::Class_2_167BB37617B940E3* instancedAbility)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_FA5F50563E60AFBA, ::Struct_2_FC595D1A561D8C6F&, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_RAWGETPOSROOT_OFFSET))(this, sourceEntity, posRot, changePosVectorValue, changePosOffset, isReverseOffsetX, caster, other, isUseCachedPosRot, instancedAbility);
		}

		::System::Boolean GetFinalPosRot(::MoleMole::Battle::Entity* sourceEntity, ::UnityEngine::Vector3 targetPos, ::UnityEngine::Quaternion targetRot, ::Struct_2_69EDF57FCDC7C5D3 targetCoords, ::Struct_2_FC595D1A561D8C6F& posRot, ::UnityEngine::Vector3 changePosVectorValue, ::System::Boolean changePosOffset, ::System::Boolean useDefaultTarget, ::System::Boolean isReverseOffsetX, ::System::Boolean isUseCachedPosRot)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::Struct_2_69EDF57FCDC7C5D3, ::Struct_2_FC595D1A561D8C6F&, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_GETFINALPOSROT_OFFSET))(this, sourceEntity, targetPos, targetRot, targetCoords, posRot, changePosVectorValue, changePosOffset, useDefaultTarget, isReverseOffsetX, isUseCachedPosRot);
		}

		::System::Boolean DoRayCastGround(::Class_3_DFD5D1FDB9D2A4AC* sourceEntityModel, ::UnityEngine::Vector3 startPos, ::System::Single& raycastY)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_DFD5D1FDB9D2A4AC*, ::UnityEngine::Vector3, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_DORAYCASTGROUND_OFFSET))(this, sourceEntityModel, startPos, raycastY);
		}

		::UnityEngine::Transform* GetAttachPoint(::MoleMole::Battle::Entity* sourceEntity)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_GETATTACHPOINT_OFFSET))(this, sourceEntity);
		}

		::System::Boolean GetPosRotInfo(::MoleMole::Battle::Entity* actor, ::Struct_2_4B21424E3D00C7BC& posRotInfo, ::Class_2_167BB37617B940E3* instancedAbility)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Struct_2_4B21424E3D00C7BC&, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_GETPOSROTINFO_OFFSET))(this, actor, posRotInfo, instancedAbility);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_TOSTRING_OFFSET))(this);
		}

		::System::Boolean IsReferTargetCamera(::MoleMole::Battle::Entity* sourceEntity, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::Class_2_167BB37617B940E3* instancedAbility, ::System::Boolean forceUseBackUp)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_167BB37617B940E3*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_ISREFERTARGETCAMERA_OFFSET))(this, sourceEntity, caster, other, instancedAbility, forceUseBackUp);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
