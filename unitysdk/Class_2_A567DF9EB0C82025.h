#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/Foundation/Singleton_1.h"

class Class_3_5AEEB8BAAD67B8F2;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_2_A567DF9EB0C82025_METHOD_2_1554A5A4DE9C7FA9_OFFSET UNITYSDK_OFFSET(0x15D19D90)
#define CLASS_2_A567DF9EB0C82025_METHOD_2_283DA224BE06DA9F_OFFSET UNITYSDK_OFFSET(0x15D19C60)
#define CLASS_2_A567DF9EB0C82025_METHOD_2_6B6AE2B3E1C3264F_OFFSET UNITYSDK_OFFSET(0x15D1A160)
#define CLASS_2_A567DF9EB0C82025_METHOD_2_7EDB29A43FFF54DA_OFFSET UNITYSDK_OFFSET(0x15D1A0C0)
#define CLASS_2_A567DF9EB0C82025_METHOD_2_C706B1EC6D2E1C64_OFFSET UNITYSDK_OFFSET(0x15D19F60)
#define CLASS_2_A567DF9EB0C82025_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x15D1A150)
#define CLASS_2_A567DF9EB0C82025_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15D19C10)
#define CLASS_2_A567DF9EB0C82025_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x15D1A1B0)
#define CLASS_2_A567DF9EB0C82025__CTOR_OFFSET UNITYSDK_OFFSET(0x15D19BF0)

inline static constexpr unsigned int Class_2_A567DF9EB0C82025_TypeDefinitionIndex = 60740;

class Class_2_A567DF9EB0C82025 : public ::Foundation::Singleton_1<::Class_2_A567DF9EB0C82025*>
{
public:
	::Class_3_5AEEB8BAAD67B8F2* Field_2_0; // 0x10
	::System::Boolean Field_2_2; // 0x18
	::Foundation::Coroutine::CoroutineHandle Field_2_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A567DF9EB0C82025__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A567DF9EB0C82025_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_283DA224BE06DA9F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A567DF9EB0C82025_METHOD_2_283DA224BE06DA9F_OFFSET))(this);
	}

	::System::Void Method_2_C706B1EC6D2E1C64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A567DF9EB0C82025_METHOD_2_C706B1EC6D2E1C64_OFFSET))(this);
	}

	::System::Void Method_2_1554A5A4DE9C7FA9(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A567DF9EB0C82025_METHOD_2_1554A5A4DE9C7FA9_OFFSET))(this, a1);
	}

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A567DF9EB0C82025_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_2_6B6AE2B3E1C3264F(::Class_3_5AEEB8BAAD67B8F2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_5AEEB8BAAD67B8F2*))((::PBYTE)hIl2Cpp + CLASS_2_A567DF9EB0C82025_METHOD_2_6B6AE2B3E1C3264F_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_2_7EDB29A43FFF54DA(::System::Boolean a1)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A567DF9EB0C82025_METHOD_2_7EDB29A43FFF54DA_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A567DF9EB0C82025_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}
};
