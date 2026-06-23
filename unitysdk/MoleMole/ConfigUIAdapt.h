#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class ConfigUIAdapt_DefaultUIAdaptDataDic; }
namespace MoleMole { class ConfigUIAdapt_DeviceAdaptDataDic; }
namespace MoleMole { class ConfigUIAdapt_DevicePhysicalDataDic; }
namespace MoleMole { class ConfigUIAdapt_DevicePhysicalPadingDataDic; }
namespace MoleMole { class ConfigUIAdapt_UIAdaptDataDic; }
namespace MoleMole { class DeviceAdaptData; }
namespace MoleMole { class GlobalPaddingData; }
namespace MoleMole { class UIAdaptData; }
namespace System { class String; }

#define MOLEMOLE_CONFIGUIADAPT_FIND_OFFSET UNITYSDK_OFFSET(0x190D3A70)
#define MOLEMOLE_CONFIGUIADAPT__CCTOR_OFFSET UNITYSDK_OFFSET(0x190D3D80)
#define MOLEMOLE_CONFIGUIADAPT__CTOR_OFFSET UNITYSDK_OFFSET(0x190D3B30)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIAdapt_TypeDefinitionIndex = 87324;

	class ConfigUIAdapt : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		static ::MoleMole::UIAdaptData** StaticGet_CodeDefaultUIAdaptData()
		{
			return (::MoleMole::UIAdaptData**)Il2CppClass::FromTypeDefinitionIndex(ConfigUIAdapt_TypeDefinitionIndex)->GetStaticField(0x44590);
		}
		static ::System::Boolean* StaticGet_ForceNonAdapt()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ConfigUIAdapt_TypeDefinitionIndex)->GetStaticField(0x10700);
		}
		::MoleMole::GlobalPaddingData* DefaultGlobalPaddingData; // 0x58
		::System::String* CurrentDeviceModel; // 0x60
		::MoleMole::DeviceAdaptData* CurrentAdaptData; // 0x68
		::MoleMole::ConfigUIAdapt_DeviceAdaptDataDic* DeviceAdaptDataV2; // 0x70
		::MoleMole::ConfigUIAdapt_DevicePhysicalPadingDataDic* DevicePhysicalPadingDataV2; // 0x78
		::System::Boolean DebugMode; // 0x80
		::MoleMole::DeviceAdaptData* DebugData; // 0x88
		::MoleMole::ConfigUIAdapt_DevicePhysicalDataDic* DevicePhysicalDataV2; // 0x90
		::MoleMole::ConfigUIAdapt_DefaultUIAdaptDataDic* DefaultUIAdaptDataV2; // 0x98
		::MoleMole::ConfigUIAdapt_UIAdaptDataDic* UIAdaptDataV2; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIADAPT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIADAPT__CCTOR_OFFSET))();
		}

		::System::Void Find()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIADAPT_FIND_OFFSET))(this);
		}
	};
}
