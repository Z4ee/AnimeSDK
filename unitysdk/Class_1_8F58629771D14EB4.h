#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemDisplayData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8F58629771D14EB4__CTOR_OFFSET UNITYSDK_OFFSET(0x11779D20)

inline static constexpr unsigned int Class_1_8F58629771D14EB4_TypeDefinitionIndex = 62228;

class Class_1_8F58629771D14EB4 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F58629771D14EB4__CTOR_OFFSET))(this);
	}
};
