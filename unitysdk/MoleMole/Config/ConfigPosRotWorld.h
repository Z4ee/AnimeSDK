#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/PosRotTargetOption.h"
#include "unitysdk/MoleMole/Config/ReferTargetCoordsOption.h"
#include "unitysdk/Struct_2_69EDF57FCDC7C5D3.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
class Class_2_14986121AA61AD99;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_CONFIG_CONFIGPOSROTWORLD_CLONE_OFFSET UNITYSDK_OFFSET(0x1B913470)
#define MOLEMOLE_CONFIG_CONFIGPOSROTWORLD_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B913420)
#define MOLEMOLE_CONFIG_CONFIGPOSROTWORLD_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B913080)
#define MOLEMOLE_CONFIG_CONFIGPOSROTWORLD_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B913580)
#define MOLEMOLE_CONFIG_CONFIGPOSROTWORLD_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1B913570)
#define MOLEMOLE_CONFIG_CONFIGPOSROTWORLD_GETTARGETENTITYPOSROT_OFFSET UNITYSDK_OFFSET(0x1B912D70)
#define MOLEMOLE_CONFIG_CONFIGPOSROTWORLD_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B9130E0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTWORLD_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B913600)
#define MOLEMOLE_CONFIG_CONFIGPOSROTWORLD_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B913270)
#define MOLEMOLE_CONFIG_CONFIGPOSROTWORLD_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B9137D0)
#define MOLEMOLE_CONFIG_CONFIGPOSROTWORLD__CTOR_OFFSET UNITYSDK_OFFSET(0x1B913930)
#define MOLEMOLE_CONFIG_CONFIGPOSROTWORLD___BASE_GETTARGETENTITYPOSROT_OFFSET UNITYSDK_OFFSET(0x1B913940)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPosRotWorld_TypeDefinitionIndex = 49177;

	class ConfigPosRotWorld : public ::MoleMole::Config::PosRotTargetOption
	{
	public:
		::System::String* NodeName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTWORLD__CTOR_OFFSET))(this);
		}

		::System::Boolean GetTargetEntityPosRot(::Struct_2_FA5F50563E60AFBA sourceEntity, ::MoleMole::Config::ReferTargetCoordsOption coordsOption, ::MoleMole::Config::ReferTargetCoordsOption backupCoordsOption, ::UnityEngine::Vector3& targetPos, ::UnityEngine::Quaternion& targetRot, ::Struct_2_FA5F50563E60AFBA& targetEntity, ::UnityEngine::Transform*& targetTrans, ::Struct_2_69EDF57FCDC7C5D3& targetCoords, ::System::Boolean& useDefaultTarget, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::Class_2_14986121AA61AD99* instancedAbility, ::MoleMole::Config::DynamicString* relativeBaseSavePoint, ::MoleMole::Config::DynamicString* relativeTargetSavePoint, ::MoleMole::Config::DynamicString* backupRelativeBaseSavePoint, ::MoleMole::Config::DynamicString* backupRelativeTargetSavePoint, ::System::Boolean forceUseBackUp)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_FA5F50563E60AFBA, ::MoleMole::Config::ReferTargetCoordsOption, ::MoleMole::Config::ReferTargetCoordsOption, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::Struct_2_FA5F50563E60AFBA&, ::UnityEngine::Transform*&, ::Struct_2_69EDF57FCDC7C5D3&, ::System::Boolean&, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_14986121AA61AD99*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTWORLD_GETTARGETENTITYPOSROT_OFFSET))(this, sourceEntity, coordsOption, backupCoordsOption, targetPos, targetRot, targetEntity, targetTrans, targetCoords, useDefaultTarget, caster, other, instancedAbility, relativeBaseSavePoint, relativeTargetSavePoint, backupRelativeBaseSavePoint, backupRelativeTargetSavePoint, forceUseBackUp);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTWORLD_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTWORLD_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigPosRotWorld* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigPosRotWorld*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTWORLD_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTWORLD_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::PosRotTargetOption* Clone()
		{
			return ((::MoleMole::Config::PosRotTargetOption*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTWORLD_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTWORLD_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTWORLD_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTWORLD_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigPosRotWorld* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigPosRotWorld*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTWORLD_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean __base_GetTargetEntityPosRot(::Struct_2_FA5F50563E60AFBA P0, ::MoleMole::Config::ReferTargetCoordsOption P1, ::MoleMole::Config::ReferTargetCoordsOption P2, ::UnityEngine::Vector3& P3, ::UnityEngine::Quaternion& P4, ::Struct_2_FA5F50563E60AFBA& P5, ::UnityEngine::Transform*& P6, ::Struct_2_69EDF57FCDC7C5D3& P7, ::System::Boolean& P8, ::MoleMole::Battle::Entity* P9, ::MoleMole::Battle::Entity* P10, ::Class_2_14986121AA61AD99* P11, ::MoleMole::Config::DynamicString* P12, ::MoleMole::Config::DynamicString* P13, ::MoleMole::Config::DynamicString* P14, ::MoleMole::Config::DynamicString* P15, ::System::Boolean P16)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_FA5F50563E60AFBA, ::MoleMole::Config::ReferTargetCoordsOption, ::MoleMole::Config::ReferTargetCoordsOption, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::Struct_2_FA5F50563E60AFBA&, ::UnityEngine::Transform*&, ::Struct_2_69EDF57FCDC7C5D3&, ::System::Boolean&, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_14986121AA61AD99*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::MoleMole::Config::DynamicString*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTWORLD___BASE_GETTARGETENTITYPOSROT_OFFSET))(this, P0, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16);
		}
	};
}
