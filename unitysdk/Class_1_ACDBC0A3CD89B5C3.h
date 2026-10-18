#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_36816D4DE394D200;
class Class_1_99EFA45B40B96447;
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_ACDBC0A3CD89B5C3_METHOD_1_19A941F7642B1EB0_OFFSET UNITYSDK_OFFSET(0xB478AC0)
#define CLASS_1_ACDBC0A3CD89B5C3_METHOD_1_411FD78C9ECCF191_OFFSET UNITYSDK_OFFSET(0xB4789E0)
#define CLASS_1_ACDBC0A3CD89B5C3_METHOD_1_48D63B3F1BB73F6B_OFFSET UNITYSDK_OFFSET(0xB478780)
#define CLASS_1_ACDBC0A3CD89B5C3_METHOD_1_BD9C62A454623742_OFFSET UNITYSDK_OFFSET(0xB478930)
#define CLASS_1_ACDBC0A3CD89B5C3_METHOD_1_E1CA3E9CF2DA12EB_OFFSET UNITYSDK_OFFSET(0xB4786F0)
#define CLASS_1_ACDBC0A3CD89B5C3__CTOR_OFFSET UNITYSDK_OFFSET(0xB478BB0)

inline static constexpr unsigned int Class_1_ACDBC0A3CD89B5C3_TypeDefinitionIndex = 72021;

class Class_1_ACDBC0A3CD89B5C3 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TurnBasedModifierInstance*, ::Class_1_99EFA45B40B96447*>* EPADNMDFGMP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACDBC0A3CD89B5C3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E1CA3E9CF2DA12EB(::Class_1_36816D4DE394D200* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_36816D4DE394D200*))((::PBYTE)hIl2Cpp + CLASS_1_ACDBC0A3CD89B5C3_METHOD_1_E1CA3E9CF2DA12EB_OFFSET))(this, a1);
	}

	::System::Void Method_1_BD9C62A454623742(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_ACDBC0A3CD89B5C3_METHOD_1_BD9C62A454623742_OFFSET))(this, a1);
	}

	::Class_1_99EFA45B40B96447* Method_1_411FD78C9ECCF191(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::Class_1_99EFA45B40B96447*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_ACDBC0A3CD89B5C3_METHOD_1_411FD78C9ECCF191_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* Method_1_19A941F7642B1EB0()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACDBC0A3CD89B5C3_METHOD_1_19A941F7642B1EB0_OFFSET))(this);
	}

	::Class_1_99EFA45B40B96447* Method_1_48D63B3F1BB73F6B(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::Class_1_99EFA45B40B96447*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_ACDBC0A3CD89B5C3_METHOD_1_48D63B3F1BB73F6B_OFFSET))(this, a1);
	}
};
