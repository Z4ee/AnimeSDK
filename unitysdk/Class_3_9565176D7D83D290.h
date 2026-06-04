#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPlayerResetMode.h"
#include "unitysdk/RPG/GameCore/FiveDimPlayerResetSweepDirection.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_9565176D7D83D290_METHOD_3_1F96CACAEB5EDB64_OFFSET UNITYSDK_OFFSET(0x195CD0A0)
#define CLASS_3_9565176D7D83D290_METHOD_3_FAE3758F0912001F_OFFSET UNITYSDK_OFFSET(0x195CD140)
#define CLASS_3_9565176D7D83D290__CTOR_OFFSET UNITYSDK_OFFSET(0x195CD100)

inline static constexpr unsigned int Class_3_9565176D7D83D290_TypeDefinitionIndex = 20272;

class Class_3_9565176D7D83D290 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::FiveDimPlayerResetSweepDirection Field_3_0; // 0x18
	::System::Single Field_3_1; // 0x1C
	::System::Single Field_3_2; // 0x20
	::RPG::GameCore::FiveDimPlayerResetMode Field_3_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9565176D7D83D290__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_1F96CACAEB5EDB64(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_9565176D7D83D290*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_9565176D7D83D290*&))((::PBYTE)hIl2Cpp + CLASS_3_9565176D7D83D290_METHOD_3_1F96CACAEB5EDB64_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_FAE3758F0912001F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_9565176D7D83D290* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_9565176D7D83D290*))((::PBYTE)hIl2Cpp + CLASS_3_9565176D7D83D290_METHOD_3_FAE3758F0912001F_OFFSET))(a1, a2);
	}
};
