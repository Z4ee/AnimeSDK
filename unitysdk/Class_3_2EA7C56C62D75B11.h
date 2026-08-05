#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/Class_3_E9CB61782B1950E4_Struct_2_66EE559EF62DCFBC.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_B7E341C5F1A6F199;
class Class_3_E9CB61782B1950E4;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }

#define CLASS_3_2EA7C56C62D75B11_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x14525630)
#define CLASS_3_2EA7C56C62D75B11_METHOD_3_0F7CBACDC48E7772_OFFSET UNITYSDK_OFFSET(0x14527490)
#define CLASS_3_2EA7C56C62D75B11_METHOD_3_2D58832A36FF5158_OFFSET UNITYSDK_OFFSET(0x14527420)
#define CLASS_3_2EA7C56C62D75B11_METHOD_3_7331A1455F3F12A1_OFFSET UNITYSDK_OFFSET(0x14526F80)
#define CLASS_3_2EA7C56C62D75B11_METHOD_3_93D2D92314B7A59E_OFFSET UNITYSDK_OFFSET(0x14526180)
#define CLASS_3_2EA7C56C62D75B11_METHOD_3_99937B258F91C1C6_OFFSET UNITYSDK_OFFSET(0x14527FA0)
#define CLASS_3_2EA7C56C62D75B11_METHOD_3_9AD84C136DF0D471_OFFSET UNITYSDK_OFFSET(0x145276A0)
#define CLASS_3_2EA7C56C62D75B11_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x14527F10)
#define CLASS_3_2EA7C56C62D75B11_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14525C20)
#define CLASS_3_2EA7C56C62D75B11_METHOD_3_D03DF637496AD8AD_OFFSET UNITYSDK_OFFSET(0x14527010)
#define CLASS_3_2EA7C56C62D75B11_METHOD_3_E15012FCEFFB55D4_OFFSET UNITYSDK_OFFSET(0x14525CB0)
#define CLASS_3_2EA7C56C62D75B11_UPDATE_OFFSET UNITYSDK_OFFSET(0x14525A70)
#define CLASS_3_2EA7C56C62D75B11__CTOR_OFFSET UNITYSDK_OFFSET(0x14525BD0)

inline static constexpr unsigned int Class_3_2EA7C56C62D75B11_TypeDefinitionIndex = 81922;

class Class_3_2EA7C56C62D75B11 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	// static const ::System::String* Field_3_1; // 0x0
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2EA7C56C62D75B11__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_2EA7C56C62D75B11_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2EA7C56C62D75B11_UPDATE_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2EA7C56C62D75B11_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_E15012FCEFFB55D4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_2EA7C56C62D75B11_METHOD_3_E15012FCEFFB55D4_OFFSET))(a1);
	}

	static ::System::Void Method_3_93D2D92314B7A59E(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_2EA7C56C62D75B11_METHOD_3_93D2D92314B7A59E_OFFSET))(a1);
	}

	static ::System::Int32 Method_3_D03DF637496AD8AD(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::Class_3_E9CB61782B1950E4_Struct_2_66EE559EF62DCFBC a3, ::Class_3_E9CB61782B1950E4* a4)
	{
		return ((::System::Int32(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::Class_3_E9CB61782B1950E4_Struct_2_66EE559EF62DCFBC, ::Class_3_E9CB61782B1950E4*))((::PBYTE)hIl2Cpp + CLASS_3_2EA7C56C62D75B11_METHOD_3_D03DF637496AD8AD_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_3_2D58832A36FF5158(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_2EA7C56C62D75B11_METHOD_3_2D58832A36FF5158_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_0F7CBACDC48E7772(::Class_3_E9CB61782B1950E4* a1)
	{
		return ((::System::Void(*)(::Class_3_E9CB61782B1950E4*))((::PBYTE)hIl2Cpp + CLASS_3_2EA7C56C62D75B11_METHOD_3_0F7CBACDC48E7772_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_9AD84C136DF0D471(::Class_3_E9CB61782B1950E4* a1)
	{
		return ((::System::Boolean(*)(::Class_3_E9CB61782B1950E4*))((::PBYTE)hIl2Cpp + CLASS_3_2EA7C56C62D75B11_METHOD_3_9AD84C136DF0D471_OFFSET))(a1);
	}

	static ::System::Single Method_3_7331A1455F3F12A1(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_2EA7C56C62D75B11_METHOD_3_7331A1455F3F12A1_OFFSET))(a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_2EA7C56C62D75B11_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_99937B258F91C1C6(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_2EA7C56C62D75B11_METHOD_3_99937B258F91C1C6_OFFSET))(this, a1, a2);
	}
};
