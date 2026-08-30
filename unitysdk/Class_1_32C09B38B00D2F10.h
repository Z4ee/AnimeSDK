#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AssistWayPoint; }

#define CLASS_1_32C09B38B00D2F10_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A78EAD0)
#define CLASS_1_32C09B38B00D2F10__CTOR_OFFSET UNITYSDK_OFFSET(0x1A78EB20)

inline static constexpr unsigned int Class_1_32C09B38B00D2F10_TypeDefinitionIndex = 66174;

class Class_1_32C09B38B00D2F10 : public ::System::Object
{
public:
	::RPG::GameCore::AssistWayPoint* NDLEBNGAIFH; // 0x10
	::RPG::GameCore::AssistWayPoint* JIAPCOBPBHO; // 0x18
	::System::Boolean OMEENINDLFC; // 0x20
	::System::Boolean GBDHIOOJNBE; // 0x21
	::System::Boolean KHGJLFPNJAJ; // 0x22

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32C09B38B00D2F10__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32C09B38B00D2F10_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
