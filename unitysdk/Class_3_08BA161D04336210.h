#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TutorialB51RacingGameButtonType.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_08BA161D04336210_METHOD_3_4EB4DD7CBD5AE076_OFFSET UNITYSDK_OFFSET(0x1C838220)
#define CLASS_3_08BA161D04336210_METHOD_3_B0B66673456EDDF6_OFFSET UNITYSDK_OFFSET(0x1C8381C0)
#define CLASS_3_08BA161D04336210__CTOR_OFFSET UNITYSDK_OFFSET(0x1C838210)

inline static constexpr unsigned int Class_3_08BA161D04336210_TypeDefinitionIndex = 24110;

class Class_3_08BA161D04336210 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TutorialB51RacingGameButtonType PGOHOFMMIAJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_08BA161D04336210__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_B0B66673456EDDF6(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_08BA161D04336210*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_08BA161D04336210*&))((::PBYTE)hIl2Cpp + CLASS_3_08BA161D04336210_METHOD_3_B0B66673456EDDF6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_4EB4DD7CBD5AE076(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_08BA161D04336210* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_08BA161D04336210*))((::PBYTE)hIl2Cpp + CLASS_3_08BA161D04336210_METHOD_3_4EB4DD7CBD5AE076_OFFSET))(a1, a2);
	}
};
