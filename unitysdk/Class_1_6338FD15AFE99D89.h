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

#define CLASS_1_6338FD15AFE99D89_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18733B50)
#define CLASS_1_6338FD15AFE99D89_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x18732DF0)
#define CLASS_1_6338FD15AFE99D89_GET_NAVIGATEFLAG_OFFSET UNITYSDK_OFFSET(0x18735DE0)
#define CLASS_1_6338FD15AFE99D89_GET_NAVIGATESHOWTOAST_OFFSET UNITYSDK_OFFSET(0x18735DC0)
#define CLASS_1_6338FD15AFE99D89_GET_NAVIGATESTOPONARRIVEFLAG_OFFSET UNITYSDK_OFFSET(0x18735DA0)
#define CLASS_1_6338FD15AFE99D89_GET_NAVIGATIONPOINT_OFFSET UNITYSDK_OFFSET(0x18735E00)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_07BF3EF95ADEC810_OFFSET UNITYSDK_OFFSET(0x18734300)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x18735E30)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_19F67B6D5A07895C_OFFSET UNITYSDK_OFFSET(0x187351D0)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_1DFB9896143A3689_OFFSET UNITYSDK_OFFSET(0x18735AA0)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x18735D90)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x18735D70)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_24D4EB641B41AC50_OFFSET UNITYSDK_OFFSET(0x187350F0)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0x187359B0)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_30F48F78D7B0AD48_OFFSET UNITYSDK_OFFSET(0x187358C0)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x18734A20)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x187339B0)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x18734190)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_57E9EA809B95083F_OFFSET UNITYSDK_OFFSET(0x187338B0)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_5A45ACEFF8C4F98B_OFFSET UNITYSDK_OFFSET(0x18735D80)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_5B56B56BFFE4CC00_OFFSET UNITYSDK_OFFSET(0x18734770)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_604FFA5B9993B58C_OFFSET UNITYSDK_OFFSET(0x18734A70)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_6BAF4B5CC274B2C9_OFFSET UNITYSDK_OFFSET(0x18735460)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_7129F6CA0AB86D44_OFFSET UNITYSDK_OFFSET(0x18735340)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_716BA667B58090A4_OFFSET UNITYSDK_OFFSET(0x18735B00)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_7D9FB684EF17D12D_OFFSET UNITYSDK_OFFSET(0x18734940)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_82E041CE7937C157_OFFSET UNITYSDK_OFFSET(0x18735CF0)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_841E14085A17B23C_OFFSET UNITYSDK_OFFSET(0x18734490)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_8DA95807C9107942_OFFSET UNITYSDK_OFFSET(0x18734C60)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x18733930)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x18734410)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x18735800)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_A56DCF601DDD899D_OFFSET UNITYSDK_OFFSET(0x18734D50)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_B00DACF23A35F308_OFFSET UNITYSDK_OFFSET(0x18734FD0)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x18735D00)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_B6BF2A1BCE9B9659_1_OFFSET UNITYSDK_OFFSET(0x187356C0)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_B6BF2A1BCE9B9659_OFFSET UNITYSDK_OFFSET(0x18735580)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_D8E9EBC6BF59EE14_OFFSET UNITYSDK_OFFSET(0x18734870)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_DDAE0378AA5FBFC5_OFFSET UNITYSDK_OFFSET(0x18735D10)
#define CLASS_1_6338FD15AFE99D89_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x18735E20)
#define CLASS_1_6338FD15AFE99D89_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x18732E00)
#define CLASS_1_6338FD15AFE99D89_SET_NAVIGATEFLAG_OFFSET UNITYSDK_OFFSET(0x18735DF0)
#define CLASS_1_6338FD15AFE99D89_SET_NAVIGATESHOWTOAST_OFFSET UNITYSDK_OFFSET(0x18735DD0)
#define CLASS_1_6338FD15AFE99D89_SET_NAVIGATESTOPONARRIVEFLAG_OFFSET UNITYSDK_OFFSET(0x18735DB0)
#define CLASS_1_6338FD15AFE99D89_SET_NAVIGATIONPOINT_OFFSET UNITYSDK_OFFSET(0x18735E10)
#define CLASS_1_6338FD15AFE99D89__CTOR_OFFSET UNITYSDK_OFFSET(0x18732E10)

inline static constexpr unsigned int Class_1_6338FD15AFE99D89_TypeDefinitionIndex = 65719;

class Class_1_6338FD15AFE99D89 : public ::System::Object
{
public:
	static ::Class_1_6338FD15AFE99D89** StaticGet__Instance_k__BackingField()
	{
		return (::Class_1_6338FD15AFE99D89**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6338FD15AFE99D89_TypeDefinitionIndex)->GetStaticField(0x489A0);
	}
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_2; // 0x0
	::RPG::GameCore::GameEntity* Field_1_3; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::Client::ETravelShipState, ::Class_1_6854A6346A56B2FF*>* Field_1_4; // 0x18
	::RPG::GameCore::AdventureCharacterController* Field_1_5; // 0x20
	::RPG::Client::TravelShipPuzzleBoard* Field_1_6; // 0x28
	::RPG::Client::MonoTravelShipController* Field_1_7; // 0x30
	::Class_1_F584355F9155BE7E* Field_1_8; // 0x38
	::Class_1_393788F99F11B777* Field_1_9; // 0x40
	::AirShipRandomFloating* Field_1_10; // 0x48
	::Struct_2_0B84ADD7815498A2 Field_1_11; // 0x50
	::Class_1_6854A6346A56B2FF* Field_1_12; // 0x60
	::System::Boolean _NavigateStopOnArriveFlag_k__BackingField; // 0x68
	::System::Boolean _NavigateShowToast_k__BackingField; // 0x69
	::System::Boolean Field_1_15; // 0x6A
	::System::Boolean _NavigateFlag_k__BackingField; // 0x6B
	::System::Boolean Field_1_17; // 0x6C
	::System::Nullable_1<::UnityEngine::Vector3> _NavigationPoint_k__BackingField; // 0x70

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
