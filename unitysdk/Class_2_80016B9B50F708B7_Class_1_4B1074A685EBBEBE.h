#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class DamageTextStyle;
namespace System { class String; }

#define CLASS_2_80016B9B50F708B7_CLASS_1_4B1074A685EBBEBE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A75BFB0)

inline static constexpr unsigned int Class_2_80016B9B50F708B7_Class_1_4B1074A685EBBEBE_TypeDefinitionIndex = 72302;

class Class_2_80016B9B50F708B7_Class_1_4B1074A685EBBEBE : public ::System::Object
{
public:
	::DamageTextStyle* CFNAKPADAEB; // 0x10
	::System::String* BDACPPLKLGL; // 0x18
	::RPG::Client::TextID MJOOFPBABEA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80016B9B50F708B7_CLASS_1_4B1074A685EBBEBE__CTOR_OFFSET))(this);
	}
};
