#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7D1331C413E60035.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RechargeGiftData; }
namespace RPG::Client { class RechargeShopModule; }

#define CLASS_1_94097BB7FDA7CCC5_METHOD_1_B26E738E12AB1010_OFFSET UNITYSDK_OFFSET(0x15D75AF0)
#define CLASS_1_94097BB7FDA7CCC5__CTOR_OFFSET UNITYSDK_OFFSET(0x15D75A70)

inline static constexpr unsigned int Class_1_94097BB7FDA7CCC5_TypeDefinitionIndex = 66789;

class Class_1_94097BB7FDA7CCC5 : public ::System::Object
{
public:
	::RPG::Client::RechargeShopModule* OJMMJIALPON; // 0x10
	::Enum_3_7D1331C413E60035 NBPDDKIBKNI; // 0x18

	::System::Void _ctor(::RPG::Client::RechargeShopModule* a1, ::Enum_3_7D1331C413E60035 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RechargeShopModule*, ::Enum_3_7D1331C413E60035))((::PBYTE)hIl2Cpp + CLASS_1_94097BB7FDA7CCC5__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::Client::RechargeGiftData* Method_1_B26E738E12AB1010()
	{
		return ((::RPG::Client::RechargeGiftData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94097BB7FDA7CCC5_METHOD_1_B26E738E12AB1010_OFFSET))(this);
	}
};
