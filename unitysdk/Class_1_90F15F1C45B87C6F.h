#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SectionType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_90F15F1C45B87C6F_METHOD_1_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0x1A4BE860)
#define CLASS_1_90F15F1C45B87C6F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A4CAB30)
#define CLASS_1_90F15F1C45B87C6F__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4BE850)

inline static constexpr unsigned int Class_1_90F15F1C45B87C6F_TypeDefinitionIndex = 40262;

class Class_1_90F15F1C45B87C6F : public ::System::Object
{
public:
	::System::UInt32 DEFBCHJCDGL; // 0x10
	::System::UInt32 ELFDDLBMMPC; // 0x14
	::System::UInt32 JFAGECNFHJL; // 0x18
	::RPG::Client::SectionType GMPGDEINODK; // 0x1C

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
