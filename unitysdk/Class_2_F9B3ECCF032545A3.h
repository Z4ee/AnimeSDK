#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FF344C9BB7B0D5E2.h"
#include "unitysdk/Class_2_FB5FAC13BADBFA34_ForceKillMarkPanelType.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"
#include "unitysdk/UnityEngine/Color.h"

namespace RPG::Client { class DefaultForceKillMarkData; }
namespace RPG::Client { class ForceKillMarkDataProvider; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_F9B3ECCF032545A3_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB48C50)
#define CLASS_2_F9B3ECCF032545A3_METHOD_2_7CB79123E3F0EF3E_OFFSET UNITYSDK_OFFSET(0xBB48CD0)
#define CLASS_2_F9B3ECCF032545A3_METHOD_2_861970C5F2C21AB2_OFFSET UNITYSDK_OFFSET(0xBB489E0)
#define CLASS_2_F9B3ECCF032545A3_METHOD_2_8E64588F652B046C_OFFSET UNITYSDK_OFFSET(0xBB48F30)
#define CLASS_2_F9B3ECCF032545A3_METHOD_2_A83603CB72D01ADD_OFFSET UNITYSDK_OFFSET(0xBB48940)
#define CLASS_2_F9B3ECCF032545A3_METHOD_2_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0xBB48DA0)
#define CLASS_2_F9B3ECCF032545A3_METHOD_2_BA235EC830FD5AE1_OFFSET UNITYSDK_OFFSET(0xBB48D50)
#define CLASS_2_F9B3ECCF032545A3_METHOD_2_CEE772DE95055C01_OFFSET UNITYSDK_OFFSET(0xBB48A80)
#define CLASS_2_F9B3ECCF032545A3_METHOD_2_D98E5B2D8115CA7E_OFFSET UNITYSDK_OFFSET(0xBB48BB0)
#define CLASS_2_F9B3ECCF032545A3_METHOD_2_DF606F1BC273FE84_OFFSET UNITYSDK_OFFSET(0xBB49670)
#define CLASS_2_F9B3ECCF032545A3_METHOD_2_E63684973A4EB8C9_1_OFFSET UNITYSDK_OFFSET(0xBB491D0)
#define CLASS_2_F9B3ECCF032545A3_METHOD_2_E63684973A4EB8C9_2_OFFSET UNITYSDK_OFFSET(0xBB49420)
#define CLASS_2_F9B3ECCF032545A3_METHOD_2_E63684973A4EB8C9_OFFSET UNITYSDK_OFFSET(0xBB48F80)
#define CLASS_2_F9B3ECCF032545A3__CTOR_OFFSET UNITYSDK_OFFSET(0xBB487D0)

inline static constexpr unsigned int Class_2_F9B3ECCF032545A3_TypeDefinitionIndex = 71609;

class Class_2_F9B3ECCF032545A3 : public ::Class_1_FF344C9BB7B0D5E2
{
public:
	::RPG::Client::ForceKillMarkDataProvider* DILADJDFMFG; // 0x18
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x20
	::System::Action_1<::RPG::Client::ForceKillMarkDataProvider*>* DBFINCLPBKP; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9B3ECCF032545A3__CTOR_OFFSET))(this);
	}

	static ::Struct_2_96F8F0A04B900A9E Method_2_A83603CB72D01ADD(::Class_2_FB5FAC13BADBFA34_ForceKillMarkPanelType a1)
	{
		return ((::Struct_2_96F8F0A04B900A9E(*)(::Class_2_FB5FAC13BADBFA34_ForceKillMarkPanelType))((::PBYTE)hIl2Cpp + CLASS_2_F9B3ECCF032545A3_METHOD_2_A83603CB72D01ADD_OFFSET))(a1);
	}

	::System::Single Method_2_861970C5F2C21AB2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9B3ECCF032545A3_METHOD_2_861970C5F2C21AB2_OFFSET))(this);
	}

	::System::Void Method_2_CEE772DE95055C01(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F9B3ECCF032545A3_METHOD_2_CEE772DE95055C01_OFFSET))(this, a1);
	}

	::System::Void Method_2_D98E5B2D8115CA7E(::System::Action_1<::RPG::Client::ForceKillMarkDataProvider*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::ForceKillMarkDataProvider*>*))((::PBYTE)hIl2Cpp + CLASS_2_F9B3ECCF032545A3_METHOD_2_D98E5B2D8115CA7E_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9B3ECCF032545A3_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_7CB79123E3F0EF3E(::UnityEngine::Color a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_2_F9B3ECCF032545A3_METHOD_2_7CB79123E3F0EF3E_OFFSET))(this, a1);
	}

	::System::Void Method_2_BA235EC830FD5AE1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_F9B3ECCF032545A3_METHOD_2_BA235EC830FD5AE1_OFFSET))(this, a1);
	}

	::System::Void Method_2_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9B3ECCF032545A3_METHOD_2_B7F8E0B4AF22DEA3_OFFSET))(this);
	}

	::System::Void Method_2_E63684973A4EB8C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F9B3ECCF032545A3_METHOD_2_E63684973A4EB8C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_E63684973A4EB8C9_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F9B3ECCF032545A3_METHOD_2_E63684973A4EB8C9_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_E63684973A4EB8C9_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F9B3ECCF032545A3_METHOD_2_E63684973A4EB8C9_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF606F1BC273FE84(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F9B3ECCF032545A3_METHOD_2_DF606F1BC273FE84_OFFSET))(this, a1);
	}

	::RPG::Client::DefaultForceKillMarkData* Method_2_8E64588F652B046C()
	{
		return ((::RPG::Client::DefaultForceKillMarkData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9B3ECCF032545A3_METHOD_2_8E64588F652B046C_OFFSET))(this);
	}
};
