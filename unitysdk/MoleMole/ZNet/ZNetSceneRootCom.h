#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ZNet/ZNetSceneRootCom_Enum_3_36A1D5219DB23A51.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole::EffectSimulate { class FxEditorConfigData; }

#define MOLEMOLE_ZNET_ZNETSCENEROOTCOM_FORCERESIMULATEAFTERONESECOND_OFFSET UNITYSDK_OFFSET(0x10F17F70)
#define MOLEMOLE_ZNET_ZNETSCENEROOTCOM_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10F17F30)
#define MOLEMOLE_ZNET_ZNETSCENEROOTCOM_METHOD_5_DE3FCF8E254811E9_OFFSET UNITYSDK_OFFSET(0x10F18000)
#define MOLEMOLE_ZNET_ZNETSCENEROOTCOM_UPDATE_OFFSET UNITYSDK_OFFSET(0x10F17E60)
#define MOLEMOLE_ZNET_ZNETSCENEROOTCOM__CTOR_OFFSET UNITYSDK_OFFSET(0x10F17FB0)

namespace MoleMole::ZNet
{
	inline static constexpr unsigned int ZNetSceneRootCom_TypeDefinitionIndex = 46092;

	class ZNetSceneRootCom : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MoleMole::ZNet::ZNetSceneRootCom_Enum_3_36A1D5219DB23A51 rootType; // 0x18
		::System::Single Field_5_0; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZNET_ZNETSCENEROOTCOM__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZNET_ZNETSCENEROOTCOM_UPDATE_OFFSET))(this);
		}

		::System::Void ForceResimulateAfterOneSecond()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZNET_ZNETSCENEROOTCOM_FORCERESIMULATEAFTERONESECOND_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZNET_ZNETSCENEROOTCOM_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		static ::MoleMole::EffectSimulate::FxEditorConfigData* Method_5_DE3FCF8E254811E9()
		{
			return ((::MoleMole::EffectSimulate::FxEditorConfigData*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ZNET_ZNETSCENEROOTCOM_METHOD_5_DE3FCF8E254811E9_OFFSET))();
		}
	};
}
