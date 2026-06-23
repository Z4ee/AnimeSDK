#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class ConfigGalgameShakeData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGGALGAMESHAKE__CTOR_OFFSET UNITYSDK_OFFSET(0x157D42E0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigGalgameShake_TypeDefinitionIndex = 55006;

	class ConfigGalgameShake : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigGalgameShakeData*>* configSingleShakeDictonary; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigGalgameShakeData*>* configContinuousShakeDictonary; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGALGAMESHAKE__CTOR_OFFSET))(this);
		}
	};
}
