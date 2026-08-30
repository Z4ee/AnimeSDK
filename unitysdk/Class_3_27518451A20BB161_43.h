#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_4EEAD21E873B5A41;
class Class_3_94C034EB4ACEB27D;
namespace RPG::Client { class FiveDimGameInstance; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_43_METHOD_3_2D186F9F291797DE_OFFSET UNITYSDK_OFFSET(0x191591A0)
#define CLASS_3_27518451A20BB161_43_METHOD_3_A67FA08E342D22C3_OFFSET UNITYSDK_OFFSET(0x191594F0)
#define CLASS_3_27518451A20BB161_43_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19158FE0)
#define CLASS_3_27518451A20BB161_43__CTOR_OFFSET UNITYSDK_OFFSET(0x19158FB0)

inline static constexpr unsigned int Class_3_27518451A20BB161_43_TypeDefinitionIndex = 53116;

class Class_3_27518451A20BB161_43 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_94C034EB4ACEB27D*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_94C034EB4ACEB27D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_94C034EB4ACEB27D*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_43__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_43_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_2D186F9F291797DE(::RPG::Client::FiveDimGameInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_43_METHOD_3_2D186F9F291797DE_OFFSET))(this, a1);
	}

	::System::Void Method_3_A67FA08E342D22C3(::Class_2_4EEAD21E873B5A41* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_4EEAD21E873B5A41*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_43_METHOD_3_A67FA08E342D22C3_OFFSET))(this, a1);
	}
};
