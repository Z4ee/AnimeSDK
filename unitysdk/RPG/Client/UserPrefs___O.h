#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int UserPrefs___O_TypeDefinitionIndex = 48017;

	class UserPrefs___O : public ::System::Object
	{
	public:
		static ::System::Func_1<::System::Boolean>** StaticGet__0____GetResidentActivityIsShowFinishedDefaultValue()
		{
			return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UserPrefs___O_TypeDefinitionIndex)->GetStaticField(0x37370);
		}
	};
}
