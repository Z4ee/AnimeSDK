#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_14D067CABD7A77CE;
namespace RPG::Client { class GridFightBonusDropData; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPrayQuest___O_TypeDefinitionIndex = 62163;

	class GridFightPrayQuest___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_14D067CABD7A77CE*, ::RPG::Client::GridFightBonusDropData*>** StaticGet__0___Create()
		{
			return (::System::Func_2<::Class_1_14D067CABD7A77CE*, ::RPG::Client::GridFightBonusDropData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightPrayQuest___O_TypeDefinitionIndex)->GetStaticField(0x2AC00);
		}
	};
}
