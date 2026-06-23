#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7CF6DCCA0AF3DB5F.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_341DE5683684EA81_METHOD_1_01073C1A05023A74_OFFSET UNITYSDK_OFFSET(0x11A8B5A0)
#define CLASS_1_341DE5683684EA81_METHOD_1_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0x11A8B540)
#define CLASS_1_341DE5683684EA81_METHOD_1_722E1524F560C8AF_OFFSET UNITYSDK_OFFSET(0x11A8B6E0)
#define CLASS_1_341DE5683684EA81_METHOD_1_A6EB043AED5D5D84_OFFSET UNITYSDK_OFFSET(0x11A8B410)
#define CLASS_1_341DE5683684EA81_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11A8B690)
#define CLASS_1_341DE5683684EA81__CTOR_OFFSET UNITYSDK_OFFSET(0x11A8B400)

inline static constexpr unsigned int Class_1_341DE5683684EA81_TypeDefinitionIndex = 75673;

class Class_1_341DE5683684EA81 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Enum_3_7CF6DCCA0AF3DB5F>* Field_1_5; // 0x10
	::System::Boolean Field_1_2; // 0x18
	::System::Int32 Field_1_1; // 0x1C
	::System::Int32 Field_1_3; // 0x20
	::System::UInt32 Field_1_0; // 0x24
	::System::Int32 Field_1_4; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_341DE5683684EA81__CTOR_OFFSET))(this);
	}

	static ::Class_1_341DE5683684EA81* Method_1_A6EB043AED5D5D84(::Class_1_341DE5683684EA81* a1)
	{
		return ((::Class_1_341DE5683684EA81*(*)(::Class_1_341DE5683684EA81*))((::PBYTE)hIl2Cpp + CLASS_1_341DE5683684EA81_METHOD_1_A6EB043AED5D5D84_OFFSET))(a1);
	}

	static ::Class_1_341DE5683684EA81* Method_1_01073C1A05023A74(::System::UInt32 a1)
	{
		return ((::Class_1_341DE5683684EA81*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_341DE5683684EA81_METHOD_1_01073C1A05023A74_OFFSET))(a1);
	}

	::System::Void Method_1_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_341DE5683684EA81_METHOD_1_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_341DE5683684EA81_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_1_722E1524F560C8AF(::Class_1_341DE5683684EA81* a1)
	{
		return ((::System::Void(*)(::Class_1_341DE5683684EA81*))((::PBYTE)hIl2Cpp + CLASS_1_341DE5683684EA81_METHOD_1_722E1524F560C8AF_OFFSET))(a1);
	}
};
