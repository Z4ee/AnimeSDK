#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B8FF829EFDD29B81;
namespace RPG::GameCore { class BaseChenLingBattleEffect; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0B22958D70DE26F0_METHOD_1_32A0082B8293F312_OFFSET UNITYSDK_OFFSET(0x1727F220)
#define CLASS_1_0B22958D70DE26F0__CTOR_OFFSET UNITYSDK_OFFSET(0x1727F5F0)

inline static constexpr unsigned int Class_1_0B22958D70DE26F0_TypeDefinitionIndex = 77411;

class Class_1_0B22958D70DE26F0 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B22958D70DE26F0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_32A0082B8293F312(::System::Collections::Generic::List_1<::System::Int32>* a1, ::RPG::GameCore::BaseChenLingBattleEffect* a2, ::Class_1_B8FF829EFDD29B81* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::RPG::GameCore::BaseChenLingBattleEffect*, ::Class_1_B8FF829EFDD29B81*))((::PBYTE)hIl2Cpp + CLASS_1_0B22958D70DE26F0_METHOD_1_32A0082B8293F312_OFFSET))(this, a1, a2, a3);
	}
};
