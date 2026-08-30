#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_68C34B5C1C40C2FF_1.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }

#define CLASS_3_5A36D96F88899465_METHOD_3_68563EFA15298996_OFFSET UNITYSDK_OFFSET(0x1CAB6D70)
#define CLASS_3_5A36D96F88899465_METHOD_3_B45DC2E8B8DF29CA_OFFSET UNITYSDK_OFFSET(0x1CAB6CA0)
#define CLASS_3_5A36D96F88899465__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAB6D60)

inline static constexpr unsigned int Class_3_5A36D96F88899465_TypeDefinitionIndex = 21157;

class Class_3_5A36D96F88899465 : public ::Class_2_68C34B5C1C40C2FF_1
{
public:
	::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* IEHPFADHJFD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5A36D96F88899465__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_B45DC2E8B8DF29CA(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_5A36D96F88899465*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_5A36D96F88899465*&))((::PBYTE)hIl2Cpp + CLASS_3_5A36D96F88899465_METHOD_3_B45DC2E8B8DF29CA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_68563EFA15298996(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_5A36D96F88899465* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_5A36D96F88899465*))((::PBYTE)hIl2Cpp + CLASS_3_5A36D96F88899465_METHOD_3_68563EFA15298996_OFFSET))(a1, a2);
	}
};
