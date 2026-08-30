#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5E4ED920015DC82D.h"
#include "unitysdk/Struct_2_F1C4ECC5EFDCA1EF.h"

class Class_1_5E92AC2D7588EEFB;
class Class_1_A267EEB0150E29E8;
namespace System { class Object; }

#define CLASS_2_2FA33B3B04D5BC1F_METHOD_2_3CE5A19433AD8C9D_OFFSET UNITYSDK_OFFSET(0x184BD040)
#define CLASS_2_2FA33B3B04D5BC1F_METHOD_2_C21AE3E7E5182CB7_OFFSET UNITYSDK_OFFSET(0x184BCFD0)
#define CLASS_2_2FA33B3B04D5BC1F_METHOD_2_DF7929AE13AC941D_OFFSET UNITYSDK_OFFSET(0x184BCE30)
#define CLASS_2_2FA33B3B04D5BC1F_START_OFFSET UNITYSDK_OFFSET(0x184BCCF0)
#define CLASS_2_2FA33B3B04D5BC1F_STOP_OFFSET UNITYSDK_OFFSET(0x184BCDE0)
#define CLASS_2_2FA33B3B04D5BC1F__CTOR_OFFSET UNITYSDK_OFFSET(0x184BCC60)

inline static constexpr unsigned int Class_2_2FA33B3B04D5BC1F_TypeDefinitionIndex = 62864;

class Class_2_2FA33B3B04D5BC1F : public ::Class_1_5E4ED920015DC82D
{
public:
	::Class_1_5E92AC2D7588EEFB* JJAGHGLLOME; // 0x20
	::Class_1_A267EEB0150E29E8* LMGKPMHOLAB; // 0x28

	::System::Void _ctor(::Class_1_A267EEB0150E29E8* a1, ::Class_1_5E92AC2D7588EEFB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A267EEB0150E29E8*, ::Class_1_5E92AC2D7588EEFB*))((::PBYTE)hIl2Cpp + CLASS_2_2FA33B3B04D5BC1F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2FA33B3B04D5BC1F_START_OFFSET))(this);
	}

	::System::Void Stop()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2FA33B3B04D5BC1F_STOP_OFFSET))(this);
	}

	::System::Void Method_2_DF7929AE13AC941D(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2FA33B3B04D5BC1F_METHOD_2_DF7929AE13AC941D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3CE5A19433AD8C9D(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2FA33B3B04D5BC1F_METHOD_2_3CE5A19433AD8C9D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_C21AE3E7E5182CB7(::System::UInt32 a1, ::Struct_2_F1C4ECC5EFDCA1EF& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Struct_2_F1C4ECC5EFDCA1EF&))((::PBYTE)hIl2Cpp + CLASS_2_2FA33B3B04D5BC1F_METHOD_2_C21AE3E7E5182CB7_OFFSET))(this, a1, a2);
	}
};
