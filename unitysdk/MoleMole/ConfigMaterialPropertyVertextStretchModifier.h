#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueVertexStretchDirectionType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"

class Class_1_413B2BDBE645DB66;

#define MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x1B4FCA80)
#define MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_DOONENTER_FORUSER_OFFSET UNITYSDK_OFFSET(0x1B4FEA20)
#define MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x1B4FC9C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x1B4FE8F0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_ONDONE_OFFSET UNITYSDK_OFFSET(0x1B4FEA90)
#define MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x1B4FC860)
#define MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x1B4FCB70)
#define MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x1B4FCAE0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x1B4FCBB0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x1B4FD890)
#define MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x1B4FD240)
#define MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x1B4FCCA0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4FEB10)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyVertextStretchModifier_TypeDefinitionIndex = 50777;

	class ConfigMaterialPropertyVertextStretchModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueTexture _StretchMask; // 0x48
		::MoleMole::MaterialPropertyModifierValueFloat _NormalThreshold; // 0x78
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapAlphaBurstFx; // 0x80
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapColorBurstFx; // 0x88
		::MoleMole::MaterialPropertyModifierValueVector _MaskRChannelUVSpeed; // 0x90
		::MoleMole::MaterialPropertyModifierValueFloat _StretchPercentage; // 0xA8
		::MoleMole::MaterialPropertyModifierValueVector _StretchToPoint; // 0xB0
		::MoleMole::MaterialPropertyModifierValueBool _VertexStretch; // 0xC8
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueVertexStretchDirectionType _StretchDirection; // 0xCB
		::MoleMole::MaterialPropertyModifierValueVector _StretchVector; // 0xD0
		::MoleMole::MaterialPropertyModifierValueFloat _MaskTexFactor; // 0xE8
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapNormalUSpeedFx; // 0xF0
		::MoleMole::MaterialPropertyModifierValueFloat _StretchDistance; // 0xF8

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

		::System::Void DoOnEnter_ForUser(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_DOONENTER_FORUSER_OFFSET))(this, instance);
		}

		::System::Void OnDone(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYVERTEXTSTRETCHMODIFIER_ONDONE_OFFSET))(this, instance);
		}
	};
}
