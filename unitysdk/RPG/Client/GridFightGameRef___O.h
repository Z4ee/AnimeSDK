#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_61A00F21DF24BF55;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRef___O_TypeDefinitionIndex = 64760;

	class GridFightGameRef___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::String*, ::Class_1_61A00F21DF24BF55*>** StaticGet__0___GetReq()
		{
			return (::System::Func_2<::System::String*, ::Class_1_61A00F21DF24BF55*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRef___O_TypeDefinitionIndex)->GetStaticField(0x2FB70);
		}
	};
}
