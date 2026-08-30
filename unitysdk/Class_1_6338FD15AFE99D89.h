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
class Class_2_6E72FA7907D46962;
namespace RPG::Client { class MonoTravelShipChannel; }
namespace RPG::Client { class MonoTravelShipController; }
namespace RPG::Client { class TravelShipPuzzleBoard; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class CapsuleCollider; }

#define CLASS_1_6338FD15AFE99D89_DISPOSE_OFFSET UNITYSDK_OFFSET(0x188CC280)
#define CLASS_1_6338FD15AFE99D89_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x188CB540)
#define CLASS_1_6338FD15AFE99D89_GET_NAVIGATEFLAG_OFFSET UNITYSDK_OFFSET(0x188CE510)
#define CLASS_1_6338FD15AFE99D89_GET_NAVIGATESHOWTOAST_OFFSET UNITYSDK_OFFSET(0x188CE4F0)
#define CLASS_1_6338FD15AFE99D89_GET_NAVIGATESTOPONARRIVEFLAG_OFFSET UNITYSDK_OFFSET(0x188CE4D0)
#define CLASS_1_6338FD15AFE99D89_GET_NAVIGATIONPOINT_OFFSET UNITYSDK_OFFSET(0x188CE530)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_07BF3EF95ADEC810_OFFSET UNITYSDK_OFFSET(0x188CCA30)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x188CE560)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_19F67B6D5A07895C_OFFSET UNITYSDK_OFFSET(0x188CD900)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_1DFB9896143A3689_OFFSET UNITYSDK_OFFSET(0x188CE1D0)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x188CE4C0)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x188CE4A0)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_24D4EB641B41AC50_OFFSET UNITYSDK_OFFSET(0x188CD820)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0x188CE0E0)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_30F48F78D7B0AD48_OFFSET UNITYSDK_OFFSET(0x188CDFF0)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x188CD150)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x188CC0E0)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x188CC8C0)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_57E9EA809B95083F_OFFSET UNITYSDK_OFFSET(0x188CBFE0)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_5A45ACEFF8C4F98B_OFFSET UNITYSDK_OFFSET(0x188CE4B0)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_5B56B56BFFE4CC00_OFFSET UNITYSDK_OFFSET(0x188CCEA0)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_604FFA5B9993B58C_OFFSET UNITYSDK_OFFSET(0x188CD1A0)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_6BAF4B5CC274B2C9_OFFSET UNITYSDK_OFFSET(0x188CDB90)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_7129F6CA0AB86D44_OFFSET UNITYSDK_OFFSET(0x188CDA70)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_716BA667B58090A4_OFFSET UNITYSDK_OFFSET(0x188CE230)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_7D9FB684EF17D12D_OFFSET UNITYSDK_OFFSET(0x188CD070)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_82E041CE7937C157_OFFSET UNITYSDK_OFFSET(0x188CE420)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_841E14085A17B23C_OFFSET UNITYSDK_OFFSET(0x188CCBC0)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_8DA95807C9107942_OFFSET UNITYSDK_OFFSET(0x188CD390)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x188CC060)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x188CCB40)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x188CDF30)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_A56DCF601DDD899D_OFFSET UNITYSDK_OFFSET(0x188CD480)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_B00DACF23A35F308_OFFSET UNITYSDK_OFFSET(0x188CD700)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x188CE430)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_B6BF2A1BCE9B9659_1_OFFSET UNITYSDK_OFFSET(0x188CDDF0)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_B6BF2A1BCE9B9659_OFFSET UNITYSDK_OFFSET(0x188CDCB0)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_D8E9EBC6BF59EE14_OFFSET UNITYSDK_OFFSET(0x188CCFA0)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_DDAE0378AA5FBFC5_OFFSET UNITYSDK_OFFSET(0x188CE440)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x188CE550)
#define CLASS_1_6338FD15AFE99D89_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x188CB550)
#define CLASS_1_6338FD15AFE99D89_SET_NAVIGATEFLAG_OFFSET UNITYSDK_OFFSET(0x188CE520)
#define CLASS_1_6338FD15AFE99D89_SET_NAVIGATESHOWTOAST_OFFSET UNITYSDK_OFFSET(0x188CE500)
#define CLASS_1_6338FD15AFE99D89_SET_NAVIGATESTOPONARRIVEFLAG_OFFSET UNITYSDK_OFFSET(0x188CE4E0)
#define CLASS_1_6338FD15AFE99D89_SET_NAVIGATIONPOINT_OFFSET UNITYSDK_OFFSET(0x188CE540)
#define CLASS_1_6338FD15AFE99D89__CTOR_OFFSET UNITYSDK_OFFSET(0x188CB560)

inline static constexpr unsigned int Class_1_6338FD15AFE99D89_TypeDefinitionIndex = 68756;

class Class_1_6338FD15AFE99D89 : public ::System::Object
{
public:
	static ::Class_1_6338FD15AFE99D89** StaticGet__Instance_k__BackingField()
	{
		return (::Class_1_6338FD15AFE99D89**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6338FD15AFE99D89_TypeDefinitionIndex)->GetStaticField(0x10190);
	}
	// static const ::System::String* EHFNDKHJCBO; // 0x0
	// static const ::System::String* LFBEOKAIMFI; // 0x0
	::Struct_2_0B84ADD7815498A2 IJDLJKBNDEJ; // 0x10
	::Class_1_F584355F9155BE7E* IEPCIODGJJD; // 0x20
	::RPG::Client::MonoTravelShipController* CEODOONOFBM; // 0x28
	::Class_1_393788F99F11B777* IJPIHJKEPKE; // 0x30
	::AirShipRandomFloating* DBFCBFNMKAE; // 0x38
	::Class_1_6854A6346A56B2FF* EHOAMKDICDN; // 0x40
	::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x48
	::RPG::Client::TravelShipPuzzleBoard* CCAHGFIABKE; // 0x50
	::RPG::GameCore::GameEntity* JCCHOIPFHHD; // 0x58
	::System::Collections::Generic::Dictionary_2<::RPG::Client::ETravelShipState, ::Class_1_6854A6346A56B2FF*>* LKKJNJIEFBC; // 0x60
	::System::Boolean NEJFFBMGICC; // 0x68
	::System::Nullable_1<::UnityEngine::Vector3> _NavigationPoint_k__BackingField; // 0x6C
	::System::Boolean CLCIDDBMBEC; // 0x7C
	::System::Boolean _NavigateShowToast_k__BackingField; // 0x7D
	::System::Boolean _NavigateStopOnArriveFlag_k__BackingField; // 0x7E
	::System::Boolean _NavigateFlag_k__BackingField; // 0x7F

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::Client::TravelShipPuzzleBoard* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::TravelShipPuzzleBoard*))((::PBYTE)hIl2Cpp + CLASS_1_6338FD15AFE99D89__CTOR_OFFSET))(this, a1, a2);
	}

	static ::Class_1_6338FD15AFE99D89* get_Instance()
	{
		return ((::Class_1_6338FD15AFE99D89*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6338FD15AFE99D89_GET_INSTANCE_OFFSET))();
	}

	static ::System::Void set_Instance(::Class_1_6338FD15AFE99D89* a1)
	{
		return ((::System::Void(*)(::Class_1_6338FD15AFE99D89*))((::PBYTE)hIl2Cpp + CLASS_1_6338FD15AFE99D89_SET_INSTANCE_OFFSET))(a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6338FD15AFE99D89_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6338FD15AFE99D89_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_1_5B56B56BFFE4CC00(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6338FD15AFE99D89_METHOD_1_5B56B56BFFE4CC00_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D8E9EBC6BF59EE14(::RPG::Client::ETravelShipState a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ETravelShipState))((::PBYTE)hIl2Cpp + CLASS_1_6338FD15AFE99D89_METHOD_1_D8E9EBC6BF59EE14_OFFSET))(this, a1);
	}

	::System::Void Method_1_841E14085A17B23C(::RPG::Client::ETravelShipState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ETravelShipState))((::PBYTE)hIl2Cpp + CLASS_1_6338FD15AFE99D89_METHOD_1_841E14085A17B23C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7D9FB684EF17D12D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6338FD15AFE99D89_METHOD_1_7D9FB684EF17D12D_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6338FD15AFE99D89_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_604FFA5B9993B58C(::RPG::Client::MonoTravelShipChannel* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MonoTravelShipChannel*))((::PBYTE)hIl2Cpp + CLASS_1_6338FD15AFE99D89_METHOD_1_604FFA5B9993B58C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8DA95807C9107942(::RPG::Client::MonoTravelShipChannel* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MonoTravelShipChannel*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6338FD15AFE99D89_METHOD_1_8DA95807C9107942_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_A56DCF601DDD899D(::UnityEngine::Vector3& a1, ::UnityEngine::Quaternion& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_1_6338FD15AFE99D89_METHOD_1_A56DCF601DDD899D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B00DACF23A35F308(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_6338FD15AFE99D89_METHOD_1_B00DACF23A35F308_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_24D4EB641B41AC50(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_6338FD15AFE99D89_METHOD_1_24D4EB641B41AC50_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_19F67B6D5A07895C(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6338FD15AFE99D89_METHOD_1_19F67B6D5A07895C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_7129F6CA0AB86D44(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6338FD15AFE99D89_METHOD_1_7129F6CA0AB86D44_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_07BF3EF95ADEC810(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6338FD15AFE99D89_METHOD_1_07BF3EF95ADEC810_OFFSET))(this, a1);
	}

	::System::Void Method_1_6BAF4B5CC274B2C9(::System::Boolean a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6338FD15AFE99D89_METHOD_1_6BAF4B5CC274B2C9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B6BF2A1BCE9B9659(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6338FD15AFE99D89_METHOD_1_B6BF2A1BCE9B9659_OFFSET))(this, a1);
	}

	::System::Void Method_1_B6BF2A1BCE9B9659_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6338FD15AFE99D89_METHOD_1_B6BF2A1BCE9B9659_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6338FD15AFE99D89_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6338FD15AFE99D89_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6338FD15AFE99D89_METHOD_1_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6338FD15AFE99D89_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_1_30F48F78D7B0AD48(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6338FD15AFE99D89_METHOD_1_30F48F78D7B0AD48_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2B9D478141E0F891()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6338FD15AFE99D89_METHOD_1_2B9D478141E0F891_OFFSET))(this);
	}

	::System::Void Method_1_1DFB9896143A3689(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6338FD15AFE99D89_METHOD_1_1DFB9896143A3689_OFFSET))(this, a1);
	}

	::System::Void Method_1_716BA667B58090A4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6338FD15AFE99D89_METHOD_1_716BA667B58090A4_OFFSET))(this, a1);
	}

	::RPG::Client::TravelShipPuzzleBoard* Method_1_82E041CE7937C157()
	{
		return ((::RPG::Client::TravelShipPuzzleBoard*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6338FD15AFE99D89_METHOD_1_82E041CE7937C157_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6338FD15AFE99D89_METHOD_1_B1445E8504415D4D_OFFSET))(this);
	}

	::UnityEngine::CapsuleCollider* Method_1_DDAE0378AA5FBFC5()
	{
		return ((::UnityEngine::CapsuleCollider*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6338FD15AFE99D89_METHOD_1_DDAE0378AA5FBFC5_OFFSET))(this);
	}

	::Class_1_F584355F9155BE7E* Method_1_24748FC20F375725()
	{
		return ((::Class_1_F584355F9155BE7E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6338FD15AFE99D89_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::RPG::Client::MonoTravelShipController* Method_1_5A45ACEFF8C4F98B()
	{
		return ((::RPG::Client::MonoTravelShipController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6338FD15AFE99D89_METHOD_1_5A45ACEFF8C4F98B_OFFSET))(this);
	}

	::Class_1_393788F99F11B777* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_393788F99F11B777*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6338FD15AFE99D89_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Boolean get_NavigateStopOnArriveFlag()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6338FD15AFE99D89_GET_NAVIGATESTOPONARRIVEFLAG_OFFSET))(this);
	}

	::System::Void set_NavigateStopOnArriveFlag(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6338FD15AFE99D89_SET_NAVIGATESTOPONARRIVEFLAG_OFFSET))(this, a1);
	}

	::System::Boolean get_NavigateShowToast()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6338FD15AFE99D89_GET_NAVIGATESHOWTOAST_OFFSET))(this);
	}

	::System::Void set_NavigateShowToast(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6338FD15AFE99D89_SET_NAVIGATESHOWTOAST_OFFSET))(this, a1);
	}

	::System::Boolean get_NavigateFlag()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6338FD15AFE99D89_GET_NAVIGATEFLAG_OFFSET))(this);
	}

	::System::Void set_NavigateFlag(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6338FD15AFE99D89_SET_NAVIGATEFLAG_OFFSET))(this, a1);
	}

	::System::Nullable_1<::UnityEngine::Vector3> get_NavigationPoint()
	{
		return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6338FD15AFE99D89_GET_NAVIGATIONPOINT_OFFSET))(this);
	}

	::System::Void set_NavigationPoint(::System::Nullable_1<::UnityEngine::Vector3> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + CLASS_1_6338FD15AFE99D89_SET_NAVIGATIONPOINT_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6338FD15AFE99D89_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6338FD15AFE99D89_METHOD_1_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::Class_2_6E72FA7907D46962* Method_1_57E9EA809B95083F()
	{
		return ((::Class_2_6E72FA7907D46962*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6338FD15AFE99D89_METHOD_1_57E9EA809B95083F_OFFSET))(this);
	}
};
