#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OnlineRoomDIYType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_901920CBD21546A6_METHOD_3_237DE7154300C94D_OFFSET UNITYSDK_OFFSET(0x1CF05DE0)
#define CLASS_3_901920CBD21546A6_METHOD_3_4EB4DD7CBD5AE076_OFFSET UNITYSDK_OFFSET(0x1CF05E20)
#define CLASS_3_901920CBD21546A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF05E10)

inline static constexpr unsigned int Class_3_901920CBD21546A6_TypeDefinitionIndex = 10211;

class Class_3_901920CBD21546A6 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::Client::OnlineRoomDIYType GMPGDEINODK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_901920CBD21546A6__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_237DE7154300C94D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_901920CBD21546A6*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_901920CBD21546A6*&))((::PBYTE)hIl2Cpp + CLASS_3_901920CBD21546A6_METHOD_3_237DE7154300C94D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_4EB4DD7CBD5AE076(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_901920CBD21546A6* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_901920CBD21546A6*))((::PBYTE)hIl2Cpp + CLASS_3_901920CBD21546A6_METHOD_3_4EB4DD7CBD5AE076_OFFSET))(a1, a2);
	}
};
