#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_02098A44CBBFEEE1_2;
class Class_1_6BD41257D23618B4_22;
namespace RPG::Client { class RogueTournClassicRoomTypeData; }

#define CLASS_1_71F81CED87EE7AC7_METHOD_1_802A91B17D17C656_OFFSET UNITYSDK_OFFSET(0x12AAA660)
#define CLASS_1_71F81CED87EE7AC7_METHOD_1_B34C1EF5D195AA30_OFFSET UNITYSDK_OFFSET(0x12AAA610)

inline static constexpr unsigned int Class_1_71F81CED87EE7AC7_TypeDefinitionIndex = 63280;

class Class_1_71F81CED87EE7AC7 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_B34C1EF5D195AA30(::Class_1_02098A44CBBFEEE1_2* a1)
	{
		return ((::System::Boolean(*)(::Class_1_02098A44CBBFEEE1_2*))((::PBYTE)hIl2Cpp + CLASS_1_71F81CED87EE7AC7_METHOD_1_B34C1EF5D195AA30_OFFSET))(a1);
	}

	static ::RPG::Client::RogueTournClassicRoomTypeData* Method_1_802A91B17D17C656(::Class_1_6BD41257D23618B4_22* a1)
	{
		return ((::RPG::Client::RogueTournClassicRoomTypeData*(*)(::Class_1_6BD41257D23618B4_22*))((::PBYTE)hIl2Cpp + CLASS_1_71F81CED87EE7AC7_METHOD_1_802A91B17D17C656_OFFSET))(a1);
	}
};
