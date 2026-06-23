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

#define CLASS_3_2EA7C56C62D75B11_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x140E7430)
#define CLASS_3_2EA7C56C62D75B11_METHOD_3_1564A841DD1363C5_OFFSET UNITYSDK_OFFSET(0x140E8FB0)
#define CLASS_3_2EA7C56C62D75B11_METHOD_3_2D58832A36FF5158_OFFSET UNITYSDK_OFFSET(0x140E7A20)
#define CLASS_3_2EA7C56C62D75B11_METHOD_3_52A3FEDD63707B13_OFFSET UNITYSDK_OFFSET(0x140E8E80)
#define CLASS_3_2EA7C56C62D75B11_METHOD_3_9AD84C136DF0D471_OFFSET UNITYSDK_OFFSET(0x140E9A80)
#define CLASS_3_2EA7C56C62D75B11_METHOD_3_A096A014E45DA2D0_OFFSET UNITYSDK_OFFSET(0x140E9880)
#define CLASS_3_2EA7C56C62D75B11_METHOD_3_A9660F1F52BB9DAF_OFFSET UNITYSDK_OFFSET(0x140E7F60)
#define CLASS_3_2EA7C56C62D75B11_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x140EA2E0)
#define CLASS_3_2EA7C56C62D75B11_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x140E8F20)
#define CLASS_3_2EA7C56C62D75B11_METHOD_3_D03DF637496AD8AD_OFFSET UNITYSDK_OFFSET(0x140E93A0)
#define CLASS_3_2EA7C56C62D75B11_METHOD_3_E2B6F1F20E5DF7A7_OFFSET UNITYSDK_OFFSET(0x140E7A90)
#define CLASS_3_2EA7C56C62D75B11_UPDATE_OFFSET UNITYSDK_OFFSET(0x140E7870)
#define CLASS_3_2EA7C56C62D75B11__CTOR_OFFSET UNITYSDK_OFFSET(0x140E79D0)

inline static constexpr unsigned int Class_3_2EA7C56C62D75B11_TypeDefinitionIndex = 66783;

class Class_3_2EA7C56C62D75B11 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	// static const ::System::String* Field_3_0; // 0x0
	::Nap::NapECS::EcsFilter* Field_3_1; // 0x20

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

	::System::Void Method_3_2D58832A36FF5158(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_2EA7C56C62D75B11_METHOD_3_2D58832A36FF5158_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_E2B6F1F20E5DF7A7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_2EA7C56C62D75B11_METHOD_3_E2B6F1F20E5DF7A7_OFFSET))(a1);
	}

	static ::System::Single Method_3_52A3FEDD63707B13(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_2EA7C56C62D75B11_METHOD_3_52A3FEDD63707B13_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2EA7C56C62D75B11_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_1564A841DD1363C5(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_2EA7C56C62D75B11_METHOD_3_1564A841DD1363C5_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_3_A9660F1F52BB9DAF(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_2EA7C56C62D75B11_METHOD_3_A9660F1F52BB9DAF_OFFSET))(a1);
	}

	static ::System::Int32 Method_3_D03DF637496AD8AD(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::Class_3_E9CB61782B1950E4_Struct_2_66EE559EF62DCFBC a3, ::Class_3_E9CB61782B1950E4* a4)
	{
		return ((::System::Int32(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::Class_3_E9CB61782B1950E4_Struct_2_66EE559EF62DCFBC, ::Class_3_E9CB61782B1950E4*))((::PBYTE)hIl2Cpp + CLASS_3_2EA7C56C62D75B11_METHOD_3_D03DF637496AD8AD_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_A096A014E45DA2D0(::Class_3_E9CB61782B1950E4* a1)
	{
		return ((::System::Void(*)(::Class_3_E9CB61782B1950E4*))((::PBYTE)hIl2Cpp + CLASS_3_2EA7C56C62D75B11_METHOD_3_A096A014E45DA2D0_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_9AD84C136DF0D471(::Class_3_E9CB61782B1950E4* a1)
	{
		return ((::System::Boolean(*)(::Class_3_E9CB61782B1950E4*))((::PBYTE)hIl2Cpp + CLASS_3_2EA7C56C62D75B11_METHOD_3_9AD84C136DF0D471_OFFSET))(a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_2EA7C56C62D75B11_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}
};
