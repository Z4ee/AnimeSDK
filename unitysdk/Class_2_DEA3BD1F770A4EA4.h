#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_321489CFFF7B18E7.h"

class Class_2_785FDC7D0DA58280;
namespace System { class String; }

#define CLASS_2_DEA3BD1F770A4EA4_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1E4E9380)
#define CLASS_2_DEA3BD1F770A4EA4_METHOD_2_8EFA08DEED1F023E_OFFSET UNITYSDK_OFFSET(0x1E4E9020)
#define CLASS_2_DEA3BD1F770A4EA4_METHOD_2_9972734FC91A4B95_OFFSET UNITYSDK_OFFSET(0x1E4E91C0)
#define CLASS_2_DEA3BD1F770A4EA4_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1E4E9160)
#define CLASS_2_DEA3BD1F770A4EA4__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4E91B0)

inline static constexpr unsigned int Class_2_DEA3BD1F770A4EA4_TypeDefinitionIndex = 90789;

class Class_2_DEA3BD1F770A4EA4 : public ::Class_1_321489CFFF7B18E7
{
public:
	::System::Int32 Field_2_0; // 0x18
	::System::Int32 Field_2_2; // 0x1C
	::System::Single Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DEA3BD1F770A4EA4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8EFA08DEED1F023E(::Class_2_785FDC7D0DA58280* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_785FDC7D0DA58280*))((::PBYTE)hIl2Cpp + CLASS_2_DEA3BD1F770A4EA4_METHOD_2_8EFA08DEED1F023E_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DEA3BD1F770A4EA4_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_9972734FC91A4B95(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DEA3BD1F770A4EA4_METHOD_2_9972734FC91A4B95_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DEA3BD1F770A4EA4_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}
};
