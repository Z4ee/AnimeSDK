#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class EventManager; }

#define CLASS_1_BF7A075734D15E98_CLEAR_OFFSET UNITYSDK_OFFSET(0x19535F90)
#define CLASS_1_BF7A075734D15E98_METHOD_1_3B9102A6C2586079_OFFSET UNITYSDK_OFFSET(0x19535FE0)
#define CLASS_1_BF7A075734D15E98_METHOD_1_7A74CBCA024E5DDB_OFFSET UNITYSDK_OFFSET(0x19536120)
#define CLASS_1_BF7A075734D15E98_METHOD_1_908CDC094010F209_OFFSET UNITYSDK_OFFSET(0x19536090)
#define CLASS_1_BF7A075734D15E98__CTOR_OFFSET UNITYSDK_OFFSET(0x19536170)

inline static constexpr unsigned int Class_1_BF7A075734D15E98_TypeDefinitionIndex = 56867;

class Class_1_BF7A075734D15E98 : public ::System::Object
{
public:
	::RPG::GameCore::EventManager* BIOMICKJCKG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF7A075734D15E98__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF7A075734D15E98_CLEAR_OFFSET))(this);
	}

	::Class_1_BF7A075734D15E98* Method_1_3B9102A6C2586079(::System::Boolean a1)
	{
		return ((::Class_1_BF7A075734D15E98*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BF7A075734D15E98_METHOD_1_3B9102A6C2586079_OFFSET))(this, a1);
	}

	::System::Void Method_1_908CDC094010F209()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF7A075734D15E98_METHOD_1_908CDC094010F209_OFFSET))(this);
	}

	::System::Void Method_1_7A74CBCA024E5DDB(::RPG::GameCore::EventManager* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EventManager*))((::PBYTE)hIl2Cpp + CLASS_1_BF7A075734D15E98_METHOD_1_7A74CBCA024E5DDB_OFFSET))(this, a1);
	}
};
