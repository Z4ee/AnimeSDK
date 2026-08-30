#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D49F49D6731D88EE;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_221056A254755276_METHOD_1_0B30ACB2BC1EF2E2_OFFSET UNITYSDK_OFFSET(0xB63CBF0)
#define CLASS_1_221056A254755276_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xB63CDB0)
#define CLASS_1_221056A254755276_METHOD_1_A512A0B8BD205E0C_OFFSET UNITYSDK_OFFSET(0xB63CD20)
#define CLASS_1_221056A254755276__CTOR_OFFSET UNITYSDK_OFFSET(0xB63CB90)

inline static constexpr unsigned int Class_1_221056A254755276_TypeDefinitionIndex = 52393;

class Class_1_221056A254755276 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_D49F49D6731D88EE*>* LJOOHOPBAJJ; // 0x10
	::System::UInt64 MBCACNKDMFG; // 0x18

	::System::Void _ctor(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_221056A254755276__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_0B30ACB2BC1EF2E2(::System::UInt64 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_221056A254755276_METHOD_1_0B30ACB2BC1EF2E2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A512A0B8BD205E0C(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_221056A254755276_METHOD_1_A512A0B8BD205E0C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_221056A254755276_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}
};
