#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ETravelShipState.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_6338FD15AFE99D89;
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

#define CLASS_1_6854A6346A56B2FF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x158602F0)
#define CLASS_1_6854A6346A56B2FF_METHOD_1_263AF43A5B4AB6EE_OFFSET UNITYSDK_OFFSET(0x15860600)
#define CLASS_1_6854A6346A56B2FF_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x15860480)
#define CLASS_1_6854A6346A56B2FF_METHOD_1_2F3FCA07D2BBD116_OFFSET UNITYSDK_OFFSET(0x15860900)
#define CLASS_1_6854A6346A56B2FF_METHOD_1_336649C5B27EBC1A_OFFSET UNITYSDK_OFFSET(0x15860340)
#define CLASS_1_6854A6346A56B2FF_METHOD_1_6574D03FCADFBE2D_OFFSET UNITYSDK_OFFSET(0x15860E20)
#define CLASS_1_6854A6346A56B2FF_METHOD_1_75875D12F575D5AA_OFFSET UNITYSDK_OFFSET(0x158604E0)
#define CLASS_1_6854A6346A56B2FF_METHOD_1_8687442E72F368F3_OFFSET UNITYSDK_OFFSET(0x15860420)
#define CLASS_1_6854A6346A56B2FF_METHOD_1_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0x15860F00)
#define CLASS_1_6854A6346A56B2FF_METHOD_1_BD8BC8F0ED711A30_OFFSET UNITYSDK_OFFSET(0x15860E80)
#define CLASS_1_6854A6346A56B2FF_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x15860580)
#define CLASS_1_6854A6346A56B2FF_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x158605C0)
#define CLASS_1_6854A6346A56B2FF_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15860540)
#define CLASS_1_6854A6346A56B2FF_METHOD_1_EAD4C59D3FBAB043_OFFSET UNITYSDK_OFFSET(0x15860870)
#define CLASS_1_6854A6346A56B2FF_METHOD_1_F5E3C489599E075C_OFFSET UNITYSDK_OFFSET(0x15860E30)
#define CLASS_1_6854A6346A56B2FF__CTOR_OFFSET UNITYSDK_OFFSET(0x15860270)

inline static constexpr unsigned int Class_1_6854A6346A56B2FF_TypeDefinitionIndex = 68759;

class Class_1_6854A6346A56B2FF : public ::System::Object
{
public:
	// static const ::System::String* ADODJJMPFLG; // 0x0
	// static const ::System::String* KIDLMBBKDII; // 0x0
	// static const ::System::String* MCMACMIKAOE; // 0x0
	// static const ::System::String* OMNBAJKBGOI; // 0x0
	// static const ::System::String* IDJMLNDKLHP; // 0x0
	// static const ::System::String* BFBIPGEBDEH; // 0x0
	// static const ::System::String* PBMMBEMINGB; // 0x0
	// static const ::System::String* NAHNKMGJPMH; // 0x0
	// static const ::System::String* PHOFBPNENLG; // 0x0
	// static const ::System::String* CJLJIOGMLEC; // 0x0
	// static const ::System::String* MNIPJCGDPLC; // 0x0
	// static const ::System::String* EGHLFPNFBBJ; // 0x0
	// static const ::System::String* AEPNBKKNMGO; // 0x0
	::RPG::GameCore::GameEntity* JCCHOIPFHHD; // 0x10
	::RPG::Client::MonoTravelShipController* CEODOONOFBM; // 0x18
	::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x20
	::UnityEngine::Transform* PDJGEDNLBKJ; // 0x28
	::Class_1_6338FD15AFE99D89* EFGGDNKIPNM; // 0x30
	::UnityEngine::Vector3 OPGACHANGIN; // 0x38

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::Class_1_6338FD15AFE99D89* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_6338FD15AFE99D89*))((::PBYTE)hIl2Cpp + CLASS_1_6854A6346A56B2FF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6854A6346A56B2FF_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_336649C5B27EBC1A(::System::Nullable_1<::RPG::Client::ETravelShipState> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::Client::ETravelShipState>))((::PBYTE)hIl2Cpp + CLASS_1_6854A6346A56B2FF_METHOD_1_336649C5B27EBC1A_OFFSET))(this, a1);
	}

	::System::Void Method_1_8687442E72F368F3(::System::Nullable_1<::RPG::Client::ETravelShipState> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::Client::ETravelShipState>))((::PBYTE)hIl2Cpp + CLASS_1_6854A6346A56B2FF_METHOD_1_8687442E72F368F3_OFFSET))(this, a1);
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

	::Class_3_95AF281BFBCF5094* Method_1_BD8BC8F0ED711A30()
	{
		return ((::Class_3_95AF281BFBCF5094*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6854A6346A56B2FF_METHOD_1_BD8BC8F0ED711A30_OFFSET))(this);
	}

	::Class_1_F584355F9155BE7E* Method_1_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_F584355F9155BE7E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6854A6346A56B2FF_METHOD_1_9B39F7D7C1FF70D6_OFFSET))(this);
	}
};
