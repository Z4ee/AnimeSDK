#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5772346ACD452D08.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::Client { class IGamePhase; }

#define CLASS_2_55B9A8684EB565C5_METHOD_2_71A37F8D56C1C957_OFFSET UNITYSDK_OFFSET(0x1387AB20)
#define CLASS_2_55B9A8684EB565C5_METHOD_2_739C26C0BBA0E3EA_OFFSET UNITYSDK_OFFSET(0x1387AC80)
#define CLASS_2_55B9A8684EB565C5_METHOD_2_74C2BB27DF174BA3_OFFSET UNITYSDK_OFFSET(0x1387AD40)
#define CLASS_2_55B9A8684EB565C5_METHOD_2_F47A00B4197C5C9F_OFFSET UNITYSDK_OFFSET(0x1387AD30)
#define CLASS_2_55B9A8684EB565C5__CTOR_OFFSET UNITYSDK_OFFSET(0x1387AB00)

inline static constexpr unsigned int Class_2_55B9A8684EB565C5_TypeDefinitionIndex = 57201;

class Class_2_55B9A8684EB565C5 : public ::Class_1_5772346ACD452D08
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55B9A8684EB565C5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_71A37F8D56C1C957(::RPG::Client::IGamePhase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IGamePhase*))((::PBYTE)hIl2Cpp + CLASS_2_55B9A8684EB565C5_METHOD_2_71A37F8D56C1C957_OFFSET))(this, a1);
	}

	::RPG::Client::TextID Method_2_739C26C0BBA0E3EA()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55B9A8684EB565C5_METHOD_2_739C26C0BBA0E3EA_OFFSET))(this);
	}

	::System::Void Method_2_F47A00B4197C5C9F(::RPG::Client::IGamePhase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IGamePhase*))((::PBYTE)hIl2Cpp + CLASS_2_55B9A8684EB565C5_METHOD_2_F47A00B4197C5C9F_OFFSET))(this, a1);
	}

	::RPG::Client::TextID Method_2_74C2BB27DF174BA3()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55B9A8684EB565C5_METHOD_2_74C2BB27DF174BA3_OFFSET))(this);
	}
};
