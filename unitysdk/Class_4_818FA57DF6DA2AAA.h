#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_4_818FA57DF6DA2AAA_METHOD_4_411F5B05FB2FEB16_OFFSET UNITYSDK_OFFSET(0x18BA7CD0)
#define CLASS_4_818FA57DF6DA2AAA_METHOD_4_B9CA7374CC83C96D_OFFSET UNITYSDK_OFFSET(0x18BA7DF0)
#define CLASS_4_818FA57DF6DA2AAA__CTOR_OFFSET UNITYSDK_OFFSET(0x18BA7D70)

inline static constexpr unsigned int Class_4_818FA57DF6DA2AAA_TypeDefinitionIndex = 23081;

class Class_4_818FA57DF6DA2AAA : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_4_0; // 0x20
	::Il2CppArray<::System::String*>* Field_4_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_818FA57DF6DA2AAA__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_411F5B05FB2FEB16(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_818FA57DF6DA2AAA*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_818FA57DF6DA2AAA*&))((::PBYTE)hIl2Cpp + CLASS_4_818FA57DF6DA2AAA_METHOD_4_411F5B05FB2FEB16_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_B9CA7374CC83C96D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_818FA57DF6DA2AAA* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_818FA57DF6DA2AAA*))((::PBYTE)hIl2Cpp + CLASS_4_818FA57DF6DA2AAA_METHOD_4_B9CA7374CC83C96D_OFFSET))(a1, a2);
	}
};
