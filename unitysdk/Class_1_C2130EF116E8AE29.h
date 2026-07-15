#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3039E593DEE50CCF;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace System { class String; }

#define CLASS_1_C2130EF116E8AE29_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A8F49D0)
#define CLASS_1_C2130EF116E8AE29__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8F4A60)

inline static constexpr unsigned int Class_1_C2130EF116E8AE29_TypeDefinitionIndex = 40807;

class Class_1_C2130EF116E8AE29 : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::System::String*, ::Class_1_3039E593DEE50CCF*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2130EF116E8AE29__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2130EF116E8AE29_CLEAR_OFFSET))(this);
	}
};
