#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LittleGameSmartObjectConfig; }
namespace System { class String; }

#define CLASS_1_B587CAF66AB56ABD__CTOR_OFFSET UNITYSDK_OFFSET(0xBB1EA00)

inline static constexpr unsigned int Class_1_B587CAF66AB56ABD_TypeDefinitionIndex = 77252;

class Class_1_B587CAF66AB56ABD : public ::System::Object
{
public:
	::System::String* BDACPPLKLGL; // 0x10
	::RPG::GameCore::LittleGameSmartObjectConfig* NOKKJMDJBEF; // 0x18
	::System::Int32 AAGKEBFHLMC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B587CAF66AB56ABD__CTOR_OFFSET))(this);
	}
};
