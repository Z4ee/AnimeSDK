#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class EventManager; }

#define CLASS_1_9988289E7F8AA214_CLEAR_OFFSET UNITYSDK_OFFSET(0x129106F0)
#define CLASS_1_9988289E7F8AA214_METHOD_1_7A74CBCA024E5DDB_OFFSET UNITYSDK_OFFSET(0x12910870)
#define CLASS_1_9988289E7F8AA214_METHOD_1_9856D42691278A36_OFFSET UNITYSDK_OFFSET(0x12910740)
#define CLASS_1_9988289E7F8AA214_METHOD_1_A3C36642AA77866E_OFFSET UNITYSDK_OFFSET(0x129107E0)
#define CLASS_1_9988289E7F8AA214__CTOR_OFFSET UNITYSDK_OFFSET(0x129108C0)

inline static constexpr unsigned int Class_1_9988289E7F8AA214_TypeDefinitionIndex = 52237;

class Class_1_9988289E7F8AA214 : public ::System::Object
{
public:
	::RPG::GameCore::EventManager* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9988289E7F8AA214__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9988289E7F8AA214_CLEAR_OFFSET))(this);
	}

	::Class_1_9988289E7F8AA214* Method_1_9856D42691278A36(::System::Boolean a1)
	{
		return ((::Class_1_9988289E7F8AA214*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9988289E7F8AA214_METHOD_1_9856D42691278A36_OFFSET))(this, a1);
	}

	::System::Void Method_1_A3C36642AA77866E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9988289E7F8AA214_METHOD_1_A3C36642AA77866E_OFFSET))(this);
	}

	::System::Void Method_1_7A74CBCA024E5DDB(::RPG::GameCore::EventManager* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EventManager*))((::PBYTE)hIl2Cpp + CLASS_1_9988289E7F8AA214_METHOD_1_7A74CBCA024E5DDB_OFFSET))(this, a1);
	}
};
