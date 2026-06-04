#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FD611945730E269E.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_1197;
class Class_2_E589B92B72E31228;
namespace RPG::Client::Prop { class DuelChimeraProxy; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_BED08D5799102314_METHOD_2_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0x14472AC0)
#define CLASS_2_BED08D5799102314_METHOD_2_40EBA7013E4CCDDF_OFFSET UNITYSDK_OFFSET(0x14471F40)
#define CLASS_2_BED08D5799102314_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x14472A60)
#define CLASS_2_BED08D5799102314_METHOD_2_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0x144727F0)
#define CLASS_2_BED08D5799102314_METHOD_2_DAEB67F34AF80609_OFFSET UNITYSDK_OFFSET(0x14471FA0)
#define CLASS_2_BED08D5799102314_METHOD_2_E693A0026D178D8E_OFFSET UNITYSDK_OFFSET(0x14472880)
#define CLASS_2_BED08D5799102314__CTOR_OFFSET UNITYSDK_OFFSET(0x14471ED0)

inline static constexpr unsigned int Class_2_BED08D5799102314_TypeDefinitionIndex = 72786;

class Class_2_BED08D5799102314 : public ::Class_1_FD611945730E269E
{
public:
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::RPG::Client::Prop::DuelChimeraProxy*, ::System::UInt32>>* Field_2_0; // 0x18
	::Class_0_16E4307DCC419505_1197* Field_2_1; // 0x20
	::Class_2_E589B92B72E31228* Field_2_2; // 0x28
	::System::Single Field_2_3; // 0x30

	::System::Void _ctor(::Class_2_E589B92B72E31228* a1, ::Class_0_16E4307DCC419505_1197* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_E589B92B72E31228*, ::Class_0_16E4307DCC419505_1197*))((::PBYTE)hIl2Cpp + CLASS_2_BED08D5799102314__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_40EBA7013E4CCDDF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BED08D5799102314_METHOD_2_40EBA7013E4CCDDF_OFFSET))(this);
	}

	::System::Void Method_2_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BED08D5799102314_METHOD_2_8FAD57395F26ACC4_OFFSET))(this, a1);
	}

	::System::Void Method_2_DAEB67F34AF80609()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BED08D5799102314_METHOD_2_DAEB67F34AF80609_OFFSET))(this);
	}

	::System::Void Method_2_E693A0026D178D8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BED08D5799102314_METHOD_2_E693A0026D178D8E_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BED08D5799102314_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_3C927B51D2142A24(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BED08D5799102314_METHOD_2_3C927B51D2142A24_OFFSET))(this, a1);
	}
};
