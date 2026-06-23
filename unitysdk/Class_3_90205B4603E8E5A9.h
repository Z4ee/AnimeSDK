#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/MoleMole/Battle/DebugColor.h"
#include "unitysdk/MoleMole/Config/CharacterDamageDecalType.h"
#include "unitysdk/MoleMole/Config/DamageDecalData.h"
#include "unitysdk/MoleMole/Config/RayByAxis.h"
#include "unitysdk/MoleMole/Config/Vector3Range.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_46B0B62AFBF0E5EF;
class Class_3_D6DA183EF60F02C8;
namespace MoleMole { class MonoEffectPluginHitWall; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class HitWallCameraShakeConfig; }
namespace MoleMole::Config { class RaycastHitWallEffectConfig; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define CLASS_3_90205B4603E8E5A9_ANIMIKPOSTUPDATE_OFFSET UNITYSDK_OFFSET(0x165A7C90)
#define CLASS_3_90205B4603E8E5A9_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x165A78A0)
#define CLASS_3_90205B4603E8E5A9_METHOD_3_02C6311F840A5D40_OFFSET UNITYSDK_OFFSET(0x165A95C0)
#define CLASS_3_90205B4603E8E5A9_METHOD_3_12DBAB25BC3E66EC_OFFSET UNITYSDK_OFFSET(0x165ABCD0)
#define CLASS_3_90205B4603E8E5A9_METHOD_3_12E2584290784D11_OFFSET UNITYSDK_OFFSET(0x165A83E0)
#define CLASS_3_90205B4603E8E5A9_METHOD_3_1961CA28063C4D55_OFFSET UNITYSDK_OFFSET(0x165A8620)
#define CLASS_3_90205B4603E8E5A9_METHOD_3_2F4F7FB74439CD85_OFFSET UNITYSDK_OFFSET(0x165A8590)
#define CLASS_3_90205B4603E8E5A9_METHOD_3_4D85E8BC93918549_OFFSET UNITYSDK_OFFSET(0x165A9DC0)
#define CLASS_3_90205B4603E8E5A9_METHOD_3_64E40F8619B5612D_OFFSET UNITYSDK_OFFSET(0x165A8380)
#define CLASS_3_90205B4603E8E5A9_METHOD_3_6DDF438D14324D47_OFFSET UNITYSDK_OFFSET(0x165AA480)
#define CLASS_3_90205B4603E8E5A9_METHOD_3_8397F376551B80AB_OFFSET UNITYSDK_OFFSET(0x165AA6A0)
#define CLASS_3_90205B4603E8E5A9_METHOD_3_9F65730115F696E9_OFFSET UNITYSDK_OFFSET(0x165A9610)
#define CLASS_3_90205B4603E8E5A9_METHOD_3_A896F45C12568634_OFFSET UNITYSDK_OFFSET(0x165A7FF0)
#define CLASS_3_90205B4603E8E5A9_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x165AA3F0)
#define CLASS_3_90205B4603E8E5A9_METHOD_3_BB0ECC64FFD1F25D_OFFSET UNITYSDK_OFFSET(0x165ABD50)
#define CLASS_3_90205B4603E8E5A9_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x165ABF70)
#define CLASS_3_90205B4603E8E5A9_METHOD_3_D05CE4638BC98855_OFFSET UNITYSDK_OFFSET(0x165A8B10)
#define CLASS_3_90205B4603E8E5A9_METHOD_3_F5B72F1ABDA6A04E_OFFSET UNITYSDK_OFFSET(0x165A8490)
#define CLASS_3_90205B4603E8E5A9_METHOD_3_FDE8C5B43C911B7B_OFFSET UNITYSDK_OFFSET(0x165A87A0)
#define CLASS_3_90205B4603E8E5A9__CTOR_OFFSET UNITYSDK_OFFSET(0x165A7FA0)

inline static constexpr unsigned int Class_3_90205B4603E8E5A9_TypeDefinitionIndex = 45191;

class Class_3_90205B4603E8E5A9 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	static ::Nap::NapECS::EcsFilter** StaticGet_Field_3_2()
	{
		return (::Nap::NapECS::EcsFilter**)Il2CppClass::FromTypeDefinitionIndex(Class_3_90205B4603E8E5A9_TypeDefinitionIndex)->GetStaticField(0x48030);
	}
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20
	::Nap::NapECS::EcsFilter* Field_3_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_90205B4603E8E5A9__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_90205B4603E8E5A9_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void AnimIKPostUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_90205B4603E8E5A9_ANIMIKPOSTUPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_A896F45C12568634(::System::String* a1, ::MoleMole::Config::HitWallCameraShakeConfig* a2, ::MoleMole::Battle::Entity* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::String*, ::MoleMole::Config::HitWallCameraShakeConfig*, ::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_90205B4603E8E5A9_METHOD_3_A896F45C12568634_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_3_64E40F8619B5612D(::MoleMole::MonoEffectPluginHitWall* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::MonoEffectPluginHitWall*))((::PBYTE)hIl2Cpp + CLASS_3_90205B4603E8E5A9_METHOD_3_64E40F8619B5612D_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_12E2584290784D11(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_90205B4603E8E5A9_METHOD_3_12E2584290784D11_OFFSET))(a1);
	}

	static ::System::Void Method_3_F5B72F1ABDA6A04E(::System::Action_2<::System::UInt32, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::System::Action_2<::System::UInt32, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_3_90205B4603E8E5A9_METHOD_3_F5B72F1ABDA6A04E_OFFSET))(a1);
	}

	static ::System::Void Method_3_2F4F7FB74439CD85(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Color a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_90205B4603E8E5A9_METHOD_3_2F4F7FB74439CD85_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_1961CA28063C4D55(::MoleMole::MonoEffectPluginHitWall* a1, ::UnityEngine::RaycastHit a2, ::UnityEngine::RaycastHit a3, ::UnityEngine::Vector3 a4, ::MoleMole::Config::Vector3Range a5)
	{
		return ((::System::Void(*)(::MoleMole::MonoEffectPluginHitWall*, ::UnityEngine::RaycastHit, ::UnityEngine::RaycastHit, ::UnityEngine::Vector3, ::MoleMole::Config::Vector3Range))((::PBYTE)hIl2Cpp + CLASS_3_90205B4603E8E5A9_METHOD_3_1961CA28063C4D55_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_3_FDE8C5B43C911B7B(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::RaycastHitWallEffectConfig* a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::RaycastHitWallEffectConfig*, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_3_90205B4603E8E5A9_METHOD_3_FDE8C5B43C911B7B_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_3_9F65730115F696E9(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::HitWallCameraShakeConfig* a2, ::MoleMole::Config::RaycastHitWallEffectConfig* a3, ::UnityEngine::RaycastHit& a4, ::UnityEngine::Vector3& a5, ::UnityEngine::Vector3& a6, ::MoleMole::Battle::DebugColor a7, ::MoleMole::Config::CharacterDamageDecalType a8, ::Il2CppArray<::UnityEngine::RaycastHit>* a9)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::HitWallCameraShakeConfig*, ::MoleMole::Config::RaycastHitWallEffectConfig*, ::UnityEngine::RaycastHit&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::MoleMole::Battle::DebugColor, ::MoleMole::Config::CharacterDamageDecalType, ::Il2CppArray<::UnityEngine::RaycastHit>*))((::PBYTE)hIl2Cpp + CLASS_3_90205B4603E8E5A9_METHOD_3_9F65730115F696E9_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	static ::System::Void Method_3_4D85E8BC93918549(::Class_3_46B0B62AFBF0E5EF* a1, ::Class_3_D6DA183EF60F02C8* a2)
	{
		return ((::System::Void(*)(::Class_3_46B0B62AFBF0E5EF*, ::Class_3_D6DA183EF60F02C8*))((::PBYTE)hIl2Cpp + CLASS_3_90205B4603E8E5A9_METHOD_3_4D85E8BC93918549_OFFSET))(a1, a2);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_90205B4603E8E5A9_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_6DDF438D14324D47(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_90205B4603E8E5A9_METHOD_3_6DDF438D14324D47_OFFSET))(a1);
	}

	static ::System::Void Method_3_8397F376551B80AB(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::HitWallCameraShakeConfig* a2, ::MoleMole::Config::RaycastHitWallEffectConfig* a3, ::System::Action_1<::MoleMole::Battle::Entity*>* a4, ::MoleMole::Battle::Entity* a5, ::System::Boolean a6, ::MoleMole::Battle::DebugColor a7, ::MoleMole::Config::DamageDecalData a8, ::Il2CppArray<::UnityEngine::RaycastHit>* a9)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::HitWallCameraShakeConfig*, ::MoleMole::Config::RaycastHitWallEffectConfig*, ::System::Action_1<::MoleMole::Battle::Entity*>*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::MoleMole::Battle::DebugColor, ::MoleMole::Config::DamageDecalData, ::Il2CppArray<::UnityEngine::RaycastHit>*))((::PBYTE)hIl2Cpp + CLASS_3_90205B4603E8E5A9_METHOD_3_8397F376551B80AB_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	static ::System::Boolean Method_3_12DBAB25BC3E66EC(::MoleMole::Battle::Entity* a1, ::UnityEngine::Vector3 a2, ::MoleMole::Config::RaycastHitWallEffectConfig* a3, ::System::Action_1<::MoleMole::Battle::Entity*>* a4, ::UnityEngine::RaycastHit& a5)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::UnityEngine::Vector3, ::MoleMole::Config::RaycastHitWallEffectConfig*, ::System::Action_1<::MoleMole::Battle::Entity*>*, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_3_90205B4603E8E5A9_METHOD_3_12DBAB25BC3E66EC_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::UnityEngine::Vector3 Method_3_02C6311F840A5D40(::MoleMole::Config::RayByAxis a1)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Config::RayByAxis))((::PBYTE)hIl2Cpp + CLASS_3_90205B4603E8E5A9_METHOD_3_02C6311F840A5D40_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_D05CE4638BC98855(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::RaycastHitWallEffectConfig* a2, ::UnityEngine::Transform*& a3, ::UnityEngine::Transform*& a4)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::RaycastHitWallEffectConfig*, ::UnityEngine::Transform*&, ::UnityEngine::Transform*&))((::PBYTE)hIl2Cpp + CLASS_3_90205B4603E8E5A9_METHOD_3_D05CE4638BC98855_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_BB0ECC64FFD1F25D(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_90205B4603E8E5A9_METHOD_3_BB0ECC64FFD1F25D_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_90205B4603E8E5A9_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
