#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_FD51057495DB654F;
namespace RPG::GameCore { class MonopolyShowSwitchSpeTransition; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_241C9FB023E7B48E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x153F8700)
#define CLASS_2_241C9FB023E7B48E_METHOD_2_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x153F81C0)
#define CLASS_2_241C9FB023E7B48E_METHOD_2_FB31A773A52994BE_OFFSET UNITYSDK_OFFSET(0x153F83E0)
#define CLASS_2_241C9FB023E7B48E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x153F80E0)
#define CLASS_2_241C9FB023E7B48E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x153F8680)
#define CLASS_2_241C9FB023E7B48E_TICK_OFFSET UNITYSDK_OFFSET(0x153F8780)
#define CLASS_2_241C9FB023E7B48E__CTOR_OFFSET UNITYSDK_OFFSET(0x153F80D0)

inline static constexpr unsigned int Class_2_241C9FB023E7B48E_TypeDefinitionIndex = 58372;

class Class_2_241C9FB023E7B48E : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::MonopolyShowSwitchSpeTransition* OFKGLJOAMLD; // 0x18
	::Class_2_FD51057495DB654F* PCLCMGBHPIO; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MonopolyShowSwitchSpeTransition* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MonopolyShowSwitchSpeTransition*))((::PBYTE)hIl2Cpp + CLASS_2_241C9FB023E7B48E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_241C9FB023E7B48E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_241C9FB023E7B48E_METHOD_2_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Method_2_FB31A773A52994BE(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_241C9FB023E7B48E_METHOD_2_FB31A773A52994BE_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_241C9FB023E7B48E_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_241C9FB023E7B48E_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_241C9FB023E7B48E_TICK_OFFSET))(this, a1);
	}
};
