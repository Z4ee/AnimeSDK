#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LimaoNewsForumOperationType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_7E8C4C9A692BF680_METHOD_3_2630ACAA1C726FBD_OFFSET UNITYSDK_OFFSET(0x1CB795D0)
#define CLASS_3_7E8C4C9A692BF680_METHOD_3_428CB3C2C99844DC_OFFSET UNITYSDK_OFFSET(0x1CB79610)
#define CLASS_3_7E8C4C9A692BF680__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB79600)

inline static constexpr unsigned int Class_3_7E8C4C9A692BF680_TypeDefinitionIndex = 10218;

class Class_3_7E8C4C9A692BF680 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::UInt32 DGLJLJEHNNB; // 0x18
	::RPG::Client::LimaoNewsForumOperationType PLPPPCEPBDO; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7E8C4C9A692BF680__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2630ACAA1C726FBD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_7E8C4C9A692BF680*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_7E8C4C9A692BF680*&))((::PBYTE)hIl2Cpp + CLASS_3_7E8C4C9A692BF680_METHOD_3_2630ACAA1C726FBD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_428CB3C2C99844DC(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_7E8C4C9A692BF680* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_7E8C4C9A692BF680*))((::PBYTE)hIl2Cpp + CLASS_3_7E8C4C9A692BF680_METHOD_3_428CB3C2C99844DC_OFFSET))(a1, a2);
	}
};
