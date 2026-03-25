#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class RogueTournExhibitionInfo; }
namespace RPG::GameCore { class RogueTournSetExhibitionBoothImage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C0025ED35CD5FC42_METHOD_3_FDD52BE61FD9BD75_OFFSET UNITYSDK_OFFSET(0x119393A0)
#define CLASS_3_C0025ED35CD5FC42_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11938EF0)
#define CLASS_3_C0025ED35CD5FC42__CTOR_OFFSET UNITYSDK_OFFSET(0x11938EC0)

inline static constexpr unsigned int Class_3_C0025ED35CD5FC42_TypeDefinitionIndex = 47191;

class Class_3_C0025ED35CD5FC42 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RogueTournSetExhibitionBoothImage*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueTournSetExhibitionBoothImage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueTournSetExhibitionBoothImage*))((::PBYTE)hIl2Cpp + CLASS_3_C0025ED35CD5FC42__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C0025ED35CD5FC42_ONTASKBEGIN_OFFSET))(this);
	}

	static ::RPG::Client::RogueTournExhibitionInfo* Method_3_FDD52BE61FD9BD75()
	{
		return ((::RPG::Client::RogueTournExhibitionInfo*(*)())((::PBYTE)hIl2Cpp + CLASS_3_C0025ED35CD5FC42_METHOD_3_FDD52BE61FD9BD75_OFFSET))();
	}
};
