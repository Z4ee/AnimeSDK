#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_3_576D5808A8CE1493_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x11F41010)
#define CLASS_3_576D5808A8CE1493_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11F41260)
#define CLASS_3_576D5808A8CE1493_METHOD_3_E0FE75548F0155D5_OFFSET UNITYSDK_OFFSET(0x11F410A0)
#define CLASS_3_576D5808A8CE1493__CTOR_OFFSET UNITYSDK_OFFSET(0x11F411C0)

inline static constexpr unsigned int Class_3_576D5808A8CE1493_TypeDefinitionIndex = 49948;

class Class_3_576D5808A8CE1493 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_8D3E479B491881B3<::System::Collections::Generic::List_1<::System::Int32>*>* Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_576D5808A8CE1493__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_576D5808A8CE1493_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_3_E0FE75548F0155D5(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_576D5808A8CE1493_METHOD_3_E0FE75548F0155D5_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_576D5808A8CE1493_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
