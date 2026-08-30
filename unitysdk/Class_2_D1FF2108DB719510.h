#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8A0BE42C657CE107.h"
#include "unitysdk/RPG/GameCore/EffectMutexType.h"
#include "unitysdk/RPG/GameCore/ModifierHitEffectStacking.h"
#include "unitysdk/RPG/GameCore/MonoEffectFlag.h"
#include "unitysdk/RPG/MVector3.h"

class Class_3_BB8B7764D3497776;
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class BaseModifierInstance_ModifierEffectData; }
namespace RPG::GameCore { class BaseModifierInstance_ModifierMutexEffectData; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_D1FF2108DB719510_METHOD_2_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0x15E34650)
#define CLASS_2_D1FF2108DB719510_METHOD_2_3F9A2067CC61030A_OFFSET UNITYSDK_OFFSET(0x15E368D0)
#define CLASS_2_D1FF2108DB719510_METHOD_2_47078A9DA737B94E_OFFSET UNITYSDK_OFFSET(0x15E35210)
#define CLASS_2_D1FF2108DB719510_METHOD_2_4D1F8491B7873DA8_OFFSET UNITYSDK_OFFSET(0x15E36300)
#define CLASS_2_D1FF2108DB719510_METHOD_2_50C737C4A9715F95_OFFSET UNITYSDK_OFFSET(0x15E34910)
#define CLASS_2_D1FF2108DB719510_METHOD_2_5608ED19F73C55F5_OFFSET UNITYSDK_OFFSET(0x15E35AA0)
#define CLASS_2_D1FF2108DB719510_METHOD_2_79C0238E3E70A730_OFFSET UNITYSDK_OFFSET(0x15E355A0)
#define CLASS_2_D1FF2108DB719510_METHOD_2_86D9A88811BF5A61_1_OFFSET UNITYSDK_OFFSET(0x15E35C50)
#define CLASS_2_D1FF2108DB719510_METHOD_2_86D9A88811BF5A61_OFFSET UNITYSDK_OFFSET(0x15E359F0)
#define CLASS_2_D1FF2108DB719510_METHOD_2_998E122F46014853_OFFSET UNITYSDK_OFFSET(0x15E35F80)
#define CLASS_2_D1FF2108DB719510_METHOD_2_9F11854D71EA541C_OFFSET UNITYSDK_OFFSET(0x15E36BE0)
#define CLASS_2_D1FF2108DB719510_METHOD_2_ABE7CF9FA1B8CCA3_OFFSET UNITYSDK_OFFSET(0x15E35D00)
#define CLASS_2_D1FF2108DB719510_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15E347A0)
#define CLASS_2_D1FF2108DB719510_METHOD_2_DBF55E589B45325A_OFFSET UNITYSDK_OFFSET(0x15E36F30)
#define CLASS_2_D1FF2108DB719510_METHOD_2_F9C3D0E0AC857968_OFFSET UNITYSDK_OFFSET(0x15E36D00)
#define CLASS_2_D1FF2108DB719510_METHOD_2_FD3EAA6E9D492B8E_OFFSET UNITYSDK_OFFSET(0x15E34800)
#define CLASS_2_D1FF2108DB719510__CTOR_OFFSET UNITYSDK_OFFSET(0x15E37090)

inline static constexpr unsigned int Class_2_D1FF2108DB719510_TypeDefinitionIndex = 53955;

class Class_2_D1FF2108DB719510 : public ::Class_1_8A0BE42C657CE107
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierEffectData*>* FGBGIGPPPBF; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierMutexEffectData*>* OCAKPBNOMAF; // 0x20
	::Class_3_BB8B7764D3497776* LIDGONNJNBJ; // 0x28
	::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierEffectData*>* AKALEKMKEPO; // 0x30
	::RPG::GameCore::GameEntity* KKFCJOJLGCO; // 0x38
	::System::Boolean BIDIOFGDNAG; // 0x40
	::System::Boolean FFDOAOKJPBN; // 0x41
	::System::Boolean HGDEJJIMNJB; // 0x42
	::System::Boolean BOJMCLECDLP; // 0x43
	::System::Int32 NDJIHOBNNAJ; // 0x44
	::RPG::GameCore::ModifierHitEffectStacking HBDCLCIDDMJ; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1FF2108DB719510__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0BDFAC56E6B704CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1FF2108DB719510_METHOD_2_0BDFAC56E6B704CB_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1FF2108DB719510_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_50C737C4A9715F95(::System::String* a1, ::System::String* a2, ::RPG::MVector3 a3, ::RPG::MVector3 a4, ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>* a5, ::RPG::GameCore::EffectMutexType a6, ::System::Single a7, ::System::Int32 a8, ::System::Boolean a9, ::System::Single a10, ::System::String* a11, ::System::Boolean a12)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::RPG::MVector3, ::RPG::MVector3, ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>*, ::RPG::GameCore::EffectMutexType, ::System::Single, ::System::Int32, ::System::Boolean, ::System::Single, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D1FF2108DB719510_METHOD_2_50C737C4A9715F95_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Void Method_2_47078A9DA737B94E(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D1FF2108DB719510_METHOD_2_47078A9DA737B94E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_86D9A88811BF5A61(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D1FF2108DB719510_METHOD_2_86D9A88811BF5A61_OFFSET))(this, a1);
	}

	::System::Void Method_2_86D9A88811BF5A61_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D1FF2108DB719510_METHOD_2_86D9A88811BF5A61_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_ABE7CF9FA1B8CCA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1FF2108DB719510_METHOD_2_ABE7CF9FA1B8CCA3_OFFSET))(this);
	}

	::System::Void Method_2_998E122F46014853()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1FF2108DB719510_METHOD_2_998E122F46014853_OFFSET))(this);
	}

	::System::Void Method_2_4D1F8491B7873DA8(::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierEffectData*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierEffectData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D1FF2108DB719510_METHOD_2_4D1F8491B7873DA8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9F11854D71EA541C(::RPG::GameCore::BaseModifierInstance_ModifierEffectData* a1, ::RPG::Client::MonoEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseModifierInstance_ModifierEffectData*, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CLASS_2_D1FF2108DB719510_METHOD_2_9F11854D71EA541C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5608ED19F73C55F5(::RPG::GameCore::BaseModifierInstance_ModifierEffectData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseModifierInstance_ModifierEffectData*))((::PBYTE)hIl2Cpp + CLASS_2_D1FF2108DB719510_METHOD_2_5608ED19F73C55F5_OFFSET))(this, a1);
	}

	::System::Void Method_2_3F9A2067CC61030A(::RPG::GameCore::BaseModifierInstance_ModifierEffectData* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseModifierInstance_ModifierEffectData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D1FF2108DB719510_METHOD_2_3F9A2067CC61030A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F9C3D0E0AC857968(::RPG::GameCore::BaseModifierInstance_ModifierEffectData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseModifierInstance_ModifierEffectData*))((::PBYTE)hIl2Cpp + CLASS_2_D1FF2108DB719510_METHOD_2_F9C3D0E0AC857968_OFFSET))(this, a1);
	}

	::System::Void Method_2_79C0238E3E70A730(::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierEffectData*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierEffectData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D1FF2108DB719510_METHOD_2_79C0238E3E70A730_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FD3EAA6E9D492B8E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D1FF2108DB719510_METHOD_2_FD3EAA6E9D492B8E_OFFSET))(this, a1);
	}

	::System::Void Method_2_DBF55E589B45325A(::RPG::GameCore::BaseModifierInstance_ModifierEffectData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseModifierInstance_ModifierEffectData*))((::PBYTE)hIl2Cpp + CLASS_2_D1FF2108DB719510_METHOD_2_DBF55E589B45325A_OFFSET))(this, a1);
	}
};
