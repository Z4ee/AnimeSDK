#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B8FF829EFDD29B81;
namespace RPG::GameCore { class BaseChenLingBattleEffect; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_06328F78CBDF311F_METHOD_1_8BBE421FF3141AA4_OFFSET UNITYSDK_OFFSET(0x152A86F0)
#define CLASS_1_06328F78CBDF311F__CTOR_OFFSET UNITYSDK_OFFSET(0x152A89C0)

inline static constexpr unsigned int Class_1_06328F78CBDF311F_TypeDefinitionIndex = 77410;

class Class_1_06328F78CBDF311F : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06328F78CBDF311F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8BBE421FF3141AA4(::System::Collections::Generic::List_1<::System::Int32>* a1, ::RPG::GameCore::BaseChenLingBattleEffect* a2, ::Class_1_B8FF829EFDD29B81* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::RPG::GameCore::BaseChenLingBattleEffect*, ::Class_1_B8FF829EFDD29B81*))((::PBYTE)hIl2Cpp + CLASS_1_06328F78CBDF311F_METHOD_1_8BBE421FF3141AA4_OFFSET))(this, a1, a2, a3);
	}
};
