#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

namespace InControl::Internal
{
	inline static constexpr unsigned int CodeWriter___O_TypeDefinitionIndex = 37958;

	class CodeWriter___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Char, ::System::Boolean>** StaticGet__0___IsWhiteSpace()
		{
			return (::System::Func_2<::System::Char, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(CodeWriter___O_TypeDefinitionIndex)->GetStaticField(0x12480);
		}
	};
}
