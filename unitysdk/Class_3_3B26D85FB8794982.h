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

#define CLASS_3_3B26D85FB8794982_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x11B020C0)
#define CLASS_3_3B26D85FB8794982_METHOD_3_0D3C3D2CA5BA2769_OFFSET UNITYSDK_OFFSET(0x11B029F0)
#define CLASS_3_3B26D85FB8794982_METHOD_3_103198B055733AF4_OFFSET UNITYSDK_OFFSET(0x11B02290)
#define CLASS_3_3B26D85FB8794982_METHOD_3_5D6EDD405CC764DD_OFFSET UNITYSDK_OFFSET(0x11B03170)
#define CLASS_3_3B26D85FB8794982_METHOD_3_6B09AB754E57D3E1_OFFSET UNITYSDK_OFFSET(0x11B03CF0)
#define CLASS_3_3B26D85FB8794982_METHOD_3_6E161A816DC67A59_OFFSET UNITYSDK_OFFSET(0x11B02490)
#define CLASS_3_3B26D85FB8794982_METHOD_3_76C2DF0449D25A29_OFFSET UNITYSDK_OFFSET(0x11B046F0)
#define CLASS_3_3B26D85FB8794982_METHOD_3_822531539D89DB74_OFFSET UNITYSDK_OFFSET(0x11B03610)
#define CLASS_3_3B26D85FB8794982_METHOD_3_A3577EA98B9E8023_OFFSET UNITYSDK_OFFSET(0x11B04460)
#define CLASS_3_3B26D85FB8794982_METHOD_3_A6544B958241856F_OFFSET UNITYSDK_OFFSET(0x11B02F00)
#define CLASS_3_3B26D85FB8794982_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x11B043D0)
#define CLASS_3_3B26D85FB8794982_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x11B04B90)
#define CLASS_3_3B26D85FB8794982_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11B04390)
#define CLASS_3_3B26D85FB8794982_METHOD_3_CD66FA51EBFF2066_OFFSET UNITYSDK_OFFSET(0x11B04BD0)
#define CLASS_3_3B26D85FB8794982_METHOD_3_E3B49EF8E614DDC0_OFFSET UNITYSDK_OFFSET(0x11B03860)
#define CLASS_3_3B26D85FB8794982__CTOR_OFFSET UNITYSDK_OFFSET(0x11B02240)

inline static constexpr unsigned int Class_3_3B26D85FB8794982_TypeDefinitionIndex = 43241;

class Class_3_3B26D85FB8794982 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3B26D85FB8794982__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_3B26D85FB8794982_CREATEFILTERS_OFFSET))(this, a1);
	}

	static ::UnityEngine::Vector3 Method_3_103198B055733AF4(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_3B26D85FB8794982_METHOD_3_103198B055733AF4_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_6E161A816DC67A59(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_3B26D85FB8794982_METHOD_3_6E161A816DC67A59_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_0D3C3D2CA5BA2769(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_3B26D85FB8794982_METHOD_3_0D3C3D2CA5BA2769_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_5D6EDD405CC764DD(::System::Action* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_3B26D85FB8794982_METHOD_3_5D6EDD405CC764DD_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_822531539D89DB74(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_3_3B26D85FB8794982_METHOD_3_822531539D89DB74_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_E3B49EF8E614DDC0(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::Action* a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_3B26D85FB8794982_METHOD_3_E3B49EF8E614DDC0_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_6B09AB754E57D3E1(::Struct_2_FA5F50563E60AFBA a1, ::System::String* a2, ::System::Boolean a3, ::System::Single a4, ::System::String* a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::Struct_2_FA5F50563E60AFBA, ::System::String*, ::System::Boolean, ::System::Single, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_3B26D85FB8794982_METHOD_3_6B09AB754E57D3E1_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Void Method_3_A6544B958241856F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_3B26D85FB8794982_METHOD_3_A6544B958241856F_OFFSET))();
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3B26D85FB8794982_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_3B26D85FB8794982_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_A3577EA98B9E8023(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_3B26D85FB8794982_METHOD_3_A3577EA98B9E8023_OFFSET))(this, a1);
	}

	::System::Void Method_3_76C2DF0449D25A29(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_3B26D85FB8794982_METHOD_3_76C2DF0449D25A29_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3B26D85FB8794982_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_3_CD66FA51EBFF2066(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_3B26D85FB8794982_METHOD_3_CD66FA51EBFF2066_OFFSET))(this, a1);
	}
};
