#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D5FAA251D0AA82EB.h"

class Class_1_DED4BA2FC834659B;
class Class_1_F9FBCC956DFCF137_13;
namespace RPG::GameCore { class HipplenIncidentCommitConfig; }

#define CLASS_2_FE196BB896073BCD_METHOD_2_1815072AC4F29126_OFFSET UNITYSDK_OFFSET(0x124C0C40)
#define CLASS_2_FE196BB896073BCD_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x124C10F0)
#define CLASS_2_FE196BB896073BCD_METHOD_2_9FD67FA08AA07EE6_OFFSET UNITYSDK_OFFSET(0x124C0FC0)
#define CLASS_2_FE196BB896073BCD_METHOD_2_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x124C0DC0)
#define CLASS_2_FE196BB896073BCD__CTOR_OFFSET UNITYSDK_OFFSET(0x124C0D40)

inline static constexpr unsigned int Class_2_FE196BB896073BCD_TypeDefinitionIndex = 69602;

class Class_2_FE196BB896073BCD : public ::Class_1_D5FAA251D0AA82EB
{
public:
	::RPG::GameCore::HipplenIncidentCommitConfig* Field_2_0; // 0x30
	::System::Boolean Field_2_1; // 0x38

	::System::Void _ctor(::RPG::GameCore::HipplenIncidentCommitConfig* a1, ::Class_1_DED4BA2FC834659B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HipplenIncidentCommitConfig*, ::Class_1_DED4BA2FC834659B*))((::PBYTE)hIl2Cpp + CLASS_2_FE196BB896073BCD__CTOR_OFFSET))(this, a1, a2);
	}

	static ::Class_2_FE196BB896073BCD* Method_2_1815072AC4F29126(::RPG::GameCore::HipplenIncidentCommitConfig* a1, ::Class_1_DED4BA2FC834659B* a2)
	{
		return ((::Class_2_FE196BB896073BCD*(*)(::RPG::GameCore::HipplenIncidentCommitConfig*, ::Class_1_DED4BA2FC834659B*))((::PBYTE)hIl2Cpp + CLASS_2_FE196BB896073BCD_METHOD_2_1815072AC4F29126_OFFSET))(a1, a2);
	}

	::System::Void Method_2_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE196BB896073BCD_METHOD_2_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_2_9FD67FA08AA07EE6(::Class_1_F9FBCC956DFCF137_13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_13*))((::PBYTE)hIl2Cpp + CLASS_2_FE196BB896073BCD_METHOD_2_9FD67FA08AA07EE6_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE196BB896073BCD_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
