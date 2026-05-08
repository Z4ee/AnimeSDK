#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_47EB23CB5C4B2615_5.h"
#include "unitysdk/Enum_3_AF372E25E8B1C1D6.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/CinemaCameraPosEnum.h"

class Class_2_1AEF5DFE7F1C8F89;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_9F25E03721B28CF1_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x16A74170)
#define CLASS_2_9F25E03721B28CF1_METHOD_2_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x16A74640)
#define CLASS_2_9F25E03721B28CF1_METHOD_2_913947B6596EB50A_OFFSET UNITYSDK_OFFSET(0x16A73FA0)
#define CLASS_2_9F25E03721B28CF1_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x16A73F90)
#define CLASS_2_9F25E03721B28CF1_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x16A74310)
#define CLASS_2_9F25E03721B28CF1_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x16A747C0)
#define CLASS_2_9F25E03721B28CF1_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x16A74850)
#define CLASS_2_9F25E03721B28CF1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16A74470)
#define CLASS_2_9F25E03721B28CF1_METHOD_2_E18B05139A56E361_OFFSET UNITYSDK_OFFSET(0x16A74500)
#define CLASS_2_9F25E03721B28CF1_METHOD_2_F7300E87EC49A206_OFFSET UNITYSDK_OFFSET(0x16A73FF0)
#define CLASS_2_9F25E03721B28CF1__CTOR_OFFSET UNITYSDK_OFFSET(0x16A74460)

inline static constexpr unsigned int Class_2_9F25E03721B28CF1_TypeDefinitionIndex = 68420;

class Class_2_9F25E03721B28CF1 : public ::Class_1_47EB23CB5C4B2615_5
{
public:
	::System::Collections::Generic::List_1<::MoleMole::CinemaCameraPosEnum>* Field_2_1; // 0x18
	::System::Collections::Generic::List_1<::System::Single>* Field_2_2; // 0x20
	::Class_2_1AEF5DFE7F1C8F89* Field_2_0; // 0x28
	::System::Single Field_2_3; // 0x30
	::Foundation::Coroutine::CoroutineHandle Field_2_4; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F25E03721B28CF1__CTOR_OFFSET))(this);
	}

	::Enum_3_AF372E25E8B1C1D6 Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_AF372E25E8B1C1D6(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F25E03721B28CF1_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_913947B6596EB50A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F25E03721B28CF1_METHOD_2_913947B6596EB50A_OFFSET))(this);
	}

	::System::Void Method_2_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F25E03721B28CF1_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_2_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F25E03721B28CF1_METHOD_2_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F25E03721B28CF1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_E18B05139A56E361(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Collections::Generic::List_1<::System::Single>* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Single>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9F25E03721B28CF1_METHOD_2_E18B05139A56E361_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_F7300E87EC49A206()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F25E03721B28CF1_METHOD_2_F7300E87EC49A206_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F25E03721B28CF1_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F25E03721B28CF1_METHOD_2_82E992240300FB30_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F25E03721B28CF1_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}
};
