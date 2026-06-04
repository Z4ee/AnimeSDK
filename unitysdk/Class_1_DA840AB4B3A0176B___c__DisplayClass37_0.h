#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DA840AB4B3A0176B;
namespace RPG::Client { class IAssetOperation; }
namespace System { class String; }

#define CLASS_1_DA840AB4B3A0176B___C__DISPLAYCLASS37_0__ASYNCLOADASSET_B__0_OFFSET UNITYSDK_OFFSET(0xABE0650)
#define CLASS_1_DA840AB4B3A0176B___C__DISPLAYCLASS37_0__CTOR_OFFSET UNITYSDK_OFFSET(0xABE0470)

inline static constexpr unsigned int Class_1_DA840AB4B3A0176B___c__DisplayClass37_0_TypeDefinitionIndex = 55924;

class Class_1_DA840AB4B3A0176B___c__DisplayClass37_0 : public ::System::Object
{
public:
	::Class_1_DA840AB4B3A0176B* __4__this; // 0x10
	::System::String* path; // 0x18
	::System::UInt32 groupID; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA840AB4B3A0176B___C__DISPLAYCLASS37_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _AsyncLoadAsset_b__0(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_1_DA840AB4B3A0176B___C__DISPLAYCLASS37_0__ASYNCLOADASSET_B__0_OFFSET))(this, a1);
	}
};
