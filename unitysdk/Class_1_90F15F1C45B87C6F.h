#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SectionType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_90F15F1C45B87C6F_METHOD_1_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0x1BFAD840)
#define CLASS_1_90F15F1C45B87C6F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BFB9B10)
#define CLASS_1_90F15F1C45B87C6F__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFAD830)

inline static constexpr unsigned int Class_1_90F15F1C45B87C6F_TypeDefinitionIndex = 40262;

class Class_1_90F15F1C45B87C6F : public ::System::Object
{
public:
	::System::UInt32 DEFBCHJCDGL; // 0x10
	::System::UInt32 ELFDDLBMMPC; // 0x14
	::RPG::Client::SectionType GMPGDEINODK; // 0x18
	::System::UInt32 JFAGECNFHJL; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90F15F1C45B87C6F__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90F15F1C45B87C6F_METHOD_1_5CEC4607322705E5_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90F15F1C45B87C6F_TOSTRING_OFFSET))(this);
	}
};
