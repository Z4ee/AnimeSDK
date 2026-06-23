#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_B51C9D0AAAA6A5F0.h"
#include "unitysdk/MoleMole/Config/InlevelCameraState.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_8289F2785D9AA990;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_AD99097E9C0ABD9C_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x143A2790)
#define CLASS_4_AD99097E9C0ABD9C_METHOD_4_514C44711E393019_OFFSET UNITYSDK_OFFSET(0x143A2B10)
#define CLASS_4_AD99097E9C0ABD9C_METHOD_4_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x143A2A70)
#define CLASS_4_AD99097E9C0ABD9C_METHOD_4_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x143A2A80)
#define CLASS_4_AD99097E9C0ABD9C_METHOD_4_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x143A28F0)
#define CLASS_4_AD99097E9C0ABD9C_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x143A2660)
#define CLASS_4_AD99097E9C0ABD9C__CCTOR_OFFSET UNITYSDK_OFFSET(0x143A27E0)
#define CLASS_4_AD99097E9C0ABD9C__CTOR_OFFSET UNITYSDK_OFFSET(0x143A2860)

inline static constexpr unsigned int Class_4_AD99097E9C0ABD9C_TypeDefinitionIndex = 82989;

class Class_4_AD99097E9C0ABD9C : public ::Class_3_B51C9D0AAAA6A5F0
{
public:
	// static const ::System::Int32 Field_4_15 = 0x8D; // 0x0
	::Class_1_8289F2785D9AA990* Field_4_7; // 0x70
	::Class_1_8289F2785D9AA990* Field_4_6; // 0x78
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Single>>* Field_4_13; // 0x80
	::Class_1_8289F2785D9AA990* Field_4_5; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_4_12; // 0x90
	::Class_1_8289F2785D9AA990* Field_4_0; // 0x98
	::System::Single Field_4_1; // 0xA0
	::MoleMole::Config::InlevelCameraState Field_4_3; // 0xA4
	::System::Boolean Field_4_2; // 0xA8
	::System::Boolean Field_4_14; // 0xA9
	::System::Boolean Field_4_10; // 0xAA
	::System::Boolean Field_4_4; // 0xAB
	::System::Boolean Field_4_8; // 0xAC
	::System::Boolean Field_4_11; // 0xAD
	::MoleMole::Config::InlevelCameraState Field_4_9; // 0xB0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_AD99097E9C0ABD9C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_AD99097E9C0ABD9C__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_AD99097E9C0ABD9C_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_AD99097E9C0ABD9C_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_4_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_AD99097E9C0ABD9C_METHOD_4_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_4_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_AD99097E9C0ABD9C_METHOD_4_56CE4AFC5339F746_OFFSET))(this);
	}

	::System::Int32 Method_4_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_AD99097E9C0ABD9C_METHOD_4_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_4_AD99097E9C0ABD9C* Method_4_514C44711E393019()
	{
		return ((::Class_4_AD99097E9C0ABD9C*(*)())((::PBYTE)hIl2Cpp + CLASS_4_AD99097E9C0ABD9C_METHOD_4_514C44711E393019_OFFSET))();
	}
};
