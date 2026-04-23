#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

namespace RPG::Client { class MaterialSwitchBehavior; }

#define CLASS_2_B80D86ED8407A96D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x121430E0)
#define CLASS_2_B80D86ED8407A96D_METHOD_2_2D1DFA4BDF5C46E6_OFFSET UNITYSDK_OFFSET(0x12143130)
#define CLASS_2_B80D86ED8407A96D_METHOD_2_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x121431F0)
#define CLASS_2_B80D86ED8407A96D__CTOR_OFFSET UNITYSDK_OFFSET(0x121430D0)

inline static constexpr unsigned int Class_2_B80D86ED8407A96D_TypeDefinitionIndex = 52869;

class Class_2_B80D86ED8407A96D : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::Client::MaterialSwitchBehavior* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B80D86ED8407A96D__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B80D86ED8407A96D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_2D1DFA4BDF5C46E6(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B80D86ED8407A96D_METHOD_2_2D1DFA4BDF5C46E6_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B80D86ED8407A96D_METHOD_2_7DB49B5407C8FD68_OFFSET))(this);
	}
};
