#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LevelDialogInfo; }
namespace System { class String; }

#define CLASS_1_EBD13AA6C54D68C4_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1709B430)
#define CLASS_1_EBD13AA6C54D68C4__CTOR_OFFSET UNITYSDK_OFFSET(0x1709B4A0)

inline static constexpr unsigned int Class_1_EBD13AA6C54D68C4_TypeDefinitionIndex = 62737;

class Class_1_EBD13AA6C54D68C4 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::RPG::GameCore::LevelDialogInfo* Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x28
	::System::Boolean Field_1_4; // 0x29
	::System::UInt32 Field_1_5; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBD13AA6C54D68C4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBD13AA6C54D68C4_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
