#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_4EEAD21E873B5A41;
class Class_3_94C034EB4ACEB27D;
namespace RPG::Client { class FiveDimGameInstance; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_48_METHOD_3_4AB8138E602A7184_OFFSET UNITYSDK_OFFSET(0x15A8B9B0)
#define CLASS_3_27518451A20BB161_48_METHOD_3_A67FA08E342D22C3_OFFSET UNITYSDK_OFFSET(0x15A8BC50)
#define CLASS_3_27518451A20BB161_48_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A8B7F0)
#define CLASS_3_27518451A20BB161_48__CTOR_OFFSET UNITYSDK_OFFSET(0x15A8B7C0)

inline static constexpr unsigned int Class_3_27518451A20BB161_48_TypeDefinitionIndex = 52842;

class Class_3_27518451A20BB161_48 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_94C034EB4ACEB27D*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_94C034EB4ACEB27D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_94C034EB4ACEB27D*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_48__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_48_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_4AB8138E602A7184(::RPG::Client::FiveDimGameInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_48_METHOD_3_4AB8138E602A7184_OFFSET))(this, a1);
	}

	::System::Void Method_3_A67FA08E342D22C3(::Class_2_4EEAD21E873B5A41* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_4EEAD21E873B5A41*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_48_METHOD_3_A67FA08E342D22C3_OFFSET))(this, a1);
	}
};
