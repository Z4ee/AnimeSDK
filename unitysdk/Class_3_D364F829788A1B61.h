#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PropButtonConfig; }

#define CLASS_3_D364F829788A1B61_METHOD_3_03AAA6DBB5BE6FBE_OFFSET UNITYSDK_OFFSET(0xCA37E60)
#define CLASS_3_D364F829788A1B61_METHOD_3_A6D862070568AC73_OFFSET UNITYSDK_OFFSET(0xCA37EA0)
#define CLASS_3_D364F829788A1B61__CTOR_OFFSET UNITYSDK_OFFSET(0xCA37E90)

inline static constexpr unsigned int Class_3_D364F829788A1B61_TypeDefinitionIndex = 21183;

class Class_3_D364F829788A1B61 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicString* MNMHMECGDAK; // 0x18
	::Il2CppArray<::RPG::GameCore::PropButtonConfig*>* PHKOOLAJGGG; // 0x20
	::System::Boolean ILJFADIIFOI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D364F829788A1B61__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_03AAA6DBB5BE6FBE(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_D364F829788A1B61*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_D364F829788A1B61*&))((::PBYTE)hIl2Cpp + CLASS_3_D364F829788A1B61_METHOD_3_03AAA6DBB5BE6FBE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_A6D862070568AC73(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_D364F829788A1B61* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_D364F829788A1B61*))((::PBYTE)hIl2Cpp + CLASS_3_D364F829788A1B61_METHOD_3_A6D862070568AC73_OFFSET))(a1, a2);
	}
};
