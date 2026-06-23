#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_DAF2505B3395F722_CLASS_1_B9EC59860BE11DE1_1_METHOD_1_DE0C81F1CACF6A1D_OFFSET UNITYSDK_OFFSET(0x14444AB0)
#define CLASS_1_DAF2505B3395F722_CLASS_1_B9EC59860BE11DE1_1__CTOR_OFFSET UNITYSDK_OFFSET(0x14444AA0)

inline static constexpr unsigned int Class_1_DAF2505B3395F722_Class_1_B9EC59860BE11DE1_1_TypeDefinitionIndex = 73230;

class Class_1_DAF2505B3395F722_Class_1_B9EC59860BE11DE1_1 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAF2505B3395F722_CLASS_1_B9EC59860BE11DE1_1__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_DE0C81F1CACF6A1D(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DAF2505B3395F722_CLASS_1_B9EC59860BE11DE1_1_METHOD_1_DE0C81F1CACF6A1D_OFFSET))(this, a1, a2);
	}
};
