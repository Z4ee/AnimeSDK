#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class JsonConfig; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

inline static constexpr unsigned int Class_1_B9A2396C143CE005___O_TypeDefinitionIndex = 58379;

class Class_1_B9A2396C143CE005___O : public ::System::Object
{
public:
	static ::System::Func_2<::System::String*, ::RPG::GameCore::JsonConfig*>** StaticGet__3___LoadChimeraDuelBubbleEventListener()
	{
		return (::System::Func_2<::System::String*, ::RPG::GameCore::JsonConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B9A2396C143CE005___O_TypeDefinitionIndex)->GetStaticField(0x48080);
	}
	static ::System::Func_2<::System::String*, ::RPG::GameCore::JsonConfig*>** StaticGet__0___LoadChimeraDuelNodeContainer()
	{
		return (::System::Func_2<::System::String*, ::RPG::GameCore::JsonConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B9A2396C143CE005___O_TypeDefinitionIndex)->GetStaticField(0x48088);
	}
	static ::System::Func_2<::System::String*, ::RPG::GameCore::JsonConfig*>** StaticGet__1___LoadChimeraDuelConditionConfig()
	{
		return (::System::Func_2<::System::String*, ::RPG::GameCore::JsonConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B9A2396C143CE005___O_TypeDefinitionIndex)->GetStaticField(0x48090);
	}
	static ::System::Func_2<::System::String*, ::RPG::GameCore::JsonConfig*>** StaticGet__2___LoadChimeraDuelEventListener()
	{
		return (::System::Func_2<::System::String*, ::RPG::GameCore::JsonConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B9A2396C143CE005___O_TypeDefinitionIndex)->GetStaticField(0x48098);
	}
};
