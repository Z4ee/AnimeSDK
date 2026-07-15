#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesTargetType.h"
#include "unitysdk/RPG/GameCore/LittleGameEntityType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingFesDialogConfig; }
namespace RPG::GameCore { class ChenLingFesTargetConfig; }
namespace RPG::GameCore { class ChenLingFesToastConfig; }
namespace System { class String; }

#define CLASS_3_714E3A6CA2354616_METHOD_3_28DFC52A1206DD2C_OFFSET UNITYSDK_OFFSET(0x1B522800)
#define CLASS_3_714E3A6CA2354616_METHOD_3_E024E0080A08A9C9_OFFSET UNITYSDK_OFFSET(0x1B522850)
#define CLASS_3_714E3A6CA2354616__CTOR_OFFSET UNITYSDK_OFFSET(0x1B522840)

inline static constexpr unsigned int Class_3_714E3A6CA2354616_TypeDefinitionIndex = 20707;

class Class_3_714E3A6CA2354616 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* Field_3_0; // 0x18
	::RPG::GameCore::ChenLingFesDialogConfig* Field_3_1; // 0x20
	::RPG::GameCore::ChenLingFesToastConfig* Field_3_2; // 0x28
	::System::String* Field_3_3; // 0x30
	::RPG::GameCore::ChenLingFesTargetConfig* Field_3_4; // 0x38
	::System::Boolean Field_3_5; // 0x40
	::System::Boolean Field_3_6; // 0x41
	::RPG::GameCore::ChenLingFesTargetType Field_3_7; // 0x44
	::RPG::GameCore::LittleGameEntityType Field_3_8; // 0x48
	::System::UInt32 Field_3_9; // 0x4C
	::System::UInt32 Field_3_10; // 0x50
	::System::Single Field_3_11; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_714E3A6CA2354616__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_28DFC52A1206DD2C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_714E3A6CA2354616*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_714E3A6CA2354616*&))((::PBYTE)hIl2Cpp + CLASS_3_714E3A6CA2354616_METHOD_3_28DFC52A1206DD2C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_E024E0080A08A9C9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_714E3A6CA2354616* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_714E3A6CA2354616*))((::PBYTE)hIl2Cpp + CLASS_3_714E3A6CA2354616_METHOD_3_E024E0080A08A9C9_OFFSET))(a1, a2);
	}
};
