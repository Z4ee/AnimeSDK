#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Nap::NapECS { class EcsEntity; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_38085FB3BDA87637_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x14A9C840)
#define CLASS_3_38085FB3BDA87637_METHOD_3_04F8C9F9FCA37601_OFFSET UNITYSDK_OFFSET(0x14A9DC10)
#define CLASS_3_38085FB3BDA87637_METHOD_3_3A6CC4DFD3DD15CA_OFFSET UNITYSDK_OFFSET(0x14A9CAA0)
#define CLASS_3_38085FB3BDA87637_METHOD_3_40BEAD28720EA361_OFFSET UNITYSDK_OFFSET(0x14A9D530)
#define CLASS_3_38085FB3BDA87637_METHOD_3_510AB5D6C441A016_OFFSET UNITYSDK_OFFSET(0x14A9CE10)
#define CLASS_3_38085FB3BDA87637_METHOD_3_5472C19BCC71DEAF_OFFSET UNITYSDK_OFFSET(0x14A9D070)
#define CLASS_3_38085FB3BDA87637_METHOD_3_7A122D79831E0426_OFFSET UNITYSDK_OFFSET(0x14A9C930)
#define CLASS_3_38085FB3BDA87637_METHOD_3_7DFB4B9C80198D98_OFFSET UNITYSDK_OFFSET(0x14A9D8C0)
#define CLASS_3_38085FB3BDA87637_METHOD_3_A11144519902A27F_OFFSET UNITYSDK_OFFSET(0x14A9CFE0)
#define CLASS_3_38085FB3BDA87637_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x14A9DAF0)
#define CLASS_3_38085FB3BDA87637_METHOD_3_B380ADA6509D5935_OFFSET UNITYSDK_OFFSET(0x14A9CC70)
#define CLASS_3_38085FB3BDA87637_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x14A9DB80)
#define CLASS_3_38085FB3BDA87637_METHOD_3_F9DAB08EC8926B1B_1_OFFSET UNITYSDK_OFFSET(0x14A9D6E0)
#define CLASS_3_38085FB3BDA87637_METHOD_3_F9DAB08EC8926B1B_2_OFFSET UNITYSDK_OFFSET(0x14A9D900)
#define CLASS_3_38085FB3BDA87637_METHOD_3_F9DAB08EC8926B1B_OFFSET UNITYSDK_OFFSET(0x14A9D240)
#define CLASS_3_38085FB3BDA87637_ONADD_OFFSET UNITYSDK_OFFSET(0x14A9C5E0)
#define CLASS_3_38085FB3BDA87637_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x14A9C800)
#define CLASS_3_38085FB3BDA87637__CCTOR_OFFSET UNITYSDK_OFFSET(0x14A9C890)
#define CLASS_3_38085FB3BDA87637__CTOR_OFFSET UNITYSDK_OFFSET(0x14A9C910)

inline static constexpr unsigned int Class_3_38085FB3BDA87637_TypeDefinitionIndex = 65186;

class Class_3_38085FB3BDA87637 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_5 = 0xC8; // 0x0
	::UnityEngine::GameObject* Field_3_1; // 0x48
	::Foundation::AssetPath Field_3_0; // 0x50
	::UnityEngine::Vector3 Field_3_4; // 0x60
	::UnityEngine::Vector3 Field_3_2; // 0x6C
	::UnityEngine::Vector3 Field_3_3; // 0x78

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_38085FB3BDA87637__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_38085FB3BDA87637__CTOR_OFFSET))(this);
	}

	::System::Void OnAdd(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_38085FB3BDA87637_ONADD_OFFSET))(this, a1);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_38085FB3BDA87637_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_38085FB3BDA87637_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_7A122D79831E0426(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_38085FB3BDA87637_METHOD_3_7A122D79831E0426_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_B380ADA6509D5935(::UnityEngine::Quaternion a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_3_38085FB3BDA87637_METHOD_3_B380ADA6509D5935_OFFSET))(this, a1);
	}

	::System::Void Method_3_510AB5D6C441A016(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_38085FB3BDA87637_METHOD_3_510AB5D6C441A016_OFFSET))(this, a1);
	}

	::System::Void Method_3_A11144519902A27F(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_38085FB3BDA87637_METHOD_3_A11144519902A27F_OFFSET))(this, a1);
	}

	::UnityEngine::Quaternion Method_3_5472C19BCC71DEAF()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_38085FB3BDA87637_METHOD_3_5472C19BCC71DEAF_OFFSET))(this);
	}

	::System::Void Method_3_3A6CC4DFD3DD15CA(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::Foundation::AssetPath a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_3_38085FB3BDA87637_METHOD_3_3A6CC4DFD3DD15CA_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 Method_3_F9DAB08EC8926B1B()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_38085FB3BDA87637_METHOD_3_F9DAB08EC8926B1B_OFFSET))(this);
	}

	::System::Void Method_3_40BEAD28720EA361(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_38085FB3BDA87637_METHOD_3_40BEAD28720EA361_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_3_F9DAB08EC8926B1B_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_38085FB3BDA87637_METHOD_3_F9DAB08EC8926B1B_1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_7DFB4B9C80198D98()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_38085FB3BDA87637_METHOD_3_7DFB4B9C80198D98_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_F9DAB08EC8926B1B_2()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_38085FB3BDA87637_METHOD_3_F9DAB08EC8926B1B_2_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_38085FB3BDA87637_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_38085FB3BDA87637* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_38085FB3BDA87637*(*)())((::PBYTE)hIl2Cpp + CLASS_3_38085FB3BDA87637_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Void Method_3_04F8C9F9FCA37601(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_38085FB3BDA87637_METHOD_3_04F8C9F9FCA37601_OFFSET))(this, a1);
	}
};
