#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_239458FF8F7A181E_METHOD_3_574C02B0ECD7C03A_OFFSET UNITYSDK_OFFSET(0x1B3C85C0)
#define CLASS_3_239458FF8F7A181E_METHOD_3_EC151C02985A7696_OFFSET UNITYSDK_OFFSET(0x1B3C8610)
#define CLASS_3_239458FF8F7A181E__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3C8600)

inline static constexpr unsigned int Class_3_239458FF8F7A181E_TypeDefinitionIndex = 20495;

class Class_3_239458FF8F7A181E : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_239458FF8F7A181E__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_574C02B0ECD7C03A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_239458FF8F7A181E*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_239458FF8F7A181E*&))((::PBYTE)hIl2Cpp + CLASS_3_239458FF8F7A181E_METHOD_3_574C02B0ECD7C03A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_EC151C02985A7696(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_239458FF8F7A181E* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_239458FF8F7A181E*))((::PBYTE)hIl2Cpp + CLASS_3_239458FF8F7A181E_METHOD_3_EC151C02985A7696_OFFSET))(a1, a2);
	}
};
