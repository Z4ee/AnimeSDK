#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6AB058C99D483032.h"
#include "unitysdk/RPG/Client/NotifyType.h"

namespace RPG::Client { class NotifyHandler; }
namespace System { class Object; }

#define CLASS_2_FD4CAB81BEFA440B_INTERNALINVOKE_OFFSET UNITYSDK_OFFSET(0x16AFDA10)
#define CLASS_2_FD4CAB81BEFA440B__CTOR_OFFSET UNITYSDK_OFFSET(0x16AFDA00)

inline static constexpr unsigned int Class_2_FD4CAB81BEFA440B_TypeDefinitionIndex = 73049;

class Class_2_FD4CAB81BEFA440B : public ::Class_1_6AB058C99D483032
{
public:
	::RPG::Client::NotifyHandler* GCHONPLAABC; // 0x18

	::System::Void _ctor(::RPG::Client::NotifyType a1, ::RPG::Client::NotifyHandler* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyType, ::RPG::Client::NotifyHandler*))((::PBYTE)hIl2Cpp + CLASS_2_FD4CAB81BEFA440B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void InternalInvoke(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FD4CAB81BEFA440B_INTERNALINVOKE_OFFSET))(this, a1);
	}
};
