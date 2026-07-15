#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_9D9E51CBF6547B9C;

#define CLASS_2_4CDC13220E4CDFEE_METHOD_2_920F08E4FDC4E588_OFFSET UNITYSDK_OFFSET(0x1B5FACC0)
#define CLASS_2_4CDC13220E4CDFEE_METHOD_2_A3DDF587C60A9EF5_OFFSET UNITYSDK_OFFSET(0x1B5FAB50)
#define CLASS_2_4CDC13220E4CDFEE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5FACB0)

inline static constexpr unsigned int Class_2_4CDC13220E4CDFEE_TypeDefinitionIndex = 20274;

class Class_2_4CDC13220E4CDFEE : public ::RPG::GameCore::JsonConfig
{
public:
	::Il2CppArray<::Class_2_9D9E51CBF6547B9C*>* Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x18
	::System::Single Field_2_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4CDC13220E4CDFEE__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_A3DDF587C60A9EF5(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_4CDC13220E4CDFEE*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_4CDC13220E4CDFEE*&))((::PBYTE)hIl2Cpp + CLASS_2_4CDC13220E4CDFEE_METHOD_2_A3DDF587C60A9EF5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_2_920F08E4FDC4E588(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_4CDC13220E4CDFEE* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_4CDC13220E4CDFEE*))((::PBYTE)hIl2Cpp + CLASS_2_4CDC13220E4CDFEE_METHOD_2_920F08E4FDC4E588_OFFSET))(a1, a2);
	}
};
