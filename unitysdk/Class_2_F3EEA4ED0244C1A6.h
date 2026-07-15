#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElationPointChangePopUIStyle.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_2_F3EEA4ED0244C1A6_METHOD_2_C84679B76D518F24_OFFSET UNITYSDK_OFFSET(0x184AC110)
#define CLASS_2_F3EEA4ED0244C1A6__CTOR_OFFSET UNITYSDK_OFFSET(0x184AC1F0)

inline static constexpr unsigned int Class_2_F3EEA4ED0244C1A6_TypeDefinitionIndex = 21961;

class Class_2_F3EEA4ED0244C1A6 : public ::RPG::GameCore::JsonConfig
{
public:
	::RPG::GameCore::ElationPointChangePopUIStyle Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3EEA4ED0244C1A6__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_C84679B76D518F24(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_F3EEA4ED0244C1A6*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_F3EEA4ED0244C1A6*&))((::PBYTE)hIl2Cpp + CLASS_2_F3EEA4ED0244C1A6_METHOD_2_C84679B76D518F24_OFFSET))(a1, a2);
	}
};
