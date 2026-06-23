#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace MoleMole { class MonoUIPortraitConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOUIGACHAPORTRAITCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16CDDAD0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIGachaPortraitConfig_TypeDefinitionIndex = 41653;

	class MonoUIGachaPortraitConfig : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::String* gachaKey; // 0x58
		::System::Collections::Generic::List_1<::MoleMole::MonoUIPortraitConfig*>* subPortraitConfigs; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIGACHAPORTRAITCONFIG__CTOR_OFFSET))(this);
		}
	};
}
