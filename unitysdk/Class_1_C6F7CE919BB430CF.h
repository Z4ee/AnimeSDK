#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RegionSourceType.h"
#include "unitysdk/System/Object.h"

class Class_1_DE4C6B309308A230;
class Class_1_ECBCF86CDE61CBCA;
namespace System { class String; }

#define CLASS_1_C6F7CE919BB430CF__CTOR_OFFSET UNITYSDK_OFFSET(0x8FA7B90)

inline static constexpr unsigned int Class_1_C6F7CE919BB430CF_TypeDefinitionIndex = 57352;

class Class_1_C6F7CE919BB430CF : public ::System::Object
{
public:
	::Class_1_ECBCF86CDE61CBCA* Field_1_2; // 0x10
	::System::String* Field_1_0; // 0x18
	::Class_1_DE4C6B309308A230* Field_1_3; // 0x20
	::RPG::Client::RegionSourceType Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6F7CE919BB430CF__CTOR_OFFSET))(this);
	}
};
