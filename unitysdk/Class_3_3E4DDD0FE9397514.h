#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamTowersPlayerInputType.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_3E4DDD0FE9397514_METHOD_3_237DE7154300C94D_OFFSET UNITYSDK_OFFSET(0x1D637FF0)
#define CLASS_3_3E4DDD0FE9397514_METHOD_3_4EB4DD7CBD5AE076_OFFSET UNITYSDK_OFFSET(0x1D638030)
#define CLASS_3_3E4DDD0FE9397514__CTOR_OFFSET UNITYSDK_OFFSET(0x1D638020)

inline static constexpr unsigned int Class_3_3E4DDD0FE9397514_TypeDefinitionIndex = 21307;

class Class_3_3E4DDD0FE9397514 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TeamTowersPlayerInputType PLEMHLIAKPF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3E4DDD0FE9397514__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_237DE7154300C94D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_3E4DDD0FE9397514*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_3E4DDD0FE9397514*&))((::PBYTE)hIl2Cpp + CLASS_3_3E4DDD0FE9397514_METHOD_3_237DE7154300C94D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_4EB4DD7CBD5AE076(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_3E4DDD0FE9397514* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_3E4DDD0FE9397514*))((::PBYTE)hIl2Cpp + CLASS_3_3E4DDD0FE9397514_METHOD_3_4EB4DD7CBD5AE076_OFFSET))(a1, a2);
	}
};
