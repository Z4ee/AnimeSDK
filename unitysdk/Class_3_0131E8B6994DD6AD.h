#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesItemRemoveType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_0131E8B6994DD6AD_METHOD_3_237DE7154300C94D_OFFSET UNITYSDK_OFFSET(0x1D0D5970)
#define CLASS_3_0131E8B6994DD6AD_METHOD_3_4EB4DD7CBD5AE076_OFFSET UNITYSDK_OFFSET(0x1D0D59B0)
#define CLASS_3_0131E8B6994DD6AD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0D59A0)

inline static constexpr unsigned int Class_3_0131E8B6994DD6AD_TypeDefinitionIndex = 21257;

class Class_3_0131E8B6994DD6AD : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::ChenLingFesItemRemoveType LPHIOBMKFDL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0131E8B6994DD6AD__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_237DE7154300C94D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_0131E8B6994DD6AD*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_0131E8B6994DD6AD*&))((::PBYTE)hIl2Cpp + CLASS_3_0131E8B6994DD6AD_METHOD_3_237DE7154300C94D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_4EB4DD7CBD5AE076(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_0131E8B6994DD6AD* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_0131E8B6994DD6AD*))((::PBYTE)hIl2Cpp + CLASS_3_0131E8B6994DD6AD_METHOD_3_4EB4DD7CBD5AE076_OFFSET))(a1, a2);
	}
};
