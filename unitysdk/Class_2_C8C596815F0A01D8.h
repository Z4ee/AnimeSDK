#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C411A3DD6A930CFA.h"
#include "unitysdk/RPG/GameCore/EffectMutexType.h"
#include "unitysdk/RPG/GameCore/ModifierHitEffectStacking.h"
#include "unitysdk/RPG/GameCore/MonoEffectFlag.h"
#include "unitysdk/RPG/MVector3.h"

class Class_3_024B137FE9F1BACE;
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class BaseModifierInstance_ModifierEffectData; }
namespace RPG::GameCore { class BaseModifierInstance_ModifierMutexEffectData; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_C8C596815F0A01D8_METHOD_2_1554A5A4DE9C7FA9_OFFSET UNITYSDK_OFFSET(0x12965720)
#define CLASS_2_C8C596815F0A01D8_METHOD_2_1793E128118FD123_OFFSET UNITYSDK_OFFSET(0x12966EB0)
#define CLASS_2_C8C596815F0A01D8_METHOD_2_24B05D2E15A5C3C8_OFFSET UNITYSDK_OFFSET(0x12966BA0)
#define CLASS_2_C8C596815F0A01D8_METHOD_2_3B6115B82BBEC72A_OFFSET UNITYSDK_OFFSET(0x12965EA0)
#define CLASS_2_C8C596815F0A01D8_METHOD_2_3F9A2067CC61030A_OFFSET UNITYSDK_OFFSET(0x129673F0)
#define CLASS_2_C8C596815F0A01D8_METHOD_2_5608ED19F73C55F5_OFFSET UNITYSDK_OFFSET(0x12966650)
#define CLASS_2_C8C596815F0A01D8_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x12967C30)
#define CLASS_2_C8C596815F0A01D8_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x12967BD0)
#define CLASS_2_C8C596815F0A01D8_METHOD_2_686C893AA82D2107_OFFSET UNITYSDK_OFFSET(0x12965800)
#define CLASS_2_C8C596815F0A01D8_METHOD_2_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x129654E0)
#define CLASS_2_C8C596815F0A01D8_METHOD_2_9D9CF8F6C2342EE5_1_OFFSET UNITYSDK_OFFSET(0x12966800)
#define CLASS_2_C8C596815F0A01D8_METHOD_2_9D9CF8F6C2342EE5_OFFSET UNITYSDK_OFFSET(0x129665B0)
#define CLASS_2_C8C596815F0A01D8_METHOD_2_9F11854D71EA541C_OFFSET UNITYSDK_OFFSET(0x129676E0)
#define CLASS_2_C8C596815F0A01D8_METHOD_2_C969C48EB0DAEC25_OFFSET UNITYSDK_OFFSET(0x129668A0)
#define CLASS_2_C8C596815F0A01D8_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x129656C0)
#define CLASS_2_C8C596815F0A01D8_METHOD_2_CD0ABC785ED6281D_OFFSET UNITYSDK_OFFSET(0x12967A30)
#define CLASS_2_C8C596815F0A01D8_METHOD_2_F2658949B6607547_OFFSET UNITYSDK_OFFSET(0x129661A0)
#define CLASS_2_C8C596815F0A01D8_METHOD_2_F9C3D0E0AC857968_OFFSET UNITYSDK_OFFSET(0x12967800)
#define CLASS_2_C8C596815F0A01D8__CTOR_OFFSET UNITYSDK_OFFSET(0x12967B90)

inline static constexpr unsigned int Class_2_C8C596815F0A01D8_TypeDefinitionIndex = 49522;

class Class_2_C8C596815F0A01D8 : public ::Class_1_C411A3DD6A930CFA
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierEffectData*>* Field_2_4; // 0x18
	::Class_3_024B137FE9F1BACE* Field_2_1; // 0x20
	::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierEffectData*>* Field_2_3; // 0x28
	::RPG::GameCore::GameEntity* Field_2_0; // 0x30
	::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierMutexEffectData*>* Field_2_2; // 0x38
	::System::Boolean Field_2_7; // 0x40
	::System::Boolean Field_2_6; // 0x41
	::System::Boolean Field_2_8; // 0x42
	::System::Boolean Field_2_5; // 0x43
	::RPG::GameCore::ModifierHitEffectStacking Field_2_10; // 0x44
	::System::Int32 Field_2_9; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8C596815F0A01D8__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8C596815F0A01D8_METHOD_2_82E992240300FB30_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8C596815F0A01D8_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_686C893AA82D2107(::System::String* a1, ::System::String* a2, ::RPG::MVector3 a3, ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>* a4, ::RPG::GameCore::EffectMutexType a5, ::System::Single a6, ::System::Int32 a7, ::System::Boolean a8, ::System::Single a9, ::System::String* a10, ::System::Boolean a11)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::RPG::MVector3, ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>*, ::RPG::GameCore::EffectMutexType, ::System::Single, ::System::Int32, ::System::Boolean, ::System::Single, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C8C596815F0A01D8_METHOD_2_686C893AA82D2107_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
	}

	::System::Void Method_2_3B6115B82BBEC72A(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C8C596815F0A01D8_METHOD_2_3B6115B82BBEC72A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9D9CF8F6C2342EE5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C8C596815F0A01D8_METHOD_2_9D9CF8F6C2342EE5_OFFSET))(this, a1);
	}

	::System::Void Method_2_9D9CF8F6C2342EE5_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C8C596815F0A01D8_METHOD_2_9D9CF8F6C2342EE5_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_C969C48EB0DAEC25()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8C596815F0A01D8_METHOD_2_C969C48EB0DAEC25_OFFSET))(this);
	}

	::System::Void Method_2_24B05D2E15A5C3C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8C596815F0A01D8_METHOD_2_24B05D2E15A5C3C8_OFFSET))(this);
	}

	::System::Void Method_2_1793E128118FD123(::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierEffectData*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierEffectData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C8C596815F0A01D8_METHOD_2_1793E128118FD123_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9F11854D71EA541C(::RPG::GameCore::BaseModifierInstance_ModifierEffectData* a1, ::RPG::Client::MonoEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseModifierInstance_ModifierEffectData*, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CLASS_2_C8C596815F0A01D8_METHOD_2_9F11854D71EA541C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5608ED19F73C55F5(::RPG::GameCore::BaseModifierInstance_ModifierEffectData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseModifierInstance_ModifierEffectData*))((::PBYTE)hIl2Cpp + CLASS_2_C8C596815F0A01D8_METHOD_2_5608ED19F73C55F5_OFFSET))(this, a1);
	}

	::System::Void Method_2_3F9A2067CC61030A(::RPG::GameCore::BaseModifierInstance_ModifierEffectData* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseModifierInstance_ModifierEffectData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C8C596815F0A01D8_METHOD_2_3F9A2067CC61030A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F9C3D0E0AC857968(::RPG::GameCore::BaseModifierInstance_ModifierEffectData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseModifierInstance_ModifierEffectData*))((::PBYTE)hIl2Cpp + CLASS_2_C8C596815F0A01D8_METHOD_2_F9C3D0E0AC857968_OFFSET))(this, a1);
	}

	::System::Void Method_2_F2658949B6607547(::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierEffectData*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierEffectData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C8C596815F0A01D8_METHOD_2_F2658949B6607547_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1554A5A4DE9C7FA9(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C8C596815F0A01D8_METHOD_2_1554A5A4DE9C7FA9_OFFSET))(this, a1);
	}

	::System::Void Method_2_CD0ABC785ED6281D(::RPG::GameCore::BaseModifierInstance_ModifierEffectData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseModifierInstance_ModifierEffectData*))((::PBYTE)hIl2Cpp + CLASS_2_C8C596815F0A01D8_METHOD_2_CD0ABC785ED6281D_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8C596815F0A01D8_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8C596815F0A01D8_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}
};
