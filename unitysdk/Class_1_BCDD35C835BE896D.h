#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/Match3PVEGameResult.h"
#include "unitysdk/Struct_2_52A902145F5BE51F.h"
#include "unitysdk/Struct_2_D828E592C9D2FCC9.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_BCDD35C835BE896D__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3C3120)

inline static constexpr unsigned int Class_1_BCDD35C835BE896D_TypeDefinitionIndex = 40968;

class Class_1_BCDD35C835BE896D : public ::System::Object
{
public:
	::System::String* EJAGLEMAIKI; // 0x10
	::Struct_2_D828E592C9D2FCC9 ODEPGMAFHKI; // 0x18
	::RPG::Client::LittleGame::Match3::Match3PVEGameResult JCHFCNFHCMM; // 0x20
	::Struct_2_52A902145F5BE51F AFNFLDNKCNP; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCDD35C835BE896D__CTOR_OFFSET))(this);
	}
};
