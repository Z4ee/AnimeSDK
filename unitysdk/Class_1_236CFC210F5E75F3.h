#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameFlowType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseGameFlow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_236CFC210F5E75F3_METHOD_1_B3F97D522DD3E513_OFFSET UNITYSDK_OFFSET(0x11170CA0)

inline static constexpr unsigned int Class_1_236CFC210F5E75F3_TypeDefinitionIndex = 52254;

class Class_1_236CFC210F5E75F3 : public ::System::Object
{
public:
	static ::RPG::Client::BaseGameFlow* Method_1_B3F97D522DD3E513(::RPG::GameCore::GameFlowType a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a2)
	{
		return ((::RPG::Client::BaseGameFlow*(*)(::RPG::GameCore::GameFlowType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_236CFC210F5E75F3_METHOD_1_B3F97D522DD3E513_OFFSET))(a1, a2);
	}
};
