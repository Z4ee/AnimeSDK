#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DE6E491FE63D8E69_2;
namespace RPG::Client { class GridFightPrayQuest; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFatePraySelectAction___O_TypeDefinitionIndex = 65415;

	class GridFightFatePraySelectAction___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_DE6E491FE63D8E69_2*, ::RPG::Client::GridFightPrayQuest*>** StaticGet__0___CreateFatePraySelection()
		{
			return (::System::Func_2<::Class_1_DE6E491FE63D8E69_2*, ::RPG::Client::GridFightPrayQuest*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightFatePraySelectAction___O_TypeDefinitionIndex)->GetStaticField(0x26EB0);
		}
	};
}
