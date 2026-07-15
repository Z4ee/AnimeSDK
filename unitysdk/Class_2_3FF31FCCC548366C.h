#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_1A05043E9AD1C5D3;

#define CLASS_2_3FF31FCCC548366C_GET_SOLOSTANUID_OFFSET UNITYSDK_OFFSET(0x176F6870)
#define CLASS_2_3FF31FCCC548366C_SET_SOLOSTANUID_OFFSET UNITYSDK_OFFSET(0x176F6880)
#define CLASS_2_3FF31FCCC548366C_UPDATE_OFFSET UNITYSDK_OFFSET(0x176F67D0)
#define CLASS_2_3FF31FCCC548366C__CTOR_OFFSET UNITYSDK_OFFSET(0x176F6750)

inline static constexpr unsigned int Class_2_3FF31FCCC548366C_TypeDefinitionIndex = 62101;

class Class_2_3FF31FCCC548366C : public ::RPG::Client::GridFightGameModifier
{
public:
	::System::UInt32 _SoloStanUID_k__BackingField; // 0x28

	::System::Void _ctor(::Class_1_1A05043E9AD1C5D3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1A05043E9AD1C5D3*))((::PBYTE)hIl2Cpp + CLASS_2_3FF31FCCC548366C__CTOR_OFFSET))(this, a1);
	}

	::System::Void Update(::Class_1_1A05043E9AD1C5D3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1A05043E9AD1C5D3*))((::PBYTE)hIl2Cpp + CLASS_2_3FF31FCCC548366C_UPDATE_OFFSET))(this, a1);
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
