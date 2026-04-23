#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5D7D12B9E06AB41E;
namespace RPG::GameCore { class ConfigTrainDispatcher; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A518653E32EF54D5_METHOD_1_151E25A63D14DDB0_1_OFFSET UNITYSDK_OFFSET(0x9682580)
#define CLASS_1_A518653E32EF54D5_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x96824F0)
#define CLASS_1_A518653E32EF54D5_METHOD_1_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x9681D90)
#define CLASS_1_A518653E32EF54D5_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x9681D40)
#define CLASS_1_A518653E32EF54D5_METHOD_1_40FC6B4714090E98_OFFSET UNITYSDK_OFFSET(0x9682160)
#define CLASS_1_A518653E32EF54D5_METHOD_1_7E1DCA5CA64A2144_OFFSET UNITYSDK_OFFSET(0x9682050)
#define CLASS_1_A518653E32EF54D5_METHOD_1_DFEE3E82B722BB46_OFFSET UNITYSDK_OFFSET(0x9681EC0)
#define CLASS_1_A518653E32EF54D5__CTOR_OFFSET UNITYSDK_OFFSET(0x9682610)

inline static constexpr unsigned int Class_1_A518653E32EF54D5_TypeDefinitionIndex = 63764;

class Class_1_A518653E32EF54D5 : public ::System::Object
{
public:
	::RPG::GameCore::ConfigTrainDispatcher* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_5D7D12B9E06AB41E*>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Class_1_5D7D12B9E06AB41E*>* Field_1_2; // 0x20
	::System::Int32 Field_1_3; // 0x28
	::System::Boolean Field_1_4; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A518653E32EF54D5__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A518653E32EF54D5_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A518653E32EF54D5_METHOD_1_18982EFD3B740683_OFFSET))(this);
	}

	::System::Void Method_1_DFEE3E82B722BB46(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A518653E32EF54D5_METHOD_1_DFEE3E82B722BB46_OFFSET))(this, a1);
	}

	::System::Void Method_1_7E1DCA5CA64A2144(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A518653E32EF54D5_METHOD_1_7E1DCA5CA64A2144_OFFSET))(this, a1);
	}

	::System::Void Method_1_40FC6B4714090E98(::RPG::GameCore::ConfigTrainDispatcher* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigTrainDispatcher*))((::PBYTE)hIl2Cpp + CLASS_1_A518653E32EF54D5_METHOD_1_40FC6B4714090E98_OFFSET))(this, a1);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A518653E32EF54D5_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A518653E32EF54D5_METHOD_1_151E25A63D14DDB0_1_OFFSET))(this);
	}
};
