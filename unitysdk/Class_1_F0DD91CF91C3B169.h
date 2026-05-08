#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F0DD91CF91C3B169_Enum_3_9BFEB258436EE1B8.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_461;
namespace MoleMole::Config { class EffectTimeSegmentConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F0DD91CF91C3B169_METHOD_1_159CB55E631AFCB9_OFFSET UNITYSDK_OFFSET(0xD0B6420)
#define CLASS_1_F0DD91CF91C3B169_METHOD_1_4521D86F01EC7939_OFFSET UNITYSDK_OFFSET(0xD0B5C90)
#define CLASS_1_F0DD91CF91C3B169_METHOD_1_5708EF64F113B16D_OFFSET UNITYSDK_OFFSET(0xD0B61F0)
#define CLASS_1_F0DD91CF91C3B169_METHOD_1_7033EFB970A18315_OFFSET UNITYSDK_OFFSET(0xD0B6320)
#define CLASS_1_F0DD91CF91C3B169_METHOD_1_93109BE28F0A9940_OFFSET UNITYSDK_OFFSET(0xD0B5E70)
#define CLASS_1_F0DD91CF91C3B169_METHOD_1_986BAAECE4F21C6F_OFFSET UNITYSDK_OFFSET(0xD0B6160)
#define CLASS_1_F0DD91CF91C3B169_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD0B62D0)
#define CLASS_1_F0DD91CF91C3B169__CTOR_1_OFFSET UNITYSDK_OFFSET(0xD0B5C80)
#define CLASS_1_F0DD91CF91C3B169__CTOR_OFFSET UNITYSDK_OFFSET(0xD0B5C70)

inline static constexpr unsigned int Class_1_F0DD91CF91C3B169_TypeDefinitionIndex = 50811;

class Class_1_F0DD91CF91C3B169 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_461* Field_1_3; // 0x10
	::System::Single Field_1_0; // 0x18
	::System::Int32 Field_1_1; // 0x1C
	::Class_1_F0DD91CF91C3B169_Enum_3_9BFEB258436EE1B8 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0DD91CF91C3B169__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_0_16E4307DCC419505_461* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_461*))((::PBYTE)hIl2Cpp + CLASS_1_F0DD91CF91C3B169__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_4521D86F01EC7939(::MoleMole::Config::EffectTimeSegmentConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EffectTimeSegmentConfig*))((::PBYTE)hIl2Cpp + CLASS_1_F0DD91CF91C3B169_METHOD_1_4521D86F01EC7939_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_986BAAECE4F21C6F(::Class_1_F0DD91CF91C3B169_Enum_3_9BFEB258436EE1B8 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F0DD91CF91C3B169_Enum_3_9BFEB258436EE1B8))((::PBYTE)hIl2Cpp + CLASS_1_F0DD91CF91C3B169_METHOD_1_986BAAECE4F21C6F_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::MoleMole::Config::EffectTimeSegmentConfig*>* Method_1_5708EF64F113B16D()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Config::EffectTimeSegmentConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0DD91CF91C3B169_METHOD_1_5708EF64F113B16D_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0DD91CF91C3B169_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_7033EFB970A18315()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0DD91CF91C3B169_METHOD_1_7033EFB970A18315_OFFSET))(this);
	}

	::System::Void Method_1_159CB55E631AFCB9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0DD91CF91C3B169_METHOD_1_159CB55E631AFCB9_OFFSET))(this);
	}

	::System::Void Method_1_93109BE28F0A9940(::Class_1_F0DD91CF91C3B169_Enum_3_9BFEB258436EE1B8 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F0DD91CF91C3B169_Enum_3_9BFEB258436EE1B8))((::PBYTE)hIl2Cpp + CLASS_1_F0DD91CF91C3B169_METHOD_1_93109BE28F0A9940_OFFSET))(this, a1);
	}
};
