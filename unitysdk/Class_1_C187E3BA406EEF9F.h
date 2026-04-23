#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ETravelShipState.h"
#include "unitysdk/Struct_2_0B84ADD7815498A2.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AirShipRandomFloating;
class Class_1_393788F99F11B777;
class Class_1_6854A6346A56B2FF;
class Class_1_F584355F9155BE7E;
class Class_2_57CD7C248B8FA7D6;
namespace RPG::Client { class MonoTravelShipChannel; }
namespace RPG::Client { class MonoTravelShipController; }
namespace RPG::Client { class TravelShipPuzzleBoard; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class CapsuleCollider; }

#define CLASS_1_C187E3BA406EEF9F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12A81970)
#define CLASS_1_C187E3BA406EEF9F_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x12A80BF0)
#define CLASS_1_C187E3BA406EEF9F_GET_NAVIGATEFLAG_OFFSET UNITYSDK_OFFSET(0x12A836D0)
#define CLASS_1_C187E3BA406EEF9F_GET_NAVIGATESHOWTOAST_OFFSET UNITYSDK_OFFSET(0x12A836B0)
#define CLASS_1_C187E3BA406EEF9F_GET_NAVIGATESTOPONARRIVEFLAG_OFFSET UNITYSDK_OFFSET(0x12A83690)
#define CLASS_1_C187E3BA406EEF9F_GET_NAVIGATIONPOINT_OFFSET UNITYSDK_OFFSET(0x12A836F0)
#define CLASS_1_C187E3BA406EEF9F_METHOD_1_07BF3EF95ADEC810_OFFSET UNITYSDK_OFFSET(0x12A81FA0)
#define CLASS_1_C187E3BA406EEF9F_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x12A83720)
#define CLASS_1_C187E3BA406EEF9F_METHOD_1_1AD5AA42B4315FCD_OFFSET UNITYSDK_OFFSET(0x12A82D70)
#define CLASS_1_C187E3BA406EEF9F_METHOD_1_1BF0FD4FE936B3E4_OFFSET UNITYSDK_OFFSET(0x12A82700)
#define CLASS_1_C187E3BA406EEF9F_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x12A83680)
#define CLASS_1_C187E3BA406EEF9F_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x12A83660)
#define CLASS_1_C187E3BA406EEF9F_METHOD_1_26246FE9F86FECC8_OFFSET UNITYSDK_OFFSET(0x12A82C00)
#define CLASS_1_C187E3BA406EEF9F_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x12A82470)
#define CLASS_1_C187E3BA406EEF9F_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x12A817D0)
#define CLASS_1_C187E3BA406EEF9F_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x12A81E30)
#define CLASS_1_C187E3BA406EEF9F_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x12A83310)
#define CLASS_1_C187E3BA406EEF9F_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x12A83220)
#define CLASS_1_C187E3BA406EEF9F_METHOD_1_50A631F0DC735085_OFFSET UNITYSDK_OFFSET(0x12A82130)
#define CLASS_1_C187E3BA406EEF9F_METHOD_1_5A45ACEFF8C4F98B_OFFSET UNITYSDK_OFFSET(0x12A83670)
#define CLASS_1_C187E3BA406EEF9F_METHOD_1_6BAF4B5CC274B2C9_OFFSET UNITYSDK_OFFSET(0x12A82E80)
#define CLASS_1_C187E3BA406EEF9F_METHOD_1_716BA667B58090A4_OFFSET UNITYSDK_OFFSET(0x12A833F0)
#define CLASS_1_C187E3BA406EEF9F_METHOD_1_77577333B4681208_OFFSET UNITYSDK_OFFSET(0x12A82400)
#define CLASS_1_C187E3BA406EEF9F_METHOD_1_7D0431BE0479FFC5_OFFSET UNITYSDK_OFFSET(0x12A83280)
#define CLASS_1_C187E3BA406EEF9F_METHOD_1_82E041CE7937C157_OFFSET UNITYSDK_OFFSET(0x12A835E0)
#define CLASS_1_C187E3BA406EEF9F_METHOD_1_94EAF81A8AF2C7F6_OFFSET UNITYSDK_OFFSET(0x12A83390)
#define CLASS_1_C187E3BA406EEF9F_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x12A81750)
#define CLASS_1_C187E3BA406EEF9F_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x12A820B0)
#define CLASS_1_C187E3BA406EEF9F_METHOD_1_9F54DFE10BE0EB4A_OFFSET UNITYSDK_OFFSET(0x12A82300)
#define CLASS_1_C187E3BA406EEF9F_METHOD_1_A485CBA546104226_OFFSET UNITYSDK_OFFSET(0x12A82B30)
#define CLASS_1_C187E3BA406EEF9F_METHOD_1_A56DCF601DDD899D_OFFSET UNITYSDK_OFFSET(0x12A827F0)
#define CLASS_1_C187E3BA406EEF9F_METHOD_1_AD1B6AB48B07E887_OFFSET UNITYSDK_OFFSET(0x12A824C0)
#define CLASS_1_C187E3BA406EEF9F_METHOD_1_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x12A835F0)
#define CLASS_1_C187E3BA406EEF9F_METHOD_1_B6BF2A1BCE9B9659_1_OFFSET UNITYSDK_OFFSET(0x12A830E0)
#define CLASS_1_C187E3BA406EEF9F_METHOD_1_B6BF2A1BCE9B9659_OFFSET UNITYSDK_OFFSET(0x12A82FA0)
#define CLASS_1_C187E3BA406EEF9F_METHOD_1_DDAE0378AA5FBFC5_OFFSET UNITYSDK_OFFSET(0x12A83600)
#define CLASS_1_C187E3BA406EEF9F_METHOD_1_DEDD31AF6F4E4818_OFFSET UNITYSDK_OFFSET(0x12A816D0)
#define CLASS_1_C187E3BA406EEF9F_METHOD_1_E34D65A3EBA8DAE3_OFFSET UNITYSDK_OFFSET(0x12A82A70)
#define CLASS_1_C187E3BA406EEF9F_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x12A83710)
#define CLASS_1_C187E3BA406EEF9F_METHOD_1_FF6BC1ACA7EB60B8_OFFSET UNITYSDK_OFFSET(0x12A82390)
#define CLASS_1_C187E3BA406EEF9F_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x12A80C30)
#define CLASS_1_C187E3BA406EEF9F_SET_NAVIGATEFLAG_OFFSET UNITYSDK_OFFSET(0x12A836E0)
#define CLASS_1_C187E3BA406EEF9F_SET_NAVIGATESHOWTOAST_OFFSET UNITYSDK_OFFSET(0x12A836C0)
#define CLASS_1_C187E3BA406EEF9F_SET_NAVIGATESTOPONARRIVEFLAG_OFFSET UNITYSDK_OFFSET(0x12A836A0)
#define CLASS_1_C187E3BA406EEF9F_SET_NAVIGATIONPOINT_OFFSET UNITYSDK_OFFSET(0x12A83700)
#define CLASS_1_C187E3BA406EEF9F__CTOR_OFFSET UNITYSDK_OFFSET(0x12A80C70)

inline static constexpr unsigned int Class_1_C187E3BA406EEF9F_TypeDefinitionIndex = 63431;

class Class_1_C187E3BA406EEF9F : public ::System::Object
{
public:
	static ::Class_1_C187E3BA406EEF9F** StaticGet__Instance_k__BackingField()
	{
		return (::Class_1_C187E3BA406EEF9F**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C187E3BA406EEF9F_TypeDefinitionIndex)->GetStaticField(0xC8C0);
	}
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_2; // 0x0
	::Class_1_393788F99F11B777* Field_1_17; // 0x10
	::AirShipRandomFloating* Field_1_13; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::Client::ETravelShipState, ::Class_1_6854A6346A56B2FF*>* Field_1_16; // 0x20
	::Class_1_6854A6346A56B2FF* Field_1_15; // 0x28
	::Struct_2_0B84ADD7815498A2 Field_1_8; // 0x30
	::RPG::GameCore::GameEntity* Field_1_9; // 0x40
	::Class_1_F584355F9155BE7E* Field_1_14; // 0x48
	::RPG::Client::TravelShipPuzzleBoard* Field_1_10; // 0x50
	::RPG::Client::MonoTravelShipController* Field_1_12; // 0x58
	::RPG::GameCore::AdventureCharacterController* Field_1_11; // 0x60
	::System::Boolean _NavigateShowToast_k__BackingField; // 0x68
	::System::Boolean _NavigateFlag_k__BackingField; // 0x69
	::System::Boolean _NavigateStopOnArriveFlag_k__BackingField; // 0x6A
	::System::Boolean Field_1_3; // 0x6B
	::System::Boolean Field_1_18; // 0x6C
	::System::Nullable_1<::UnityEngine::Vector3> _NavigationPoint_k__BackingField; // 0x70

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::Client::TravelShipPuzzleBoard* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::TravelShipPuzzleBoard*))((::PBYTE)hIl2Cpp + CLASS_1_C187E3BA406EEF9F__CTOR_OFFSET))(this, a1, a2);
	}

	static ::Class_1_C187E3BA406EEF9F* get_Instance()
	{
		return ((::Class_1_C187E3BA406EEF9F*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C187E3BA406EEF9F_GET_INSTANCE_OFFSET))();
	}

	static ::System::Void set_Instance(::Class_1_C187E3BA406EEF9F* value)
	{
		return ((::System::Void(*)(::Class_1_C187E3BA406EEF9F*))((::PBYTE)hIl2Cpp + CLASS_1_C187E3BA406EEF9F_SET_INSTANCE_OFFSET))(value);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C187E3BA406EEF9F_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C187E3BA406EEF9F_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_1_9F54DFE10BE0EB4A(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C187E3BA406EEF9F_METHOD_1_9F54DFE10BE0EB4A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_FF6BC1ACA7EB60B8(::RPG::Client::ETravelShipState a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ETravelShipState))((::PBYTE)hIl2Cpp + CLASS_1_C187E3BA406EEF9F_METHOD_1_FF6BC1ACA7EB60B8_OFFSET))(this, a1);
	}

	::System::Void Method_1_50A631F0DC735085(::RPG::Client::ETravelShipState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ETravelShipState))((::PBYTE)hIl2Cpp + CLASS_1_C187E3BA406EEF9F_METHOD_1_50A631F0DC735085_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_77577333B4681208()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C187E3BA406EEF9F_METHOD_1_77577333B4681208_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C187E3BA406EEF9F_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_AD1B6AB48B07E887(::RPG::Client::MonoTravelShipChannel* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MonoTravelShipChannel*))((::PBYTE)hIl2Cpp + CLASS_1_C187E3BA406EEF9F_METHOD_1_AD1B6AB48B07E887_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1BF0FD4FE936B3E4(::RPG::Client::MonoTravelShipChannel* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MonoTravelShipChannel*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C187E3BA406EEF9F_METHOD_1_1BF0FD4FE936B3E4_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_A56DCF601DDD899D(::UnityEngine::Vector3& a1, ::UnityEngine::Quaternion& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_1_C187E3BA406EEF9F_METHOD_1_A56DCF601DDD899D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E34D65A3EBA8DAE3(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_C187E3BA406EEF9F_METHOD_1_E34D65A3EBA8DAE3_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_A485CBA546104226(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_C187E3BA406EEF9F_METHOD_1_A485CBA546104226_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_26246FE9F86FECC8(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C187E3BA406EEF9F_METHOD_1_26246FE9F86FECC8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_1AD5AA42B4315FCD(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C187E3BA406EEF9F_METHOD_1_1AD5AA42B4315FCD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_07BF3EF95ADEC810(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C187E3BA406EEF9F_METHOD_1_07BF3EF95ADEC810_OFFSET))(this, a1);
	}

	::System::Void Method_1_6BAF4B5CC274B2C9(::System::Boolean a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C187E3BA406EEF9F_METHOD_1_6BAF4B5CC274B2C9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B6BF2A1BCE9B9659(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C187E3BA406EEF9F_METHOD_1_B6BF2A1BCE9B9659_OFFSET))(this, a1);
	}

	::System::Void Method_1_B6BF2A1BCE9B9659_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C187E3BA406EEF9F_METHOD_1_B6BF2A1BCE9B9659_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C187E3BA406EEF9F_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C187E3BA406EEF9F_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C187E3BA406EEF9F_METHOD_1_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C187E3BA406EEF9F_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_1_7D0431BE0479FFC5(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C187E3BA406EEF9F_METHOD_1_7D0431BE0479FFC5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C187E3BA406EEF9F_METHOD_1_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Void Method_1_94EAF81A8AF2C7F6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C187E3BA406EEF9F_METHOD_1_94EAF81A8AF2C7F6_OFFSET))(this, a1);
	}

	::System::Void Method_1_716BA667B58090A4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C187E3BA406EEF9F_METHOD_1_716BA667B58090A4_OFFSET))(this, a1);
	}

	::RPG::Client::TravelShipPuzzleBoard* Method_1_82E041CE7937C157()
	{
		return ((::RPG::Client::TravelShipPuzzleBoard*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C187E3BA406EEF9F_METHOD_1_82E041CE7937C157_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C187E3BA406EEF9F_METHOD_1_B1445E8504415D4D_OFFSET))(this);
	}

	::UnityEngine::CapsuleCollider* Method_1_DDAE0378AA5FBFC5()
	{
		return ((::UnityEngine::CapsuleCollider*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C187E3BA406EEF9F_METHOD_1_DDAE0378AA5FBFC5_OFFSET))(this);
	}

	::Class_1_F584355F9155BE7E* Method_1_24748FC20F375725()
	{
		return ((::Class_1_F584355F9155BE7E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C187E3BA406EEF9F_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::RPG::Client::MonoTravelShipController* Method_1_5A45ACEFF8C4F98B()
	{
		return ((::RPG::Client::MonoTravelShipController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C187E3BA406EEF9F_METHOD_1_5A45ACEFF8C4F98B_OFFSET))(this);
	}

	::Class_1_393788F99F11B777* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_393788F99F11B777*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C187E3BA406EEF9F_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Boolean get_NavigateStopOnArriveFlag()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C187E3BA406EEF9F_GET_NAVIGATESTOPONARRIVEFLAG_OFFSET))(this);
	}

	::System::Void set_NavigateStopOnArriveFlag(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C187E3BA406EEF9F_SET_NAVIGATESTOPONARRIVEFLAG_OFFSET))(this, value);
	}

	::System::Boolean get_NavigateShowToast()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C187E3BA406EEF9F_GET_NAVIGATESHOWTOAST_OFFSET))(this);
	}

	::System::Void set_NavigateShowToast(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C187E3BA406EEF9F_SET_NAVIGATESHOWTOAST_OFFSET))(this, value);
	}

	::System::Boolean get_NavigateFlag()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C187E3BA406EEF9F_GET_NAVIGATEFLAG_OFFSET))(this);
	}

	::System::Void set_NavigateFlag(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C187E3BA406EEF9F_SET_NAVIGATEFLAG_OFFSET))(this, value);
	}

	::System::Nullable_1<::UnityEngine::Vector3> get_NavigationPoint()
	{
		return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C187E3BA406EEF9F_GET_NAVIGATIONPOINT_OFFSET))(this);
	}

	::System::Void set_NavigationPoint(::System::Nullable_1<::UnityEngine::Vector3> value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + CLASS_1_C187E3BA406EEF9F_SET_NAVIGATIONPOINT_OFFSET))(this, value);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C187E3BA406EEF9F_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C187E3BA406EEF9F_METHOD_1_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::Class_2_57CD7C248B8FA7D6* Method_1_DEDD31AF6F4E4818()
	{
		return ((::Class_2_57CD7C248B8FA7D6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C187E3BA406EEF9F_METHOD_1_DEDD31AF6F4E4818_OFFSET))(this);
	}
};
