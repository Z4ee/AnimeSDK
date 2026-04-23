#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_23F67DD15593C8D6;
namespace RPG::Client { class GridFightDivisionListViewExtra; }

#define CLASS_1_3977C7347E397100_ENTER_OFFSET UNITYSDK_OFFSET(0xECB9B70)
#define CLASS_1_3977C7347E397100_EXIT_OFFSET UNITYSDK_OFFSET(0xECBA090)
#define CLASS_1_3977C7347E397100_TICK_OFFSET UNITYSDK_OFFSET(0xECB9E00)
#define CLASS_1_3977C7347E397100__CTOR_OFFSET UNITYSDK_OFFSET(0xECBA0D0)

inline static constexpr unsigned int Class_1_3977C7347E397100_TypeDefinitionIndex = 59307;

class Class_1_3977C7347E397100 : public ::System::Object
{
public:
	::Class_1_23F67DD15593C8D6* Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3977C7347E397100__CTOR_OFFSET))(this);
	}

	::System::Void Enter(::RPG::Client::GridFightDivisionListViewExtra* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightDivisionListViewExtra*))((::PBYTE)hIl2Cpp + CLASS_1_3977C7347E397100_ENTER_OFFSET))(this, a1);
	}

	::System::Void Tick(::RPG::Client::GridFightDivisionListViewExtra* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightDivisionListViewExtra*))((::PBYTE)hIl2Cpp + CLASS_1_3977C7347E397100_TICK_OFFSET))(this, a1);
	}

	::System::Void Exit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3977C7347E397100_EXIT_OFFSET))(this);
	}
};
