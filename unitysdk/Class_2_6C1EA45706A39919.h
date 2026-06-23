#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_23.h"

class Class_3_9F2FCC0519F3E06F_64;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_6C1EA45706A39919_METHOD_2_9AB78FACA8201E90_OFFSET UNITYSDK_OFFSET(0x165C3610)
#define CLASS_2_6C1EA45706A39919_METHOD_2_AAE2768E79420046_OFFSET UNITYSDK_OFFSET(0x165C3630)
#define CLASS_2_6C1EA45706A39919_METHOD_2_AF4C1E1C68698312_OFFSET UNITYSDK_OFFSET(0x165C35F0)
#define CLASS_2_6C1EA45706A39919_METHOD_2_B0A930452D7F76FB_OFFSET UNITYSDK_OFFSET(0x165C3620)
#define CLASS_2_6C1EA45706A39919_METHOD_2_F9B7966EAEC825B3_OFFSET UNITYSDK_OFFSET(0x165C3600)
#define CLASS_2_6C1EA45706A39919__CTOR_OFFSET UNITYSDK_OFFSET(0x165C3530)

inline static constexpr unsigned int Class_2_6C1EA45706A39919_TypeDefinitionIndex = 50769;

class Class_2_6C1EA45706A39919 : public ::Class_1_43BD383C98B4C0C5_23
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_9F2FCC0519F3E06F_64*>* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C1EA45706A39919__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_AF4C1E1C68698312(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_6C1EA45706A39919_METHOD_2_AF4C1E1C68698312_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_2_F9B7966EAEC825B3()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C1EA45706A39919_METHOD_2_F9B7966EAEC825B3_OFFSET))(this);
	}

	::System::Void Method_2_9AB78FACA8201E90(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_9F2FCC0519F3E06F_64*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_9F2FCC0519F3E06F_64*>*))((::PBYTE)hIl2Cpp + CLASS_2_6C1EA45706A39919_METHOD_2_9AB78FACA8201E90_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_9F2FCC0519F3E06F_64*>* Method_2_B0A930452D7F76FB()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_9F2FCC0519F3E06F_64*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C1EA45706A39919_METHOD_2_B0A930452D7F76FB_OFFSET))(this);
	}

	static ::Class_2_6C1EA45706A39919* Method_2_AAE2768E79420046()
	{
		return ((::Class_2_6C1EA45706A39919*(*)())((::PBYTE)hIl2Cpp + CLASS_2_6C1EA45706A39919_METHOD_2_AAE2768E79420046_OFFSET))();
	}
};
