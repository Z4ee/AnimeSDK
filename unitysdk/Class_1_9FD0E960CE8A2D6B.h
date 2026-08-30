#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F9FBCC956DFCF137_27;
namespace RPG::Client::Prop { class ChimeraDuelBubbleEvent; }
namespace System { class Action; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_9FD0E960CE8A2D6B_EXECUTE_OFFSET UNITYSDK_OFFSET(0x15237510)
#define CLASS_1_9FD0E960CE8A2D6B_TICK_OFFSET UNITYSDK_OFFSET(0x152375F0)
#define CLASS_1_9FD0E960CE8A2D6B__CTOR_OFFSET UNITYSDK_OFFSET(0x15237500)

inline static constexpr unsigned int Class_1_9FD0E960CE8A2D6B_TypeDefinitionIndex = 77197;

class Class_1_9FD0E960CE8A2D6B : public ::System::Object
{
public:
	::RPG::Client::Prop::ChimeraDuelBubbleEvent* FLPMDDEMIBJ; // 0x10
	::System::Action* LGAOOKPFIMF; // 0x18
	::System::Func_1<::RPG::Client::Prop::ChimeraDuelBubbleEvent*>* PHKEALDENKI; // 0x20
	::System::Single HBDJCFFDGDD; // 0x28
	::System::Boolean LNPALNBIBFK; // 0x2C
	::System::Boolean OELBLBCINNB; // 0x2D

	::System::Void _ctor(::System::Func_1<::RPG::Client::Prop::ChimeraDuelBubbleEvent*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::RPG::Client::Prop::ChimeraDuelBubbleEvent*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9FD0E960CE8A2D6B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute(::Class_1_F9FBCC956DFCF137_27* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_27*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_9FD0E960CE8A2D6B_EXECUTE_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9FD0E960CE8A2D6B_TICK_OFFSET))(this, a1);
	}
};
