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

#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x1C47CC50)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x1C47CB60)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x1C481CF0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x1C47C9A0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x1C47CD70)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x1C47CCB0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x1C47CDD0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x1C47F0A0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x1C47DF70)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x1C47CF20)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C481F80)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyMatCapModifier_TypeDefinitionIndex = 55398;

	class ConfigMaterialPropertyMatCapModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueTexture _MatCapTexFx; // 0x48
		::MoleMole::MaterialPropertyModifierValueTexture _MatCapBumpMapFx; // 0x78
		::MoleMole::MaterialPropertyModifierValueTexture _MatCapTex; // 0xA8
		::MoleMole::MaterialPropertyModifierValueVector _RefractParam; // 0xD8
		::MoleMole::MaterialPropertyModifierValueVector _MatCapParams2; // 0xF0
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapFX; // 0x108
		::MoleMole::MaterialPropertyModifierValueVector _RefractParam3; // 0x110
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapNormalVSpeedFx; // 0x128
		::MoleMole::MaterialPropertyModifierValueColor _MatCapColorTint4; // 0x130
		::MoleMole::MaterialPropertyModifierValueVector _MatCapReractParams3; // 0x144
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapVSpeedFx; // 0x15C
		::MoleMole::MaterialPropertyModifierValueColor _MatCapColorTintFx; // 0x164
		::MoleMole::MaterialPropertyModifierValueColor _MatCapColorTint5; // 0x178
		::MoleMole::MaterialPropertyModifierValueVector _RefractParam5; // 0x18C
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapUSpeedFx; // 0x1A4
		::MoleMole::MaterialPropertyModifierValueColor _MatCapColorTint3; // 0x1AC
		::MoleMole::MaterialPropertyModifierValueVector _RefractParam4; // 0x1C0
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMatCapBlendMode _MatCapBlendModeFx; // 0x1D8
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMatCapType _MatCap; // 0x1DB
		::MoleMole::MaterialPropertyModifierValueBool _UseMatCapMask; // 0x1DE
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapAlphaBurstFx; // 0x1E4
		::MoleMole::MaterialPropertyModifierValueVector _RefractParam2; // 0x1EC
		::MoleMole::MaterialPropertyModifierValueVector _MatCapReractParams5; // 0x204
		::MoleMole::MaterialPropertyModifierValueColor _MatCapColorTint2; // 0x21C
		::MoleMole::MaterialPropertyModifierValueColor _MatCapColorTint; // 0x230
		::MoleMole::MaterialPropertyModifierValueVector _MatCapParams; // 0x244
		::MoleMole::MaterialPropertyModifierValueVector _MatCapParams4; // 0x25C
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapNormalUSpeedFx; // 0x274
		::System::Single _MatCapAlphaBurstFxDefault; // 0x27C
		::MoleMole::MaterialPropertyModifierValueVector _MatCapReractParams; // 0x280
		::System::Single _MatCapAlphaBurstFxRef; // 0x298
		::MoleMole::MaterialPropertyModifierValueVector _MatCapParams5; // 0x29C
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapColorBurstFx; // 0x2B4
		::MoleMole::MaterialPropertyModifierValueVector _MatCapParams3; // 0x2BC
		::MoleMole::MaterialPropertyModifierValueVector _MatCapReractParams2; // 0x2D4
		::MoleMole::MaterialPropertyModifierValueVector _MatCapReractParams4; // 0x2EC
		::MoleMole::MaterialPropertyModifierValueFloat _VertexOffset; // 0x304
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapBumpScaleFx; // 0x30C

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
