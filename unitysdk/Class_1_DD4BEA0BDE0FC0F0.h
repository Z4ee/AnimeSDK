#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_36006FC25F5DDC69;
namespace RPG::GameCore { class BaseChenLingBattleEffect; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DD4BEA0BDE0FC0F0_METHOD_1_91386924D4CBDB1F_OFFSET UNITYSDK_OFFSET(0x11798C40)
#define CLASS_1_DD4BEA0BDE0FC0F0__CTOR_OFFSET UNITYSDK_OFFSET(0x117990F0)

inline static constexpr unsigned int Class_1_DD4BEA0BDE0FC0F0_TypeDefinitionIndex = 71375;

class Class_1_DD4BEA0BDE0FC0F0 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DD4BEA0BDE0FC0F0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_91386924D4CBDB1F(::System::Collections::Generic::List_1<::System::Int32>* a1, ::RPG::GameCore::BaseChenLingBattleEffect* a2, ::Class_1_36006FC25F5DDC69* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::RPG::GameCore::BaseChenLingBattleEffect*, ::Class_1_36006FC25F5DDC69*))((::PBYTE)hIl2Cpp + CLASS_1_DD4BEA0BDE0FC0F0_METHOD_1_91386924D4CBDB1F_OFFSET))(this, a1, a2, a3);
	}
};
