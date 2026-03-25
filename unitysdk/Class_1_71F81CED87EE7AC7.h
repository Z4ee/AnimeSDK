#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_36039D62266A61A1;
class Class_1_4CF8088A158DCE25_89;
namespace RPG::Client { class RogueTournClassicRoomTypeData; }

#define CLASS_1_71F81CED87EE7AC7_METHOD_1_802A91B17D17C656_OFFSET UNITYSDK_OFFSET(0x1177A740)
#define CLASS_1_71F81CED87EE7AC7_METHOD_1_B34C1EF5D195AA30_OFFSET UNITYSDK_OFFSET(0x1177A6F0)

inline static constexpr unsigned int Class_1_71F81CED87EE7AC7_TypeDefinitionIndex = 55159;

class Class_1_71F81CED87EE7AC7 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_B34C1EF5D195AA30(::Class_1_36039D62266A61A1* a1)
	{
		return ((::System::Boolean(*)(::Class_1_36039D62266A61A1*))((::PBYTE)hIl2Cpp + CLASS_1_71F81CED87EE7AC7_METHOD_1_B34C1EF5D195AA30_OFFSET))(a1);
	}

	static ::RPG::Client::RogueTournClassicRoomTypeData* Method_1_802A91B17D17C656(::Class_1_4CF8088A158DCE25_89* a1)
	{
		return ((::RPG::Client::RogueTournClassicRoomTypeData*(*)(::Class_1_4CF8088A158DCE25_89*))((::PBYTE)hIl2Cpp + CLASS_1_71F81CED87EE7AC7_METHOD_1_802A91B17D17C656_OFFSET))(a1);
	}
};
