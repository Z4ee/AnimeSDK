#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_248DACE3BB3053DD_Enum_3_208B758CC2D6E4CF.h"
#include "unitysdk/Enum_3_31420365C5F30A4E_1.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
class Class_2_167BB37617B940E3;
class Class_3_248DACE3BB3053DD;
class Class_3_DFD5D1FDB9D2A4AC;
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGROTATION_APPLYCONFIGROTATIONSTEER_OFFSET UNITYSDK_OFFSET(0x158B29E0)
#define MOLEMOLE_CONFIG_CONFIGROTATION_CLONE_OFFSET UNITYSDK_OFFSET(0x158B2EE0)
#define MOLEMOLE_CONFIG_CONFIGROTATION_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x158B2ED0)
#define MOLEMOLE_CONFIG_CONFIGROTATION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x158B3990)
#define MOLEMOLE_CONFIG_CONFIGROTATION_FROMFLX_OFFSET UNITYSDK_OFFSET(0x158B3050)
#define MOLEMOLE_CONFIG_CONFIGROTATION_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x158B2FE0)
#define MOLEMOLE_CONFIG_CONFIGROTATION_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x158B39F0)
#define MOLEMOLE_CONFIG_CONFIGROTATION_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x158B30D0)
#define MOLEMOLE_CONFIG_CONFIGROTATION_ONENDROTATION_OFFSET UNITYSDK_OFFSET(0x158B2810)
#define MOLEMOLE_CONFIG_CONFIGROTATION_ONSTARTROTATION_OFFSET UNITYSDK_OFFSET(0x158B2670)
#define MOLEMOLE_CONFIG_CONFIGROTATION_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x158B3E00)
#define MOLEMOLE_CONFIG_CONFIGROTATION_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x158B38C0)
#define MOLEMOLE_CONFIG_CONFIGROTATION_SETUP_OFFSET UNITYSDK_OFFSET(0x158B24B0)
#define MOLEMOLE_CONFIG_CONFIGROTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x158B2490)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigRotation_TypeDefinitionIndex = 85618;

	class ConfigRotation : public ::System::Object
	{
	public:
		// static const ::System::Single REACH_THRESHOLD; // 0x0
		::Enum_3_31420365C5F30A4E_1 TimesUpRotateOption; // 0x10
		::System::Boolean _isRotationStarted; // 0x14
		::System::Boolean FreezeRotateXZ; // 0x15
		::System::Boolean FreezeRotateY; // 0x16
		::System::Boolean AllowRootMotionRotation; // 0x17
		::System::Single Duration; // 0x18
		::UnityEngine::Vector3 _originalForward; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATION__CTOR_OFFSET))(this);
		}

		::System::Void Setup(::Class_3_248DACE3BB3053DD* movementComponent, ::MoleMole::Battle::Entity* other, ::Class_3_248DACE3BB3053DD_Enum_3_208B758CC2D6E4CF& rotateState, ::MoleMole::Battle::Entity* caster, ::Class_2_167BB37617B940E3* instancedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::Class_3_248DACE3BB3053DD_Enum_3_208B758CC2D6E4CF&, ::MoleMole::Battle::Entity*, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATION_SETUP_OFFSET))(this, movementComponent, other, rotateState, caster, instancedAbility);
		}

		::System::Void OnStartRotation(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATION_ONSTARTROTATION_OFFSET))(this, entity);
		}

		::System::Void OnEndRotation(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATION_ONENDROTATION_OFFSET))(this, entity);
		}

		::System::Void ApplyConfigRotationSteer(::Class_3_DFD5D1FDB9D2A4AC* modelComponent, ::UnityEngine::Vector3 steerDir, ::System::Boolean isInstant, ::UnityEngine::Vector3 up, ::System::Boolean applyRotationDirectly)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_DFD5D1FDB9D2A4AC*, ::UnityEngine::Vector3, ::System::Boolean, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATION_APPLYCONFIGROTATIONSTEER_OFFSET))(this, modelComponent, steerDir, isInstant, up, applyRotationDirectly);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATION_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigRotation* Clone()
		{
			return ((::MoleMole::Config::ConfigRotation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATION_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATION_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATION_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATION_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigRotation* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigRotation*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATION_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATION_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATION_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigRotation* ParseFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigRotation*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATION_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}
	};
}
