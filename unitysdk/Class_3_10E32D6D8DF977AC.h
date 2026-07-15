#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesTargetType.h"
#include "unitysdk/RPG/GameCore/LittleGameEntityType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingFesTargetConfig; }
namespace System { class String; }

#define CLASS_3_10E32D6D8DF977AC_METHOD_3_28DFC52A1206DD2C_OFFSET UNITYSDK_OFFSET(0x1AF0C0E0)
#define CLASS_3_10E32D6D8DF977AC_METHOD_3_B291FB5C41D58000_OFFSET UNITYSDK_OFFSET(0x1AF0C120)
#define CLASS_3_10E32D6D8DF977AC__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF0C110)

inline static constexpr unsigned int Class_3_10E32D6D8DF977AC_TypeDefinitionIndex = 20696;

class Class_3_10E32D6D8DF977AC : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::ChenLingFesTargetConfig* Field_3_0; // 0x18
	::System::String* Field_3_1; // 0x20
	::System::String* Field_3_2; // 0x28
	::RPG::GameCore::ChenLingFesTargetType Field_3_3; // 0x30
	::RPG::GameCore::LittleGameEntityType Field_3_4; // 0x34
	::System::UInt32 Field_3_5; // 0x38
	::System::UInt32 Field_3_6; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_10E32D6D8DF977AC__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_28DFC52A1206DD2C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_10E32D6D8DF977AC*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_10E32D6D8DF977AC*&))((::PBYTE)hIl2Cpp + CLASS_3_10E32D6D8DF977AC_METHOD_3_28DFC52A1206DD2C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B291FB5C41D58000(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_10E32D6D8DF977AC* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_10E32D6D8DF977AC*))((::PBYTE)hIl2Cpp + CLASS_3_10E32D6D8DF977AC_METHOD_3_B291FB5C41D58000_OFFSET))(a1, a2);
	}
};
