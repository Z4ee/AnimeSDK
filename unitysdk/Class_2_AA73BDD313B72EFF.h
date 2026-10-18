#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_2_AA73BDD313B72EFF_METHOD_2_003ECE1BF12BE449_OFFSET UNITYSDK_OFFSET(0x1D03F490)
#define CLASS_2_AA73BDD313B72EFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1D03F720)

inline static constexpr unsigned int Class_2_AA73BDD313B72EFF_TypeDefinitionIndex = 22868;

class Class_2_AA73BDD313B72EFF : public ::RPG::GameCore::JsonConfig
{
public:
	::System::String* IHHJGPJLNGD; // 0x10
	::System::String* CEJBDKKJPBN; // 0x18
	::System::Single IEFLOMPIIAK; // 0x20
	::System::Single AABCFBDDNIE; // 0x24
	::System::Boolean KMFHIAABCOC; // 0x28
	::System::Boolean GBPJCBMDNAN; // 0x29

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA73BDD313B72EFF__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_003ECE1BF12BE449(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_AA73BDD313B72EFF*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_AA73BDD313B72EFF*&))((::PBYTE)hIl2Cpp + CLASS_2_AA73BDD313B72EFF_METHOD_2_003ECE1BF12BE449_OFFSET))(a1, a2);
	}
};
