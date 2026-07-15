#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_455124A410922D9D.h"
#include "unitysdk/EnviromentSystemV2Space/EnvCallbackCurveType.h"

class Class_0_16E4307DCC419505_373;
class Class_2_8600F499583BD153;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_CE4B10DFAEE2F36E_METHOD_2_1F130271093617A5_OFFSET UNITYSDK_OFFSET(0x188B2620)
#define CLASS_2_CE4B10DFAEE2F36E_METHOD_2_4A1329457FEB3A7E_OFFSET UNITYSDK_OFFSET(0x188B2F90)
#define CLASS_2_CE4B10DFAEE2F36E_METHOD_2_8A26F63E185CF58D_OFFSET UNITYSDK_OFFSET(0x188B29A0)
#define CLASS_2_CE4B10DFAEE2F36E_METHOD_2_9D7B81571ADA6EDE_1_OFFSET UNITYSDK_OFFSET(0x188B2CC0)
#define CLASS_2_CE4B10DFAEE2F36E_METHOD_2_9D7B81571ADA6EDE_OFFSET UNITYSDK_OFFSET(0x188B27F0)
#define CLASS_2_CE4B10DFAEE2F36E_METHOD_2_BF9C25E762BD53B3_OFFSET UNITYSDK_OFFSET(0x188B2B20)
#define CLASS_2_CE4B10DFAEE2F36E_METHOD_2_F942D495BA2A5F97_OFFSET UNITYSDK_OFFSET(0x188B2E20)
#define CLASS_2_CE4B10DFAEE2F36E__CTOR_OFFSET UNITYSDK_OFFSET(0x188B3120)

inline static constexpr unsigned int Class_2_CE4B10DFAEE2F36E_TypeDefinitionIndex = 47707;

class Class_2_CE4B10DFAEE2F36E : public ::Class_1_455124A410922D9D<::Class_2_CE4B10DFAEE2F36E*>
{
public:
	::System::Collections::Generic::Dictionary_2<::EnviromentSystemV2Space::EnvCallbackCurveType, ::Class_0_16E4307DCC419505_373*>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE4B10DFAEE2F36E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_1F130271093617A5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE4B10DFAEE2F36E_METHOD_2_1F130271093617A5_OFFSET))(this);
	}

	::System::Void Method_2_9D7B81571ADA6EDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE4B10DFAEE2F36E_METHOD_2_9D7B81571ADA6EDE_OFFSET))(this);
	}

	::System::Void Method_2_8A26F63E185CF58D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CE4B10DFAEE2F36E_METHOD_2_8A26F63E185CF58D_OFFSET))(this, a1);
	}

	::System::Void Method_2_BF9C25E762BD53B3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE4B10DFAEE2F36E_METHOD_2_BF9C25E762BD53B3_OFFSET))(this);
	}

	::System::Void Method_2_9D7B81571ADA6EDE_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE4B10DFAEE2F36E_METHOD_2_9D7B81571ADA6EDE_1_OFFSET))(this);
	}

	::System::Void Method_2_F942D495BA2A5F97(::EnviromentSystemV2Space::EnvCallbackCurveType a1, ::Class_2_8600F499583BD153* a2)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::EnvCallbackCurveType, ::Class_2_8600F499583BD153*))((::PBYTE)hIl2Cpp + CLASS_2_CE4B10DFAEE2F36E_METHOD_2_F942D495BA2A5F97_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4A1329457FEB3A7E(::EnviromentSystemV2Space::EnvCallbackCurveType a1, ::Class_2_8600F499583BD153* a2)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::EnvCallbackCurveType, ::Class_2_8600F499583BD153*))((::PBYTE)hIl2Cpp + CLASS_2_CE4B10DFAEE2F36E_METHOD_2_4A1329457FEB3A7E_OFFSET))(this, a1, a2);
	}
};
