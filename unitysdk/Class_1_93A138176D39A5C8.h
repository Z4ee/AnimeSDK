#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class IronTombNormalModeThresholdConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_1_93A138176D39A5C8_METHOD_1_29EA1EBCE9EEFD86_OFFSET UNITYSDK_OFFSET(0x11969440)
#define CLASS_1_93A138176D39A5C8_METHOD_1_C4BFBB1BE6C0430A_OFFSET UNITYSDK_OFFSET(0x11969510)
#define CLASS_1_93A138176D39A5C8__CTOR_OFFSET UNITYSDK_OFFSET(0x11969500)

inline static constexpr unsigned int Class_1_93A138176D39A5C8_TypeDefinitionIndex = 51188;

class Class_1_93A138176D39A5C8 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93A138176D39A5C8__CTOR_OFFSET))(this);
	}

	static ::Class_1_93A138176D39A5C8* Method_1_29EA1EBCE9EEFD86(::RPG::GameCore::IronTombNormalModeThresholdConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::Class_1_93A138176D39A5C8*(*)(::RPG::GameCore::IronTombNormalModeThresholdConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_93A138176D39A5C8_METHOD_1_29EA1EBCE9EEFD86_OFFSET))(a1, a2);
	}

	static ::Class_1_93A138176D39A5C8* Method_1_C4BFBB1BE6C0430A()
	{
		return ((::Class_1_93A138176D39A5C8*(*)())((::PBYTE)hIl2Cpp + CLASS_1_93A138176D39A5C8_METHOD_1_C4BFBB1BE6C0430A_OFFSET))();
	}
};
