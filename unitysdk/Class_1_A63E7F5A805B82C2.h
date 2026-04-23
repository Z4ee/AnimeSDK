#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ElfFarmCellData; }
namespace System { class String; }

#define CLASS_1_A63E7F5A805B82C2_METHOD_1_9E250F8F0D4AB235_OFFSET UNITYSDK_OFFSET(0x927AC10)

inline static constexpr unsigned int Class_1_A63E7F5A805B82C2_TypeDefinitionIndex = 63323;

class Class_1_A63E7F5A805B82C2 : public ::System::Object
{
public:
	static ::System::String* Method_1_9E250F8F0D4AB235(::RPG::Client::ElfFarmCellData* a1)
	{
		return ((::System::String*(*)(::RPG::Client::ElfFarmCellData*))((::PBYTE)hIl2Cpp + CLASS_1_A63E7F5A805B82C2_METHOD_1_9E250F8F0D4AB235_OFFSET))(a1);
	}
};
