#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_902742FEC03162EB;

#define CLASS_1_8FA131E93D046711_GET_CONTENTTEXTID_OFFSET UNITYSDK_OFFSET(0x9379800)
#define CLASS_1_8FA131E93D046711_GET_POSITIONINFO_OFFSET UNITYSDK_OFFSET(0x93797E0)
#define CLASS_1_8FA131E93D046711_SET_CONTENTTEXTID_OFFSET UNITYSDK_OFFSET(0x9379810)
#define CLASS_1_8FA131E93D046711_SET_POSITIONINFO_OFFSET UNITYSDK_OFFSET(0x93797F0)
#define CLASS_1_8FA131E93D046711__CTOR_OFFSET UNITYSDK_OFFSET(0x9379820)

inline static constexpr unsigned int Class_1_8FA131E93D046711_TypeDefinitionIndex = 58024;

class Class_1_8FA131E93D046711 : public ::System::Object
{
public:
	::Class_1_902742FEC03162EB* _PositionInfo_k__BackingField; // 0x10
	::RPG::Client::TextID _ContentTextID_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FA131E93D046711__CTOR_OFFSET))(this);
	}

	::Class_1_902742FEC03162EB* get_PositionInfo()
	{
		return ((::Class_1_902742FEC03162EB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FA131E93D046711_GET_POSITIONINFO_OFFSET))(this);
	}

	::System::Void set_PositionInfo(::Class_1_902742FEC03162EB* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_902742FEC03162EB*))((::PBYTE)hIl2Cpp + CLASS_1_8FA131E93D046711_SET_POSITIONINFO_OFFSET))(this, value);
	}

	::RPG::Client::TextID get_ContentTextID()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FA131E93D046711_GET_CONTENTTEXTID_OFFSET))(this);
	}

	::System::Void set_ContentTextID(::RPG::Client::TextID value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_8FA131E93D046711_SET_CONTENTTEXTID_OFFSET))(this, value);
	}
};
