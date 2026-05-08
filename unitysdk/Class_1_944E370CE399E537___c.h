#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_944E370CE399E537___C_METHOD_1_D20F759FC2EC43FB_OFFSET UNITYSDK_OFFSET(0x159B2A30)
#define CLASS_1_944E370CE399E537___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x159B29E0)
#define CLASS_1_944E370CE399E537___C__CTOR_OFFSET UNITYSDK_OFFSET(0x159B2A20)

inline static constexpr unsigned int Class_1_944E370CE399E537___c_TypeDefinitionIndex = 60449;

class Class_1_944E370CE399E537___c : public ::System::Object
{
public:
	static ::Class_1_944E370CE399E537___c** StaticGet___9()
	{
		return (::Class_1_944E370CE399E537___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_944E370CE399E537___c_TypeDefinitionIndex)->GetStaticField(0x43070);
	}
	static ::System::Action** StaticGet___9__0_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_944E370CE399E537___c_TypeDefinitionIndex)->GetStaticField(0x43078);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_944E370CE399E537___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_944E370CE399E537___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D20F759FC2EC43FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_944E370CE399E537___C_METHOD_1_D20F759FC2EC43FB_OFFSET))(this);
	}
};
