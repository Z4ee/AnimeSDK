#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F9FBCC956DFCF137_14;
namespace RPG::Client::Prop { class ChimeraDuelBubbleEvent; }
namespace System { class Action; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_65BD4CC0B420922D_EXECUTE_OFFSET UNITYSDK_OFFSET(0x11413140)
#define CLASS_1_65BD4CC0B420922D_TICK_OFFSET UNITYSDK_OFFSET(0x11413210)
#define CLASS_1_65BD4CC0B420922D__CTOR_OFFSET UNITYSDK_OFFSET(0x11413130)

inline static constexpr unsigned int Class_1_65BD4CC0B420922D_TypeDefinitionIndex = 63209;

class Class_1_65BD4CC0B420922D : public ::System::Object
{
public:
	::RPG::Client::Prop::ChimeraDuelBubbleEvent* Field_1_5; // 0x10
	::System::Action* Field_1_1; // 0x18
	::System::Func_1<::RPG::Client::Prop::ChimeraDuelBubbleEvent*>* Field_1_4; // 0x20
	::System::Single Field_1_0; // 0x28
	::System::Boolean Field_1_3; // 0x2C
	::System::Boolean Field_1_2; // 0x2D

	::System::Void _ctor(::System::Func_1<::RPG::Client::Prop::ChimeraDuelBubbleEvent*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::RPG::Client::Prop::ChimeraDuelBubbleEvent*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_65BD4CC0B420922D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute(::Class_1_F9FBCC956DFCF137_14* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_14*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_65BD4CC0B420922D_EXECUTE_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_65BD4CC0B420922D_TICK_OFFSET))(this, a1);
	}
};
