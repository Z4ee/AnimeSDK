#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/Foundation/Singleton_1.h"

class Class_3_028B9BAC07BE632B;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_2_CA1A0ABB9E1DAC87_METHOD_2_1C5E85EAB424AB24_OFFSET UNITYSDK_OFFSET(0x17F2D5F0)
#define CLASS_2_CA1A0ABB9E1DAC87_METHOD_2_6B6AE2B3E1C3264F_OFFSET UNITYSDK_OFFSET(0x17F2DA00)
#define CLASS_2_CA1A0ABB9E1DAC87_METHOD_2_7EDB29A43FFF54DA_OFFSET UNITYSDK_OFFSET(0x17F2D7D0)
#define CLASS_2_CA1A0ABB9E1DAC87_METHOD_2_C706B1EC6D2E1C64_OFFSET UNITYSDK_OFFSET(0x17F2D490)
#define CLASS_2_CA1A0ABB9E1DAC87_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17F2D9F0)
#define CLASS_2_CA1A0ABB9E1DAC87_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17F2D860)
#define CLASS_2_CA1A0ABB9E1DAC87_METHOD_2_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0x17F2D8B0)
#define CLASS_2_CA1A0ABB9E1DAC87_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17F2D9E0)
#define CLASS_2_CA1A0ABB9E1DAC87__CTOR_OFFSET UNITYSDK_OFFSET(0x17F2D470)

inline static constexpr unsigned int Class_2_CA1A0ABB9E1DAC87_TypeDefinitionIndex = 55066;

class Class_2_CA1A0ABB9E1DAC87 : public ::Foundation::Singleton_1<::Class_2_CA1A0ABB9E1DAC87*>
{
public:
	::Class_3_028B9BAC07BE632B* Field_2_0; // 0x10
	::Foundation::Coroutine::CoroutineHandle Field_2_7; // 0x18
	::System::Boolean Field_2_6; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA1A0ABB9E1DAC87__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_C706B1EC6D2E1C64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA1A0ABB9E1DAC87_METHOD_2_C706B1EC6D2E1C64_OFFSET))(this);
	}

	::System::Void Method_2_1C5E85EAB424AB24(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CA1A0ABB9E1DAC87_METHOD_2_1C5E85EAB424AB24_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA1A0ABB9E1DAC87_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_2_7EDB29A43FFF54DA(::System::Boolean a1)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CA1A0ABB9E1DAC87_METHOD_2_7EDB29A43FFF54DA_OFFSET))(this, a1);
	}

	::System::Void Method_2_E876C8B6D3B840A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA1A0ABB9E1DAC87_METHOD_2_E876C8B6D3B840A6_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA1A0ABB9E1DAC87_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CA1A0ABB9E1DAC87_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_2_6B6AE2B3E1C3264F(::Class_3_028B9BAC07BE632B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_028B9BAC07BE632B*))((::PBYTE)hIl2Cpp + CLASS_2_CA1A0ABB9E1DAC87_METHOD_2_6B6AE2B3E1C3264F_OFFSET))(this, a1);
	}
};
