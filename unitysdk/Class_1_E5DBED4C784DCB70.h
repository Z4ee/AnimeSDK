#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E5DBED4C784DCB70_Struct_2_6175284CFEF73564_5.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Foundation { class MyLogger; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E5DBED4C784DCB70_DISPOSE_OFFSET UNITYSDK_OFFSET(0x130848B0)
#define CLASS_1_E5DBED4C784DCB70_METHOD_1_10FCBC983012DA5B_OFFSET UNITYSDK_OFFSET(0x13084F50)
#define CLASS_1_E5DBED4C784DCB70_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x13084D20)
#define CLASS_1_E5DBED4C784DCB70_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x13084960)
#define CLASS_1_E5DBED4C784DCB70_METHOD_1_C2245EC58D417830_OFFSET UNITYSDK_OFFSET(0x13084A60)
#define CLASS_1_E5DBED4C784DCB70_METHOD_1_C62F007113686C62_OFFSET UNITYSDK_OFFSET(0x13084B20)
#define CLASS_1_E5DBED4C784DCB70_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x130849F0)
#define CLASS_1_E5DBED4C784DCB70_METHOD_1_E80CA4FF0CB8343F_OFFSET UNITYSDK_OFFSET(0x13084DD0)
#define CLASS_1_E5DBED4C784DCB70__CTOR_OFFSET UNITYSDK_OFFSET(0x130847C0)

inline static constexpr unsigned int Class_1_E5DBED4C784DCB70_TypeDefinitionIndex = 66097;

class Class_1_E5DBED4C784DCB70 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_E5DBED4C784DCB70_Struct_2_6175284CFEF73564_5>* Field_1_1; // 0x10
	::Foundation::MyLogger* Field_1_5; // 0x18
	::System::Int32 Field_1_2; // 0x20
	::UnityEngine::Vector3 Field_1_4; // 0x24
	::System::Int32 Field_1_0; // 0x30
	::System::Single Field_1_3; // 0x34

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E5DBED4C784DCB70__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5DBED4C784DCB70_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5DBED4C784DCB70_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Single Method_1_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5DBED4C784DCB70_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_C2245EC58D417830()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5DBED4C784DCB70_METHOD_1_C2245EC58D417830_OFFSET))(this);
	}

	::System::Void Method_1_C62F007113686C62(::System::Single a1, ::System::Single a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E5DBED4C784DCB70_METHOD_1_C62F007113686C62_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5DBED4C784DCB70_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_E80CA4FF0CB8343F(::UnityEngine::Color a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E5DBED4C784DCB70_METHOD_1_E80CA4FF0CB8343F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_10FCBC983012DA5B(::UnityEngine::Color a1, ::UnityEngine::Color a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E5DBED4C784DCB70_METHOD_1_10FCBC983012DA5B_OFFSET))(this, a1, a2, a3);
	}
};
