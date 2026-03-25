#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_099B78418029B3B1_5;
class Class_2_0D3C4922E3883E2B;
class Class_2_1152250B69783505;
class Class_2_434143B198116DB9;
class Class_2_43D1AA62A6D00FFF;
class Class_2_49510E41341F97EC;
class Class_2_6AA7CA7493367EF4;
class Class_2_884D02965B14FC41;
class Class_2_8CE5A0FC3E91D7F4;
class Class_2_AF4E89503EBBCCA0;
class Class_2_BE574E60E64D3550;
class Class_2_C8461ACA8308A704;
class Class_2_C8461ACA8308A704_1;
class Class_2_C8461ACA8308A704_2;
class Class_2_CC109BC117037E72;
class Class_2_D1523E43223DED38;
class Class_2_D31C9C0BB2725F41;
class Class_2_D5BF6D0911868A14;
class Class_2_E9C9AAD7C711B3E3;
class Class_2_ED5ACF982FC3BE02;
class Class_2_F47F7A3F5E97970D;
namespace Entitas { class IContext; }
namespace System { class String; }

#define CLASS_1_867B6CE75953535A_CLEAR_OFFSET UNITYSDK_OFFSET(0x1694A760)
#define CLASS_1_867B6CE75953535A_GET_ALLCONTEXTS_OFFSET UNITYSDK_OFFSET(0x1694B310)
#define CLASS_1_867B6CE75953535A_GET_CAKERACEGAME_OFFSET UNITYSDK_OFFSET(0x1694B070)
#define CLASS_1_867B6CE75953535A_GET_CHENLINGGAME_OFFSET UNITYSDK_OFFSET(0x1694B090)
#define CLASS_1_867B6CE75953535A_GET_CHIMERADUELGAME_OFFSET UNITYSDK_OFFSET(0x1694B0B0)
#define CLASS_1_867B6CE75953535A_GET_CHIMERAGAME_OFFSET UNITYSDK_OFFSET(0x1694B0D0)
#define CLASS_1_867B6CE75953535A_GET_ELFRESTAURANTGAME_OFFSET UNITYSDK_OFFSET(0x1694B0F0)
#define CLASS_1_867B6CE75953535A_GET_FIVEDIMGAME_OFFSET UNITYSDK_OFFSET(0x1694B110)
#define CLASS_1_867B6CE75953535A_GET_FOURROTATEVOXELGAME_OFFSET UNITYSDK_OFFSET(0x1694B130)
#define CLASS_1_867B6CE75953535A_GET_LITTLEGAMEINPUT_OFFSET UNITYSDK_OFFSET(0x1694B170)
#define CLASS_1_867B6CE75953535A_GET_LITTLEGAME_OFFSET UNITYSDK_OFFSET(0x1694B150)
#define CLASS_1_867B6CE75953535A_GET_MARBLEGAME_OFFSET UNITYSDK_OFFSET(0x1694B190)
#define CLASS_1_867B6CE75953535A_GET_MATCH3GAME_OFFSET UNITYSDK_OFFSET(0x1694B1B0)
#define CLASS_1_867B6CE75953535A_GET_MOVIEGAMECONFIG_OFFSET UNITYSDK_OFFSET(0x1694B1D0)
#define CLASS_1_867B6CE75953535A_GET_MOVIEGAMESTATE_OFFSET UNITYSDK_OFFSET(0x1694B1F0)
#define CLASS_1_867B6CE75953535A_GET_PARKOURGAME_OFFSET UNITYSDK_OFFSET(0x1694B210)
#define CLASS_1_867B6CE75953535A_GET_PINGPONGGAME_OFFSET UNITYSDK_OFFSET(0x1694B230)
#define CLASS_1_867B6CE75953535A_GET_TIMELINECONTROLGAMECONFIG_OFFSET UNITYSDK_OFFSET(0x1694B250)
#define CLASS_1_867B6CE75953535A_GET_TIMELINECONTROLGAMESTATE_OFFSET UNITYSDK_OFFSET(0x1694B270)
#define CLASS_1_867B6CE75953535A_GET_TIMERELAYFLAMEGAME_OFFSET UNITYSDK_OFFSET(0x1694B290)
#define CLASS_1_867B6CE75953535A_GET_UI3DGAMECONFIG_OFFSET UNITYSDK_OFFSET(0x1694B2B0)
#define CLASS_1_867B6CE75953535A_GET_UI3DGAMEINPUT_OFFSET UNITYSDK_OFFSET(0x1694B2D0)
#define CLASS_1_867B6CE75953535A_GET_UI3DGAMESTATE_OFFSET UNITYSDK_OFFSET(0x1694B2F0)
#define CLASS_1_867B6CE75953535A_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1694B030)
#define CLASS_1_867B6CE75953535A_METHOD_1_3B7145E79424FB75_OFFSET UNITYSDK_OFFSET(0x1694A7B0)
#define CLASS_1_867B6CE75953535A_METHOD_1_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0x1694A920)
#define CLASS_1_867B6CE75953535A_METHOD_1_ACE888BF6F5BC5FD_OFFSET UNITYSDK_OFFSET(0x1694BD90)
#define CLASS_1_867B6CE75953535A_SET_CAKERACEGAME_OFFSET UNITYSDK_OFFSET(0x1694B080)
#define CLASS_1_867B6CE75953535A_SET_CHENLINGGAME_OFFSET UNITYSDK_OFFSET(0x1694B0A0)
#define CLASS_1_867B6CE75953535A_SET_CHIMERADUELGAME_OFFSET UNITYSDK_OFFSET(0x1694B0C0)
#define CLASS_1_867B6CE75953535A_SET_CHIMERAGAME_OFFSET UNITYSDK_OFFSET(0x1694B0E0)
#define CLASS_1_867B6CE75953535A_SET_ELFRESTAURANTGAME_OFFSET UNITYSDK_OFFSET(0x1694B100)
#define CLASS_1_867B6CE75953535A_SET_FIVEDIMGAME_OFFSET UNITYSDK_OFFSET(0x1694B120)
#define CLASS_1_867B6CE75953535A_SET_FOURROTATEVOXELGAME_OFFSET UNITYSDK_OFFSET(0x1694B140)
#define CLASS_1_867B6CE75953535A_SET_LITTLEGAMEINPUT_OFFSET UNITYSDK_OFFSET(0x1694B180)
#define CLASS_1_867B6CE75953535A_SET_LITTLEGAME_OFFSET UNITYSDK_OFFSET(0x1694B160)
#define CLASS_1_867B6CE75953535A_SET_MARBLEGAME_OFFSET UNITYSDK_OFFSET(0x1694B1A0)
#define CLASS_1_867B6CE75953535A_SET_MATCH3GAME_OFFSET UNITYSDK_OFFSET(0x1694B1C0)
#define CLASS_1_867B6CE75953535A_SET_MOVIEGAMECONFIG_OFFSET UNITYSDK_OFFSET(0x1694B1E0)
#define CLASS_1_867B6CE75953535A_SET_MOVIEGAMESTATE_OFFSET UNITYSDK_OFFSET(0x1694B200)
#define CLASS_1_867B6CE75953535A_SET_PARKOURGAME_OFFSET UNITYSDK_OFFSET(0x1694B220)
#define CLASS_1_867B6CE75953535A_SET_PINGPONGGAME_OFFSET UNITYSDK_OFFSET(0x1694B240)
#define CLASS_1_867B6CE75953535A_SET_TIMELINECONTROLGAMECONFIG_OFFSET UNITYSDK_OFFSET(0x1694B260)
#define CLASS_1_867B6CE75953535A_SET_TIMELINECONTROLGAMESTATE_OFFSET UNITYSDK_OFFSET(0x1694B280)
#define CLASS_1_867B6CE75953535A_SET_TIMERELAYFLAMEGAME_OFFSET UNITYSDK_OFFSET(0x1694B2A0)
#define CLASS_1_867B6CE75953535A_SET_UI3DGAMECONFIG_OFFSET UNITYSDK_OFFSET(0x1694B2C0)
#define CLASS_1_867B6CE75953535A_SET_UI3DGAMEINPUT_OFFSET UNITYSDK_OFFSET(0x1694B2E0)
#define CLASS_1_867B6CE75953535A_SET_UI3DGAMESTATE_OFFSET UNITYSDK_OFFSET(0x1694B300)
#define CLASS_1_867B6CE75953535A__CTOR_OFFSET UNITYSDK_OFFSET(0x1694A9C0)

inline static constexpr unsigned int Class_1_867B6CE75953535A_TypeDefinitionIndex = 32349;

class Class_1_867B6CE75953535A : public ::System::Object
{
public:
	static ::Class_1_867B6CE75953535A** StaticGet_Field_1_0()
	{
		return (::Class_1_867B6CE75953535A**)Il2CppClass::FromTypeDefinitionIndex(Class_1_867B6CE75953535A_TypeDefinitionIndex)->GetStaticField(0x166A0);
	}
	// static const ::System::String* Field_1_22; // 0x0
	// static const ::System::String* Field_1_23; // 0x0
	// static const ::System::String* Field_1_24; // 0x0
	// static const ::System::String* Field_1_25; // 0x0
	// static const ::System::String* Field_1_26; // 0x0
	// static const ::System::String* Field_1_27; // 0x0
	// static const ::System::String* Field_1_28; // 0x0
	// static const ::System::String* Field_1_29; // 0x0
	// static const ::System::String* Field_1_30; // 0x0
	// static const ::System::String* Field_1_31; // 0x0
	// static const ::System::String* Field_1_32; // 0x0
	// static const ::System::String* Field_1_33; // 0x0
	// static const ::System::String* Field_1_34; // 0x0
	// static const ::System::String* Field_1_35; // 0x0
	// static const ::System::String* Field_1_36; // 0x0
	// static const ::System::String* Field_1_37; // 0x0
	// static const ::System::String* Field_1_38; // 0x0
	// static const ::System::String* Field_1_39; // 0x0
	// static const ::System::String* Field_1_40; // 0x0
	// static const ::System::String* Field_1_41; // 0x0
	// static const ::System::String* Field_1_42; // 0x0
	// static const ::System::String* Field_1_43; // 0x0
	// static const ::System::String* Field_1_44; // 0x0
	// static const ::System::String* Field_1_45; // 0x0
	// static const ::System::String* Field_1_46; // 0x0
	// static const ::System::String* Field_1_47; // 0x0
	// static const ::System::String* Field_1_48; // 0x0
	// static const ::System::String* Field_1_49; // 0x0
	// static const ::System::String* Field_1_50; // 0x0
	// static const ::System::String* Field_1_51; // 0x0
	// static const ::System::String* Field_1_52; // 0x0
	// static const ::System::String* Field_1_53; // 0x0
	// static const ::System::String* Field_1_54; // 0x0
	// static const ::System::String* Field_1_55; // 0x0
	// static const ::System::String* Field_1_56; // 0x0
	// static const ::System::String* Field_1_57; // 0x0
	::Class_2_BE574E60E64D3550* _littleGameInput_k__BackingField; // 0x10
	::Class_2_8CE5A0FC3E91D7F4* _chimeraGame_k__BackingField; // 0x18
	::Class_2_0D3C4922E3883E2B* _marbleGame_k__BackingField; // 0x20
	::Class_2_AF4E89503EBBCCA0* _fourRotateVoxelGame_k__BackingField; // 0x28
	::Class_2_434143B198116DB9* _match3Game_k__BackingField; // 0x30
	::Class_2_6AA7CA7493367EF4* _chimeraDuelGame_k__BackingField; // 0x38
	::Class_2_C8461ACA8308A704* _littleGame_k__BackingField; // 0x40
	::Class_2_1152250B69783505* _pingPongGame_k__BackingField; // 0x48
	::Class_2_D5BF6D0911868A14* _movieGameConfig_k__BackingField; // 0x50
	::Class_2_43D1AA62A6D00FFF* _elfRestaurantGame_k__BackingField; // 0x58
	::Class_2_ED5ACF982FC3BE02* _timelineControlGameConfig_k__BackingField; // 0x60
	::Class_2_D1523E43223DED38* _timelineControlGameState_k__BackingField; // 0x68
	::Class_2_C8461ACA8308A704_1* _cakeRaceGame_k__BackingField; // 0x70
	::Class_2_F47F7A3F5E97970D* _fiveDimGame_k__BackingField; // 0x78
	::Class_2_099B78418029B3B1_5* _parkourGame_k__BackingField; // 0x80
	::Class_2_CC109BC117037E72* _timeRelayFlameGame_k__BackingField; // 0x88
	::Class_2_C8461ACA8308A704_2* _uI3DGameInput_k__BackingField; // 0x90
	::Class_2_49510E41341F97EC* _uI3DGameConfig_k__BackingField; // 0x98
	::Class_2_D31C9C0BB2725F41* _uI3DGameState_k__BackingField; // 0xA0
	::Class_2_E9C9AAD7C711B3E3* _chenLingGame_k__BackingField; // 0xA8
	::Class_2_884D02965B14FC41* _movieGameState_k__BackingField; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_CLEAR_OFFSET))(this);
	}

	static ::Class_1_867B6CE75953535A* Method_1_47FCE72550F759BF()
	{
		return ((::Class_1_867B6CE75953535A*(*)())((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_METHOD_1_47FCE72550F759BF_OFFSET))();
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_867B6CE75953535A* a1)
	{
		return ((::System::Void(*)(::Class_1_867B6CE75953535A*))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	::Class_2_C8461ACA8308A704_1* get_cakeRaceGame()
	{
		return ((::Class_2_C8461ACA8308A704_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_GET_CAKERACEGAME_OFFSET))(this);
	}

	::System::Void set_cakeRaceGame(::Class_2_C8461ACA8308A704_1* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_C8461ACA8308A704_1*))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_SET_CAKERACEGAME_OFFSET))(this, value);
	}

	::Class_2_E9C9AAD7C711B3E3* get_chenLingGame()
	{
		return ((::Class_2_E9C9AAD7C711B3E3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_GET_CHENLINGGAME_OFFSET))(this);
	}

	::System::Void set_chenLingGame(::Class_2_E9C9AAD7C711B3E3* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_E9C9AAD7C711B3E3*))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_SET_CHENLINGGAME_OFFSET))(this, value);
	}

	::Class_2_6AA7CA7493367EF4* get_chimeraDuelGame()
	{
		return ((::Class_2_6AA7CA7493367EF4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_GET_CHIMERADUELGAME_OFFSET))(this);
	}

	::System::Void set_chimeraDuelGame(::Class_2_6AA7CA7493367EF4* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6AA7CA7493367EF4*))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_SET_CHIMERADUELGAME_OFFSET))(this, value);
	}

	::Class_2_8CE5A0FC3E91D7F4* get_chimeraGame()
	{
		return ((::Class_2_8CE5A0FC3E91D7F4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_GET_CHIMERAGAME_OFFSET))(this);
	}

	::System::Void set_chimeraGame(::Class_2_8CE5A0FC3E91D7F4* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_8CE5A0FC3E91D7F4*))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_SET_CHIMERAGAME_OFFSET))(this, value);
	}

	::Class_2_43D1AA62A6D00FFF* get_elfRestaurantGame()
	{
		return ((::Class_2_43D1AA62A6D00FFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_GET_ELFRESTAURANTGAME_OFFSET))(this);
	}

	::System::Void set_elfRestaurantGame(::Class_2_43D1AA62A6D00FFF* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_43D1AA62A6D00FFF*))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_SET_ELFRESTAURANTGAME_OFFSET))(this, value);
	}

	::Class_2_F47F7A3F5E97970D* get_fiveDimGame()
	{
		return ((::Class_2_F47F7A3F5E97970D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_GET_FIVEDIMGAME_OFFSET))(this);
	}

	::System::Void set_fiveDimGame(::Class_2_F47F7A3F5E97970D* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F47F7A3F5E97970D*))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_SET_FIVEDIMGAME_OFFSET))(this, value);
	}

	::Class_2_AF4E89503EBBCCA0* get_fourRotateVoxelGame()
	{
		return ((::Class_2_AF4E89503EBBCCA0*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_GET_FOURROTATEVOXELGAME_OFFSET))(this);
	}

	::System::Void set_fourRotateVoxelGame(::Class_2_AF4E89503EBBCCA0* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AF4E89503EBBCCA0*))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_SET_FOURROTATEVOXELGAME_OFFSET))(this, value);
	}

	::Class_2_C8461ACA8308A704* get_littleGame()
	{
		return ((::Class_2_C8461ACA8308A704*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_GET_LITTLEGAME_OFFSET))(this);
	}

	::System::Void set_littleGame(::Class_2_C8461ACA8308A704* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_C8461ACA8308A704*))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_SET_LITTLEGAME_OFFSET))(this, value);
	}

	::Class_2_BE574E60E64D3550* get_littleGameInput()
	{
		return ((::Class_2_BE574E60E64D3550*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_GET_LITTLEGAMEINPUT_OFFSET))(this);
	}

	::System::Void set_littleGameInput(::Class_2_BE574E60E64D3550* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_BE574E60E64D3550*))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_SET_LITTLEGAMEINPUT_OFFSET))(this, value);
	}

	::Class_2_0D3C4922E3883E2B* get_marbleGame()
	{
		return ((::Class_2_0D3C4922E3883E2B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_GET_MARBLEGAME_OFFSET))(this);
	}

	::System::Void set_marbleGame(::Class_2_0D3C4922E3883E2B* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0D3C4922E3883E2B*))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_SET_MARBLEGAME_OFFSET))(this, value);
	}

	::Class_2_434143B198116DB9* get_match3Game()
	{
		return ((::Class_2_434143B198116DB9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_GET_MATCH3GAME_OFFSET))(this);
	}

	::System::Void set_match3Game(::Class_2_434143B198116DB9* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_434143B198116DB9*))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_SET_MATCH3GAME_OFFSET))(this, value);
	}

	::Class_2_D5BF6D0911868A14* get_movieGameConfig()
	{
		return ((::Class_2_D5BF6D0911868A14*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_GET_MOVIEGAMECONFIG_OFFSET))(this);
	}

	::System::Void set_movieGameConfig(::Class_2_D5BF6D0911868A14* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D5BF6D0911868A14*))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_SET_MOVIEGAMECONFIG_OFFSET))(this, value);
	}

	::Class_2_884D02965B14FC41* get_movieGameState()
	{
		return ((::Class_2_884D02965B14FC41*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_GET_MOVIEGAMESTATE_OFFSET))(this);
	}

	::System::Void set_movieGameState(::Class_2_884D02965B14FC41* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_884D02965B14FC41*))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_SET_MOVIEGAMESTATE_OFFSET))(this, value);
	}

	::Class_2_099B78418029B3B1_5* get_parkourGame()
	{
		return ((::Class_2_099B78418029B3B1_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_GET_PARKOURGAME_OFFSET))(this);
	}

	::System::Void set_parkourGame(::Class_2_099B78418029B3B1_5* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_099B78418029B3B1_5*))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_SET_PARKOURGAME_OFFSET))(this, value);
	}

	::Class_2_1152250B69783505* get_pingPongGame()
	{
		return ((::Class_2_1152250B69783505*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_GET_PINGPONGGAME_OFFSET))(this);
	}

	::System::Void set_pingPongGame(::Class_2_1152250B69783505* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1152250B69783505*))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_SET_PINGPONGGAME_OFFSET))(this, value);
	}

	::Class_2_ED5ACF982FC3BE02* get_timelineControlGameConfig()
	{
		return ((::Class_2_ED5ACF982FC3BE02*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_GET_TIMELINECONTROLGAMECONFIG_OFFSET))(this);
	}

	::System::Void set_timelineControlGameConfig(::Class_2_ED5ACF982FC3BE02* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_ED5ACF982FC3BE02*))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_SET_TIMELINECONTROLGAMECONFIG_OFFSET))(this, value);
	}

	::Class_2_D1523E43223DED38* get_timelineControlGameState()
	{
		return ((::Class_2_D1523E43223DED38*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_GET_TIMELINECONTROLGAMESTATE_OFFSET))(this);
	}

	::System::Void set_timelineControlGameState(::Class_2_D1523E43223DED38* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D1523E43223DED38*))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_SET_TIMELINECONTROLGAMESTATE_OFFSET))(this, value);
	}

	::Class_2_CC109BC117037E72* get_timeRelayFlameGame()
	{
		return ((::Class_2_CC109BC117037E72*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_GET_TIMERELAYFLAMEGAME_OFFSET))(this);
	}

	::System::Void set_timeRelayFlameGame(::Class_2_CC109BC117037E72* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_CC109BC117037E72*))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_SET_TIMERELAYFLAMEGAME_OFFSET))(this, value);
	}

	::Class_2_49510E41341F97EC* get_uI3DGameConfig()
	{
		return ((::Class_2_49510E41341F97EC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_GET_UI3DGAMECONFIG_OFFSET))(this);
	}

	::System::Void set_uI3DGameConfig(::Class_2_49510E41341F97EC* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_49510E41341F97EC*))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_SET_UI3DGAMECONFIG_OFFSET))(this, value);
	}

	::Class_2_C8461ACA8308A704_2* get_uI3DGameInput()
	{
		return ((::Class_2_C8461ACA8308A704_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_GET_UI3DGAMEINPUT_OFFSET))(this);
	}

	::System::Void set_uI3DGameInput(::Class_2_C8461ACA8308A704_2* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_C8461ACA8308A704_2*))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_SET_UI3DGAMEINPUT_OFFSET))(this, value);
	}

	::Class_2_D31C9C0BB2725F41* get_uI3DGameState()
	{
		return ((::Class_2_D31C9C0BB2725F41*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_GET_UI3DGAMESTATE_OFFSET))(this);
	}

	::System::Void set_uI3DGameState(::Class_2_D31C9C0BB2725F41* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D31C9C0BB2725F41*))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_SET_UI3DGAMESTATE_OFFSET))(this, value);
	}

	::Il2CppArray<::Entitas::IContext*>* get_allContexts()
	{
		return ((::Il2CppArray<::Entitas::IContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_GET_ALLCONTEXTS_OFFSET))(this);
	}

	::System::Void Method_1_3B7145E79424FB75()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_METHOD_1_3B7145E79424FB75_OFFSET))(this);
	}

	::System::Void Method_1_ACE888BF6F5BC5FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_867B6CE75953535A_METHOD_1_ACE888BF6F5BC5FD_OFFSET))(this);
	}
};
