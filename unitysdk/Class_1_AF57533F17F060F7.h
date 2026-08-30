#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitResultRelicInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_AF57533F17F060F7__CTOR_OFFSET UNITYSDK_OFFSET(0x1B434640)

inline static constexpr unsigned int Class_1_AF57533F17F060F7_TypeDefinitionIndex = 74293;

class Class_1_AF57533F17F060F7 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>* KEAGDADJMLP; // 0x10
	::System::UInt32 AIEPEMHAMJJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF57533F17F060F7__CTOR_OFFSET))(this);
	}
};
