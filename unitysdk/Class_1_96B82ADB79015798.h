#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_873;
namespace RPG::Client { class GridFightPrayQuest; }

#define CLASS_1_96B82ADB79015798_METHOD_1_2B80B139E36D666A_OFFSET UNITYSDK_OFFSET(0x18FA3910)
#define CLASS_1_96B82ADB79015798__CTOR_OFFSET UNITYSDK_OFFSET(0x18FA39B0)

inline static constexpr unsigned int Class_1_96B82ADB79015798_TypeDefinitionIndex = 65157;

class Class_1_96B82ADB79015798 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96B82ADB79015798__CTOR_OFFSET))(this);
	}

	static ::Class_0_16E4307DCC419505_873* Method_1_2B80B139E36D666A(::RPG::Client::GridFightPrayQuest* a1)
	{
		return ((::Class_0_16E4307DCC419505_873*(*)(::RPG::Client::GridFightPrayQuest*))((::PBYTE)hIl2Cpp + CLASS_1_96B82ADB79015798_METHOD_1_2B80B139E36D666A_OFFSET))(a1);
	}
};
