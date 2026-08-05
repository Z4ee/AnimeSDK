#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/Class_3_0339E27AE29FFBC1_Enum_3_57926CA561125BF5.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_0339E27AE29FFBC1;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace UnityEngine { class Animator; }

#define CLASS_3_70BDF4AA7459A0F1_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x15992500)
#define CLASS_3_70BDF4AA7459A0F1_METHOD_3_318C4155D9C5DE14_OFFSET UNITYSDK_OFFSET(0x15992FA0)
#define CLASS_3_70BDF4AA7459A0F1_METHOD_3_33E38367D69D2421_OFFSET UNITYSDK_OFFSET(0x15993430)
#define CLASS_3_70BDF4AA7459A0F1_METHOD_3_5F4DFAC2D01A742C_OFFSET UNITYSDK_OFFSET(0x15992940)
#define CLASS_3_70BDF4AA7459A0F1_METHOD_3_6AA559C978C45163_OFFSET UNITYSDK_OFFSET(0x159935C0)
#define CLASS_3_70BDF4AA7459A0F1_METHOD_3_6CBC5480EF53D522_OFFSET UNITYSDK_OFFSET(0x15992D00)
#define CLASS_3_70BDF4AA7459A0F1_METHOD_3_90174B2E9468FC00_OFFSET UNITYSDK_OFFSET(0x159932C0)
#define CLASS_3_70BDF4AA7459A0F1_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x15992F10)
#define CLASS_3_70BDF4AA7459A0F1_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x159933A0)
#define CLASS_3_70BDF4AA7459A0F1_METHOD_3_E800CA804B13CF7E_OFFSET UNITYSDK_OFFSET(0x15992D20)
#define CLASS_3_70BDF4AA7459A0F1_METHOD_3_FEF1ED0A798B7642_OFFSET UNITYSDK_OFFSET(0x15993270)
#define CLASS_3_70BDF4AA7459A0F1_UPDATE_OFFSET UNITYSDK_OFFSET(0x15992790)
#define CLASS_3_70BDF4AA7459A0F1__CTOR_OFFSET UNITYSDK_OFFSET(0x159928F0)

inline static constexpr unsigned int Class_3_70BDF4AA7459A0F1_TypeDefinitionIndex = 74212;

class Class_3_70BDF4AA7459A0F1 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	// static const ::System::Single Field_3_0; // 0x0
	::Nap::NapECS::EcsFilter* Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70BDF4AA7459A0F1__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_70BDF4AA7459A0F1_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70BDF4AA7459A0F1_UPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_5F4DFAC2D01A742C(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_70BDF4AA7459A0F1_METHOD_3_5F4DFAC2D01A742C_OFFSET))(a1);
	}

	static ::System::Void Method_3_6CBC5480EF53D522(::Class_3_0339E27AE29FFBC1* a1, ::Class_3_0339E27AE29FFBC1_Enum_3_57926CA561125BF5 a2)
	{
		return ((::System::Void(*)(::Class_3_0339E27AE29FFBC1*, ::Class_3_0339E27AE29FFBC1_Enum_3_57926CA561125BF5))((::PBYTE)hIl2Cpp + CLASS_3_70BDF4AA7459A0F1_METHOD_3_6CBC5480EF53D522_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_3_E800CA804B13CF7E()
	{
		return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + CLASS_3_70BDF4AA7459A0F1_METHOD_3_E800CA804B13CF7E_OFFSET))();
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_70BDF4AA7459A0F1_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_318C4155D9C5DE14(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_70BDF4AA7459A0F1_METHOD_3_318C4155D9C5DE14_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_FEF1ED0A798B7642(::Class_3_0339E27AE29FFBC1* a1, ::UnityEngine::Animator* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_0339E27AE29FFBC1*, ::UnityEngine::Animator*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_70BDF4AA7459A0F1_METHOD_3_FEF1ED0A798B7642_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_90174B2E9468FC00(::Class_3_0339E27AE29FFBC1* a1)
	{
		return ((::System::Boolean(*)(::Class_3_0339E27AE29FFBC1*))((::PBYTE)hIl2Cpp + CLASS_3_70BDF4AA7459A0F1_METHOD_3_90174B2E9468FC00_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70BDF4AA7459A0F1_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_33E38367D69D2421(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_70BDF4AA7459A0F1_METHOD_3_33E38367D69D2421_OFFSET))(a1);
	}

	static ::System::Void Method_3_6AA559C978C45163(::Class_3_0339E27AE29FFBC1* a1, ::MoleMole::Battle::Entity* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::Class_3_0339E27AE29FFBC1*, ::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_70BDF4AA7459A0F1_METHOD_3_6AA559C978C45163_OFFSET))(a1, a2, a3);
	}
};
