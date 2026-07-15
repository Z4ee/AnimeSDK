#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B8FF829EFDD29B81;
namespace RPG::GameCore { class BaseChenLingBattleEffect; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7D3C4F078340ED90_METHOD_1_6FD2919528A9CE2F_OFFSET UNITYSDK_OFFSET(0x16C88C40)
#define CLASS_1_7D3C4F078340ED90__CTOR_OFFSET UNITYSDK_OFFSET(0x16C89530)

inline static constexpr unsigned int Class_1_7D3C4F078340ED90_TypeDefinitionIndex = 73933;

class Class_1_7D3C4F078340ED90 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D3C4F078340ED90__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6FD2919528A9CE2F(::System::Collections::Generic::List_1<::System::Int32>* a1, ::RPG::GameCore::BaseChenLingBattleEffect* a2, ::Class_1_B8FF829EFDD29B81* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::RPG::GameCore::BaseChenLingBattleEffect*, ::Class_1_B8FF829EFDD29B81*))((::PBYTE)hIl2Cpp + CLASS_1_7D3C4F078340ED90_METHOD_1_6FD2919528A9CE2F_OFFSET))(this, a1, a2, a3);
	}
};
