#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_677D22BBE6B5DAE4.h"

namespace System { class String; }

#define CLASS_2_15F6D227B10AC18A_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x16B2FE30)
#define CLASS_2_15F6D227B10AC18A_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16B2FE90)
#define CLASS_2_15F6D227B10AC18A__CTOR_OFFSET UNITYSDK_OFFSET(0x16B2FE20)

inline static constexpr unsigned int Class_2_15F6D227B10AC18A_TypeDefinitionIndex = 70914;

class Class_2_15F6D227B10AC18A : public ::Class_1_677D22BBE6B5DAE4
{
public:
	// static const ::System::Single Field_2_0; // 0x0
	::System::String* Field_2_1; // 0x40
	::System::Int32 Field_2_2; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15F6D227B10AC18A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15F6D227B10AC18A_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15F6D227B10AC18A_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
