#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_B51FB35349ACD175;
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_A1A3D36285B9E328_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x1485ABB0)
#define CLASS_4_A1A3D36285B9E328_METHOD_4_3B3E2D3B3DF161CC_OFFSET UNITYSDK_OFFSET(0x14859D80)
#define CLASS_4_A1A3D36285B9E328_METHOD_4_3DADE0B6AD121A80_OFFSET UNITYSDK_OFFSET(0x1485A790)
#define CLASS_4_A1A3D36285B9E328_METHOD_4_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x14859B70)
#define CLASS_4_A1A3D36285B9E328__CTOR_OFFSET UNITYSDK_OFFSET(0x1485AA10)

inline static constexpr unsigned int Class_4_A1A3D36285B9E328_TypeDefinitionIndex = 80793;

class Class_4_A1A3D36285B9E328 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_F91115D9A1F02F5F<::System::Boolean>* Field_4_1; // 0x28
	::Class_4_F91115D9A1F02F5F<::System::Boolean>* Field_4_2; // 0x30
	::Class_4_F91115D9A1F02F5F<::System::Boolean>* Field_4_3; // 0x38
	::Class_4_B51FB35349ACD175<::System::Boolean>* Field_4_4; // 0x40
	::Class_4_F91115D9A1F02F5F<::MoleMole::EntityHandle>* Field_4_0; // 0x48

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

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A1A3D36285B9E328_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}

	static ::System::Void Method_4_3DADE0B6AD121A80(::MoleMole::Config::EntityType a1)
	{
		return ((::System::Void(*)(::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + CLASS_4_A1A3D36285B9E328_METHOD_4_3DADE0B6AD121A80_OFFSET))(a1);
	}
};
