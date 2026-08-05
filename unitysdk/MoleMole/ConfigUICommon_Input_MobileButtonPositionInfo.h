#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_PanelPositionType.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_PanelType.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_SceneType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define MOLEMOLE_CONFIGUICOMMON_INPUT_MOBILEBUTTONPOSITIONINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x90D370)
#define MOLEMOLE_CONFIGUICOMMON_INPUT_MOBILEBUTTONPOSITIONINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x90D300)
#define MOLEMOLE_CONFIGUICOMMON_INPUT_MOBILEBUTTONPOSITIONINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x90D380)
#define MOLEMOLE_CONFIGUICOMMON_INPUT_MOBILEBUTTONPOSITIONINFO_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x1C4867F0)
#define MOLEMOLE_CONFIGUICOMMON_INPUT_MOBILEBUTTONPOSITIONINFO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1C4869C0)
#define MOLEMOLE_CONFIGUICOMMON_INPUT_MOBILEBUTTONPOSITIONINFO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1C486A80)
#define MOLEMOLE_CONFIGUICOMMON_INPUT_MOBILEBUTTONPOSITIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x586780)
#define MOLEMOLE_CONFIGUICOMMON_INPUT_MOBILEBUTTONPOSITIONINFO___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x90D3E0)
#define MOLEMOLE_CONFIGUICOMMON_INPUT_MOBILEBUTTONPOSITIONINFO___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x90D450)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_Input_MobileButtonPositionInfo_TypeDefinitionIndex = 91101;

	struct alignas(4) ConfigUICommon_Input_MobileButtonPositionInfo
	{
		::MoleMole::ConfigUICommon_Input_SceneType SceneType; // 0x10
		::MoleMole::ConfigUICommon_Input_PanelPositionType PanelPositionType; // 0x14
		::MoleMole::ConfigUICommon_Input_PanelType PanelType; // 0x18

		::System::Void _ctor(::MoleMole::ConfigUICommon_Input_SceneType sceneType, ::MoleMole::ConfigUICommon_Input_PanelPositionType panelPositionType, ::MoleMole::ConfigUICommon_Input_PanelType panelType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUICommon_Input_SceneType, ::MoleMole::ConfigUICommon_Input_PanelPositionType, ::MoleMole::ConfigUICommon_Input_PanelType))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_INPUT_MOBILEBUTTONPOSITIONINFO__CTOR_OFFSET))(this, sceneType, panelPositionType, panelType);
		}

		static ::MoleMole::ConfigUICommon_Input_MobileButtonPositionInfo get_Empty()
		{
			return ((::MoleMole::ConfigUICommon_Input_MobileButtonPositionInfo(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_INPUT_MOBILEBUTTONPOSITIONINFO_GET_EMPTY_OFFSET))();
		}

		::System::Boolean Equals(::MoleMole::ConfigUICommon_Input_MobileButtonPositionInfo other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigUICommon_Input_MobileButtonPositionInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_INPUT_MOBILEBUTTONPOSITIONINFO_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_INPUT_MOBILEBUTTONPOSITIONINFO_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_INPUT_MOBILEBUTTONPOSITIONINFO_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::MoleMole::ConfigUICommon_Input_MobileButtonPositionInfo left, ::MoleMole::ConfigUICommon_Input_MobileButtonPositionInfo right)
		{
			return ((::System::Boolean(*)(::MoleMole::ConfigUICommon_Input_MobileButtonPositionInfo, ::MoleMole::ConfigUICommon_Input_MobileButtonPositionInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_INPUT_MOBILEBUTTONPOSITIONINFO_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::MoleMole::ConfigUICommon_Input_MobileButtonPositionInfo left, ::MoleMole::ConfigUICommon_Input_MobileButtonPositionInfo right)
		{
			return ((::System::Boolean(*)(::MoleMole::ConfigUICommon_Input_MobileButtonPositionInfo, ::MoleMole::ConfigUICommon_Input_MobileButtonPositionInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_INPUT_MOBILEBUTTONPOSITIONINFO_OP_INEQUALITY_OFFSET))(left, right);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_INPUT_MOBILEBUTTONPOSITIONINFO___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_INPUT_MOBILEBUTTONPOSITIONINFO___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
