#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/ESAMCDataContainer_Enum_3_CD74075A03CBCAFE.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole::Config { class ConfigMaterialPropertyModifierMap; }
namespace MoleMole::EffectSimulate { class NapEffectSimulatorMgr; }
namespace MoleMole::EffectSimulate::AvatarMatChange { class ExportContextBase; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_EFFECTSIMULATE_ESAMCDATACONTAINER_ENSURETARGETASSETNEW_OFFSET UNITYSDK_OFFSET(0x19BC61F0)
#define MOLEMOLE_EFFECTSIMULATE_ESAMCDATACONTAINER_GETTARGETASSETNEWBYCTX_OFFSET UNITYSDK_OFFSET(0x19BC61B0)
#define MOLEMOLE_EFFECTSIMULATE_ESAMCDATACONTAINER_INITCTX_OFFSET UNITYSDK_OFFSET(0x19BC6510)
#define MOLEMOLE_EFFECTSIMULATE_ESAMCDATACONTAINER_METHOD_5_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x19BC6BE0)
#define MOLEMOLE_EFFECTSIMULATE_ESAMCDATACONTAINER_METHOD_5_08550FA7D4D2CFC9_OFFSET UNITYSDK_OFFSET(0x19BC6480)
#define MOLEMOLE_EFFECTSIMULATE_ESAMCDATACONTAINER_METHOD_5_1FB5DBFCDAB7243D_OFFSET UNITYSDK_OFFSET(0x19BC65E0)
#define MOLEMOLE_EFFECTSIMULATE_ESAMCDATACONTAINER_METHOD_5_8AE88CC79AC0221D_OFFSET UNITYSDK_OFFSET(0x19BC6C30)
#define MOLEMOLE_EFFECTSIMULATE_ESAMCDATACONTAINER_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x19BC6B60)
#define MOLEMOLE_EFFECTSIMULATE_ESAMCDATACONTAINER_METHOD_5_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x19BC6BA0)
#define MOLEMOLE_EFFECTSIMULATE_ESAMCDATACONTAINER_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x19BC64D0)
#define MOLEMOLE_EFFECTSIMULATE_ESAMCDATACONTAINER_METHOD_5_E9E44213FE3B59FD_OFFSET UNITYSDK_OFFSET(0x19BC6A90)
#define MOLEMOLE_EFFECTSIMULATE_ESAMCDATACONTAINER_TRYEXPROT_OFFSET UNITYSDK_OFFSET(0x19BC6670)
#define MOLEMOLE_EFFECTSIMULATE_ESAMCDATACONTAINER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BC6850)
#define MOLEMOLE_EFFECTSIMULATE_ESAMCDATACONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x19BC6800)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESAMCDataContainer_TypeDefinitionIndex = 47582;

	class ESAMCDataContainer : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Sirenix::OdinInspector::ValueDropdownList_1<::MoleMole::EffectSimulate::ESAMCDataContainer_Enum_3_CD74075A03CBCAFE>** StaticGet_eAvatarMatChangeExportTableTypeDropDown()
		{
			return (::Sirenix::OdinInspector::ValueDropdownList_1<::MoleMole::EffectSimulate::ESAMCDataContainer_Enum_3_CD74075A03CBCAFE>**)Il2CppClass::FromTypeDefinitionIndex(ESAMCDataContainer_TypeDefinitionIndex)->GetStaticField(0x48BB0);
		}
		::UnityEngine::GameObject* avatarPrefab; // 0x18
		::MoleMole::EffectSimulate::ESAMCDataContainer_Enum_3_CD74075A03CBCAFE exportStrategy; // 0x20
		::MoleMole::Config::ConfigMaterialPropertyModifierMap* targetAsset; // 0x28
		::MoleMole::Config::ConfigMaterialPropertyModifierMap* targetAsset_New; // 0x30
		::System::String* targetAssetName; // 0x38
		::MoleMole::EffectSimulate::AvatarMatChange::ExportContextBase* exportCtx; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAMCDATACONTAINER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAMCDATACONTAINER__CCTOR_OFFSET))();
		}

		::System::Void GetTargetAssetNewByCtx()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAMCDATACONTAINER_GETTARGETASSETNEWBYCTX_OFFSET))(this);
		}

		::MoleMole::Config::ConfigMaterialPropertyModifierMap* EnsureTargetAssetNew()
		{
			return ((::MoleMole::Config::ConfigMaterialPropertyModifierMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAMCDATACONTAINER_ENSURETARGETASSETNEW_OFFSET))(this);
		}

		::System::Void InitCtx()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAMCDATACONTAINER_INITCTX_OFFSET))(this);
		}

		::System::Boolean TryExprot(::System::String*& a1, ::System::String*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAMCDATACONTAINER_TRYEXPROT_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAMCDATACONTAINER_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::MoleMole::EffectSimulate::AvatarMatChange::ExportContextBase*>* Method_5_E9E44213FE3B59FD()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::MoleMole::EffectSimulate::AvatarMatChange::ExportContextBase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAMCDATACONTAINER_METHOD_5_E9E44213FE3B59FD_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAMCDATACONTAINER_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
		}

		::MoleMole::EffectSimulate::NapEffectSimulatorMgr* Method_5_1FB5DBFCDAB7243D()
		{
			return ((::MoleMole::EffectSimulate::NapEffectSimulatorMgr*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAMCDATACONTAINER_METHOD_5_1FB5DBFCDAB7243D_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAMCDATACONTAINER_METHOD_5_CA373AA1C7054598_2_OFFSET))(this);
		}

		::System::Void Method_5_050E70FEDB783306(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAMCDATACONTAINER_METHOD_5_050E70FEDB783306_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_8AE88CC79AC0221D()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAMCDATACONTAINER_METHOD_5_8AE88CC79AC0221D_OFFSET))(this);
		}

		::MoleMole::Config::ConfigMaterialPropertyModifierMap* Method_5_08550FA7D4D2CFC9(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigMaterialPropertyModifierMap*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAMCDATACONTAINER_METHOD_5_08550FA7D4D2CFC9_OFFSET))(this, a1);
		}
	};
}
