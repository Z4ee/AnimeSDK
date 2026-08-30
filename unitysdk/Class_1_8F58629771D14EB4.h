#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemDisplayData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8F58629771D14EB4__CTOR_OFFSET UNITYSDK_OFFSET(0x135004D0)

inline static constexpr unsigned int Class_1_8F58629771D14EB4_TypeDefinitionIndex = 75989;

class Class_1_8F58629771D14EB4 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* DKCFMFPKANO; // 0x10
	::System::UInt32 FGIIJIMIBCI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F58629771D14EB4__CTOR_OFFSET))(this);
	}
};
