#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_56567EA8F746EF1A;
class Class_3_DFD5D1FDB9D2A4AC;
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }

#define CLASS_3_26DC86C2DC9F9DC2_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x182586D0)
#define CLASS_3_26DC86C2DC9F9DC2_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x18258880)
#define CLASS_3_26DC86C2DC9F9DC2_METHOD_3_31D9EAABDE96BBD4_OFFSET UNITYSDK_OFFSET(0x182591E0)
#define CLASS_3_26DC86C2DC9F9DC2_METHOD_3_749BA94263BBE756_OFFSET UNITYSDK_OFFSET(0x18258A30)
#define CLASS_3_26DC86C2DC9F9DC2_METHOD_3_8B631001179DE61A_OFFSET UNITYSDK_OFFSET(0x18259310)
#define CLASS_3_26DC86C2DC9F9DC2_METHOD_3_97F1E3D4E73DB26C_OFFSET UNITYSDK_OFFSET(0x182590B0)
#define CLASS_3_26DC86C2DC9F9DC2_METHOD_3_A11144519902A27F_OFFSET UNITYSDK_OFFSET(0x18259190)
#define CLASS_3_26DC86C2DC9F9DC2_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x18259280)
#define CLASS_3_26DC86C2DC9F9DC2_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x182593A0)
#define CLASS_3_26DC86C2DC9F9DC2__CTOR_OFFSET UNITYSDK_OFFSET(0x182589E0)

inline static constexpr unsigned int Class_3_26DC86C2DC9F9DC2_TypeDefinitionIndex = 67884;

class Class_3_26DC86C2DC9F9DC2 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	// static const ::System::String* Field_3_1; // 0x0
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_26DC86C2DC9F9DC2__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_26DC86C2DC9F9DC2_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_26DC86C2DC9F9DC2_LATEUPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_749BA94263BBE756(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Class_3_56567EA8F746EF1A* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_56567EA8F746EF1A*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_26DC86C2DC9F9DC2_METHOD_3_749BA94263BBE756_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_A11144519902A27F(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_26DC86C2DC9F9DC2_METHOD_3_A11144519902A27F_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_31D9EAABDE96BBD4(::Class_3_56567EA8F746EF1A* a1, ::System::ValueTuple_2<::System::Single, ::System::Single> a2)
	{
		return ((::System::Void(*)(::Class_3_56567EA8F746EF1A*, ::System::ValueTuple_2<::System::Single, ::System::Single>))((::PBYTE)hIl2Cpp + CLASS_3_26DC86C2DC9F9DC2_METHOD_3_31D9EAABDE96BBD4_OFFSET))(a1, a2);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_26DC86C2DC9F9DC2_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::UnityEngine::Vector3 Method_3_97F1E3D4E73DB26C(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_26DC86C2DC9F9DC2_METHOD_3_97F1E3D4E73DB26C_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_8B631001179DE61A(::Class_3_56567EA8F746EF1A* a1, ::UnityEngine::Vector3 a2, ::System::ValueTuple_2<::System::Single, ::System::Single> a3)
	{
		return ((::System::Void(*)(::Class_3_56567EA8F746EF1A*, ::UnityEngine::Vector3, ::System::ValueTuple_2<::System::Single, ::System::Single>))((::PBYTE)hIl2Cpp + CLASS_3_26DC86C2DC9F9DC2_METHOD_3_8B631001179DE61A_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_26DC86C2DC9F9DC2_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
