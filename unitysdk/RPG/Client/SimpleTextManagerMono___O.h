#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SimpleText; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace RPG::Client
{
	inline static constexpr unsigned int SimpleTextManagerMono___O_TypeDefinitionIndex = 69368;

	class SimpleTextManagerMono___O : public ::System::Object
	{
	public:
		static ::System::Func_3<::RPG::Client::SimpleText*, ::RPG::Client::SimpleText*, ::System::Int32>** StaticGet__0___Comparison()
		{
			return (::System::Func_3<::RPG::Client::SimpleText*, ::RPG::Client::SimpleText*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(SimpleTextManagerMono___O_TypeDefinitionIndex)->GetStaticField(0x34770);
		}
	};
}
