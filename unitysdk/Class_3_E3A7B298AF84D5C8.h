#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/MoleMole/Config/MonsterStrengthType.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_1_8289F2785D9AA990;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_E3A7B298AF84D5C8_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x18112F70)
#define CLASS_3_E3A7B298AF84D5C8_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x18113220)
#define CLASS_3_E3A7B298AF84D5C8_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18112F20)
#define CLASS_3_E3A7B298AF84D5C8_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x181131A0)
#define CLASS_3_E3A7B298AF84D5C8_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x18112970)
#define CLASS_3_E3A7B298AF84D5C8__CCTOR_OFFSET UNITYSDK_OFFSET(0x18112FC0)
#define CLASS_3_E3A7B298AF84D5C8__CTOR_OFFSET UNITYSDK_OFFSET(0x18113040)

inline static constexpr unsigned int Class_3_E3A7B298AF84D5C8_TypeDefinitionIndex = 85764;

class Class_3_E3A7B298AF84D5C8 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_50 = 0x42; // 0x0
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_3_37; // 0x48
	::Class_1_8289F2785D9AA990* Field_3_32; // 0x50
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_3_16; // 0x58
	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* Field_3_17; // 0x60
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::MonsterStrengthType, ::System::Int32>* Field_3_18; // 0x68
	::MoleMole::EntityHandle Field_3_19; // 0x70
	::MoleMole::EntityHandle Field_3_35; // 0x80
	::Class_1_8289F2785D9AA990* Field_3_26; // 0x90
	::Class_1_8289F2785D9AA990* Field_3_39; // 0x98
	::Class_1_8289F2785D9AA990* Field_3_25; // 0xA0
	::System::Int32 Field_3_47; // 0xA8
	::System::Int32 Field_3_27; // 0xAC
	::System::Int32 Field_3_40; // 0xB0
	::System::Int32 Field_3_29; // 0xB4
	::System::Boolean Field_3_46; // 0xB8
	::System::Boolean Field_3_23; // 0xB9
	::System::Boolean Field_3_0; // 0xBA
	::System::Boolean Field_3_9; // 0xBB
	::System::Boolean Field_3_11; // 0xBC
	::System::Boolean Field_3_8; // 0xBD
	::System::Boolean Field_3_43; // 0xBE
	::System::Int32 Field_3_34; // 0xC0
	::System::Int32 Field_3_41; // 0xC4
	::System::Boolean Field_3_15; // 0xC8
	::System::Boolean Field_3_6; // 0xC9
	::System::Boolean Field_3_51; // 0xCA
	::System::Boolean Field_3_13; // 0xCB
	::System::Int32 Field_3_36; // 0xCC
	::System::Int32 Field_3_28; // 0xD0
	::MoleMole::Config::MonsterStrengthType Field_3_12; // 0xD4
	::System::Boolean Field_3_44; // 0xD8
	::System::Boolean Field_3_1; // 0xD9
	::System::Boolean Field_3_14; // 0xDA
	::System::Boolean Field_3_42; // 0xDB
	::System::Single Field_3_20; // 0xDC
	::System::Single Field_3_30; // 0xE0
	::System::Single Field_3_21; // 0xE4
	::System::Int32 Field_3_24; // 0xE8
	::System::Boolean Field_3_5; // 0xEC
	::System::Boolean Field_3_38; // 0xED
	::System::Boolean Field_3_7; // 0xEE
	::System::Boolean Field_3_4; // 0xEF
	::System::Single Field_3_31; // 0xF0
	::System::Boolean Field_3_10; // 0xF4
	::System::Boolean Field_3_45; // 0xF5
	::System::Int32 Field_3_33; // 0xF8
	::System::Single Field_3_22; // 0xFC

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

	static ::Class_3_E3A7B298AF84D5C8* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_E3A7B298AF84D5C8*(*)())((::PBYTE)hIl2Cpp + CLASS_3_E3A7B298AF84D5C8_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E3A7B298AF84D5C8_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E3A7B298AF84D5C8_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
