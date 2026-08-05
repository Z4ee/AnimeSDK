#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_LAYERINFODATA_EQUALS_OFFSET UNITYSDK_OFFSET(0x838250)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_LAYERINFODATA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x838260)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_LAYERINFODATA_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1604BFD0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_LAYERINFODATA_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1604C020)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_LAYERINFODATA___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x838270)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_LAYERINFODATA___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8382D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengePageController_LayerInfoData_TypeDefinitionIndex = 49468;

	struct alignas(4) UIBossChallengePageController_LayerInfoData
	{
		::System::Int32 zoneID; // 0x10
		::System::Int32 layerIndex; // 0x14

		static ::System::Boolean op_Equality(::MoleMole::UIBossChallengePageController_LayerInfoData data1, ::MoleMole::UIBossChallengePageController_LayerInfoData data2)
		{
			return ((::System::Boolean(*)(::MoleMole::UIBossChallengePageController_LayerInfoData, ::MoleMole::UIBossChallengePageController_LayerInfoData))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_LAYERINFODATA_OP_EQUALITY_OFFSET))(data1, data2);
		}

		static ::System::Boolean op_Inequality(::MoleMole::UIBossChallengePageController_LayerInfoData data1, ::MoleMole::UIBossChallengePageController_LayerInfoData data2)
		{
			return ((::System::Boolean(*)(::MoleMole::UIBossChallengePageController_LayerInfoData, ::MoleMole::UIBossChallengePageController_LayerInfoData))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_LAYERINFODATA_OP_INEQUALITY_OFFSET))(data1, data2);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_LAYERINFODATA_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_LAYERINFODATA_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_LAYERINFODATA___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER_LAYERINFODATA___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
