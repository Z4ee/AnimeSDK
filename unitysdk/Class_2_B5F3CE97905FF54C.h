#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6AB058C99D483032.h"
#include "unitysdk/RPG/Client/NotifyType.h"

namespace System { class Action; }
namespace System { class Object; }
namespace System::Reflection { class MethodInfo; }

#define CLASS_2_B5F3CE97905FF54C_INTERNALINVOKE_OFFSET UNITYSDK_OFFSET(0x1837C6C0)
#define CLASS_2_B5F3CE97905FF54C__CTOR_OFFSET UNITYSDK_OFFSET(0x1837C640)

inline static constexpr unsigned int Class_2_B5F3CE97905FF54C_TypeDefinitionIndex = 73050;

class Class_2_B5F3CE97905FF54C : public ::Class_1_6AB058C99D483032
{
public:
	::System::Action* KFCIMLKKMEE; // 0x18

	::System::Void _ctor(::System::Object* a1, ::System::Reflection::MethodInfo* a2, ::RPG::Client::NotifyType a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Reflection::MethodInfo*, ::RPG::Client::NotifyType))((::PBYTE)hIl2Cpp + CLASS_2_B5F3CE97905FF54C__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void InternalInvoke(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B5F3CE97905FF54C_INTERNALINVOKE_OFFSET))(this, a1);
	}
};
