#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/SingleCardRefreshReason.h"
#include "unitysdk/System/Object.h"

class Class_1_D294488719556168;
class Class_2_7EA45D2647F35CDD;

#define CLASS_1_20EF5F84403EA8B8__CTOR_OFFSET UNITYSDK_OFFSET(0x1600DB60)

inline static constexpr unsigned int Class_1_20EF5F84403EA8B8_TypeDefinitionIndex = 75645;

class Class_1_20EF5F84403EA8B8 : public ::System::Object
{
public:
	::Class_2_7EA45D2647F35CDD* Field_1_0; // 0x10
	::Class_1_D294488719556168* Field_1_1; // 0x18
	::RPG::Client::FateRin::SingleCardRefreshReason Field_1_2; // 0x20

	::System::Void _ctor(::Class_2_7EA45D2647F35CDD* a1, ::Class_1_D294488719556168* a2, ::RPG::Client::FateRin::SingleCardRefreshReason a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_7EA45D2647F35CDD*, ::Class_1_D294488719556168*, ::RPG::Client::FateRin::SingleCardRefreshReason))((::PBYTE)hIl2Cpp + CLASS_1_20EF5F84403EA8B8__CTOR_OFFSET))(this, a1, a2, a3);
	}
};
