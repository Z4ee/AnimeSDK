#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_2_EC14A02625BF0181_METHOD_2_C54EC196AF37CD63_OFFSET UNITYSDK_OFFSET(0x1B907CD0)
#define CLASS_2_EC14A02625BF0181__CTOR_OFFSET UNITYSDK_OFFSET(0x1B907F10)

inline static constexpr unsigned int Class_2_EC14A02625BF0181_TypeDefinitionIndex = 22042;

class Class_2_EC14A02625BF0181 : public ::RPG::GameCore::JsonConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_2_0; // 0x10
	::RPG::GameCore::DynamicFloat* Field_2_1; // 0x18
	::RPG::GameCore::DynamicFloat* Field_2_2; // 0x20
	::RPG::GameCore::DynamicFloat* Field_2_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC14A02625BF0181__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_C54EC196AF37CD63(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_EC14A02625BF0181*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_EC14A02625BF0181*&))((::PBYTE)hIl2Cpp + CLASS_2_EC14A02625BF0181_METHOD_2_C54EC196AF37CD63_OFFSET))(a1, a2);
	}
};
