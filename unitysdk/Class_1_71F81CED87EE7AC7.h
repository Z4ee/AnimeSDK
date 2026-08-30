#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_125;
class Class_1_C9DFE5EE7107C629_21;
namespace RPG::Client { class RogueTournClassicRoomTypeData; }

#define CLASS_1_71F81CED87EE7AC7_METHOD_1_802A91B17D17C656_OFFSET UNITYSDK_OFFSET(0x19BE50D0)
#define CLASS_1_71F81CED87EE7AC7_METHOD_1_B34C1EF5D195AA30_OFFSET UNITYSDK_OFFSET(0x19BE5080)

inline static constexpr unsigned int Class_1_71F81CED87EE7AC7_TypeDefinitionIndex = 67643;

class Class_1_71F81CED87EE7AC7 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_B34C1EF5D195AA30(::Class_1_C9DFE5EE7107C629_21* a1)
	{
		return ((::System::Boolean(*)(::Class_1_C9DFE5EE7107C629_21*))((::PBYTE)hIl2Cpp + CLASS_1_71F81CED87EE7AC7_METHOD_1_B34C1EF5D195AA30_OFFSET))(a1);
	}

	static ::RPG::Client::RogueTournClassicRoomTypeData* Method_1_802A91B17D17C656(::Class_1_21C7581DFE99F091_125* a1)
	{
		return ((::RPG::Client::RogueTournClassicRoomTypeData*(*)(::Class_1_21C7581DFE99F091_125*))((::PBYTE)hIl2Cpp + CLASS_1_71F81CED87EE7AC7_METHOD_1_802A91B17D17C656_OFFSET))(a1);
	}
};
