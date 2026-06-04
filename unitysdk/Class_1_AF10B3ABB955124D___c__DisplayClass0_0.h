#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonsterData; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_AF10B3ABB955124D___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA7BA3E0)
#define CLASS_1_AF10B3ABB955124D___C__DISPLAYCLASS0_0__QUERY_B__0_OFFSET UNITYSDK_OFFSET(0xA7BA720)

inline static constexpr unsigned int Class_1_AF10B3ABB955124D___c__DisplayClass0_0_TypeDefinitionIndex = 74158;

class Class_1_AF10B3ABB955124D___c__DisplayClass0_0 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* shouldHideMonsters; // 0x10
	::System::Predicate_1<::RPG::Client::MonsterData*>* __9__0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF10B3ABB955124D___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _Query_b__0(::RPG::Client::MonsterData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + CLASS_1_AF10B3ABB955124D___C__DISPLAYCLASS0_0__QUERY_B__0_OFFSET))(this, a1);
	}
};
