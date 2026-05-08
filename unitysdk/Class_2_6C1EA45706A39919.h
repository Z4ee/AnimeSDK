#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_39.h"

class Class_3_9F2FCC0519F3E06F_15;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_6C1EA45706A39919_METHOD_2_9AB78FACA8201E90_OFFSET UNITYSDK_OFFSET(0x153320D0)
#define CLASS_2_6C1EA45706A39919_METHOD_2_AAE2768E79420046_OFFSET UNITYSDK_OFFSET(0x153320F0)
#define CLASS_2_6C1EA45706A39919_METHOD_2_AF4C1E1C68698312_OFFSET UNITYSDK_OFFSET(0x153320C0)
#define CLASS_2_6C1EA45706A39919_METHOD_2_B0A930452D7F76FB_OFFSET UNITYSDK_OFFSET(0x153320E0)
#define CLASS_2_6C1EA45706A39919_METHOD_2_F9B7966EAEC825B3_OFFSET UNITYSDK_OFFSET(0x153320B0)
#define CLASS_2_6C1EA45706A39919__CTOR_OFFSET UNITYSDK_OFFSET(0x15331FF0)

inline static constexpr unsigned int Class_2_6C1EA45706A39919_TypeDefinitionIndex = 72655;

class Class_2_6C1EA45706A39919 : public ::Class_1_43BD383C98B4C0C5_39
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_9F2FCC0519F3E06F_15*>* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C1EA45706A39919__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_2_F9B7966EAEC825B3()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C1EA45706A39919_METHOD_2_F9B7966EAEC825B3_OFFSET))(this);
	}

	::System::Void Method_2_AF4C1E1C68698312(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_6C1EA45706A39919_METHOD_2_AF4C1E1C68698312_OFFSET))(this, a1);
	}

	::System::Void Method_2_9AB78FACA8201E90(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_9F2FCC0519F3E06F_15*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_9F2FCC0519F3E06F_15*>*))((::PBYTE)hIl2Cpp + CLASS_2_6C1EA45706A39919_METHOD_2_9AB78FACA8201E90_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_9F2FCC0519F3E06F_15*>* Method_2_B0A930452D7F76FB()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_9F2FCC0519F3E06F_15*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C1EA45706A39919_METHOD_2_B0A930452D7F76FB_OFFSET))(this);
	}

	static ::Class_2_6C1EA45706A39919* Method_2_AAE2768E79420046()
	{
		return ((::Class_2_6C1EA45706A39919*(*)())((::PBYTE)hIl2Cpp + CLASS_2_6C1EA45706A39919_METHOD_2_AAE2768E79420046_OFFSET))();
	}
};
