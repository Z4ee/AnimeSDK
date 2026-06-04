#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8A0BE42C657CE107.h"
#include "unitysdk/RPG/GameCore/EffectMutexType.h"
#include "unitysdk/RPG/GameCore/ModifierHitEffectStacking.h"
#include "unitysdk/RPG/GameCore/MonoEffectFlag.h"
#include "unitysdk/RPG/MVector3.h"

class Class_3_795ECCED069014FF;
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class BaseModifierInstance_ModifierEffectData; }
namespace RPG::GameCore { class BaseModifierInstance_ModifierMutexEffectData; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_4FB5A11EAEA76274_METHOD_2_0181F459ACF184C5_OFFSET UNITYSDK_OFFSET(0xB4FFA30)
#define CLASS_2_4FB5A11EAEA76274_METHOD_2_3F9A2067CC61030A_OFFSET UNITYSDK_OFFSET(0xB501890)
#define CLASS_2_4FB5A11EAEA76274_METHOD_2_47078A9DA737B94E_OFFSET UNITYSDK_OFFSET(0xB500210)
#define CLASS_2_4FB5A11EAEA76274_METHOD_2_4D1F8491B7873DA8_OFFSET UNITYSDK_OFFSET(0xB5012C0)
#define CLASS_2_4FB5A11EAEA76274_METHOD_2_5608ED19F73C55F5_OFFSET UNITYSDK_OFFSET(0xB500AA0)
#define CLASS_2_4FB5A11EAEA76274_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xB5020F0)
#define CLASS_2_4FB5A11EAEA76274_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xB502090)
#define CLASS_2_4FB5A11EAEA76274_METHOD_2_79C0238E3E70A730_OFFSET UNITYSDK_OFFSET(0xB5005A0)
#define CLASS_2_4FB5A11EAEA76274_METHOD_2_86D9A88811BF5A61_1_OFFSET UNITYSDK_OFFSET(0xB500C50)
#define CLASS_2_4FB5A11EAEA76274_METHOD_2_86D9A88811BF5A61_OFFSET UNITYSDK_OFFSET(0xB5009F0)
#define CLASS_2_4FB5A11EAEA76274_METHOD_2_998E122F46014853_OFFSET UNITYSDK_OFFSET(0xB500F80)
#define CLASS_2_4FB5A11EAEA76274_METHOD_2_9F11854D71EA541C_OFFSET UNITYSDK_OFFSET(0xB501BA0)
#define CLASS_2_4FB5A11EAEA76274_METHOD_2_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0xB4FF6E0)
#define CLASS_2_4FB5A11EAEA76274_METHOD_2_ABE7CF9FA1B8CCA3_OFFSET UNITYSDK_OFFSET(0xB500D00)
#define CLASS_2_4FB5A11EAEA76274_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB4FF8C0)
#define CLASS_2_4FB5A11EAEA76274_METHOD_2_DBF55E589B45325A_OFFSET UNITYSDK_OFFSET(0xB501EF0)
#define CLASS_2_4FB5A11EAEA76274_METHOD_2_F9C3D0E0AC857968_OFFSET UNITYSDK_OFFSET(0xB501CC0)
#define CLASS_2_4FB5A11EAEA76274_METHOD_2_FD3EAA6E9D492B8E_OFFSET UNITYSDK_OFFSET(0xB4FF920)
#define CLASS_2_4FB5A11EAEA76274__CTOR_OFFSET UNITYSDK_OFFSET(0xB502050)

inline static constexpr unsigned int Class_2_4FB5A11EAEA76274_TypeDefinitionIndex = 50189;

class Class_2_4FB5A11EAEA76274 : public ::Class_1_8A0BE42C657CE107
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierMutexEffectData*>* Field_2_0; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierEffectData*>* Field_2_1; // 0x20
	::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierEffectData*>* Field_2_2; // 0x28
	::RPG::GameCore::GameEntity* Field_2_3; // 0x30
	::Class_3_795ECCED069014FF* Field_2_4; // 0x38
	::System::Boolean Field_2_5; // 0x40
	::System::Boolean Field_2_6; // 0x41
	::System::Boolean Field_2_7; // 0x42
	::System::Boolean Field_2_8; // 0x43
	::System::Int32 Field_2_9; // 0x44
	::RPG::GameCore::ModifierHitEffectStacking Field_2_10; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4FB5A11EAEA76274__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A1781348F0A89177()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4FB5A11EAEA76274_METHOD_2_A1781348F0A89177_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4FB5A11EAEA76274_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_0181F459ACF184C5(::System::String* a1, ::System::String* a2, ::RPG::MVector3 a3, ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>* a4, ::RPG::GameCore::EffectMutexType a5, ::System::Single a6, ::System::Int32 a7, ::System::Boolean a8, ::System::Single a9, ::System::String* a10, ::System::Boolean a11)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::RPG::MVector3, ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>*, ::RPG::GameCore::EffectMutexType, ::System::Single, ::System::Int32, ::System::Boolean, ::System::Single, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4FB5A11EAEA76274_METHOD_2_0181F459ACF184C5_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
	}

	::System::Void Method_2_47078A9DA737B94E(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4FB5A11EAEA76274_METHOD_2_47078A9DA737B94E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_86D9A88811BF5A61(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4FB5A11EAEA76274_METHOD_2_86D9A88811BF5A61_OFFSET))(this, a1);
	}

	::System::Void Method_2_86D9A88811BF5A61_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4FB5A11EAEA76274_METHOD_2_86D9A88811BF5A61_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_ABE7CF9FA1B8CCA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4FB5A11EAEA76274_METHOD_2_ABE7CF9FA1B8CCA3_OFFSET))(this);
	}

	::System::Void Method_2_998E122F46014853()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4FB5A11EAEA76274_METHOD_2_998E122F46014853_OFFSET))(this);
	}

	::System::Void Method_2_4D1F8491B7873DA8(::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierEffectData*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierEffectData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4FB5A11EAEA76274_METHOD_2_4D1F8491B7873DA8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9F11854D71EA541C(::RPG::GameCore::BaseModifierInstance_ModifierEffectData* a1, ::RPG::Client::MonoEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseModifierInstance_ModifierEffectData*, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CLASS_2_4FB5A11EAEA76274_METHOD_2_9F11854D71EA541C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5608ED19F73C55F5(::RPG::GameCore::BaseModifierInstance_ModifierEffectData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseModifierInstance_ModifierEffectData*))((::PBYTE)hIl2Cpp + CLASS_2_4FB5A11EAEA76274_METHOD_2_5608ED19F73C55F5_OFFSET))(this, a1);
	}

	::System::Void Method_2_3F9A2067CC61030A(::RPG::GameCore::BaseModifierInstance_ModifierEffectData* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseModifierInstance_ModifierEffectData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4FB5A11EAEA76274_METHOD_2_3F9A2067CC61030A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F9C3D0E0AC857968(::RPG::GameCore::BaseModifierInstance_ModifierEffectData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseModifierInstance_ModifierEffectData*))((::PBYTE)hIl2Cpp + CLASS_2_4FB5A11EAEA76274_METHOD_2_F9C3D0E0AC857968_OFFSET))(this, a1);
	}

	::System::Void Method_2_79C0238E3E70A730(::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierEffectData*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierEffectData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4FB5A11EAEA76274_METHOD_2_79C0238E3E70A730_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FD3EAA6E9D492B8E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4FB5A11EAEA76274_METHOD_2_FD3EAA6E9D492B8E_OFFSET))(this, a1);
	}

	::System::Void Method_2_DBF55E589B45325A(::RPG::GameCore::BaseModifierInstance_ModifierEffectData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseModifierInstance_ModifierEffectData*))((::PBYTE)hIl2Cpp + CLASS_2_4FB5A11EAEA76274_METHOD_2_DBF55E589B45325A_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4FB5A11EAEA76274_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4FB5A11EAEA76274_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}
};
