#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_2_720948D49026633D_METHOD_2_98CC72E84D5A4BB0_OFFSET UNITYSDK_OFFSET(0x16DFB490)
#define CLASS_2_720948D49026633D__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFB6F0)

inline static constexpr unsigned int Class_2_720948D49026633D_TypeDefinitionIndex = 21066;

class Class_2_720948D49026633D : public ::RPG::GameCore::JsonConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_2_0; // 0x10
	::RPG::GameCore::DynamicFloat* Field_2_1; // 0x18
	::RPG::GameCore::DynamicFloat* Field_2_2; // 0x20
	::RPG::GameCore::DynamicFloat* Field_2_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_720948D49026633D__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_98CC72E84D5A4BB0(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_720948D49026633D*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_720948D49026633D*&))((::PBYTE)hIl2Cpp + CLASS_2_720948D49026633D_METHOD_2_98CC72E84D5A4BB0_OFFSET))(a1, a2);
	}
};
