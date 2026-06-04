#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

inline static constexpr unsigned int Class_1_52B505AABBB37BDF___O_TypeDefinitionIndex = 64895;

class Class_1_52B505AABBB37BDF___O : public ::System::Object
{
public:
	static ::System::Action_1<::System::String*>** StaticGet__0____OnSaveCloudCallback()
	{
		return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_52B505AABBB37BDF___O_TypeDefinitionIndex)->GetStaticField(0x67020);
	}
};
