#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FD611945730E269E.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_1012;
class Class_2_E589B92B72E31228;
namespace RPG::Client::Prop { class DuelChimeraProxy; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_BED08D5799102314_METHOD_2_0960CAEE01038065_OFFSET UNITYSDK_OFFSET(0x8A85900)
#define CLASS_2_BED08D5799102314_METHOD_2_14014646206E49EF_OFFSET UNITYSDK_OFFSET(0x8A86130)
#define CLASS_2_BED08D5799102314_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x8A862B0)
#define CLASS_2_BED08D5799102314_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x8A86310)
#define CLASS_2_BED08D5799102314_METHOD_2_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0x8A860A0)
#define CLASS_2_BED08D5799102314_METHOD_2_BE4EBC8FF4054312_OFFSET UNITYSDK_OFFSET(0x8A85960)
#define CLASS_2_BED08D5799102314__CTOR_OFFSET UNITYSDK_OFFSET(0x8A85890)

inline static constexpr unsigned int Class_2_BED08D5799102314_TypeDefinitionIndex = 63718;

class Class_2_BED08D5799102314 : public ::Class_1_FD611945730E269E
{
public:
	::Class_0_16E4307DCC419505_1012* Field_2_1; // 0x18
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::RPG::Client::Prop::DuelChimeraProxy*, ::System::UInt32>>* Field_2_3; // 0x20
	::Class_2_E589B92B72E31228* Field_2_0; // 0x28
	::System::Single Field_2_2; // 0x30

	::System::Void _ctor(::Class_2_E589B92B72E31228* a1, ::Class_0_16E4307DCC419505_1012* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_E589B92B72E31228*, ::Class_0_16E4307DCC419505_1012*))((::PBYTE)hIl2Cpp + CLASS_2_BED08D5799102314__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0960CAEE01038065()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BED08D5799102314_METHOD_2_0960CAEE01038065_OFFSET))(this);
	}

	::System::Void Method_2_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BED08D5799102314_METHOD_2_8FAD57395F26ACC4_OFFSET))(this, a1);
	}

	::System::Void Method_2_BE4EBC8FF4054312()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BED08D5799102314_METHOD_2_BE4EBC8FF4054312_OFFSET))(this);
	}

	::System::Void Method_2_14014646206E49EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BED08D5799102314_METHOD_2_14014646206E49EF_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BED08D5799102314_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BED08D5799102314_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
