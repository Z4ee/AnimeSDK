#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneFootPrint_FootType.h"
#include "unitysdk/MoleMole/Config/ShoesType.h"
#include "unitysdk/MoleMole/Config/TerrainMatType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_B62C942A2774BBB8;
class Class_3_C93CC3D2C2AC4067;
class Class_3_D360C43AE45B97C2;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }

#define CLASS_3_AABB325E0C213A37_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x14082560)
#define CLASS_3_AABB325E0C213A37_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x140827C0)
#define CLASS_3_AABB325E0C213A37_METHOD_3_09B5B6C6398DBC2F_OFFSET UNITYSDK_OFFSET(0x140855D0)
#define CLASS_3_AABB325E0C213A37_METHOD_3_0BF331D795773468_OFFSET UNITYSDK_OFFSET(0x14084BF0)
#define CLASS_3_AABB325E0C213A37_METHOD_3_0FEF192E5797A1AB_OFFSET UNITYSDK_OFFSET(0x14082970)
#define CLASS_3_AABB325E0C213A37_METHOD_3_24DFAB99D90FBB96_OFFSET UNITYSDK_OFFSET(0x14082AD0)
#define CLASS_3_AABB325E0C213A37_METHOD_3_2D58832A36FF5158_OFFSET UNITYSDK_OFFSET(0x14084B80)
#define CLASS_3_AABB325E0C213A37_METHOD_3_325AEF0B8A6B46C1_OFFSET UNITYSDK_OFFSET(0x14082D10)
#define CLASS_3_AABB325E0C213A37_METHOD_3_45BEB953186752BF_1_OFFSET UNITYSDK_OFFSET(0x14085190)
#define CLASS_3_AABB325E0C213A37_METHOD_3_45BEB953186752BF_OFFSET UNITYSDK_OFFSET(0x14084210)
#define CLASS_3_AABB325E0C213A37_METHOD_3_566C2E8654887332_OFFSET UNITYSDK_OFFSET(0x14084170)
#define CLASS_3_AABB325E0C213A37_METHOD_3_6B4BDAB2977ED330_OFFSET UNITYSDK_OFFSET(0x140848A0)
#define CLASS_3_AABB325E0C213A37_METHOD_3_6D19BB7866DAB074_OFFSET UNITYSDK_OFFSET(0x14083A10)
#define CLASS_3_AABB325E0C213A37_METHOD_3_826D78AFC3A54C43_OFFSET UNITYSDK_OFFSET(0x14083BA0)
#define CLASS_3_AABB325E0C213A37_METHOD_3_94AEC135B3D3BA4F_OFFSET UNITYSDK_OFFSET(0x14083D20)
#define CLASS_3_AABB325E0C213A37_METHOD_3_A11144519902A27F_OFFSET UNITYSDK_OFFSET(0x14084850)
#define CLASS_3_AABB325E0C213A37_METHOD_3_A359C1CC32968EBA_OFFSET UNITYSDK_OFFSET(0x14083590)
#define CLASS_3_AABB325E0C213A37_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x14084AF0)
#define CLASS_3_AABB325E0C213A37_METHOD_3_C913C3061DE574D4_OFFSET UNITYSDK_OFFSET(0x140841C0)
#define CLASS_3_AABB325E0C213A37_METHOD_3_C9A09AC66441DA43_OFFSET UNITYSDK_OFFSET(0x14084760)
#define CLASS_3_AABB325E0C213A37_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x140847C0)
#define CLASS_3_AABB325E0C213A37_METHOD_3_F48B45B7B15EFD6A_OFFSET UNITYSDK_OFFSET(0x14082C60)
#define CLASS_3_AABB325E0C213A37__CTOR_OFFSET UNITYSDK_OFFSET(0x14082920)

inline static constexpr unsigned int Class_3_AABB325E0C213A37_TypeDefinitionIndex = 52803;

class Class_3_AABB325E0C213A37 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AABB325E0C213A37__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_AABB325E0C213A37_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AABB325E0C213A37_LATEUPDATE_OFFSET))(this);
	}

	::System::Void Method_3_0FEF192E5797A1AB(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_AABB325E0C213A37_METHOD_3_0FEF192E5797A1AB_OFFSET))(this, a1);
	}

	static ::System::String* Method_3_F48B45B7B15EFD6A(::MoleMole::Config::ShoesType a1)
	{
		return ((::System::String*(*)(::MoleMole::Config::ShoesType))((::PBYTE)hIl2Cpp + CLASS_3_AABB325E0C213A37_METHOD_3_F48B45B7B15EFD6A_OFFSET))(a1);
	}

	static ::System::Void Method_3_325AEF0B8A6B46C1(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::MoleMole::Battle::Entity* a5)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_AABB325E0C213A37_METHOD_3_325AEF0B8A6B46C1_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_6D19BB7866DAB074(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_AABB325E0C213A37_METHOD_3_6D19BB7866DAB074_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_826D78AFC3A54C43(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_AABB325E0C213A37_METHOD_3_826D78AFC3A54C43_OFFSET))(a1);
	}

	static ::System::Void Method_3_94AEC135B3D3BA4F(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_AABB325E0C213A37_METHOD_3_94AEC135B3D3BA4F_OFFSET))(a1);
	}

	static ::System::Void Method_3_566C2E8654887332(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_AABB325E0C213A37_METHOD_3_566C2E8654887332_OFFSET))(a1, a2);
	}

	::System::Void Method_3_C913C3061DE574D4(::Class_2_B62C942A2774BBB8* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B62C942A2774BBB8*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_AABB325E0C213A37_METHOD_3_C913C3061DE574D4_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_3_45BEB953186752BF(::MoleMole::Config::TerrainMatType a1, ::System::String*& a2, ::System::String*& a3)
	{
		return ((::System::Void(*)(::MoleMole::Config::TerrainMatType, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_3_AABB325E0C213A37_METHOD_3_45BEB953186752BF_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_C9A09AC66441DA43(::System::Boolean a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_AABB325E0C213A37_METHOD_3_C9A09AC66441DA43_OFFSET))(a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AABB325E0C213A37_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_A11144519902A27F(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_AABB325E0C213A37_METHOD_3_A11144519902A27F_OFFSET))(this, a1);
	}

	::System::Void Method_3_24DFAB99D90FBB96(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_AABB325E0C213A37_METHOD_3_24DFAB99D90FBB96_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_6B4BDAB2977ED330(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::AnimatorZoneFootPrint_FootType a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::AnimatorZoneFootPrint_FootType, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_AABB325E0C213A37_METHOD_3_6B4BDAB2977ED330_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_AABB325E0C213A37_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_2D58832A36FF5158(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_AABB325E0C213A37_METHOD_3_2D58832A36FF5158_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_0BF331D795773468(::UnityEngine::Vector3 a1, ::MoleMole::Config::TerrainMatType& a2, ::MoleMole::Config::TerrainMatType& a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::MoleMole::Config::TerrainMatType&, ::MoleMole::Config::TerrainMatType&))((::PBYTE)hIl2Cpp + CLASS_3_AABB325E0C213A37_METHOD_3_0BF331D795773468_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_45BEB953186752BF_1(::MoleMole::Config::TerrainMatType a1, ::System::String*& a2, ::System::String*& a3)
	{
		return ((::System::Void(*)(::MoleMole::Config::TerrainMatType, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_3_AABB325E0C213A37_METHOD_3_45BEB953186752BF_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_A359C1CC32968EBA(::Class_3_D360C43AE45B97C2* a1, ::Class_3_C93CC3D2C2AC4067* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_D360C43AE45B97C2*, ::Class_3_C93CC3D2C2AC4067*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_AABB325E0C213A37_METHOD_3_A359C1CC32968EBA_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_09B5B6C6398DBC2F(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_AABB325E0C213A37_METHOD_3_09B5B6C6398DBC2F_OFFSET))(a1);
	}
};
