#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D33B7D6901AE39E9;
class Class_2_80F8710F847F1248;
class Class_3_F4528A5C0F861AF2;
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }

#define CLASS_1_9D7C299DF3E75F1E_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1161EE90)
#define CLASS_1_9D7C299DF3E75F1E__CTOR_OFFSET UNITYSDK_OFFSET(0x1161EDC0)

inline static constexpr unsigned int Class_1_9D7C299DF3E75F1E_TypeDefinitionIndex = 76802;

class Class_1_9D7C299DF3E75F1E : public ::System::Object
{
public:
	::Class_3_F4528A5C0F861AF2* PDENFEFCAGN; // 0x10
	::Entitas::IGroup_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* JPKEBGGDFPL; // 0x18
	::Class_2_80F8710F847F1248* EEFMDEHLLFI; // 0x20

	::System::Void _ctor(::Class_1_D33B7D6901AE39E9* a1, ::Class_3_F4528A5C0F861AF2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*, ::Class_3_F4528A5C0F861AF2*))((::PBYTE)hIl2Cpp + CLASS_1_9D7C299DF3E75F1E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D7C299DF3E75F1E_EXECUTE_OFFSET))(this);
	}
};
