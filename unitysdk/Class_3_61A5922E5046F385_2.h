#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/MoleMole/Config/MonsterStrengthType.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_1_8289F2785D9AA990;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_61A5922E5046F385_2_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x14FBFAF0)
#define CLASS_3_61A5922E5046F385_2_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x14FBFD20)
#define CLASS_3_61A5922E5046F385_2_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14FBFDB0)
#define CLASS_3_61A5922E5046F385_2_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x14FBFE00)
#define CLASS_3_61A5922E5046F385_2_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1285E850)
#define CLASS_3_61A5922E5046F385_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x14FBFB40)
#define CLASS_3_61A5922E5046F385_2__CTOR_OFFSET UNITYSDK_OFFSET(0x14FBFBC0)

inline static constexpr unsigned int Class_3_61A5922E5046F385_2_TypeDefinitionIndex = 59184;

class Class_3_61A5922E5046F385_2 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_47 = 0x42; // 0x0
	::Class_1_8289F2785D9AA990* Field_3_33; // 0x48
	::Class_1_8289F2785D9AA990* Field_3_23; // 0x50
	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* Field_3_16; // 0x58
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_3_17; // 0x60
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_3_36; // 0x68
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::MonsterStrengthType, ::System::Int32>* Field_3_15; // 0x70
	::MoleMole::EntityHandle Field_3_30; // 0x78
	::Class_1_8289F2785D9AA990* Field_3_34; // 0x88
	::MoleMole::EntityHandle Field_3_14; // 0x90
	::Class_1_8289F2785D9AA990* Field_3_24; // 0xA0
	::System::Single Field_3_20; // 0xA8
	::System::Int32 Field_3_40; // 0xAC
	::System::Int32 Field_3_32; // 0xB0
	::System::Int32 Field_3_25; // 0xB4
	::System::Boolean Field_3_0; // 0xB8
	::System::Boolean Field_3_46; // 0xB9
	::System::Boolean Field_3_9; // 0xBA
	::System::Boolean Field_3_2; // 0xBB
	::System::Single Field_3_19; // 0xBC
	::System::Boolean Field_3_10; // 0xC0
	::System::Boolean Field_3_4; // 0xC1
	::System::Boolean Field_3_12; // 0xC2
	::System::Boolean Field_3_8; // 0xC3
	::System::Boolean Field_3_11; // 0xC4
	::System::Boolean Field_3_44; // 0xC5
	::System::Boolean Field_3_1; // 0xC6
	::System::Int32 Field_3_29; // 0xC8
	::System::Single Field_3_27; // 0xCC
	::System::Int32 Field_3_22; // 0xD0
	::System::Int32 Field_3_28; // 0xD4
	::MoleMole::Config::MonsterStrengthType Field_3_13; // 0xD8
	::System::Boolean Field_3_18; // 0xDC
	::System::Boolean Field_3_39; // 0xDD
	::System::Boolean Field_3_38; // 0xDE
	::System::Boolean Field_3_6; // 0xDF
	::System::Boolean Field_3_35; // 0xE0
	::System::Boolean Field_3_43; // 0xE1
	::System::Int32 Field_3_42; // 0xE4
	::System::Int32 Field_3_31; // 0xE8
	::System::Single Field_3_26; // 0xEC
	::System::Int32 Field_3_41; // 0xF0
	::System::Single Field_3_21; // 0xF4
	::System::Boolean Field_3_5; // 0xF8
	::System::Boolean Field_3_7; // 0xF9
	::System::Boolean Field_3_45; // 0xFA
	::System::Boolean Field_3_3; // 0xFB
	::System::Int32 Field_3_37; // 0xFC

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_2__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_2__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_2_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_2_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_2_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_2_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::Class_3_61A5922E5046F385_2* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_61A5922E5046F385_2*(*)())((::PBYTE)hIl2Cpp + CLASS_3_61A5922E5046F385_2_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
