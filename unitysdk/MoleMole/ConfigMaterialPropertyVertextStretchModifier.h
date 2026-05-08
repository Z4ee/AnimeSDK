#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueVertexStretchDirectionType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"

class Class_1_9610394F487FC231;

#define MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x14955530)
#define MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x14955440)
#define MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x149575A0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x149552B0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x149556A0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x149555D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x14955720)
#define MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x149564E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x14955E40)
#define MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x14955860)
#define MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x14957650)
#define MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER___BASE_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x14957660)
#define MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER___BASE_DOONENTER_OFFSET UNITYSDK_OFFSET(0x14957670)
#define MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER___BASE_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x14957750)
#define MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER___BASE_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x149577E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER___BASE_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x14957870)
#define MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER___BASE_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x14957900)
#define MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER___BASE_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x149579D0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyVertextStretchModifier_TypeDefinitionIndex = 55137;

	class ConfigMaterialPropertyVertextStretchModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueTexture _StretchMask; // 0x48
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapNormalUSpeedFx; // 0x78
		::MoleMole::MaterialPropertyModifierValueFloat _StretchDistance; // 0x80
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapAlphaBurstFx; // 0x88
		::MoleMole::MaterialPropertyModifierValueBool _VertexStretch; // 0x90
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueVertexStretchDirectionType _StretchDirection; // 0x93
		::MoleMole::MaterialPropertyModifierValueVector _StretchToPoint; // 0x98
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapColorBurstFx; // 0xB0
		::MoleMole::MaterialPropertyModifierValueVector _StretchVector; // 0xB8
		::MoleMole::MaterialPropertyModifierValueFloat _StretchPercentage; // 0xD0
		::MoleMole::MaterialPropertyModifierValueFloat _NormalThreshold; // 0xD8
		::MoleMole::MaterialPropertyModifierValueVector _MaskRChannelUVSpeed; // 0xE0
		::MoleMole::MaterialPropertyModifierValueFloat _MaskTexFactor; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::Class_1_9610394F487FC231* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_DOWARMUP_OFFSET))(this);
		}

		::System::Void __base_DoAfterOnEnter(::Class_1_9610394F487FC231* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER___BASE_DOAFTERONENTER_OFFSET))(this, P0);
		}

		::System::Void __base_DoOnEnter(::Class_1_9610394F487FC231* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER___BASE_DOONENTER_OFFSET))(this, P0);
		}

		::System::Void __base_DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER___BASE_DOWARMUP_OFFSET))(this);
		}

		::System::Void __base_PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER___BASE_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void __base_PrepareOnExit(::Class_1_9610394F487FC231* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER___BASE_PREPAREONEXIT_OFFSET))(this, P0);
		}

		::System::Void __base_ProcessEnter(::Class_1_9610394F487FC231* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER___BASE_PROCESSENTER_OFFSET))(this, P0, P1);
		}

		::System::Void __base_ProcessExit(::Class_1_9610394F487FC231* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER___BASE_PROCESSEXIT_OFFSET))(this, P0, P1);
		}
	};
}
