#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigDynamicValue; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_3FA5D0827BD681C1__CTOR_OFFSET UNITYSDK_OFFSET(0x14BAEC00)

inline static constexpr unsigned int Class_1_3FA5D0827BD681C1_TypeDefinitionIndex = 78006;

class Class_1_3FA5D0827BD681C1 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigDynamicValue*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3FA5D0827BD681C1__CTOR_OFFSET))(this);
	}
};
