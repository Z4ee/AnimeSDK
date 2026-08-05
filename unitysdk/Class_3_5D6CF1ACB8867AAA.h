#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_3_5D6CF1ACB8867AAA_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x128F07C0)
#define CLASS_3_5D6CF1ACB8867AAA_METHOD_3_0D3C3D2CA5BA2769_OFFSET UNITYSDK_OFFSET(0x128F15C0)
#define CLASS_3_5D6CF1ACB8867AAA_METHOD_3_103198B055733AF4_OFFSET UNITYSDK_OFFSET(0x128F2EB0)
#define CLASS_3_5D6CF1ACB8867AAA_METHOD_3_349E8BBB357CFD96_OFFSET UNITYSDK_OFFSET(0x128F2310)
#define CLASS_3_5D6CF1ACB8867AAA_METHOD_3_39468678C9BF10F3_OFFSET UNITYSDK_OFFSET(0x128F32F0)
#define CLASS_3_5D6CF1ACB8867AAA_METHOD_3_5D6EDD405CC764DD_OFFSET UNITYSDK_OFFSET(0x128F0990)
#define CLASS_3_5D6CF1ACB8867AAA_METHOD_3_69650EF96DABABF6_OFFSET UNITYSDK_OFFSET(0x128F27C0)
#define CLASS_3_5D6CF1ACB8867AAA_METHOD_3_6E161A816DC67A59_OFFSET UNITYSDK_OFFSET(0x128F1DC0)
#define CLASS_3_5D6CF1ACB8867AAA_METHOD_3_76C2DF0449D25A29_OFFSET UNITYSDK_OFFSET(0x128F1120)
#define CLASS_3_5D6CF1ACB8867AAA_METHOD_3_A4AD1CFCD48A2458_OFFSET UNITYSDK_OFFSET(0x128F0E40)
#define CLASS_3_5D6CF1ACB8867AAA_METHOD_3_A6544B958241856F_OFFSET UNITYSDK_OFFSET(0x128F1AC0)
#define CLASS_3_5D6CF1ACB8867AAA_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x128F1D30)
#define CLASS_3_5D6CF1ACB8867AAA_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x128F10E0)
#define CLASS_3_5D6CF1ACB8867AAA_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x128F2E70)
#define CLASS_3_5D6CF1ACB8867AAA_METHOD_3_D72AA7CAFA3A9427_OFFSET UNITYSDK_OFFSET(0x128F30A0)
#define CLASS_3_5D6CF1ACB8867AAA__CTOR_OFFSET UNITYSDK_OFFSET(0x128F0940)

inline static constexpr unsigned int Class_3_5D6CF1ACB8867AAA_TypeDefinitionIndex = 71411;

class Class_3_5D6CF1ACB8867AAA : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5D6CF1ACB8867AAA__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_5D6CF1ACB8867AAA_CREATEFILTERS_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_5D6EDD405CC764DD(::System::Action* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_5D6CF1ACB8867AAA_METHOD_3_5D6EDD405CC764DD_OFFSET))(a1, a2);
	}

	::System::Void Method_3_A4AD1CFCD48A2458(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_5D6CF1ACB8867AAA_METHOD_3_A4AD1CFCD48A2458_OFFSET))(this, a1);
	}

	::System::Void Method_3_76C2DF0449D25A29(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_5D6CF1ACB8867AAA_METHOD_3_76C2DF0449D25A29_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_0D3C3D2CA5BA2769(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_5D6CF1ACB8867AAA_METHOD_3_0D3C3D2CA5BA2769_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_5D6CF1ACB8867AAA_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_A6544B958241856F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_5D6CF1ACB8867AAA_METHOD_3_A6544B958241856F_OFFSET))();
	}

	static ::System::Boolean Method_3_349E8BBB357CFD96(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::Action* a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_5D6CF1ACB8867AAA_METHOD_3_349E8BBB357CFD96_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_6E161A816DC67A59(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_5D6CF1ACB8867AAA_METHOD_3_6E161A816DC67A59_OFFSET))(a1);
	}

	static ::System::Void Method_3_69650EF96DABABF6(::Struct_2_FA5F50563E60AFBA a1, ::System::String* a2, ::System::Boolean a3, ::System::Single a4, ::System::String* a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::Struct_2_FA5F50563E60AFBA, ::System::String*, ::System::Boolean, ::System::Single, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_5D6CF1ACB8867AAA_METHOD_3_69650EF96DABABF6_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5D6CF1ACB8867AAA_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 Method_3_103198B055733AF4(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_5D6CF1ACB8867AAA_METHOD_3_103198B055733AF4_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5D6CF1ACB8867AAA_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	static ::System::Boolean Method_3_D72AA7CAFA3A9427(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_3_5D6CF1ACB8867AAA_METHOD_3_D72AA7CAFA3A9427_OFFSET))(a1, a2);
	}

	::System::Void Method_3_39468678C9BF10F3(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_5D6CF1ACB8867AAA_METHOD_3_39468678C9BF10F3_OFFSET))(this, a1);
	}
};
