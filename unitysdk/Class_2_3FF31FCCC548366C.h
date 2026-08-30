#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_B8E6D5AD8534D123;

#define CLASS_2_3FF31FCCC548366C_GET_SOLOSTANUID_OFFSET UNITYSDK_OFFSET(0x17AC3600)
#define CLASS_2_3FF31FCCC548366C_SET_SOLOSTANUID_OFFSET UNITYSDK_OFFSET(0x17AC3610)
#define CLASS_2_3FF31FCCC548366C_UPDATE_OFFSET UNITYSDK_OFFSET(0x17AC3560)
#define CLASS_2_3FF31FCCC548366C__CTOR_OFFSET UNITYSDK_OFFSET(0x17AC34E0)

inline static constexpr unsigned int Class_2_3FF31FCCC548366C_TypeDefinitionIndex = 65085;

class Class_2_3FF31FCCC548366C : public ::RPG::Client::GridFightGameModifier
{
public:
	::System::UInt32 _SoloStanUID_k__BackingField; // 0x28

	::System::Void _ctor(::Class_1_B8E6D5AD8534D123* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B8E6D5AD8534D123*))((::PBYTE)hIl2Cpp + CLASS_2_3FF31FCCC548366C__CTOR_OFFSET))(this, a1);
	}

	::System::Void Update(::Class_1_B8E6D5AD8534D123* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B8E6D5AD8534D123*))((::PBYTE)hIl2Cpp + CLASS_2_3FF31FCCC548366C_UPDATE_OFFSET))(this, a1);
	}

	::System::UInt32 get_SoloStanUID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3FF31FCCC548366C_GET_SOLOSTANUID_OFFSET))(this);
	}

	::System::Void set_SoloStanUID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_3FF31FCCC548366C_SET_SOLOSTANUID_OFFSET))(this, a1);
	}
};
