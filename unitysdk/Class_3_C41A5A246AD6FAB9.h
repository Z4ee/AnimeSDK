#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/FateRinCardPileType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_C41A5A246AD6FAB9_METHOD_3_185002BAD0CDE98D_OFFSET UNITYSDK_OFFSET(0x1B328080)
#define CLASS_3_C41A5A246AD6FAB9_METHOD_3_F73DE1E21818E48C_OFFSET UNITYSDK_OFFSET(0x1B328040)
#define CLASS_3_C41A5A246AD6FAB9__CTOR_OFFSET UNITYSDK_OFFSET(0x1B328070)

inline static constexpr unsigned int Class_3_C41A5A246AD6FAB9_TypeDefinitionIndex = 19136;

class Class_3_C41A5A246AD6FAB9 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* Field_3_0; // 0x18
	::RPG::GameCore::DynamicValueContextScope Field_3_1; // 0x20
	::RPG::GameCore::FateRinCardPileType Field_3_2; // 0x24
	::System::UInt32 Field_3_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C41A5A246AD6FAB9__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_F73DE1E21818E48C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_C41A5A246AD6FAB9*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_C41A5A246AD6FAB9*&))((::PBYTE)hIl2Cpp + CLASS_3_C41A5A246AD6FAB9_METHOD_3_F73DE1E21818E48C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_185002BAD0CDE98D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_C41A5A246AD6FAB9* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_C41A5A246AD6FAB9*))((::PBYTE)hIl2Cpp + CLASS_3_C41A5A246AD6FAB9_METHOD_3_185002BAD0CDE98D_OFFSET))(a1, a2);
	}
};
