#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_321489CFFF7B18E7.h"

class Class_1_3060EE23002ECA9E;
class Class_2_785FDC7D0DA58280;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_A4FAB4DDC5D8F208_METHOD_2_01953D7882459DEC_OFFSET UNITYSDK_OFFSET(0x1D150220)
#define CLASS_2_A4FAB4DDC5D8F208_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1D1502D0)
#define CLASS_2_A4FAB4DDC5D8F208_METHOD_2_4B1E26575F5F2545_OFFSET UNITYSDK_OFFSET(0x1D150580)
#define CLASS_2_A4FAB4DDC5D8F208_METHOD_2_518C481117C9867C_OFFSET UNITYSDK_OFFSET(0x1D150410)
#define CLASS_2_A4FAB4DDC5D8F208_METHOD_2_76AAE40741F092B2_OFFSET UNITYSDK_OFFSET(0x1D1504D0)
#define CLASS_2_A4FAB4DDC5D8F208__CTOR_OFFSET UNITYSDK_OFFSET(0x1D150370)

inline static constexpr unsigned int Class_2_A4FAB4DDC5D8F208_TypeDefinitionIndex = 89258;

class Class_2_A4FAB4DDC5D8F208 : public ::Class_1_321489CFFF7B18E7
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_3060EE23002ECA9E*>* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A4FAB4DDC5D8F208__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_01953D7882459DEC(::Class_2_785FDC7D0DA58280* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_785FDC7D0DA58280*))((::PBYTE)hIl2Cpp + CLASS_2_A4FAB4DDC5D8F208_METHOD_2_01953D7882459DEC_OFFSET))(this, a1);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A4FAB4DDC5D8F208_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_518C481117C9867C(::System::String* a1, ::Class_1_3060EE23002ECA9E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_3060EE23002ECA9E*))((::PBYTE)hIl2Cpp + CLASS_2_A4FAB4DDC5D8F208_METHOD_2_518C481117C9867C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_76AAE40741F092B2(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_A4FAB4DDC5D8F208_METHOD_2_76AAE40741F092B2_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_4B1E26575F5F2545(::System::String* a1, ::Class_1_3060EE23002ECA9E*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Class_1_3060EE23002ECA9E*&))((::PBYTE)hIl2Cpp + CLASS_2_A4FAB4DDC5D8F208_METHOD_2_4B1E26575F5F2545_OFFSET))(this, a1, a2);
	}
};
