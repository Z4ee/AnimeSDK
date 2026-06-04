#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_684;
class Class_1_A05AF49AB4C19659;

#define CLASS_1_ED6A06E6F11DAF49_METHOD_1_32FD19C10F24C2EB_OFFSET UNITYSDK_OFFSET(0x145AFBC0)
#define CLASS_1_ED6A06E6F11DAF49_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x145AFC40)
#define CLASS_1_ED6A06E6F11DAF49__CTOR_OFFSET UNITYSDK_OFFSET(0x145AFC80)

inline static constexpr unsigned int Class_1_ED6A06E6F11DAF49_TypeDefinitionIndex = 60896;

class Class_1_ED6A06E6F11DAF49 : public ::System::Object
{
public:
	::Class_1_A05AF49AB4C19659* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED6A06E6F11DAF49__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_684* Method_1_32FD19C10F24C2EB(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::Class_0_16E4307DCC419505_684*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_ED6A06E6F11DAF49_METHOD_1_32FD19C10F24C2EB_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED6A06E6F11DAF49_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
