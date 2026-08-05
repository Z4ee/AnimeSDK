#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_47EB23CB5C4B2615_4.h"
#include "unitysdk/Enum_3_AF372E25E8B1C1D6.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/CinemaCameraPosEnum.h"

class Class_2_1AEF5DFE7F1C8F89;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_588D6ABE860E758C_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x1239D500)
#define CLASS_2_588D6ABE860E758C_METHOD_2_5478EB0DE038D232_OFFSET UNITYSDK_OFFSET(0x1239D890)
#define CLASS_2_588D6ABE860E758C_METHOD_2_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x1239DA60)
#define CLASS_2_588D6ABE860E758C_METHOD_2_913947B6596EB50A_OFFSET UNITYSDK_OFFSET(0x1239D330)
#define CLASS_2_588D6ABE860E758C_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1239D320)
#define CLASS_2_588D6ABE860E758C_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x1239D6A0)
#define CLASS_2_588D6ABE860E758C_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1239D9D0)
#define CLASS_2_588D6ABE860E758C_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x1239DBE0)
#define CLASS_2_588D6ABE860E758C_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1239D800)
#define CLASS_2_588D6ABE860E758C_METHOD_2_F7300E87EC49A206_OFFSET UNITYSDK_OFFSET(0x1239D380)
#define CLASS_2_588D6ABE860E758C__CTOR_OFFSET UNITYSDK_OFFSET(0x1239D7F0)

inline static constexpr unsigned int Class_2_588D6ABE860E758C_TypeDefinitionIndex = 58333;

class Class_2_588D6ABE860E758C : public ::Class_1_47EB23CB5C4B2615_4
{
public:
	::System::Collections::Generic::List_1<::MoleMole::CinemaCameraPosEnum>* Field_2_2; // 0x18
	::System::Collections::Generic::List_1<::System::Single>* Field_2_1; // 0x20
	::Class_2_1AEF5DFE7F1C8F89* Field_2_3; // 0x28
	::System::Single Field_2_0; // 0x30
	::Foundation::Coroutine::CoroutineHandle Field_2_7; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_588D6ABE860E758C__CTOR_OFFSET))(this);
	}

	::Enum_3_AF372E25E8B1C1D6 Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_AF372E25E8B1C1D6(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_588D6ABE860E758C_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_913947B6596EB50A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_588D6ABE860E758C_METHOD_2_913947B6596EB50A_OFFSET))(this);
	}

	::System::Void Method_2_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_588D6ABE860E758C_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_2_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_588D6ABE860E758C_METHOD_2_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_588D6ABE860E758C_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_5478EB0DE038D232(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Collections::Generic::List_1<::System::Single>* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Single>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_588D6ABE860E758C_METHOD_2_5478EB0DE038D232_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_588D6ABE860E758C_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_588D6ABE860E758C_METHOD_2_82E992240300FB30_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_588D6ABE860E758C_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_F7300E87EC49A206()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_588D6ABE860E758C_METHOD_2_F7300E87EC49A206_OFFSET))(this);
	}
};
