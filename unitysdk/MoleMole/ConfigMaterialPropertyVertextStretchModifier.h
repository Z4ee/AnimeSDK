#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueVertexStretchDirectionType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"

class Class_1_413B2BDBE645DB66;

#define MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x170D28A0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x170D27E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x170D4720)
#define MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x170D2680)
#define MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x170D2990)
#define MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x170D2900)
#define MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x170D29D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x170D36B0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x170D3060)
#define MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x170D2AC0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x170D4850)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyVertextStretchModifier_TypeDefinitionIndex = 47454;

	class ConfigMaterialPropertyVertextStretchModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueTexture _StretchMask; // 0x48
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapAlphaBurstFx; // 0x78
		::MoleMole::MaterialPropertyModifierValueFloat _MaskTexFactor; // 0x80
		::MoleMole::MaterialPropertyModifierValueFloat _StretchPercentage; // 0x88
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapNormalUSpeedFx; // 0x90
		::MoleMole::MaterialPropertyModifierValueFloat _StretchDistance; // 0x98
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueVertexStretchDirectionType _StretchDirection; // 0xA0
		::MoleMole::MaterialPropertyModifierValueBool _VertexStretch; // 0xA3
		::MoleMole::MaterialPropertyModifierValueVector _StretchToPoint; // 0xA8
		::MoleMole::MaterialPropertyModifierValueVector _StretchVector; // 0xC0
		::MoleMole::MaterialPropertyModifierValueFloat _NormalThreshold; // 0xD8
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapColorBurstFx; // 0xE0
		::MoleMole::MaterialPropertyModifierValueVector _MaskRChannelUVSpeed; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::Class_1_413B2BDBE645DB66* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_DOWARMUP_OFFSET))(this);
		}
	};
}
