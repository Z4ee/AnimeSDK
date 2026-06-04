#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PingPongProjectileType.h"
#include "unitysdk/RPG/GameCore/PingPongSPSkillType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_1152250B69783505;
class Class_3_89DDDD327D710B05;
namespace RPG::GameCore { class PingPongDropItemInfo; }
namespace RPG::GameCore { class PingPongGameConfig; }
namespace RPG::GameCore { class PingPongProjectileGroup; }
namespace System { class Random; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9FA8EED22CA6F519_DISPOSE_OFFSET UNITYSDK_OFFSET(0x134C2FB0)
#define CLASS_1_9FA8EED22CA6F519_GET_GAMECONFIG_OFFSET UNITYSDK_OFFSET(0x134C3580)
#define CLASS_1_9FA8EED22CA6F519_METHOD_1_0AAE81056507A5AD_OFFSET UNITYSDK_OFFSET(0x134C3430)
#define CLASS_1_9FA8EED22CA6F519_METHOD_1_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x134C3600)
#define CLASS_1_9FA8EED22CA6F519_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x134C35F0)
#define CLASS_1_9FA8EED22CA6F519_METHOD_1_5472662115B1A448_OFFSET UNITYSDK_OFFSET(0x134C2FF0)
#define CLASS_1_9FA8EED22CA6F519_METHOD_1_86BC3DBFD0BE8DE5_OFFSET UNITYSDK_OFFSET(0x134C30A0)
#define CLASS_1_9FA8EED22CA6F519_METHOD_1_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x134C35B0)
#define CLASS_1_9FA8EED22CA6F519_METHOD_1_C74CF020AA42ED85_2_OFFSET UNITYSDK_OFFSET(0x134C35C0)
#define CLASS_1_9FA8EED22CA6F519_METHOD_1_C74CF020AA42ED85_3_OFFSET UNITYSDK_OFFSET(0x134C35D0)
#define CLASS_1_9FA8EED22CA6F519_METHOD_1_C74CF020AA42ED85_4_OFFSET UNITYSDK_OFFSET(0x134C35E0)
#define CLASS_1_9FA8EED22CA6F519_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x134C35A0)
#define CLASS_1_9FA8EED22CA6F519_METHOD_1_CC329A0E0CED1BFF_OFFSET UNITYSDK_OFFSET(0x134C31C0)
#define CLASS_1_9FA8EED22CA6F519_METHOD_1_F7810952FE14E15C_OFFSET UNITYSDK_OFFSET(0x134C3250)
#define CLASS_1_9FA8EED22CA6F519_SET_GAMECONFIG_OFFSET UNITYSDK_OFFSET(0x134C3590)
#define CLASS_1_9FA8EED22CA6F519__CTOR_OFFSET UNITYSDK_OFFSET(0x134C2EE0)

inline static constexpr unsigned int Class_1_9FA8EED22CA6F519_TypeDefinitionIndex = 71227;

class Class_1_9FA8EED22CA6F519 : public ::System::Object
{
public:
	::RPG::GameCore::PingPongGameConfig* _GameConfig_k__BackingField; // 0x10
	::Class_2_1152250B69783505* Field_1_1; // 0x18
	::Class_3_89DDDD327D710B05* Field_1_2; // 0x20
	::System::Random* Field_1_3; // 0x28
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::RPG::GameCore::PingPongDropItemInfo*>>* Field_1_4; // 0x30
	::System::Int32 Field_1_5; // 0x38

	::System::Void _ctor(::Class_3_89DDDD327D710B05* a1, ::Class_2_1152250B69783505* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_89DDDD327D710B05*, ::Class_2_1152250B69783505*))((::PBYTE)hIl2Cpp + CLASS_1_9FA8EED22CA6F519__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FA8EED22CA6F519_DISPOSE_OFFSET))(this);
	}

	::System::String* Method_1_5472662115B1A448(::RPG::GameCore::PingPongSPSkillType a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::PingPongSPSkillType))((::PBYTE)hIl2Cpp + CLASS_1_9FA8EED22CA6F519_METHOD_1_5472662115B1A448_OFFSET))(this, a1);
	}

	::RPG::GameCore::PingPongProjectileGroup* Method_1_86BC3DBFD0BE8DE5(::RPG::GameCore::PingPongSPSkillType a1)
	{
		return ((::RPG::GameCore::PingPongProjectileGroup*(*)(::PVOID, ::RPG::GameCore::PingPongSPSkillType))((::PBYTE)hIl2Cpp + CLASS_1_9FA8EED22CA6F519_METHOD_1_86BC3DBFD0BE8DE5_OFFSET))(this, a1);
	}

	::RPG::GameCore::PingPongProjectileGroup* Method_1_CC329A0E0CED1BFF(::RPG::GameCore::PingPongProjectileType a1)
	{
		return ((::RPG::GameCore::PingPongProjectileGroup*(*)(::PVOID, ::RPG::GameCore::PingPongProjectileType))((::PBYTE)hIl2Cpp + CLASS_1_9FA8EED22CA6F519_METHOD_1_CC329A0E0CED1BFF_OFFSET))(this, a1);
	}

	::System::Void Method_1_F7810952FE14E15C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FA8EED22CA6F519_METHOD_1_F7810952FE14E15C_OFFSET))(this);
	}

	::System::Boolean Method_1_0AAE81056507A5AD(::System::Int32 a1, ::RPG::GameCore::PingPongDropItemInfo*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::RPG::GameCore::PingPongDropItemInfo*&))((::PBYTE)hIl2Cpp + CLASS_1_9FA8EED22CA6F519_METHOD_1_0AAE81056507A5AD_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::PingPongGameConfig* get_GameConfig()
	{
		return ((::RPG::GameCore::PingPongGameConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FA8EED22CA6F519_GET_GAMECONFIG_OFFSET))(this);
	}

	::System::Void set_GameConfig(::RPG::GameCore::PingPongGameConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PingPongGameConfig*))((::PBYTE)hIl2Cpp + CLASS_1_9FA8EED22CA6F519_SET_GAMECONFIG_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FA8EED22CA6F519_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FA8EED22CA6F519_METHOD_1_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_2()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FA8EED22CA6F519_METHOD_1_C74CF020AA42ED85_2_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_3()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FA8EED22CA6F519_METHOD_1_C74CF020AA42ED85_3_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_4()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FA8EED22CA6F519_METHOD_1_C74CF020AA42ED85_4_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FA8EED22CA6F519_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FA8EED22CA6F519_METHOD_1_5323F2DF46A044DA_1_OFFSET))(this);
	}
};
