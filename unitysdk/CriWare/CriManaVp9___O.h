#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

namespace CriWare
{
	inline static constexpr unsigned int CriManaVp9___O_TypeDefinitionIndex = 38906;

	class CriManaVp9___O : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet__0___SetupVp9Decoder()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(CriManaVp9___O_TypeDefinitionIndex)->GetStaticField(0x5B0C0);
		}
	};
}
