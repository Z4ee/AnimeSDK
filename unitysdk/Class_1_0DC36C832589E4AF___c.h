#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ScheduleData; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_0DC36C832589E4AF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB4D7450)
#define CLASS_1_0DC36C832589E4AF___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB4D7490)
#define CLASS_1_0DC36C832589E4AF___C__GETUNSEENINSCHEDULELEVELGROUPIDS_B__2_0_OFFSET UNITYSDK_OFFSET(0xB4D74A0)

inline static constexpr unsigned int Class_1_0DC36C832589E4AF___c_TypeDefinitionIndex = 82084;

class Class_1_0DC36C832589E4AF___c : public ::System::Object
{
public:
	static ::Class_1_0DC36C832589E4AF___c** StaticGet___9()
	{
		return (::Class_1_0DC36C832589E4AF___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0DC36C832589E4AF___c_TypeDefinitionIndex)->GetStaticField(0x5B160);
	}
	static ::System::Action_1<::RPG::Client::ScheduleData*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::RPG::Client::ScheduleData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0DC36C832589E4AF___c_TypeDefinitionIndex)->GetStaticField(0x5B168);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0DC36C832589E4AF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0DC36C832589E4AF___C__CTOR_OFFSET))(this);
	}

	::System::Void _GetUnseenInScheduleLevelGroupIDs_b__2_0(::RPG::Client::ScheduleData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + CLASS_1_0DC36C832589E4AF___C__GETUNSEENINSCHEDULELEVELGROUPIDS_B__2_0_OFFSET))(this, a1);
	}
};
