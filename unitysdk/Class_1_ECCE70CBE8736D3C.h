#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PingPongProjectileType.h"
#include "unitysdk/RPG/GameCore/PingPongSPSkillType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_1152250B69783505;
class Class_3_99BC749707F2A8AC;
namespace RPG::GameCore { class PingPongDropItemInfo; }
namespace RPG::GameCore { class PingPongGameConfig; }
namespace RPG::GameCore { class PingPongProjectileGroup; }
namespace System { class Random; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_ECCE70CBE8736D3C_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE474CC0)
#define CLASS_1_ECCE70CBE8736D3C_GET_GAMECONFIG_OFFSET UNITYSDK_OFFSET(0xE475240)
#define CLASS_1_ECCE70CBE8736D3C_METHOD_1_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0xE474F60)
#define CLASS_1_ECCE70CBE8736D3C_METHOD_1_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0xE4752C0)
#define CLASS_1_ECCE70CBE8736D3C_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0xE4752B0)
#define CLASS_1_ECCE70CBE8736D3C_METHOD_1_5472662115B1A448_OFFSET UNITYSDK_OFFSET(0xE474D00)
#define CLASS_1_ECCE70CBE8736D3C_METHOD_1_86BC3DBFD0BE8DE5_OFFSET UNITYSDK_OFFSET(0xE474DB0)
#define CLASS_1_ECCE70CBE8736D3C_METHOD_1_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0xE475270)
#define CLASS_1_ECCE70CBE8736D3C_METHOD_1_C74CF020AA42ED85_2_OFFSET UNITYSDK_OFFSET(0xE475280)
#define CLASS_1_ECCE70CBE8736D3C_METHOD_1_C74CF020AA42ED85_3_OFFSET UNITYSDK_OFFSET(0xE475290)
#define CLASS_1_ECCE70CBE8736D3C_METHOD_1_C74CF020AA42ED85_4_OFFSET UNITYSDK_OFFSET(0xE4752A0)
#define CLASS_1_ECCE70CBE8736D3C_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0xE475260)
#define CLASS_1_ECCE70CBE8736D3C_METHOD_1_CC329A0E0CED1BFF_OFFSET UNITYSDK_OFFSET(0xE474ED0)
#define CLASS_1_ECCE70CBE8736D3C_METHOD_1_F843F1803AAAE527_OFFSET UNITYSDK_OFFSET(0xE4750D0)
#define CLASS_1_ECCE70CBE8736D3C_SET_GAMECONFIG_OFFSET UNITYSDK_OFFSET(0xE475250)
#define CLASS_1_ECCE70CBE8736D3C__CTOR_OFFSET UNITYSDK_OFFSET(0xE474BF0)

inline static constexpr unsigned int Class_1_ECCE70CBE8736D3C_TypeDefinitionIndex = 62412;

class Class_1_ECCE70CBE8736D3C : public ::System::Object
{
public:
	::Class_2_1152250B69783505* Field_1_0; // 0x10
	::RPG::GameCore::PingPongGameConfig* _GameConfig_k__BackingField; // 0x18
	::Class_3_99BC749707F2A8AC* Field_1_1; // 0x20
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::RPG::GameCore::PingPongDropItemInfo*>>* Field_1_3; // 0x28
	::System::Random* Field_1_5; // 0x30
	::System::Int32 Field_1_4; // 0x38

	::System::Void _ctor(::Class_3_99BC749707F2A8AC* a1, ::Class_2_1152250B69783505* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_99BC749707F2A8AC*, ::Class_2_1152250B69783505*))((::PBYTE)hIl2Cpp + CLASS_1_ECCE70CBE8736D3C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECCE70CBE8736D3C_DISPOSE_OFFSET))(this);
	}

	::System::String* Method_1_5472662115B1A448(::RPG::GameCore::PingPongSPSkillType a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::PingPongSPSkillType))((::PBYTE)hIl2Cpp + CLASS_1_ECCE70CBE8736D3C_METHOD_1_5472662115B1A448_OFFSET))(this, a1);
	}

	::RPG::GameCore::PingPongProjectileGroup* Method_1_86BC3DBFD0BE8DE5(::RPG::GameCore::PingPongSPSkillType a1)
	{
		return ((::RPG::GameCore::PingPongProjectileGroup*(*)(::PVOID, ::RPG::GameCore::PingPongSPSkillType))((::PBYTE)hIl2Cpp + CLASS_1_ECCE70CBE8736D3C_METHOD_1_86BC3DBFD0BE8DE5_OFFSET))(this, a1);
	}

	::RPG::GameCore::PingPongProjectileGroup* Method_1_CC329A0E0CED1BFF(::RPG::GameCore::PingPongProjectileType a1)
	{
		return ((::RPG::GameCore::PingPongProjectileGroup*(*)(::PVOID, ::RPG::GameCore::PingPongProjectileType))((::PBYTE)hIl2Cpp + CLASS_1_ECCE70CBE8736D3C_METHOD_1_CC329A0E0CED1BFF_OFFSET))(this, a1);
	}

	::System::Void Method_1_2045BA2947DBDBCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECCE70CBE8736D3C_METHOD_1_2045BA2947DBDBCE_OFFSET))(this);
	}

	::System::Boolean Method_1_F843F1803AAAE527(::System::Int32 a1, ::RPG::GameCore::PingPongDropItemInfo*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::RPG::GameCore::PingPongDropItemInfo*&))((::PBYTE)hIl2Cpp + CLASS_1_ECCE70CBE8736D3C_METHOD_1_F843F1803AAAE527_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::PingPongGameConfig* get_GameConfig()
	{
		return ((::RPG::GameCore::PingPongGameConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECCE70CBE8736D3C_GET_GAMECONFIG_OFFSET))(this);
	}

	::System::Void set_GameConfig(::RPG::GameCore::PingPongGameConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PingPongGameConfig*))((::PBYTE)hIl2Cpp + CLASS_1_ECCE70CBE8736D3C_SET_GAMECONFIG_OFFSET))(this, value);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECCE70CBE8736D3C_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECCE70CBE8736D3C_METHOD_1_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_2()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECCE70CBE8736D3C_METHOD_1_C74CF020AA42ED85_2_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_3()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECCE70CBE8736D3C_METHOD_1_C74CF020AA42ED85_3_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_4()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECCE70CBE8736D3C_METHOD_1_C74CF020AA42ED85_4_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECCE70CBE8736D3C_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECCE70CBE8736D3C_METHOD_1_5323F2DF46A044DA_1_OFFSET))(this);
	}
};
