#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class SceneConfigRuntimeData; }
namespace System { class String; }

#define CLASS_1_59641C6AA1407C6A_METHOD_1_DCB7098523B8301F_OFFSET UNITYSDK_OFFSET(0x194B3AC0)

inline static constexpr unsigned int Class_1_59641C6AA1407C6A_TypeDefinitionIndex = 73552;

class Class_1_59641C6AA1407C6A : public ::System::Object
{
public:
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_0; // 0x0

	static ::System::Boolean Method_1_DCB7098523B8301F(::Foundation::AssetPath a1, ::MoleMole::Config::SceneConfigRuntimeData*& a2)
	{
		return ((::System::Boolean(*)(::Foundation::AssetPath, ::MoleMole::Config::SceneConfigRuntimeData*&))((::PBYTE)hIl2Cpp + CLASS_1_59641C6AA1407C6A_METHOD_1_DCB7098523B8301F_OFFSET))(a1, a2);
	}
};
