#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class IPromise; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_791CB467786D8BD6___C__DISPLAYCLASS24_0__ASYNCRETURNTARGETUI_B__0_OFFSET UNITYSDK_OFFSET(0xE457DC0)
#define CLASS_1_791CB467786D8BD6___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE456F00)

inline static constexpr unsigned int Class_1_791CB467786D8BD6___c__DisplayClass24_0_TypeDefinitionIndex = 62219;

class Class_1_791CB467786D8BD6___c__DisplayClass24_0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::Promises::IPromise*>* uiPromises; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_791CB467786D8BD6___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _AsyncReturnTargetUI_b__0()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_791CB467786D8BD6___C__DISPLAYCLASS24_0__ASYNCRETURNTARGETUI_B__0_OFFSET))(this);
	}
};
