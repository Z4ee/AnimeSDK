#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::Card { class IFateRinCardViewModel; }
namespace System { class String; }

#define CLASS_1_0F9357E173FF14B1_METHOD_1_20D78142557EF460_OFFSET UNITYSDK_OFFSET(0x14B0F550)

inline static constexpr unsigned int Class_1_0F9357E173FF14B1_TypeDefinitionIndex = 75706;

class Class_1_0F9357E173FF14B1 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_2; // 0x0
	// static const ::System::String* Field_1_3; // 0x0
	// static const ::System::String* Field_1_4; // 0x0
	// static const ::System::String* Field_1_5; // 0x0
	// static const ::System::String* Field_1_6; // 0x0
	// static const ::System::String* Field_1_7; // 0x0
	// static const ::System::String* Field_1_8; // 0x0
	// static const ::System::String* Field_1_9; // 0x0
	// static const ::System::String* Field_1_10; // 0x0
	// static const ::System::String* Field_1_11; // 0x0
	// static const ::System::String* Field_1_12; // 0x0

	static ::System::String* Method_1_20D78142557EF460(::RPG::Client::FateRin::Card::IFateRinCardViewModel* a1)
	{
		return ((::System::String*(*)(::RPG::Client::FateRin::Card::IFateRinCardViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_0F9357E173FF14B1_METHOD_1_20D78142557EF460_OFFSET))(a1);
	}
};
