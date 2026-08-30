#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4D552DECB7AE0271;
namespace RPG::GameCore { class HoyoTag; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_51278AA2276AE188__CTOR_OFFSET UNITYSDK_OFFSET(0xB60E910)

inline static constexpr unsigned int Class_1_51278AA2276AE188_TypeDefinitionIndex = 73737;

class Class_1_51278AA2276AE188 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::HoyoTag*, ::Class_1_4D552DECB7AE0271*>* JFKBOFJCIKM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51278AA2276AE188__CTOR_OFFSET))(this);
	}
};
