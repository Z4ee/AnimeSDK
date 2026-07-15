#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6FE0547AC9A9B1E1;
namespace RPG::GameCore { class FiveDimPortalConfig; }

#define CLASS_1_6D630ED33F35F07C_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A8ECE10)
#define CLASS_1_6D630ED33F35F07C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8ECE80)

inline static constexpr unsigned int Class_1_6D630ED33F35F07C_TypeDefinitionIndex = 40879;

class Class_1_6D630ED33F35F07C : public ::System::Object
{
public:
	::Class_1_6FE0547AC9A9B1E1* Field_1_0; // 0x10
	::RPG::GameCore::FiveDimPortalConfig* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D630ED33F35F07C__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D630ED33F35F07C_CLEAR_OFFSET))(this);
	}
};
