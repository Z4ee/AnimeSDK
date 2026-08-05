#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DiceInfo.h"
#include "unitysdk/MoleMole/TriDiceLuckPerformType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole::Config { class ConfigUITriDiceOracle; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_DICEROTADJUSTER_METHOD_5_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0x1B821790)
#define MOLEMOLE_DICEROTADJUSTER_METHOD_5_7E015B837E1981C0_OFFSET UNITYSDK_OFFSET(0x1B821A70)
#define MOLEMOLE_DICEROTADJUSTER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B8214B0)
#define MOLEMOLE_DICEROTADJUSTER_SETCTRLDICERESULT_OFFSET UNITYSDK_OFFSET(0x1B8216E0)
#define MOLEMOLE_DICEROTADJUSTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B822020)

namespace MoleMole
{
	inline static constexpr unsigned int DiceRotAdjuster_TypeDefinitionIndex = 77899;

	class DiceRotAdjuster : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::DiceInfo>* Dices; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::DiceInfo>* Field_5_1; // 0x20
		::MoleMole::Config::ConfigUITriDiceOracle* Field_5_0; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DICEROTADJUSTER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DICEROTADJUSTER_ONENABLE_OFFSET))(this);
		}

		::System::Void SetCtrlDiceResult(::MoleMole::TriDiceLuckPerformType a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::TriDiceLuckPerformType, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_DICEROTADJUSTER_SETCTRLDICERESULT_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_7E015B837E1981C0(::System::String* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_DICEROTADJUSTER_METHOD_5_7E015B837E1981C0_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_2566AD459572DFC3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DICEROTADJUSTER_METHOD_5_2566AD459572DFC3_OFFSET))(this);
		}
	};
}
