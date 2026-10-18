#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FD611945730E269E.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_1449;
class Class_2_E589B92B72E31228;
namespace RPG::Client::Prop { class DuelChimeraProxy; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_BED08D5799102314_METHOD_2_40EBA7013E4CCDDF_OFFSET UNITYSDK_OFFSET(0xB2EB180)
#define CLASS_2_BED08D5799102314_METHOD_2_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0xB2EBBC0)
#define CLASS_2_BED08D5799102314_METHOD_2_DAEB67F34AF80609_OFFSET UNITYSDK_OFFSET(0xB2EB1E0)
#define CLASS_2_BED08D5799102314_METHOD_2_E693A0026D178D8E_OFFSET UNITYSDK_OFFSET(0xB2EBC50)
#define CLASS_2_BED08D5799102314__CTOR_OFFSET UNITYSDK_OFFSET(0xB2EB110)

inline static constexpr unsigned int Class_2_BED08D5799102314_TypeDefinitionIndex = 78267;

class Class_2_BED08D5799102314 : public ::Class_1_FD611945730E269E
{
public:
	::Class_0_16E4307DCC419505_1449* EEFMDEHLLFI; // 0x18
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::RPG::Client::Prop::DuelChimeraProxy*, ::System::UInt32>>* GBINLLKJFPJ; // 0x20
	::Class_2_E589B92B72E31228* MKKLHFCCCNF; // 0x28
	::System::Single LLNIGIGFCEA; // 0x30

	::System::Void _ctor(::Class_2_E589B92B72E31228* a1, ::Class_0_16E4307DCC419505_1449* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_E589B92B72E31228*, ::Class_0_16E4307DCC419505_1449*))((::PBYTE)hIl2Cpp + CLASS_2_BED08D5799102314__CTOR_OFFSET))(this, a1, a2);
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
};
