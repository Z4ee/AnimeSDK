#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define CLASS_3_1E6DFDCE6E0F63F7_METHOD_3_400CD15A8456AED9_OFFSET UNITYSDK_OFFSET(0x1D0DB360)
#define CLASS_3_1E6DFDCE6E0F63F7_METHOD_3_7F22A781A9156478_OFFSET UNITYSDK_OFFSET(0x1D0DB3B0)
#define CLASS_3_1E6DFDCE6E0F63F7__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0DB3A0)

inline static constexpr unsigned int Class_3_1E6DFDCE6E0F63F7_TypeDefinitionIndex = 21212;

class Class_3_1E6DFDCE6E0F63F7 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* IPKCFNKIDMB; // 0x18
	::RPG::GameCore::DynamicString* OENAMINOLLF; // 0x20
	::System::Boolean JBGAMCKONFK; // 0x28
	::System::Boolean DFDMNILBBNH; // 0x29

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1E6DFDCE6E0F63F7__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_400CD15A8456AED9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_1E6DFDCE6E0F63F7*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_1E6DFDCE6E0F63F7*&))((::PBYTE)hIl2Cpp + CLASS_3_1E6DFDCE6E0F63F7_METHOD_3_400CD15A8456AED9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7F22A781A9156478(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_1E6DFDCE6E0F63F7* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_1E6DFDCE6E0F63F7*))((::PBYTE)hIl2Cpp + CLASS_3_1E6DFDCE6E0F63F7_METHOD_3_7F22A781A9156478_OFFSET))(a1, a2);
	}
};
