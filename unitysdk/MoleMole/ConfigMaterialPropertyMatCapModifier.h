#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueMatCapBlendMode.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueMatCapType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"

class Class_1_413B2BDBE645DB66;

#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x1AA7A100)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x1AA7A010)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x1AA7F1C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x1AA79E50)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x1AA7A220)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x1AA7A160)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x1AA7A280)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x1AA7C560)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x1AA7B420)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x1AA7A3D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA7F450)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyMatCapModifier_TypeDefinitionIndex = 56517;

	class ConfigMaterialPropertyMatCapModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueTexture _MatCapTex; // 0x48
		::MoleMole::MaterialPropertyModifierValueTexture _MatCapBumpMapFx; // 0x78
		::MoleMole::MaterialPropertyModifierValueTexture _MatCapTexFx; // 0xA8
		::MoleMole::MaterialPropertyModifierValueVector _RefractParam5; // 0xD8
		::MoleMole::MaterialPropertyModifierValueColor _MatCapColorTint2; // 0xF0
		::MoleMole::MaterialPropertyModifierValueVector _MatCapParams5; // 0x104
		::MoleMole::MaterialPropertyModifierValueVector _RefractParam; // 0x11C
		::MoleMole::MaterialPropertyModifierValueVector _RefractParam4; // 0x134
		::MoleMole::MaterialPropertyModifierValueVector _MatCapParams2; // 0x14C
		::MoleMole::MaterialPropertyModifierValueColor _MatCapColorTint4; // 0x164
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapVSpeedFx; // 0x178
		::MoleMole::MaterialPropertyModifierValueColor _MatCapColorTint; // 0x180
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapFX; // 0x194
		::MoleMole::MaterialPropertyModifierValueVector _MatCapParams3; // 0x19C
		::System::Single _MatCapAlphaBurstFxDefault; // 0x1B4
		::MoleMole::MaterialPropertyModifierValueVector _MatCapReractParams; // 0x1B8
		::MoleMole::MaterialPropertyModifierValueVector _MatCapReractParams5; // 0x1D0
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapNormalUSpeedFx; // 0x1E8
		::MoleMole::MaterialPropertyModifierValueFloat _VertexOffset; // 0x1F0
		::MoleMole::MaterialPropertyModifierValueVector _MatCapReractParams2; // 0x1F8
		::System::Single _MatCapAlphaBurstFxRef; // 0x210
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapNormalVSpeedFx; // 0x214
		::MoleMole::MaterialPropertyModifierValueVector _MatCapReractParams4; // 0x21C
		::MoleMole::MaterialPropertyModifierValueColor _MatCapColorTint3; // 0x234
		::MoleMole::MaterialPropertyModifierValueVector _RefractParam3; // 0x248
		::MoleMole::MaterialPropertyModifierValueVector _MatCapParams; // 0x260
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapColorBurstFx; // 0x278
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapUSpeedFx; // 0x280
		::MoleMole::MaterialPropertyModifierValueVector _MatCapReractParams3; // 0x288
		::MoleMole::MaterialPropertyModifierValueColor _MatCapColorTint5; // 0x2A0
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapBumpScaleFx; // 0x2B4
		::MoleMole::MaterialPropertyModifierValueVector _MatCapParams4; // 0x2BC
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapAlphaBurstFx; // 0x2D4
		::MoleMole::MaterialPropertyModifierValueBool _UseMatCapMask; // 0x2DC
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMatCapType _MatCap; // 0x2DF
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMatCapBlendMode _MatCapBlendModeFx; // 0x2E2
		::MoleMole::MaterialPropertyModifierValueColor _MatCapColorTintFx; // 0x2E8
		::MoleMole::MaterialPropertyModifierValueVector _RefractParam2; // 0x2FC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::Class_1_413B2BDBE645DB66* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_DOWARMUP_OFFSET))(this);
		}
	};
}
