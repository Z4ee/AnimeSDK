#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C974D9B5A2874893_1.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class FreeStyleComponent; }

#define CLASS_2_C3D3E8257C42D63E_METHOD_2_218124418542E081_OFFSET UNITYSDK_OFFSET(0xBD72BF0)
#define CLASS_2_C3D3E8257C42D63E_METHOD_2_4352493581638AE1_OFFSET UNITYSDK_OFFSET(0xBD727D0)
#define CLASS_2_C3D3E8257C42D63E_METHOD_2_8D595942D57F40CD_OFFSET UNITYSDK_OFFSET(0xBD72910)
#define CLASS_2_C3D3E8257C42D63E_METHOD_2_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0xBD73160)
#define CLASS_2_C3D3E8257C42D63E_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xBD730D0)
#define CLASS_2_C3D3E8257C42D63E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBD731F0)
#define CLASS_2_C3D3E8257C42D63E__CTOR_OFFSET UNITYSDK_OFFSET(0xBD73240)

inline static constexpr unsigned int Class_2_C3D3E8257C42D63E_TypeDefinitionIndex = 57152;

class Class_2_C3D3E8257C42D63E : public ::Class_1_C974D9B5A2874893_1
{
public:
	// static const ::System::Single FOJFHNENCHJ; // 0x0
	// static const ::System::Single DGBGMMKGMHF; // 0x0
	::RPG::GameCore::FreeStyleComponent* KADINPKIGIB; // 0x28
	::RPG::GameCore::AdventureCharacterController* CACEADPJLPB; // 0x30
	::System::Single HDKKECHDBCN; // 0x38
	::System::UInt32 EBJLPAFFKOM; // 0x3C
	::System::Single HBDJCFFDGDD; // 0x40
	::System::Nullable_1<::UnityEngine::Quaternion> HACHBGJADBI; // 0x44
	::System::Nullable_1<::UnityEngine::Vector3> HGCCAGKEONO; // 0x58
	::System::Boolean OAPHDBCJOPJ; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3D3E8257C42D63E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4352493581638AE1(::System::UInt32 a1, ::System::Boolean a2, ::System::Single a3, ::System::Nullable_1<::UnityEngine::Vector3> a4, ::System::Nullable_1<::UnityEngine::Quaternion> a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Single, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>))((::PBYTE)hIl2Cpp + CLASS_2_C3D3E8257C42D63E_METHOD_2_4352493581638AE1_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_8D595942D57F40CD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C3D3E8257C42D63E_METHOD_2_8D595942D57F40CD_OFFSET))(this, a1);
	}

	::System::Void Method_2_218124418542E081()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3D3E8257C42D63E_METHOD_2_218124418542E081_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3D3E8257C42D63E_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3D3E8257C42D63E_METHOD_2_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3D3E8257C42D63E_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
