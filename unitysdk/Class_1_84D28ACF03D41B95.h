#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_36006FC25F5DDC69;
namespace RPG::GameCore { class BaseChenLingBattleEffect; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_84D28ACF03D41B95_METHOD_1_41E54D335D7B5441_OFFSET UNITYSDK_OFFSET(0x99B0020)
#define CLASS_1_84D28ACF03D41B95__CTOR_OFFSET UNITYSDK_OFFSET(0x99B02E0)

inline static constexpr unsigned int Class_1_84D28ACF03D41B95_TypeDefinitionIndex = 71387;

class Class_1_84D28ACF03D41B95 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84D28ACF03D41B95__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_41E54D335D7B5441(::System::Collections::Generic::List_1<::System::Int32>* a1, ::RPG::GameCore::BaseChenLingBattleEffect* a2, ::Class_1_36006FC25F5DDC69* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::RPG::GameCore::BaseChenLingBattleEffect*, ::Class_1_36006FC25F5DDC69*))((::PBYTE)hIl2Cpp + CLASS_1_84D28ACF03D41B95_METHOD_1_41E54D335D7B5441_OFFSET))(this, a1, a2, a3);
	}
};
