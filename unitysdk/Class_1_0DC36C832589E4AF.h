#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1639;
class Class_1_16CEF26E52F4EDEF;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0DC36C832589E4AF_METHOD_1_1508804CDAC9DA26_OFFSET UNITYSDK_OFFSET(0xB4D6B10)
#define CLASS_1_0DC36C832589E4AF_METHOD_1_42C5BADE1C9EFC80_OFFSET UNITYSDK_OFFSET(0xB4D73F0)
#define CLASS_1_0DC36C832589E4AF_METHOD_1_A2FECA576332B43B_OFFSET UNITYSDK_OFFSET(0xB4D6940)
#define CLASS_1_0DC36C832589E4AF_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xB4D7300)
#define CLASS_1_0DC36C832589E4AF__CTOR_OFFSET UNITYSDK_OFFSET(0xB4D6910)

inline static constexpr unsigned int Class_1_0DC36C832589E4AF_TypeDefinitionIndex = 82083;

class Class_1_0DC36C832589E4AF : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1639* NGKPKBEGEGG; // 0x10
	::Class_1_16CEF26E52F4EDEF* JDGBDKHIEGG; // 0x18
	::System::Collections::Generic::HashSet_1<::System::UInt32>* PNECLJKDONF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0DC36C832589E4AF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A2FECA576332B43B(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0DC36C832589E4AF_METHOD_1_A2FECA576332B43B_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_1508804CDAC9DA26()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0DC36C832589E4AF_METHOD_1_1508804CDAC9DA26_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0DC36C832589E4AF_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Boolean Method_1_42C5BADE1C9EFC80()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0DC36C832589E4AF_METHOD_1_42C5BADE1C9EFC80_OFFSET))(this);
	}
};
