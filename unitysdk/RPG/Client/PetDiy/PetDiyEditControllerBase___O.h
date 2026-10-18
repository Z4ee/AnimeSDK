#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::PetDiy { class PetDiyData; }
namespace System { template <typename T> class Comparison_1; }

namespace RPG::Client::PetDiy
{
	inline static constexpr unsigned int PetDiyEditControllerBase___O_TypeDefinitionIndex = 74485;

	class PetDiyEditControllerBase___O : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::PetDiy::PetDiyData*>** StaticGet__0___SortFunc()
		{
			return (::System::Comparison_1<::RPG::Client::PetDiy::PetDiyData*>**)Il2CppClass::FromTypeDefinitionIndex(PetDiyEditControllerBase___O_TypeDefinitionIndex)->GetStaticField(0x16080);
		}
	};
}
