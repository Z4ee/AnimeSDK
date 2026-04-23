#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_36006FC25F5DDC69;
class Class_2_181A7F9409C60DBC;
namespace RPG::GameCore { class BaseChenLingBattleEffect; }
namespace RPG::GameCore { class BaseChenLingBattleResource; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_782EE0AB2C8D7AA3_METHOD_1_8305E66AB603B19B_OFFSET UNITYSDK_OFFSET(0x10035F70)
#define CLASS_1_782EE0AB2C8D7AA3_METHOD_1_91386924D4CBDB1F_OFFSET UNITYSDK_OFFSET(0x10035C80)
#define CLASS_1_782EE0AB2C8D7AA3__CTOR_OFFSET UNITYSDK_OFFSET(0x10036200)

inline static constexpr unsigned int Class_1_782EE0AB2C8D7AA3_TypeDefinitionIndex = 71381;

class Class_1_782EE0AB2C8D7AA3 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_782EE0AB2C8D7AA3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_91386924D4CBDB1F(::System::Collections::Generic::List_1<::System::Int32>* a1, ::RPG::GameCore::BaseChenLingBattleEffect* a2, ::Class_1_36006FC25F5DDC69* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::RPG::GameCore::BaseChenLingBattleEffect*, ::Class_1_36006FC25F5DDC69*))((::PBYTE)hIl2Cpp + CLASS_1_782EE0AB2C8D7AA3_METHOD_1_91386924D4CBDB1F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_8305E66AB603B19B(::Class_2_181A7F9409C60DBC* a1, ::RPG::GameCore::BaseChenLingBattleResource* a2, ::Class_1_36006FC25F5DDC69* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::RPG::GameCore::BaseChenLingBattleResource*, ::Class_1_36006FC25F5DDC69*))((::PBYTE)hIl2Cpp + CLASS_1_782EE0AB2C8D7AA3_METHOD_1_8305E66AB603B19B_OFFSET))(this, a1, a2, a3);
	}
};
