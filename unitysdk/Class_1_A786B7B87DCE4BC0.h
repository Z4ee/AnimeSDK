#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RuanMadeCakeFeatureConfig; }
namespace RPG::GameCore { class RuanMadeCakeFeatureMap; }
namespace System { class String; }

#define CLASS_1_A786B7B87DCE4BC0_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xB028E80)
#define CLASS_1_A786B7B87DCE4BC0_METHOD_1_9DD989E2BE9447B6_OFFSET UNITYSDK_OFFSET(0xB028ED0)
#define CLASS_1_A786B7B87DCE4BC0_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0xB028DE0)

inline static constexpr unsigned int Class_1_A786B7B87DCE4BC0_TypeDefinitionIndex = 68457;

class Class_1_A786B7B87DCE4BC0 : public ::System::Object
{
public:
	static ::RPG::GameCore::RuanMadeCakeFeatureMap** StaticGet_Field_1_0()
	{
		return (::RPG::GameCore::RuanMadeCakeFeatureMap**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A786B7B87DCE4BC0_TypeDefinitionIndex)->GetStaticField(0x4EEB0);
	}

	static ::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A786B7B87DCE4BC0_METHOD_1_F8C7231308CD2C82_OFFSET))();
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A786B7B87DCE4BC0_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::RPG::GameCore::RuanMadeCakeFeatureConfig* Method_1_9DD989E2BE9447B6(::System::String* a1)
	{
		return ((::RPG::GameCore::RuanMadeCakeFeatureConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A786B7B87DCE4BC0_METHOD_1_9DD989E2BE9447B6_OFFSET))(a1);
	}
};
