#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8377BAB19A574A40.h"
#include "unitysdk/Struct_2_AC7338C796E27967.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_BB802A9B8FBE09E8_METHOD_2_502E4F13BFB605D5_OFFSET UNITYSDK_OFFSET(0x171C82E0)
#define CLASS_2_BB802A9B8FBE09E8_METHOD_2_AA7E3074254D484A_OFFSET UNITYSDK_OFFSET(0x171C8160)
#define CLASS_2_BB802A9B8FBE09E8__CTOR_OFFSET UNITYSDK_OFFSET(0x171C8220)

inline static constexpr unsigned int Class_2_BB802A9B8FBE09E8_TypeDefinitionIndex = 62583;

class Class_2_BB802A9B8FBE09E8 : public ::Class_1_8377BAB19A574A40
{
public:
	::System::Collections::Generic::List_1<::Struct_2_AC7338C796E27967>* Field_2_0; // 0x80
	::System::Single Field_2_2; // 0x88
	::System::Single Field_2_1; // 0x8C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB802A9B8FBE09E8__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_AA7E3074254D484A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB802A9B8FBE09E8_METHOD_2_AA7E3074254D484A_OFFSET))(this);
	}

	::System::Void Method_2_502E4F13BFB605D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB802A9B8FBE09E8_METHOD_2_502E4F13BFB605D5_OFFSET))(this);
	}
};
