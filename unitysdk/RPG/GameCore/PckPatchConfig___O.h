#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
template <typename T> class Class_1_D837DED66799FBE3_DelegateParseJson_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int PckPatchConfig___O_TypeDefinitionIndex = 15747;

	class PckPatchConfig___O : public ::System::Object
	{
	public:
		static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::System::String*>** StaticGet__0___FromJson()
		{
			return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PckPatchConfig___O_TypeDefinitionIndex)->GetStaticField(0x44CC0);
		}
	};
}
