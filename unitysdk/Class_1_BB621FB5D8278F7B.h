#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_BB621FB5D8278F7B_METHOD_1_975B9AC31CF05C24_OFFSET UNITYSDK_OFFSET(0x1CEB6810)
#define CLASS_1_BB621FB5D8278F7B__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEB6990)

inline static constexpr unsigned int Class_1_BB621FB5D8278F7B_TypeDefinitionIndex = 11535;

class Class_1_BB621FB5D8278F7B : public ::System::Object
{
public:
	::RPG::Client::TextID OENAMINOLLF; // 0x10
	::RPG::GameCore::FateRinHouguOwnerType PHFMCACHFIJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB621FB5D8278F7B__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_975B9AC31CF05C24(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_BB621FB5D8278F7B*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_BB621FB5D8278F7B*&))((::PBYTE)hIl2Cpp + CLASS_1_BB621FB5D8278F7B_METHOD_1_975B9AC31CF05C24_OFFSET))(a1, a2);
	}
};
