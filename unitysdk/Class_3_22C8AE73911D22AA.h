#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesItemRemoveType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_22C8AE73911D22AA_METHOD_3_481800E2ED22AD35_OFFSET UNITYSDK_OFFSET(0x19D70AC0)
#define CLASS_3_22C8AE73911D22AA_METHOD_3_4EB4DD7CBD5AE076_OFFSET UNITYSDK_OFFSET(0x19D70B40)
#define CLASS_3_22C8AE73911D22AA__CTOR_OFFSET UNITYSDK_OFFSET(0x19D70B10)

inline static constexpr unsigned int Class_3_22C8AE73911D22AA_TypeDefinitionIndex = 20307;

class Class_3_22C8AE73911D22AA : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::ChenLingFesItemRemoveType Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_22C8AE73911D22AA__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_481800E2ED22AD35(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_22C8AE73911D22AA*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_22C8AE73911D22AA*&))((::PBYTE)hIl2Cpp + CLASS_3_22C8AE73911D22AA_METHOD_3_481800E2ED22AD35_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_4EB4DD7CBD5AE076(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_22C8AE73911D22AA* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_22C8AE73911D22AA*))((::PBYTE)hIl2Cpp + CLASS_3_22C8AE73911D22AA_METHOD_3_4EB4DD7CBD5AE076_OFFSET))(a1, a2);
	}
};
