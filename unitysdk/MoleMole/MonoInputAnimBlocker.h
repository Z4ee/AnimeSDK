#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace MoleMole { class InputAnimBlocker; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOINPUTANIMBLOCKER_ISINPUTBLOCKED_OFFSET UNITYSDK_OFFSET(0x173E3710)
#define MOLEMOLE_MONOINPUTANIMBLOCKER__CTOR_OFFSET UNITYSDK_OFFSET(0x173E3B30)

namespace MoleMole
{
	inline static constexpr unsigned int MonoInputAnimBlocker_TypeDefinitionIndex = 56757;

	class MonoInputAnimBlocker : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::InputAnimBlocker*>* InputAnimBlockers; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTANIMBLOCKER__CTOR_OFFSET))(this);
		}

		::System::Boolean IsInputBlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTANIMBLOCKER_ISINPUTBLOCKED_OFFSET))(this);
		}
	};
}
