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

class Class_1_9610394F487FC231;

#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x124400C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x1243FF90)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x12445360)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x1243FD90)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x12440270)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x12440160)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x12440300)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x124426B0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x12441530)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x124404A0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x124454C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER___BASE_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x124454D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER___BASE_DOONENTER_OFFSET UNITYSDK_OFFSET(0x124454E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER___BASE_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x124455C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER___BASE_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x12445650)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER___BASE_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x124456E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER___BASE_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x12445770)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER___BASE_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x12445840)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyMatCapModifier_TypeDefinitionIndex = 41593;

	class ConfigMaterialPropertyMatCapModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueTexture _MatCapTexFx; // 0x48
		::MoleMole::MaterialPropertyModifierValueTexture _MatCapTex; // 0x78
		::MoleMole::MaterialPropertyModifierValueTexture _MatCapBumpMapFx; // 0xA8
		::MoleMole::MaterialPropertyModifierValueVector _MatCapReractParams4; // 0xD8
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapVSpeedFx; // 0xF0
		::MoleMole::MaterialPropertyModifierValueVector _RefractParam4; // 0xF8
		::MoleMole::MaterialPropertyModifierValueColor _MatCapColorTint2; // 0x110
		::MoleMole::MaterialPropertyModifierValueColor _MatCapColorTint4; // 0x124
		::MoleMole::MaterialPropertyModifierValueVector _RefractParam2; // 0x138
		::MoleMole::MaterialPropertyModifierValueVector _MatCapReractParams; // 0x150
		::MoleMole::MaterialPropertyModifierValueVector _MatCapParams2; // 0x168
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapAlphaBurstFx; // 0x180
		::MoleMole::MaterialPropertyModifierValueBool _UseMatCapMask; // 0x188
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMatCapBlendMode _MatCapBlendModeFx; // 0x18B
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMatCapType _MatCap; // 0x18E
		::MoleMole::MaterialPropertyModifierValueColor _MatCapColorTint; // 0x194
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapBumpScaleFx; // 0x1A8
		::MoleMole::MaterialPropertyModifierValueColor _MatCapColorTint3; // 0x1B0
		::System::Single _MatCapAlphaBurstFxDefault; // 0x1C4
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapUSpeedFx; // 0x1C8
		::MoleMole::MaterialPropertyModifierValueVector _MatCapParams5; // 0x1D0
		::MoleMole::MaterialPropertyModifierValueVector _RefractParam; // 0x1E8
		::MoleMole::MaterialPropertyModifierValueVector _MatCapParams4; // 0x200
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapColorBurstFx; // 0x218
		::MoleMole::MaterialPropertyModifierValueVector _RefractParam5; // 0x220
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapNormalUSpeedFx; // 0x238
		::MoleMole::MaterialPropertyModifierValueVector _RefractParam3; // 0x240
		::MoleMole::MaterialPropertyModifierValueFloat _VertexOffset; // 0x258
		::System::Single _MatCapAlphaBurstFxRef; // 0x260
		::MoleMole::MaterialPropertyModifierValueVector _MatCapReractParams3; // 0x264
		::MoleMole::MaterialPropertyModifierValueColor _MatCapColorTintFx; // 0x27C
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapFX; // 0x290
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapNormalVSpeedFx; // 0x298
		::MoleMole::MaterialPropertyModifierValueVector _MatCapParams; // 0x2A0
		::MoleMole::MaterialPropertyModifierValueColor _MatCapColorTint5; // 0x2B8
		::MoleMole::MaterialPropertyModifierValueVector _MatCapReractParams5; // 0x2CC
		::MoleMole::MaterialPropertyModifierValueVector _MatCapParams3; // 0x2E4
		::MoleMole::MaterialPropertyModifierValueVector _MatCapReractParams2; // 0x2FC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::Class_1_9610394F487FC231* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER_DOWARMUP_OFFSET))(this);
		}

		::System::Void __base_DoAfterOnEnter(::Class_1_9610394F487FC231* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER___BASE_DOAFTERONENTER_OFFSET))(this, P0);
		}

		::System::Void __base_DoOnEnter(::Class_1_9610394F487FC231* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER___BASE_DOONENTER_OFFSET))(this, P0);
		}

		::System::Void __base_DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER___BASE_DOWARMUP_OFFSET))(this);
		}

		::System::Void __base_PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER___BASE_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void __base_PrepareOnExit(::Class_1_9610394F487FC231* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER___BASE_PREPAREONEXIT_OFFSET))(this, P0);
		}

		::System::Void __base_ProcessEnter(::Class_1_9610394F487FC231* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER___BASE_PROCESSENTER_OFFSET))(this, P0, P1);
		}

		::System::Void __base_ProcessExit(::Class_1_9610394F487FC231* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMATCAPMODIFIER___BASE_PROCESSEXIT_OFFSET))(this, P0, P1);
		}
	};
}
