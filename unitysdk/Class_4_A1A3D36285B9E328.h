#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_4_A1A3D36285B9E328_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x16A6B8B0)
#define CLASS_4_A1A3D36285B9E328_METHOD_4_3B3E2D3B3DF161CC_OFFSET UNITYSDK_OFFSET(0x16A6AA80)
#define CLASS_4_A1A3D36285B9E328_METHOD_4_3DADE0B6AD121A80_OFFSET UNITYSDK_OFFSET(0x16A6B490)
#define CLASS_4_A1A3D36285B9E328_METHOD_4_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x16A6A870)
#define CLASS_4_A1A3D36285B9E328__CTOR_OFFSET UNITYSDK_OFFSET(0x16A6B710)

inline static constexpr unsigned int Class_4_A1A3D36285B9E328_TypeDefinitionIndex = 79405;

class Class_4_A1A3D36285B9E328 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_4_3; // 0x28
	::Class_4_8D3E479B491881B3<::System::Boolean>* Field_4_4; // 0x30
	::Class_4_2FF7D360A2F3EC48<::MoleMole::EntityHandle>* Field_4_0; // 0x38
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_4_1; // 0x40
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_4_2; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A1A3D36285B9E328__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A1A3D36285B9E328_METHOD_4_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_4_3B3E2D3B3DF161CC(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_A1A3D36285B9E328_METHOD_4_3B3E2D3B3DF161CC_OFFSET))(this, a1);
	}

	static ::System::Void Method_4_3DADE0B6AD121A80(::MoleMole::Config::EntityType a1)
	{
		return ((::System::Void(*)(::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + CLASS_4_A1A3D36285B9E328_METHOD_4_3DADE0B6AD121A80_OFFSET))(a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A1A3D36285B9E328_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
