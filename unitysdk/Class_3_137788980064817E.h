#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BubbleTalkType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BubbleTalkInfo; }
namespace System { class String; }

#define CLASS_3_137788980064817E_METHOD_3_2D474E626FF7B9A2_OFFSET UNITYSDK_OFFSET(0x18F7FA20)
#define CLASS_3_137788980064817E_METHOD_3_797574F762C9D389_OFFSET UNITYSDK_OFFSET(0x18F7FAE0)
#define CLASS_3_137788980064817E__CTOR_OFFSET UNITYSDK_OFFSET(0x18F7FAA0)

inline static constexpr unsigned int Class_3_137788980064817E_TypeDefinitionIndex = 19267;

class Class_3_137788980064817E : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* Field_3_0; // 0x18
	::Il2CppArray<::RPG::GameCore::BubbleTalkInfo*>* Field_3_1; // 0x20
	::System::Single Field_3_2; // 0x28
	::System::Boolean Field_3_3; // 0x2C
	::System::Boolean Field_3_4; // 0x2D
	::RPG::GameCore::BubbleTalkType Field_3_5; // 0x30
	::System::UInt32 Field_3_6; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_137788980064817E__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2D474E626FF7B9A2(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_137788980064817E*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_137788980064817E*&))((::PBYTE)hIl2Cpp + CLASS_3_137788980064817E_METHOD_3_2D474E626FF7B9A2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_797574F762C9D389(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_137788980064817E* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_137788980064817E*))((::PBYTE)hIl2Cpp + CLASS_3_137788980064817E_METHOD_3_797574F762C9D389_OFFSET))(a1, a2);
	}
};
