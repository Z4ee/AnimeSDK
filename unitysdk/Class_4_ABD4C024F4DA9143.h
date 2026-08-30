#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_C880386D2299BCE8;
namespace System { class String; }

#define CLASS_4_ABD4C024F4DA9143_METHOD_4_095D9C8C304BB0E0_OFFSET UNITYSDK_OFFSET(0x1D6F1E80)
#define CLASS_4_ABD4C024F4DA9143_METHOD_4_F50D6F293391C101_OFFSET UNITYSDK_OFFSET(0x1D6F1E10)
#define CLASS_4_ABD4C024F4DA9143__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F1E60)

inline static constexpr unsigned int Class_4_ABD4C024F4DA9143_TypeDefinitionIndex = 19892;

class Class_4_ABD4C024F4DA9143 : public ::RPG::GameCore::STTaskConfig
{
public:
	::System::String* INMECGOAEEO; // 0x18
	::Il2CppArray<::Class_2_C880386D2299BCE8*>* HEBOJJJAHEE; // 0x20
	::System::Single MBPCNEOIKIC; // 0x28
	::System::Single NJIGKOHDINP; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_ABD4C024F4DA9143__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_F50D6F293391C101(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_ABD4C024F4DA9143*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_ABD4C024F4DA9143*&))((::PBYTE)hIl2Cpp + CLASS_4_ABD4C024F4DA9143_METHOD_4_F50D6F293391C101_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_095D9C8C304BB0E0(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_ABD4C024F4DA9143* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_ABD4C024F4DA9143*))((::PBYTE)hIl2Cpp + CLASS_4_ABD4C024F4DA9143_METHOD_4_095D9C8C304BB0E0_OFFSET))(a1, a2);
	}
};
