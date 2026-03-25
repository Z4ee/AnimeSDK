#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseGameFlow; }
namespace RPG::Client { class BaseGameFlowContext; }
namespace System { template <typename T1, typename T2> class Func_2; }

inline static constexpr unsigned int Class_1_A052F48AC136DF88___O_TypeDefinitionIndex = 52233;

class Class_1_A052F48AC136DF88___O : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::Client::BaseGameFlow*, ::RPG::Client::BaseGameFlowContext*>** StaticGet__0___Create()
	{
		return (::System::Func_2<::RPG::Client::BaseGameFlow*, ::RPG::Client::BaseGameFlowContext*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A052F48AC136DF88___O_TypeDefinitionIndex)->GetStaticField(0x44B90);
	}
};
