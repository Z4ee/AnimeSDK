#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigVentCrawl; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_444932B18E765121_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x169E2C00)
#define CLASS_1_444932B18E765121_METHOD_1_2D01F45E770A81E5_OFFSET UNITYSDK_OFFSET(0x169E2BB0)
#define CLASS_1_444932B18E765121_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x169E2E10)

inline static constexpr unsigned int Class_1_444932B18E765121_TypeDefinitionIndex = 78740;

class Class_1_444932B18E765121 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigVentCrawl** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigVentCrawl**)Il2CppClass::FromTypeDefinitionIndex(Class_1_444932B18E765121_TypeDefinitionIndex)->GetStaticField(0x35820);
	}

	static ::MoleMole::Config::ConfigVentCrawl* Method_1_2D01F45E770A81E5()
	{
		return ((::MoleMole::Config::ConfigVentCrawl*(*)())((::PBYTE)hIl2Cpp + CLASS_1_444932B18E765121_METHOD_1_2D01F45E770A81E5_OFFSET))();
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_444932B18E765121_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_444932B18E765121_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}
};
