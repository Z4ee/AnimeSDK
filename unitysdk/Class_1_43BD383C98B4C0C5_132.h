#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { template <typename T> class IPromise_1; }

#define CLASS_1_43BD383C98B4C0C5_132_METHOD_1_8A9A72FB00358D11_OFFSET UNITYSDK_OFFSET(0x8C13470)
#define CLASS_1_43BD383C98B4C0C5_132_METHOD_1_DB0E2FC58B9108F4_OFFSET UNITYSDK_OFFSET(0x8C134F0)
#define CLASS_1_43BD383C98B4C0C5_132__CTOR_OFFSET UNITYSDK_OFFSET(0x8C13570)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_132_TypeDefinitionIndex = 51555;

class Class_1_43BD383C98B4C0C5_132 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_132__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_8A9A72FB00358D11()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_132_METHOD_1_8A9A72FB00358D11_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise_1<::System::Boolean>* Method_1_DB0E2FC58B9108F4()
	{
		return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_132_METHOD_1_DB0E2FC58B9108F4_OFFSET))(this);
	}
};
