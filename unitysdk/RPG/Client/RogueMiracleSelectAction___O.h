#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournMiracleData; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMiracleSelectAction___O_TypeDefinitionIndex = 64038;

	class RogueMiracleSelectAction___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::RogueTournMiracleData*>** StaticGet__0___GetData()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::RogueTournMiracleData*>**)Il2CppClass::FromTypeDefinitionIndex(RogueMiracleSelectAction___O_TypeDefinitionIndex)->GetStaticField(0x26DA0);
		}
	};
}
