#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_02098A44CBBFEEE1_1;
class Class_1_21C7581DFE99F091_96;
namespace RPG::Client { class RogueTournClassicRoomTypeData; }

#define CLASS_1_71F81CED87EE7AC7_METHOD_1_802A91B17D17C656_OFFSET UNITYSDK_OFFSET(0x11DBFDB0)
#define CLASS_1_71F81CED87EE7AC7_METHOD_1_B34C1EF5D195AA30_OFFSET UNITYSDK_OFFSET(0x11DBFD60)

inline static constexpr unsigned int Class_1_71F81CED87EE7AC7_TypeDefinitionIndex = 62347;

class Class_1_71F81CED87EE7AC7 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_B34C1EF5D195AA30(::Class_1_02098A44CBBFEEE1_1* a1)
	{
		return ((::System::Boolean(*)(::Class_1_02098A44CBBFEEE1_1*))((::PBYTE)hIl2Cpp + CLASS_1_71F81CED87EE7AC7_METHOD_1_B34C1EF5D195AA30_OFFSET))(a1);
	}

	static ::RPG::Client::RogueTournClassicRoomTypeData* Method_1_802A91B17D17C656(::Class_1_21C7581DFE99F091_96* a1)
	{
		return ((::RPG::Client::RogueTournClassicRoomTypeData*(*)(::Class_1_21C7581DFE99F091_96*))((::PBYTE)hIl2Cpp + CLASS_1_71F81CED87EE7AC7_METHOD_1_802A91B17D17C656_OFFSET))(a1);
	}
};
