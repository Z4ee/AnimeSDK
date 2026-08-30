#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5FB2896E6C484E49.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingEffectSource.h"

namespace RPG::Client { class SwordTrainingStatusChangeInfo; }
namespace RPG::GameCore { class SwordTrainingEffectRow; }

#define CLASS_2_37A156CE15DC2786_METHOD_2_37D0382D0C30A2DC_OFFSET UNITYSDK_OFFSET(0x186D7A50)
#define CLASS_2_37A156CE15DC2786_METHOD_2_7B80D4AAEAB2750F_OFFSET UNITYSDK_OFFSET(0x186D7940)
#define CLASS_2_37A156CE15DC2786_METHOD_2_979A6D0F7FCF284A_OFFSET UNITYSDK_OFFSET(0x186D7AC0)
#define CLASS_2_37A156CE15DC2786__CTOR_OFFSET UNITYSDK_OFFSET(0x186D7930)

inline static constexpr unsigned int Class_2_37A156CE15DC2786_TypeDefinitionIndex = 74724;

class Class_2_37A156CE15DC2786 : public ::Class_1_5FB2896E6C484E49
{
public:
	::System::Void _ctor(::RPG::GameCore::SwordTrainingEffectRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwordTrainingEffectRow*))((::PBYTE)hIl2Cpp + CLASS_2_37A156CE15DC2786__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_7B80D4AAEAB2750F(::RPG::Client::SwordTrainingStatusChangeInfo* a1, ::RPG::Client::SwordTraining::SwordTrainingEffectSource a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingStatusChangeInfo*, ::RPG::Client::SwordTraining::SwordTrainingEffectSource))((::PBYTE)hIl2Cpp + CLASS_2_37A156CE15DC2786_METHOD_2_7B80D4AAEAB2750F_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_979A6D0F7FCF284A(::RPG::Client::SwordTrainingStatusChangeInfo* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwordTrainingStatusChangeInfo*))((::PBYTE)hIl2Cpp + CLASS_2_37A156CE15DC2786_METHOD_2_979A6D0F7FCF284A_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_37D0382D0C30A2DC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37A156CE15DC2786_METHOD_2_37D0382D0C30A2DC_OFFSET))(this);
	}
};
