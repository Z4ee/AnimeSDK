#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_73B429E1E9F270F4_METHOD_1_76CE385B21223156_OFFSET UNITYSDK_OFFSET(0x1B137540)
#define CLASS_1_73B429E1E9F270F4__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1376A0)

inline static constexpr unsigned int Class_1_73B429E1E9F270F4_TypeDefinitionIndex = 11021;

class Class_1_73B429E1E9F270F4 : public ::System::Object
{
public:
	::System::Boolean Field_1_0; // 0x10
	::RPG::GameCore::AttackDamageType Field_1_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73B429E1E9F270F4__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_76CE385B21223156(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_73B429E1E9F270F4*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_73B429E1E9F270F4*&))((::PBYTE)hIl2Cpp + CLASS_1_73B429E1E9F270F4_METHOD_1_76CE385B21223156_OFFSET))(a1, a2);
	}
};
