#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/FightServerLogLevel.h"
#include "unitysdk/RPG/LogTag.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_0773174CACC0BBE5_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x166EE0B0)
#define CLASS_1_0773174CACC0BBE5_METHOD_1_89414AD5EAC8F415_OFFSET UNITYSDK_OFFSET(0x166EE1A0)
#define CLASS_1_0773174CACC0BBE5_METHOD_1_A160A345DEC8E6CA_OFFSET UNITYSDK_OFFSET(0x166EE0F0)
#define CLASS_1_0773174CACC0BBE5__CTOR_OFFSET UNITYSDK_OFFSET(0x166EE0A0)

inline static constexpr unsigned int Class_1_0773174CACC0BBE5_TypeDefinitionIndex = 28632;

class Class_1_0773174CACC0BBE5 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0773174CACC0BBE5__CTOR_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0773174CACC0BBE5_INITIALIZE_OFFSET))(this);
	}

	::System::Void Method_1_A160A345DEC8E6CA(::System::String* a1, ::RPG::Client::LittleGameShare::FightServerLogLevel a2, ::RPG::LogTag a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::LittleGameShare::FightServerLogLevel, ::RPG::LogTag))((::PBYTE)hIl2Cpp + CLASS_1_0773174CACC0BBE5_METHOD_1_A160A345DEC8E6CA_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void Method_1_89414AD5EAC8F415(::System::String* a1, ::RPG::Client::LittleGameShare::FightServerLogLevel a2, ::RPG::LogTag a3)
	{
		return ((::System::Void(*)(::System::String*, ::RPG::Client::LittleGameShare::FightServerLogLevel, ::RPG::LogTag))((::PBYTE)hIl2Cpp + CLASS_1_0773174CACC0BBE5_METHOD_1_89414AD5EAC8F415_OFFSET))(a1, a2, a3);
	}
};
