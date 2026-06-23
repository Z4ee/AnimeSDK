#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E3019CE6003C7D3C.h"

class Class_0_16E4307DCC419505_295;
namespace System { class Exception; }
namespace System { class String; }

#define CLASS_2_F87390FACCD0D2C6_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x137BB970)
#define CLASS_2_F87390FACCD0D2C6_METHOD_2_8C43E6E7E328B9EB_OFFSET UNITYSDK_OFFSET(0x137BB550)
#define CLASS_2_F87390FACCD0D2C6_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x137BB5A0)
#define CLASS_2_F87390FACCD0D2C6_METHOD_2_F3F040A97EE7CACA_OFFSET UNITYSDK_OFFSET(0x137BB9C0)
#define CLASS_2_F87390FACCD0D2C6__CTOR_OFFSET UNITYSDK_OFFSET(0x137BB4A0)

inline static constexpr unsigned int Class_2_F87390FACCD0D2C6_TypeDefinitionIndex = 42891;

class Class_2_F87390FACCD0D2C6 : public ::Class_1_E3019CE6003C7D3C
{
public:
	::System::Int32 Field_2_0; // 0x48

	::System::Void _ctor(::System::UInt32 a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F87390FACCD0D2C6__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_8C43E6E7E328B9EB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F87390FACCD0D2C6_METHOD_2_8C43E6E7E328B9EB_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F87390FACCD0D2C6_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_F3F040A97EE7CACA(::Class_0_16E4307DCC419505_295* a1, ::System::Exception* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_295*, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_F87390FACCD0D2C6_METHOD_2_F3F040A97EE7CACA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F87390FACCD0D2C6_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}
};
