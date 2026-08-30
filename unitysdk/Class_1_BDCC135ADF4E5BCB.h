#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameFlowType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseGameFlow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_BDCC135ADF4E5BCB_METHOD_1_F7E156525C0E1714_OFFSET UNITYSDK_OFFSET(0xC46EF60)

inline static constexpr unsigned int Class_1_BDCC135ADF4E5BCB_TypeDefinitionIndex = 64411;

class Class_1_BDCC135ADF4E5BCB : public ::System::Object
{
public:
	static ::RPG::Client::BaseGameFlow* Method_1_F7E156525C0E1714(::RPG::GameCore::GameFlowType a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a2)
	{
		return ((::RPG::Client::BaseGameFlow*(*)(::RPG::GameCore::GameFlowType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_BDCC135ADF4E5BCB_METHOD_1_F7E156525C0E1714_OFFSET))(a1, a2);
	}
};
