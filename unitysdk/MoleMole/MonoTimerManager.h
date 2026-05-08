#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_1D3132F6656B18E0;
class Class_1_A73173CCB55A8FCA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOTIMERMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x13EA90D0)
#define MOLEMOLE_MONOTIMERMANAGER_REGISTERTIMER_1_OFFSET UNITYSDK_OFFSET(0x13EA9C40)
#define MOLEMOLE_MONOTIMERMANAGER_REGISTERTIMER_2_OFFSET UNITYSDK_OFFSET(0x13EA9E30)
#define MOLEMOLE_MONOTIMERMANAGER_REGISTERTIMER_OFFSET UNITYSDK_OFFSET(0x13EA9AC0)
#define MOLEMOLE_MONOTIMERMANAGER_RESETALLTRIGGERTIMER_OFFSET UNITYSDK_OFFSET(0x13EA95C0)
#define MOLEMOLE_MONOTIMERMANAGER_RESTARTGAME_OFFSET UNITYSDK_OFFSET(0x13EA9360)
#define MOLEMOLE_MONOTIMERMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x13EA9740)
#define MOLEMOLE_MONOTIMERMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x13EA9EE0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoTimerManager_TypeDefinitionIndex = 52883;

	class MonoTimerManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::MoleMole::MonoTimerManager** StaticGet_Field_5_0()
		{
			return (::MoleMole::MonoTimerManager**)Il2CppClass::FromTypeDefinitionIndex(MonoTimerManager_TypeDefinitionIndex)->GetStaticField(0x2E8D0);
		}
		::System::Boolean isDirty; // 0x18
		::System::Collections::Generic::List_1<::Class_1_A73173CCB55A8FCA*>* Field_5_2; // 0x20
		::System::Collections::Generic::List_1<::Class_1_A73173CCB55A8FCA*>* Field_5_3; // 0x28
		::System::Collections::Generic::List_1<::Class_1_1D3132F6656B18E0*>* Field_5_4; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTIMERMANAGER__CTOR_OFFSET))(this);
		}

		static ::MoleMole::MonoTimerManager* get_Instance()
		{
			return ((::MoleMole::MonoTimerManager*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTIMERMANAGER_GET_INSTANCE_OFFSET))();
		}

		::System::Void RestartGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTIMERMANAGER_RESTARTGAME_OFFSET))(this);
		}

		::System::Void ResetAllTriggerTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTIMERMANAGER_RESETALLTRIGGERTIMER_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTIMERMANAGER_UPDATE_OFFSET))(this);
		}

		::Class_1_A73173CCB55A8FCA* RegisterTimer(::System::DateTime a1, ::System::Action* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::Class_1_A73173CCB55A8FCA*(*)(::PVOID, ::System::DateTime, ::System::Action*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTIMERMANAGER_REGISTERTIMER_OFFSET))(this, a1, a2, a3, a4);
		}

		::Class_1_A73173CCB55A8FCA* RegisterTimer_1(::System::Single a1, ::System::Action* a2, ::System::Boolean a3)
		{
			return ((::Class_1_A73173CCB55A8FCA*(*)(::PVOID, ::System::Single, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTIMERMANAGER_REGISTERTIMER_1_OFFSET))(this, a1, a2, a3);
		}

		::Class_1_1D3132F6656B18E0* RegisterTimer_2(::System::DateTime a1, ::System::Action* a2)
		{
			return ((::Class_1_1D3132F6656B18E0*(*)(::PVOID, ::System::DateTime, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTIMERMANAGER_REGISTERTIMER_2_OFFSET))(this, a1, a2);
		}
	};
}
