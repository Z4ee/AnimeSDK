#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneFootPrint_FootType.h"
#include "unitysdk/MoleMole/Config/ShoesType.h"
#include "unitysdk/MoleMole/Config/TerrainMatType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_B62C942A2774BBB8;
class Class_3_D360C43AE45B97C2;
class Class_3_DFD5D1FDB9D2A4AC;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }

#define CLASS_3_4AB947D75F764EE0_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x11893670)
#define CLASS_3_4AB947D75F764EE0_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x118938D0)
#define CLASS_3_4AB947D75F764EE0_METHOD_3_0893DE912F93A598_OFFSET UNITYSDK_OFFSET(0x11894D00)
#define CLASS_3_4AB947D75F764EE0_METHOD_3_0FEF192E5797A1AB_OFFSET UNITYSDK_OFFSET(0x118943C0)
#define CLASS_3_4AB947D75F764EE0_METHOD_3_24DFAB99D90FBB96_OFFSET UNITYSDK_OFFSET(0x11894520)
#define CLASS_3_4AB947D75F764EE0_METHOD_3_25CF7643BB8FAB29_OFFSET UNITYSDK_OFFSET(0x118946B0)
#define CLASS_3_4AB947D75F764EE0_METHOD_3_2D58832A36FF5158_OFFSET UNITYSDK_OFFSET(0x11894C90)
#define CLASS_3_4AB947D75F764EE0_METHOD_3_45BEB953186752BF_1_OFFSET UNITYSDK_OFFSET(0x11895AD0)
#define CLASS_3_4AB947D75F764EE0_METHOD_3_45BEB953186752BF_OFFSET UNITYSDK_OFFSET(0x11896010)
#define CLASS_3_4AB947D75F764EE0_METHOD_3_52A05FA00D5E3BD7_OFFSET UNITYSDK_OFFSET(0x11896440)
#define CLASS_3_4AB947D75F764EE0_METHOD_3_566C2E8654887332_OFFSET UNITYSDK_OFFSET(0x118959F0)
#define CLASS_3_4AB947D75F764EE0_METHOD_3_6B4BDAB2977ED330_OFFSET UNITYSDK_OFFSET(0x11896650)
#define CLASS_3_4AB947D75F764EE0_METHOD_3_6D19BB7866DAB074_OFFSET UNITYSDK_OFFSET(0x118940B0)
#define CLASS_3_4AB947D75F764EE0_METHOD_3_826D78AFC3A54C43_OFFSET UNITYSDK_OFFSET(0x11894240)
#define CLASS_3_4AB947D75F764EE0_METHOD_3_9D5C20EB6286BB7C_OFFSET UNITYSDK_OFFSET(0x11893BE0)
#define CLASS_3_4AB947D75F764EE0_METHOD_3_A11144519902A27F_OFFSET UNITYSDK_OFFSET(0x11894C40)
#define CLASS_3_4AB947D75F764EE0_METHOD_3_B8AEFD851885E959_OFFSET UNITYSDK_OFFSET(0x11895580)
#define CLASS_3_4AB947D75F764EE0_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x11895A40)
#define CLASS_3_4AB947D75F764EE0_METHOD_3_C913C3061DE574D4_OFFSET UNITYSDK_OFFSET(0x11896600)
#define CLASS_3_4AB947D75F764EE0_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11893B50)
#define CLASS_3_4AB947D75F764EE0_METHOD_3_DDCBB1EF892FBA58_OFFSET UNITYSDK_OFFSET(0x11893C40)
#define CLASS_3_4AB947D75F764EE0_METHOD_3_F48B45B7B15EFD6A_OFFSET UNITYSDK_OFFSET(0x11893A80)
#define CLASS_3_4AB947D75F764EE0__CTOR_OFFSET UNITYSDK_OFFSET(0x11893A30)

inline static constexpr unsigned int Class_3_4AB947D75F764EE0_TypeDefinitionIndex = 81965;

class Class_3_4AB947D75F764EE0 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4AB947D75F764EE0__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_4AB947D75F764EE0_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4AB947D75F764EE0_LATEUPDATE_OFFSET))(this);
	}

	static ::System::String* Method_3_F48B45B7B15EFD6A(::MoleMole::Config::ShoesType a1)
	{
		return ((::System::String*(*)(::MoleMole::Config::ShoesType))((::PBYTE)hIl2Cpp + CLASS_3_4AB947D75F764EE0_METHOD_3_F48B45B7B15EFD6A_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4AB947D75F764EE0_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_9D5C20EB6286BB7C(::System::Boolean a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_4AB947D75F764EE0_METHOD_3_9D5C20EB6286BB7C_OFFSET))(a1, a2);
	}

	::System::Void Method_3_6D19BB7866DAB074(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_4AB947D75F764EE0_METHOD_3_6D19BB7866DAB074_OFFSET))(this, a1);
	}

	::System::Void Method_3_0FEF192E5797A1AB(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_4AB947D75F764EE0_METHOD_3_0FEF192E5797A1AB_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_25CF7643BB8FAB29(::UnityEngine::Vector3 a1, ::MoleMole::Config::TerrainMatType& a2, ::MoleMole::Config::TerrainMatType& a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::MoleMole::Config::TerrainMatType&, ::MoleMole::Config::TerrainMatType&))((::PBYTE)hIl2Cpp + CLASS_3_4AB947D75F764EE0_METHOD_3_25CF7643BB8FAB29_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_A11144519902A27F(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_4AB947D75F764EE0_METHOD_3_A11144519902A27F_OFFSET))(this, a1);
	}

	::System::Void Method_3_2D58832A36FF5158(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_4AB947D75F764EE0_METHOD_3_2D58832A36FF5158_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_0893DE912F93A598(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::MoleMole::Battle::Entity* a5)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_4AB947D75F764EE0_METHOD_3_0893DE912F93A598_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_566C2E8654887332(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_4AB947D75F764EE0_METHOD_3_566C2E8654887332_OFFSET))(a1, a2);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_4AB947D75F764EE0_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_B8AEFD851885E959(::Class_3_D360C43AE45B97C2* a1, ::Class_3_DFD5D1FDB9D2A4AC* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_D360C43AE45B97C2*, ::Class_3_DFD5D1FDB9D2A4AC*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_4AB947D75F764EE0_METHOD_3_B8AEFD851885E959_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_52A05FA00D5E3BD7(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_4AB947D75F764EE0_METHOD_3_52A05FA00D5E3BD7_OFFSET))(a1);
	}

	static ::System::Void Method_3_45BEB953186752BF(::MoleMole::Config::TerrainMatType a1, ::System::String*& a2, ::System::String*& a3)
	{
		return ((::System::Void(*)(::MoleMole::Config::TerrainMatType, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_3_4AB947D75F764EE0_METHOD_3_45BEB953186752BF_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_DDCBB1EF892FBA58(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_4AB947D75F764EE0_METHOD_3_DDCBB1EF892FBA58_OFFSET))(a1);
	}

	::System::Void Method_3_24DFAB99D90FBB96(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_4AB947D75F764EE0_METHOD_3_24DFAB99D90FBB96_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_826D78AFC3A54C43(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_4AB947D75F764EE0_METHOD_3_826D78AFC3A54C43_OFFSET))(a1);
	}

	::System::Void Method_3_C913C3061DE574D4(::Class_2_B62C942A2774BBB8* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B62C942A2774BBB8*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_4AB947D75F764EE0_METHOD_3_C913C3061DE574D4_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_3_6B4BDAB2977ED330(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::AnimatorZoneFootPrint_FootType a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::AnimatorZoneFootPrint_FootType, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_4AB947D75F764EE0_METHOD_3_6B4BDAB2977ED330_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_45BEB953186752BF_1(::MoleMole::Config::TerrainMatType a1, ::System::String*& a2, ::System::String*& a3)
	{
		return ((::System::Void(*)(::MoleMole::Config::TerrainMatType, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_3_4AB947D75F764EE0_METHOD_3_45BEB953186752BF_1_OFFSET))(a1, a2, a3);
	}
};
