#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseGameFlow; }
namespace RPG::Client { class BaseGameFlowContext; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A052F48AC136DF88__CTOR_OFFSET UNITYSDK_OFFSET(0x15AC73E0)

inline static constexpr unsigned int Class_1_A052F48AC136DF88_TypeDefinitionIndex = 64389;

class Class_1_A052F48AC136DF88 : public ::System::Object
{
public:
	::RPG::Client::BaseGameFlow* BEGDKHKENMF; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Func_2<::RPG::Client::BaseGameFlow*, ::RPG::Client::BaseGameFlowContext*>*>* BBCBMBIGEPH; // 0x18

	::System::Void _ctor(::RPG::Client::BaseGameFlow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + CLASS_1_A052F48AC136DF88__CTOR_OFFSET))(this, a1);
	}
};
