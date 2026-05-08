#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/MoleMole/Config/MonsterStrengthType.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_1_8289F2785D9AA990;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_E3A7B298AF84D5C8_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x14056DC0)
#define CLASS_3_E3A7B298AF84D5C8_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x14056FF0)
#define CLASS_3_E3A7B298AF84D5C8_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14056D70)
#define CLASS_3_E3A7B298AF84D5C8_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x14057080)
#define CLASS_3_E3A7B298AF84D5C8_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x140567C0)
#define CLASS_3_E3A7B298AF84D5C8__CCTOR_OFFSET UNITYSDK_OFFSET(0x14056E10)
#define CLASS_3_E3A7B298AF84D5C8__CTOR_OFFSET UNITYSDK_OFFSET(0x14056E90)

inline static constexpr unsigned int Class_3_E3A7B298AF84D5C8_TypeDefinitionIndex = 73013;

class Class_3_E3A7B298AF84D5C8 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_47 = 0x3F; // 0x0
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_3_36; // 0x48
	::MoleMole::EntityHandle Field_3_14; // 0x50
	::Class_1_8289F2785D9AA990* Field_3_23; // 0x60
	::MoleMole::EntityHandle Field_3_30; // 0x68
	::Class_1_8289F2785D9AA990* Field_3_24; // 0x78
	::Class_1_8289F2785D9AA990* Field_3_34; // 0x80
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::MonsterStrengthType, ::System::Int32>* Field_3_15; // 0x88
	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* Field_3_16; // 0x90
	::Class_1_8289F2785D9AA990* Field_3_33; // 0x98
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_3_17; // 0xA0
	::System::Single Field_3_21; // 0xA8
	::MoleMole::Config::MonsterStrengthType Field_3_13; // 0xAC
	::System::Single Field_3_26; // 0xB0
	::System::Int32 Field_3_28; // 0xB4
	::System::Boolean Field_3_5; // 0xB8
	::System::Boolean Field_3_18; // 0xB9
	::System::Boolean Field_3_43; // 0xBA
	::System::Single Field_3_27; // 0xBC
	::System::Int32 Field_3_29; // 0xC0
	::System::Int32 Field_3_42; // 0xC4
	::System::Int32 Field_3_31; // 0xC8
	::System::Int32 Field_3_22; // 0xCC
	::System::Boolean Field_3_0; // 0xD0
	::System::Boolean Field_3_6; // 0xD1
	::System::Boolean Field_3_7; // 0xD2
	::System::Boolean Field_3_45; // 0xD3
	::System::Int32 Field_3_25; // 0xD4
	::System::Int32 Field_3_37; // 0xD8
	::System::Boolean Field_3_2; // 0xDC
	::System::Boolean Field_3_8; // 0xDD
	::System::Boolean Field_3_1; // 0xDE
	::System::Boolean Field_3_11; // 0xDF
	::System::Int32 Field_3_41; // 0xE0
	::System::Int32 Field_3_40; // 0xE4
	::System::Boolean Field_3_3; // 0xE8
	::System::Boolean Field_3_44; // 0xE9
	::System::Boolean Field_3_12; // 0xEA
	::System::Boolean Field_3_38; // 0xEB
	::System::Boolean Field_3_4; // 0xEC
	::System::Boolean Field_3_46; // 0xED
	::System::Single Field_3_20; // 0xF0
	::System::Int32 Field_3_32; // 0xF4
	::System::Boolean Field_3_39; // 0xF8
	::System::Boolean Field_3_35; // 0xF9
	::System::Boolean Field_3_10; // 0xFA
	::System::Boolean Field_3_9; // 0xFB
	::System::Single Field_3_19; // 0xFC

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_E3A7B298AF84D5C8__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E3A7B298AF84D5C8__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E3A7B298AF84D5C8_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E3A7B298AF84D5C8_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E3A7B298AF84D5C8_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E3A7B298AF84D5C8_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_E3A7B298AF84D5C8* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_E3A7B298AF84D5C8*(*)())((::PBYTE)hIl2Cpp + CLASS_3_E3A7B298AF84D5C8_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
