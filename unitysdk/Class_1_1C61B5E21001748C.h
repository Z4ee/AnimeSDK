#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { template <typename T> class IPromise_1; }

#define CLASS_1_1C61B5E21001748C_METHOD_1_7197710F416EEA93_OFFSET UNITYSDK_OFFSET(0x1875D830)
#define CLASS_1_1C61B5E21001748C_METHOD_1_8A9A72FB00358D11_OFFSET UNITYSDK_OFFSET(0x1875D7B0)
#define CLASS_1_1C61B5E21001748C__CTOR_OFFSET UNITYSDK_OFFSET(0x1875D8B0)

inline static constexpr unsigned int Class_1_1C61B5E21001748C_TypeDefinitionIndex = 60694;

class Class_1_1C61B5E21001748C : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C61B5E21001748C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_8A9A72FB00358D11()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C61B5E21001748C_METHOD_1_8A9A72FB00358D11_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise_1<::System::Boolean>* Method_1_7197710F416EEA93()
	{
		return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C61B5E21001748C_METHOD_1_7197710F416EEA93_OFFSET))(this);
	}
};
