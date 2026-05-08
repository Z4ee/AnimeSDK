#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace MoleMole { class ActivityAnimSetSetting; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_MONOACTIVITYANIMSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x12356810)

namespace MoleMole
{
	inline static constexpr unsigned int MonoActivityAnimSetting_TypeDefinitionIndex = 71173;

	class MonoActivityAnimSetting : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ActivityAnimSetSetting*>* animSetDict; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOACTIVITYANIMSETTING__CTOR_OFFSET))(this);
		}
	};
}
