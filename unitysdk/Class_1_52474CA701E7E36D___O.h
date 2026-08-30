#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class JsonConfig; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

inline static constexpr unsigned int Class_1_52474CA701E7E36D___O_TypeDefinitionIndex = 63433;

class Class_1_52474CA701E7E36D___O : public ::System::Object
{
public:
	static ::System::Func_2<::System::String*, ::RPG::GameCore::JsonConfig*>** StaticGet__1___LoadChimeraDuelConditionConfig()
	{
		return (::System::Func_2<::System::String*, ::RPG::GameCore::JsonConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_52474CA701E7E36D___O_TypeDefinitionIndex)->GetStaticField(0x644E0);
	}
	static ::System::Func_2<::System::String*, ::RPG::GameCore::JsonConfig*>** StaticGet__0___LoadChimeraDuelNodeContainer()
	{
		return (::System::Func_2<::System::String*, ::RPG::GameCore::JsonConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_52474CA701E7E36D___O_TypeDefinitionIndex)->GetStaticField(0x644E8);
	}
	static ::System::Func_2<::System::String*, ::RPG::GameCore::JsonConfig*>** StaticGet__3___LoadChimeraDuelBubbleEventListener()
	{
		return (::System::Func_2<::System::String*, ::RPG::GameCore::JsonConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_52474CA701E7E36D___O_TypeDefinitionIndex)->GetStaticField(0x644F0);
	}
	static ::System::Func_2<::System::String*, ::RPG::GameCore::JsonConfig*>** StaticGet__2___LoadChimeraDuelEventListener()
	{
		return (::System::Func_2<::System::String*, ::RPG::GameCore::JsonConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_52474CA701E7E36D___O_TypeDefinitionIndex)->GetStaticField(0x644F8);
	}
};
