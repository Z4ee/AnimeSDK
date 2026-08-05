#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigBuffMisc_ConfigLumenMisc_TypeDefinitionIndex = 71680;

	struct alignas(8) ConfigBuffMisc_ConfigLumenMisc
	{
		::System::Int32 LuminizeBuffID; // 0x10
		::System::Int32 DefaultMaxPoints; // 0x14
		::System::Int32 DefaultMaxBulletNum; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* AmplifyFactorCustomProperties; // 0x20
		::System::Single WeakPanelCD; // 0x28
	};
}
