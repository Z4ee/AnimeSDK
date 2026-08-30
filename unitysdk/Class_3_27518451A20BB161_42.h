#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_4EEAD21E873B5A41;
class Class_3_A40833FE408673C3;
namespace RPG::Client { class FiveDimGameInstance; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_42_METHOD_3_1303B19CF454BD06_OFFSET UNITYSDK_OFFSET(0x19864DD0)
#define CLASS_3_27518451A20BB161_42_METHOD_3_ADA92E7149A863E6_OFFSET UNITYSDK_OFFSET(0x198648B0)
#define CLASS_3_27518451A20BB161_42_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x198646F0)
#define CLASS_3_27518451A20BB161_42__CTOR_OFFSET UNITYSDK_OFFSET(0x198646C0)

inline static constexpr unsigned int Class_3_27518451A20BB161_42_TypeDefinitionIndex = 53115;

class Class_3_27518451A20BB161_42 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_A40833FE408673C3*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_A40833FE408673C3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_A40833FE408673C3*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_42__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_42_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_ADA92E7149A863E6(::RPG::Client::FiveDimGameInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_42_METHOD_3_ADA92E7149A863E6_OFFSET))(this, a1);
	}

	::System::Void Method_3_1303B19CF454BD06(::Class_2_4EEAD21E873B5A41* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_4EEAD21E873B5A41*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_42_METHOD_3_1303B19CF454BD06_OFFSET))(this, a1);
	}
};
