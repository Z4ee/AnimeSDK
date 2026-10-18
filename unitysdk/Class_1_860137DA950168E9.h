#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BlindBox/Pool/PoolClosedReason.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1360;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_860137DA950168E9_METHOD_1_6ED8AC77F4283D68_OFFSET UNITYSDK_OFFSET(0xE22AA80)
#define CLASS_1_860137DA950168E9__CTOR_OFFSET UNITYSDK_OFFSET(0xE22A940)

inline static constexpr unsigned int Class_1_860137DA950168E9_TypeDefinitionIndex = 74926;

class Class_1_860137DA950168E9 : public ::System::Object
{
public:
	::Il2CppArray<::Class_0_16E4307DCC419505_1360*>* OGHCLELFCDB; // 0x10

	::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_1360*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_1360*>*))((::PBYTE)hIl2Cpp + CLASS_1_860137DA950168E9__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::BlindBox::Pool::PoolClosedReason Method_1_6ED8AC77F4283D68()
	{
		return ((::RPG::Client::BlindBox::Pool::PoolClosedReason(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_860137DA950168E9_METHOD_1_6ED8AC77F4283D68_OFFSET))(this);
	}
};
