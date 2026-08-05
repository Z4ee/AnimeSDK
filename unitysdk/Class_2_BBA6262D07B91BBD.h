#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8377BAB19A574A40.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_BBA6262D07B91BBD_METHOD_2_1E13A8A5C0FF7D62_OFFSET UNITYSDK_OFFSET(0x13E3BEA0)
#define CLASS_2_BBA6262D07B91BBD_METHOD_2_502E4F13BFB605D5_OFFSET UNITYSDK_OFFSET(0x13E3C250)
#define CLASS_2_BBA6262D07B91BBD__CTOR_OFFSET UNITYSDK_OFFSET(0x13E3C1E0)

inline static constexpr unsigned int Class_2_BBA6262D07B91BBD_TypeDefinitionIndex = 49931;

class Class_2_BBA6262D07B91BBD : public ::Class_1_8377BAB19A574A40
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_7; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_0; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_5; // 0x90
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_4; // 0x98
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_6; // 0xA0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_11; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BBA6262D07B91BBD__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_1E13A8A5C0FF7D62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BBA6262D07B91BBD_METHOD_2_1E13A8A5C0FF7D62_OFFSET))(this);
	}

	::System::Void Method_2_502E4F13BFB605D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BBA6262D07B91BBD_METHOD_2_502E4F13BFB605D5_OFFSET))(this);
	}
};
