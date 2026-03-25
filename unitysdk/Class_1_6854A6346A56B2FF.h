#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ETravelShipState.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_C187E3BA406EEF9F;
class Class_1_F584355F9155BE7E;
class Class_3_95AF281BFBCF5094;
namespace RPG::Client { class ClientInputData; }
namespace RPG::Client { class MonoTravelShipController; }
namespace RPG::Client { class TravelShipPuzzleBoard; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_1_6854A6346A56B2FF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10961D70)
#define CLASS_1_6854A6346A56B2FF_METHOD_1_263AF43A5B4AB6EE_OFFSET UNITYSDK_OFFSET(0x10962020)
#define CLASS_1_6854A6346A56B2FF_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x10961EA0)
#define CLASS_1_6854A6346A56B2FF_METHOD_1_2F3FCA07D2BBD116_OFFSET UNITYSDK_OFFSET(0x10962320)
#define CLASS_1_6854A6346A56B2FF_METHOD_1_6574D03FCADFBE2D_OFFSET UNITYSDK_OFFSET(0x10962840)
#define CLASS_1_6854A6346A56B2FF_METHOD_1_75875D12F575D5AA_OFFSET UNITYSDK_OFFSET(0x10961F00)
#define CLASS_1_6854A6346A56B2FF_METHOD_1_8687442E72F368F3_1_OFFSET UNITYSDK_OFFSET(0x10961E40)
#define CLASS_1_6854A6346A56B2FF_METHOD_1_8687442E72F368F3_OFFSET UNITYSDK_OFFSET(0x10961DC0)
#define CLASS_1_6854A6346A56B2FF_METHOD_1_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0x10962920)
#define CLASS_1_6854A6346A56B2FF_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x10961FA0)
#define CLASS_1_6854A6346A56B2FF_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x10961FE0)
#define CLASS_1_6854A6346A56B2FF_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10961F60)
#define CLASS_1_6854A6346A56B2FF_METHOD_1_DC1A4A15DB18B077_OFFSET UNITYSDK_OFFSET(0x109628A0)
#define CLASS_1_6854A6346A56B2FF_METHOD_1_EAD4C59D3FBAB043_OFFSET UNITYSDK_OFFSET(0x10962290)
#define CLASS_1_6854A6346A56B2FF_METHOD_1_F5E3C489599E075C_OFFSET UNITYSDK_OFFSET(0x10962850)
#define CLASS_1_6854A6346A56B2FF__CTOR_OFFSET UNITYSDK_OFFSET(0x10961CF0)

inline static constexpr unsigned int Class_1_6854A6346A56B2FF_TypeDefinitionIndex = 56191;

class Class_1_6854A6346A56B2FF : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_2; // 0x0
	// static const ::System::String* Field_1_3; // 0x0
	// static const ::System::String* Field_1_4; // 0x0
	// static const ::System::String* Field_1_5; // 0x0
	// static const ::System::String* Field_1_6; // 0x0
	// static const ::System::String* Field_1_7; // 0x0
	// static const ::System::String* Field_1_8; // 0x0
	// static const ::System::String* Field_1_9; // 0x0
	// static const ::System::String* Field_1_10; // 0x0
	// static const ::System::String* Field_1_11; // 0x0
	// static const ::System::String* Field_1_12; // 0x0
	::RPG::GameCore::GameEntity* Field_1_13; // 0x10
	::Class_1_C187E3BA406EEF9F* Field_1_14; // 0x18
	::RPG::GameCore::AdventureCharacterController* Field_1_15; // 0x20
	::RPG::Client::MonoTravelShipController* Field_1_17; // 0x28
	::UnityEngine::Transform* Field_1_16; // 0x30
	::UnityEngine::Vector3 Field_1_18; // 0x38

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::Class_1_C187E3BA406EEF9F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_C187E3BA406EEF9F*))((::PBYTE)hIl2Cpp + CLASS_1_6854A6346A56B2FF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6854A6346A56B2FF_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_8687442E72F368F3(::System::Nullable_1<::RPG::Client::ETravelShipState> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::Client::ETravelShipState>))((::PBYTE)hIl2Cpp + CLASS_1_6854A6346A56B2FF_METHOD_1_8687442E72F368F3_OFFSET))(this, a1);
	}

	::System::Void Method_1_8687442E72F368F3_1(::System::Nullable_1<::RPG::Client::ETravelShipState> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::Client::ETravelShipState>))((::PBYTE)hIl2Cpp + CLASS_1_6854A6346A56B2FF_METHOD_1_8687442E72F368F3_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6854A6346A56B2FF_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_75875D12F575D5AA(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6854A6346A56B2FF_METHOD_1_75875D12F575D5AA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6854A6346A56B2FF_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6854A6346A56B2FF_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6854A6346A56B2FF_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_1_263AF43A5B4AB6EE(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_6854A6346A56B2FF_METHOD_1_263AF43A5B4AB6EE_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_EAD4C59D3FBAB043(::RPG::Client::ClientInputData* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::ClientInputData*))((::PBYTE)hIl2Cpp + CLASS_1_6854A6346A56B2FF_METHOD_1_EAD4C59D3FBAB043_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_2F3FCA07D2BBD116(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_6854A6346A56B2FF_METHOD_1_2F3FCA07D2BBD116_OFFSET))(this, a1);
	}

	::RPG::Client::ETravelShipState Method_1_6574D03FCADFBE2D()
	{
		return ((::RPG::Client::ETravelShipState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6854A6346A56B2FF_METHOD_1_6574D03FCADFBE2D_OFFSET))(this);
	}

	::RPG::Client::TravelShipPuzzleBoard* Method_1_F5E3C489599E075C()
	{
		return ((::RPG::Client::TravelShipPuzzleBoard*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6854A6346A56B2FF_METHOD_1_F5E3C489599E075C_OFFSET))(this);
	}

	::Class_3_95AF281BFBCF5094* Method_1_DC1A4A15DB18B077()
	{
		return ((::Class_3_95AF281BFBCF5094*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6854A6346A56B2FF_METHOD_1_DC1A4A15DB18B077_OFFSET))(this);
	}

	::Class_1_F584355F9155BE7E* Method_1_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_F584355F9155BE7E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6854A6346A56B2FF_METHOD_1_9B39F7D7C1FF70D6_OFFSET))(this);
	}
};
