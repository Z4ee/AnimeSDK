#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_11826CF7B776C859.h"
#include "unitysdk/RPG/GameCore/EventType.h"

class Class_0_16E4307DCC419505_460;
namespace System { class Action; }
namespace System { class Object; }
namespace System::Reflection { class MethodInfo; }

#define CLASS_2_7E0C22B4E3FD1076_INTERNALINVOKE_OFFSET UNITYSDK_OFFSET(0x1A765920)
#define CLASS_2_7E0C22B4E3FD1076__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7658A0)

inline static constexpr unsigned int Class_2_7E0C22B4E3FD1076_TypeDefinitionIndex = 73052;

class Class_2_7E0C22B4E3FD1076 : public ::Class_1_11826CF7B776C859
{
public:
	::System::Action* KFCIMLKKMEE; // 0x20

	::System::Void _ctor(::System::Object* a1, ::System::Reflection::MethodInfo* a2, ::RPG::GameCore::EventType a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Reflection::MethodInfo*, ::RPG::GameCore::EventType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_7E0C22B4E3FD1076__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void InternalInvoke(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_2_7E0C22B4E3FD1076_INTERNALINVOKE_OFFSET))(this, a1);
	}
};
