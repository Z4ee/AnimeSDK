#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChimeraDuel/ChimeraDuelLogLevel.h"
#include "unitysdk/System/Object.h"

class Class_1_C563E5E77DCDB6EB;
class Class_1_D3E9CB566496BBAE;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_811684F8F4BAD8BC__CTOR_OFFSET UNITYSDK_OFFSET(0x168936A0)

inline static constexpr unsigned int Class_1_811684F8F4BAD8BC_TypeDefinitionIndex = 73457;

class Class_1_811684F8F4BAD8BC : public ::System::Object
{
public:
	::Class_1_D3E9CB566496BBAE* Field_1_0; // 0x10
	::System::Action_1<::Class_1_C563E5E77DCDB6EB*>* Field_1_1; // 0x18
	::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelLogLevel Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_811684F8F4BAD8BC__CTOR_OFFSET))(this);
	}
};
