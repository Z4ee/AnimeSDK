#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AssistWayPoint; }

#define CLASS_1_32C09B38B00D2F10_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14423D40)
#define CLASS_1_32C09B38B00D2F10__CTOR_OFFSET UNITYSDK_OFFSET(0x14423D90)

inline static constexpr unsigned int Class_1_32C09B38B00D2F10_TypeDefinitionIndex = 61827;

class Class_1_32C09B38B00D2F10 : public ::System::Object
{
public:
	::RPG::GameCore::AssistWayPoint* Field_1_0; // 0x10
	::RPG::GameCore::AssistWayPoint* Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x21
	::System::Boolean Field_1_4; // 0x22

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32C09B38B00D2F10__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32C09B38B00D2F10_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
