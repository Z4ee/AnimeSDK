#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseGameFlow; }
namespace RPG::Client { class BaseGameFlowContext; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourGameFlow___O_TypeDefinitionIndex = 57829;

	class ParkourGameFlow___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::BaseGameFlow*, ::RPG::Client::BaseGameFlowContext*>** StaticGet__0___Create()
		{
			return (::System::Func_2<::RPG::Client::BaseGameFlow*, ::RPG::Client::BaseGameFlowContext*>**)Il2CppClass::FromTypeDefinitionIndex(ParkourGameFlow___O_TypeDefinitionIndex)->GetStaticField(0x1D60);
		}
	};
}
