#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_3616FDE8A71D0590_1;
class Class_2_F3C45F1FC7349B6E;

#define CLASS_1_5CC428D611154F17_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C0D2180)
#define CLASS_1_5CC428D611154F17_GET_FIGHTTIMESTAMPMS_OFFSET UNITYSDK_OFFSET(0x1C0D23C0)
#define CLASS_1_5CC428D611154F17_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1C0D22F0)
#define CLASS_1_5CC428D611154F17_METHOD_1_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0x1C0D22B0)
#define CLASS_1_5CC428D611154F17_METHOD_1_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0x1C0D2260)
#define CLASS_1_5CC428D611154F17_METHOD_1_9D063C22A55044E0_OFFSET UNITYSDK_OFFSET(0x1C0D2360)
#define CLASS_1_5CC428D611154F17_METHOD_1_AEF085E6C83B79B3_OFFSET UNITYSDK_OFFSET(0x1C0D21D0)
#define CLASS_1_5CC428D611154F17_SET_FIGHTTIMESTAMPMS_OFFSET UNITYSDK_OFFSET(0x1C0D23D0)
#define CLASS_1_5CC428D611154F17__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C0D23E0)
#define CLASS_1_5CC428D611154F17__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0D2170)

inline static constexpr unsigned int Class_1_5CC428D611154F17_TypeDefinitionIndex = 36649;

class Class_1_5CC428D611154F17 : public ::System::Object
{
public:
	static ::System::UInt32* StaticGet_DONFOPCJMAA()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5CC428D611154F17_TypeDefinitionIndex)->GetStaticField(0x1580);
	}
	static ::System::UInt32* StaticGet_OLLGGKAEAIE()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5CC428D611154F17_TypeDefinitionIndex)->GetStaticField(0x1584);
	}
	static ::System::Single* StaticGet_LKKCBDJHAAK()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5CC428D611154F17_TypeDefinitionIndex)->GetStaticField(0x1588);
	}
	::Class_2_F3C45F1FC7349B6E* PDENFEFCAGN; // 0x10
	::Class_2_3616FDE8A71D0590_1* EEFMDEHLLFI; // 0x18
	::System::UInt64 _FightTimeStampMs_k__BackingField; // 0x20
	::System::UInt32 BGBMKBIPCNI; // 0x28

	::System::Void _ctor(::Class_2_F3C45F1FC7349B6E* a1, ::Class_2_3616FDE8A71D0590_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3C45F1FC7349B6E*, ::Class_2_3616FDE8A71D0590_1*))((::PBYTE)hIl2Cpp + CLASS_1_5CC428D611154F17__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5CC428D611154F17__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CC428D611154F17_DISPOSE_OFFSET))(this);
	}

	::System::UInt64 Method_1_AEF085E6C83B79B3()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CC428D611154F17_METHOD_1_AEF085E6C83B79B3_OFFSET))(this);
	}

	::System::Void Method_1_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5CC428D611154F17_METHOD_1_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CC428D611154F17_METHOD_1_5CEC4607322705E5_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5CC428D611154F17_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_9D063C22A55044E0(::System::Int32 a1)
	{
		return ((::System::UInt64(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5CC428D611154F17_METHOD_1_9D063C22A55044E0_OFFSET))(this, a1);
	}

	::System::UInt64 get_FightTimeStampMs()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CC428D611154F17_GET_FIGHTTIMESTAMPMS_OFFSET))(this);
	}

	::System::Void set_FightTimeStampMs(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_5CC428D611154F17_SET_FIGHTTIMESTAMPMS_OFFSET))(this, a1);
	}
};
