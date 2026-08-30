#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3058B2D322E60FA4_Struct_2_C6A3D64BC4929938.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_460;
class Class_1_6689795DB6E2B06F;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3058B2D322E60FA4_METHOD_1_333A023500F7ED3C_OFFSET UNITYSDK_OFFSET(0x121DD100)
#define CLASS_1_3058B2D322E60FA4_METHOD_1_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0x121DD880)
#define CLASS_1_3058B2D322E60FA4_METHOD_1_D1CC365B7F1C07C8_OFFSET UNITYSDK_OFFSET(0x121DD460)
#define CLASS_1_3058B2D322E60FA4_METHOD_1_E0605E6F5A574306_OFFSET UNITYSDK_OFFSET(0x121DD790)
#define CLASS_1_3058B2D322E60FA4_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0x121DCF30)
#define CLASS_1_3058B2D322E60FA4_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0x121DD020)
#define CLASS_1_3058B2D322E60FA4__CTOR_OFFSET UNITYSDK_OFFSET(0x121DD8E0)

inline static constexpr unsigned int Class_1_3058B2D322E60FA4_TypeDefinitionIndex = 55817;

class Class_1_3058B2D322E60FA4 : public ::System::Object
{
public:
	::Class_1_6689795DB6E2B06F* KKMFMPJOOOP; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::Class_1_3058B2D322E60FA4_Struct_2_C6A3D64BC4929938>*>* JHFBHJAIOKB; // 0x18
	::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3058B2D322E60FA4__CTOR_OFFSET))(this);
	}

	::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_3058B2D322E60FA4_ONPLUGININIT_OFFSET))(this, a1);
	}

	::System::Void OnPluginUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3058B2D322E60FA4_ONPLUGINUNINIT_OFFSET))(this);
	}

	::System::Void Method_1_333A023500F7ED3C(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillType a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillType, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3058B2D322E60FA4_METHOD_1_333A023500F7ED3C_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_D1CC365B7F1C07C8(::RPG::GameCore::TaskContext* a1, ::Class_1_6689795DB6E2B06F*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_1_6689795DB6E2B06F*&))((::PBYTE)hIl2Cpp + CLASS_1_3058B2D322E60FA4_METHOD_1_D1CC365B7F1C07C8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E0605E6F5A574306(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_3058B2D322E60FA4_METHOD_1_E0605E6F5A574306_OFFSET))(this, a1);
	}

	::Class_1_6689795DB6E2B06F* Method_1_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_6689795DB6E2B06F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3058B2D322E60FA4_METHOD_1_9B39F7D7C1FF70D6_OFFSET))(this);
	}
};
