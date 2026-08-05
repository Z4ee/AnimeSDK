#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_C89E2DE6205A669B;
class Class_3_C93CC3D2C2AC4067;
namespace MoleMole { class LaserSegments; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_3208D12AB0F589C8_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x1A8A1030)
#define CLASS_3_3208D12AB0F589C8_METHOD_3_25822EEB7F74ED1E_OFFSET UNITYSDK_OFFSET(0x1A8A16A0)
#define CLASS_3_3208D12AB0F589C8_METHOD_3_7CFF2709956D699C_OFFSET UNITYSDK_OFFSET(0x1A8A2700)
#define CLASS_3_3208D12AB0F589C8_METHOD_3_86D98CC2B949F108_OFFSET UNITYSDK_OFFSET(0x1A8A22E0)
#define CLASS_3_3208D12AB0F589C8_METHOD_3_AA7E3074254D484A_OFFSET UNITYSDK_OFFSET(0x1A8A12A0)
#define CLASS_3_3208D12AB0F589C8_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x1A8A21C0)
#define CLASS_3_3208D12AB0F589C8_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A8A2250)
#define CLASS_3_3208D12AB0F589C8_METHOD_3_FE5F2124A4D00FC2_OFFSET UNITYSDK_OFFSET(0x1A8A19E0)
#define CLASS_3_3208D12AB0F589C8_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A8A11E0)
#define CLASS_3_3208D12AB0F589C8__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8A15F0)

inline static constexpr unsigned int Class_3_3208D12AB0F589C8_TypeDefinitionIndex = 53191;

class Class_3_3208D12AB0F589C8 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::System::Action_2<::Class_3_C89E2DE6205A669B*, ::Class_3_C93CC3D2C2AC4067*>* Field_3_0; // 0x20
	::Nap::NapECS::EcsFilter* Field_3_2; // 0x28
	::System::Collections::Generic::List_1<::System::UInt32>* Field_3_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3208D12AB0F589C8__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_3208D12AB0F589C8_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3208D12AB0F589C8_UPDATE_OFFSET))(this);
	}

	::System::Void Method_3_25822EEB7F74ED1E(::Class_3_C89E2DE6205A669B* a1, ::Class_3_C93CC3D2C2AC4067* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C89E2DE6205A669B*, ::Class_3_C93CC3D2C2AC4067*))((::PBYTE)hIl2Cpp + CLASS_3_3208D12AB0F589C8_METHOD_3_25822EEB7F74ED1E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_3208D12AB0F589C8_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_FE5F2124A4D00FC2(::System::Collections::Generic::List_1<::MoleMole::LaserSegments*>* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::LaserSegments*>*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_3208D12AB0F589C8_METHOD_3_FE5F2124A4D00FC2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3208D12AB0F589C8_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_86D98CC2B949F108(::System::Collections::Generic::List_1<::MoleMole::LaserSegments*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::LaserSegments*>*))((::PBYTE)hIl2Cpp + CLASS_3_3208D12AB0F589C8_METHOD_3_86D98CC2B949F108_OFFSET))(this, a1);
	}

	::System::Void Method_3_AA7E3074254D484A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3208D12AB0F589C8_METHOD_3_AA7E3074254D484A_OFFSET))(this);
	}

	::System::Void Method_3_7CFF2709956D699C(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_3208D12AB0F589C8_METHOD_3_7CFF2709956D699C_OFFSET))(this, a1);
	}
};
