#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class RogueTournExhibitionInfo; }
namespace RPG::GameCore { class RogueTournSetExhibitionBoothImage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C0025ED35CD5FC42_METHOD_3_BF84C3CDA2680729_OFFSET UNITYSDK_OFFSET(0x18A35C20)
#define CLASS_3_C0025ED35CD5FC42_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18A354A0)
#define CLASS_3_C0025ED35CD5FC42__CTOR_OFFSET UNITYSDK_OFFSET(0x18A35470)

inline static constexpr unsigned int Class_3_C0025ED35CD5FC42_TypeDefinitionIndex = 58645;

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

	static ::RPG::Client::RogueTournExhibitionInfo* Method_3_BF84C3CDA2680729()
	{
		return ((::RPG::Client::RogueTournExhibitionInfo*(*)())((::PBYTE)hIl2Cpp + CLASS_3_C0025ED35CD5FC42_METHOD_3_BF84C3CDA2680729_OFFSET))();
	}
};
