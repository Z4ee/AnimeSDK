#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FloorCustomValue_1.h"

namespace RPG::GameCore { class FloorCustomStringConfig; }
namespace System { class String; }

#define CLASS_3_634F5FD78C8449A2_ISVALUEEQUALSTO_OFFSET UNITYSDK_OFFSET(0x18F88CF0)
#define CLASS_3_634F5FD78C8449A2__CTOR_OFFSET UNITYSDK_OFFSET(0x18F88CC0)

inline static constexpr unsigned int Class_3_634F5FD78C8449A2_TypeDefinitionIndex = 59336;

class Class_3_634F5FD78C8449A2 : public ::RPG::Client::FloorCustomValue_1<::System::String*>
{
public:
	::System::Void _ctor(::RPG::GameCore::FloorCustomStringConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FloorCustomStringConfig*))((::PBYTE)hIl2Cpp + CLASS_3_634F5FD78C8449A2__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean IsValueEqualsTo(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_634F5FD78C8449A2_ISVALUEEQUALSTO_OFFSET))(this, a1);
	}
};
