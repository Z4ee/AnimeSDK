#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/Serialization/FullSerializer/fsObjectProcessor.h"

namespace ParadoxNotion::Serialization::FullSerializer { class fsData; }
namespace System { class String; }
namespace System { class Type; }

namespace ParadoxNotion::Serialization
{
	inline static constexpr unsigned int fsRecoveryProcessor_2_TypeDefinitionIndex = 31180;

	template <typename TCanProcess, typename TMissing>
	class fsRecoveryProcessor_2 : public ::ParadoxNotion::Serialization::FullSerializer::fsObjectProcessor
	{
	public:
		// static const ::System::String* FIELD_NAME_TYPE; // 0x0
		// static const ::System::String* FIELD_NAME_STATE; // 0x0
	};
}
