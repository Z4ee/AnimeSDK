#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameFlowType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseGameFlow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_9DBE90B731E74AD7_METHOD_1_54BD6E18D7F383EF_OFFSET UNITYSDK_OFFSET(0x9A34B50)

inline static constexpr unsigned int Class_1_9DBE90B731E74AD7_TypeDefinitionIndex = 59206;

class Class_1_9DBE90B731E74AD7 : public ::System::Object
{
public:
	static ::RPG::Client::BaseGameFlow* Method_1_54BD6E18D7F383EF(::RPG::GameCore::GameFlowType a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a2)
	{
		return ((::RPG::Client::BaseGameFlow*(*)(::RPG::GameCore::GameFlowType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_9DBE90B731E74AD7_METHOD_1_54BD6E18D7F383EF_OFFSET))(a1, a2);
	}
};
