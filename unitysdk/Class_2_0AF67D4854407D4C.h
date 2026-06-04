#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_2_0AF67D4854407D4C_METHOD_2_ABC29E82484A8C01_OFFSET UNITYSDK_OFFSET(0x19374AA0)
#define CLASS_2_0AF67D4854407D4C__CTOR_OFFSET UNITYSDK_OFFSET(0x19374C20)

inline static constexpr unsigned int Class_2_0AF67D4854407D4C_TypeDefinitionIndex = 22059;

class Class_2_0AF67D4854407D4C : public ::RPG::GameCore::JsonConfig
{
public:
	::Il2CppArray<::RPG::GameCore::DynamicFloat*>* Field_2_0; // 0x10
	::RPG::Client::TextID Field_2_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0AF67D4854407D4C__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_ABC29E82484A8C01(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_0AF67D4854407D4C*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_0AF67D4854407D4C*&))((::PBYTE)hIl2Cpp + CLASS_2_0AF67D4854407D4C_METHOD_2_ABC29E82484A8C01_OFFSET))(a1, a2);
	}
};
