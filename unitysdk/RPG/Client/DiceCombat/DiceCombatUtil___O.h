#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::DiceCombat { class DiceCombatCommunicateData; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatUtil___O_TypeDefinitionIndex = 75621;

	class DiceCombatUtil___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::DiceCombat::DiceCombatCommunicateData*>** StaticGet__0___Create()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::DiceCombat::DiceCombatCommunicateData*>**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatUtil___O_TypeDefinitionIndex)->GetStaticField(0x60A00);
		}
	};
}
