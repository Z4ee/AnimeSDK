#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class SpecialAvatarRow; }

#define CLASS_1_B2F03AF2376A5DC0_METHOD_1_345958F8C348F206_OFFSET UNITYSDK_OFFSET(0x18A27370)
#define CLASS_1_B2F03AF2376A5DC0__CTOR_OFFSET UNITYSDK_OFFSET(0x18A27410)

inline static constexpr unsigned int Class_1_B2F03AF2376A5DC0_TypeDefinitionIndex = 62738;

class Class_1_B2F03AF2376A5DC0 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2F03AF2376A5DC0__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::SpecialAvatarRow* Method_1_345958F8C348F206(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::SpecialAvatarRow*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B2F03AF2376A5DC0_METHOD_1_345958F8C348F206_OFFSET))(this, a1, a2);
	}
};
