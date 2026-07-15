#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class IPromise; }

#define CLASS_1_9E350A19BBA25CA5__CTOR_OFFSET UNITYSDK_OFFSET(0x14D033C0)

inline static constexpr unsigned int Class_1_9E350A19BBA25CA5_TypeDefinitionIndex = 58337;

class Class_1_9E350A19BBA25CA5 : public ::System::Object
{
public:
	::RPG::Client::Promises::IPromise* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E350A19BBA25CA5__CTOR_OFFSET))(this);
	}
};
