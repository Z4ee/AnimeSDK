#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5772346ACD452D08.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::Client { class IGamePhase; }

#define CLASS_2_7A5D5C0FE07CA2BC_1_METHOD_2_56C94DFBE061EF3F_OFFSET UNITYSDK_OFFSET(0x995D590)
#define CLASS_2_7A5D5C0FE07CA2BC_1_METHOD_2_71A37F8D56C1C957_OFFSET UNITYSDK_OFFSET(0x995D390)
#define CLASS_2_7A5D5C0FE07CA2BC_1_METHOD_2_739C26C0BBA0E3EA_OFFSET UNITYSDK_OFFSET(0x995D4E0)
#define CLASS_2_7A5D5C0FE07CA2BC_1_METHOD_2_74C2BB27DF174BA3_OFFSET UNITYSDK_OFFSET(0x995D5A0)
#define CLASS_2_7A5D5C0FE07CA2BC_1__CTOR_OFFSET UNITYSDK_OFFSET(0x995D370)

inline static constexpr unsigned int Class_2_7A5D5C0FE07CA2BC_1_TypeDefinitionIndex = 56438;

class Class_2_7A5D5C0FE07CA2BC_1 : public ::Class_1_5772346ACD452D08
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A5D5C0FE07CA2BC_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_71A37F8D56C1C957(::RPG::Client::IGamePhase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IGamePhase*))((::PBYTE)hIl2Cpp + CLASS_2_7A5D5C0FE07CA2BC_1_METHOD_2_71A37F8D56C1C957_OFFSET))(this, a1);
	}

	::RPG::Client::TextID Method_2_739C26C0BBA0E3EA()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A5D5C0FE07CA2BC_1_METHOD_2_739C26C0BBA0E3EA_OFFSET))(this);
	}

	::System::Void Method_2_56C94DFBE061EF3F(::RPG::Client::IGamePhase* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IGamePhase*))((::PBYTE)hIl2Cpp + CLASS_2_7A5D5C0FE07CA2BC_1_METHOD_2_56C94DFBE061EF3F_OFFSET))(this, P0);
	}

	::RPG::Client::TextID Method_2_74C2BB27DF174BA3()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A5D5C0FE07CA2BC_1_METHOD_2_74C2BB27DF174BA3_OFFSET))(this);
	}
};
