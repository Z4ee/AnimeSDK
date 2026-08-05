#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8377BAB19A574A40.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_4EC4D5D22206CAEC_1_METHOD_2_502E4F13BFB605D5_OFFSET UNITYSDK_OFFSET(0x10B25F30)
#define CLASS_2_4EC4D5D22206CAEC_1_METHOD_2_D85141E7DFA32120_OFFSET UNITYSDK_OFFSET(0x10B25DB0)
#define CLASS_2_4EC4D5D22206CAEC_1__CTOR_OFFSET UNITYSDK_OFFSET(0x10B25E70)

inline static constexpr unsigned int Class_2_4EC4D5D22206CAEC_1_TypeDefinitionIndex = 78304;

class Class_2_4EC4D5D22206CAEC_1 : public ::Class_1_8377BAB19A574A40
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EC4D5D22206CAEC_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D85141E7DFA32120()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EC4D5D22206CAEC_1_METHOD_2_D85141E7DFA32120_OFFSET))(this);
	}

	::System::Void Method_2_502E4F13BFB605D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EC4D5D22206CAEC_1_METHOD_2_502E4F13BFB605D5_OFFSET))(this);
	}
};
