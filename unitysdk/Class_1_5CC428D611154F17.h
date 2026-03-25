#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_099B78418029B3B1_2;
class Class_2_F3C45F1FC7349B6E;

#define CLASS_1_5CC428D611154F17_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1671D4B0)
#define CLASS_1_5CC428D611154F17_GET_FIGHTTIMESTAMPMS_OFFSET UNITYSDK_OFFSET(0x1671D700)
#define CLASS_1_5CC428D611154F17_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1671D620)
#define CLASS_1_5CC428D611154F17_METHOD_1_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0x1671D5E0)
#define CLASS_1_5CC428D611154F17_METHOD_1_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0x1671D590)
#define CLASS_1_5CC428D611154F17_METHOD_1_9D063C22A55044E0_OFFSET UNITYSDK_OFFSET(0x1671D6A0)
#define CLASS_1_5CC428D611154F17_METHOD_1_AEF085E6C83B79B3_OFFSET UNITYSDK_OFFSET(0x1671D500)
#define CLASS_1_5CC428D611154F17_SET_FIGHTTIMESTAMPMS_OFFSET UNITYSDK_OFFSET(0x1671D710)
#define CLASS_1_5CC428D611154F17__CCTOR_OFFSET UNITYSDK_OFFSET(0x1671D720)
#define CLASS_1_5CC428D611154F17__CTOR_OFFSET UNITYSDK_OFFSET(0x1671D4A0)

inline static constexpr unsigned int Class_1_5CC428D611154F17_TypeDefinitionIndex = 28989;

class Class_1_5CC428D611154F17 : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_4()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5CC428D611154F17_TypeDefinitionIndex)->GetStaticField(0x9C40);
	}
	static ::System::UInt32* StaticGet_Field_1_2()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5CC428D611154F17_TypeDefinitionIndex)->GetStaticField(0x9C44);
	}
	static ::System::UInt32* StaticGet_Field_1_3()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5CC428D611154F17_TypeDefinitionIndex)->GetStaticField(0x9C48);
	}
	::Class_2_F3C45F1FC7349B6E* Field_1_1; // 0x10
	::Class_2_099B78418029B3B1_2* Field_1_0; // 0x18
	::System::UInt32 Field_1_5; // 0x20
	::System::UInt64 _FightTimeStampMs_k__BackingField; // 0x28

	::System::Void _ctor(::Class_2_F3C45F1FC7349B6E* a1, ::Class_2_099B78418029B3B1_2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3C45F1FC7349B6E*, ::Class_2_099B78418029B3B1_2*))((::PBYTE)hIl2Cpp + CLASS_1_5CC428D611154F17__CTOR_OFFSET))(this, a1, a2);
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

	::System::Void set_FightTimeStampMs(::System::UInt64 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_5CC428D611154F17_SET_FIGHTTIMESTAMPMS_OFFSET))(this, value);
	}
};
