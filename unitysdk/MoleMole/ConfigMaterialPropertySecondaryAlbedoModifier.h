#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueChannelEnumType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueDistortionChannelType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueMaskChannelType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_413B2BDBE645DB66;

#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x1B81A930)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x1B81A850)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x1B81CE90)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x1B81A590)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x1B81AA50)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x1B81A990)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x1B81AAB0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x1B81B970)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x1B81B270)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x1B81AC10)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B81D120)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertySecondaryAlbedoModifier_TypeDefinitionIndex = 64716;

	class ConfigMaterialPropertySecondaryAlbedoModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueTexture _SecondaryAlbedoTex; // 0x48
		::MoleMole::MaterialPropertyModifierValueTexture _SecondaryAlbedoMaskTex; // 0x78
		::MoleMole::MaterialPropertyModifierValueTexture _SecondaryAlbedoDistortionTex; // 0xA8
		::MoleMole::MaterialPropertyModifierValueVector _SecondaryAlbedoDistortionUVSpeed; // 0xD8
		::UnityEngine::Color _SecondaryAlbedoColorRef; // 0xF0
		::MoleMole::MaterialPropertyModifierValueVector _SecondaryAlbedoTexSpeed; // 0x100
		::MoleMole::MaterialPropertyModifierValueColor _SecondaryAlbedoColor; // 0x118
		::MoleMole::MaterialPropertyModifierValueFloat _SecondaryAlbedoDistortionStrength; // 0x12C
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueChannelEnumType _SecondaryAlbedoChannel; // 0x134
		::MoleMole::MaterialPropertyModifierValueBool _SecondaryAlbedoUseDistortion; // 0x137
		::MoleMole::MaterialPropertyModifierValueBool _SecondaryAlbedoUseUV2; // 0x13A
		::UnityEngine::Color _SecondaryAlbedoColorDefault; // 0x140
		::MoleMole::MaterialPropertyModifierValueBool _SecondaryAlbedo; // 0x150
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueDistortionChannelType _SecondaryAlbedoDistortionChannel; // 0x153
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueMaskChannelType _SecondaryAlbedoMaskChannel; // 0x156
		::MoleMole::MaterialPropertyModifierValueBool _SecondaryAlbedoUseMask; // 0x159

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::Class_1_413B2BDBE645DB66* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSECONDARYALBEDOMODIFIER_DOWARMUP_OFFSET))(this);
		}
	};
}
