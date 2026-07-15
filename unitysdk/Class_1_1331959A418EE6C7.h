#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ElfFarmCellData; }
namespace System { class String; }

#define CLASS_1_1331959A418EE6C7_METHOD_1_A1FFC38EE3CB4652_OFFSET UNITYSDK_OFFSET(0x146C1000)

inline static constexpr unsigned int Class_1_1331959A418EE6C7_TypeDefinitionIndex = 65611;

class Class_1_1331959A418EE6C7 : public ::System::Object
{
public:
	static ::System::String* Method_1_A1FFC38EE3CB4652(::RPG::Client::ElfFarmCellData* a1)
	{
		return ((::System::String*(*)(::RPG::Client::ElfFarmCellData*))((::PBYTE)hIl2Cpp + CLASS_1_1331959A418EE6C7_METHOD_1_A1FFC38EE3CB4652_OFFSET))(a1);
	}
};
