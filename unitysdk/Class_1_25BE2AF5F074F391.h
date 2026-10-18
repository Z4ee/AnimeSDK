#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_384;
class Class_1_3C02425323B914AE;
class Class_1_6B41D5D37BA0605F;
class Class_1_DD365D3DF2F2F979;
namespace RPG::Client { class EnvironmentSystem; }
namespace RPG::GameCore { class BattleLineupData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_25BE2AF5F074F391_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB5262B0)
#define CLASS_1_25BE2AF5F074F391_ENTER_OFFSET UNITYSDK_OFFSET(0xB526300)
#define CLASS_1_25BE2AF5F074F391_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0xB526960)
#define CLASS_1_25BE2AF5F074F391_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB526870)
#define CLASS_1_25BE2AF5F074F391_LEAVE_OFFSET UNITYSDK_OFFSET(0xB5268D0)
#define CLASS_1_25BE2AF5F074F391_METHOD_1_0608E01D4DD006F1_OFFSET UNITYSDK_OFFSET(0xB526AB0)
#define CLASS_1_25BE2AF5F074F391_METHOD_1_5E9FCCDB6178A9A4_OFFSET UNITYSDK_OFFSET(0xB526500)
#define CLASS_1_25BE2AF5F074F391_METHOD_1_E52129E82CD2D7F8_OFFSET UNITYSDK_OFFSET(0xB5269B0)
#define CLASS_1_25BE2AF5F074F391_TICK_OFFSET UNITYSDK_OFFSET(0xB526810)
#define CLASS_1_25BE2AF5F074F391__CTOR_OFFSET UNITYSDK_OFFSET(0xB5262A0)
#define CLASS_1_25BE2AF5F074F391__ENTER_B__2_0_OFFSET UNITYSDK_OFFSET(0xB526B40)

inline static constexpr unsigned int Class_1_25BE2AF5F074F391_TypeDefinitionIndex = 61200;

class Class_1_25BE2AF5F074F391 : public ::System::Object
{
public:
	static ::Class_1_DD365D3DF2F2F979** StaticGet_JGEDCFJGAKM()
	{
		return (::Class_1_DD365D3DF2F2F979**)Il2CppClass::FromTypeDefinitionIndex(Class_1_25BE2AF5F074F391_TypeDefinitionIndex)->GetStaticField(0x5A740);
	}
	::Class_1_3C02425323B914AE* GLBKFKJJPGO; // 0x10
	::RPG::GameCore::BattleLineupData* LMAGEICFOMF; // 0x18
	::System::String* AHFIKOKEIFC; // 0x20
	::RPG::Client::EnvironmentSystem* NLKKPKJEAOO; // 0x28
	::System::String* AGDCPDBNPNP; // 0x30
	::Class_1_DD365D3DF2F2F979* MOFHGHGKAFP; // 0x38
	::System::UInt32 GAPNANDKMHM; // 0x40
	::System::UInt32 PEEFHNHDBMF; // 0x44
	::System::UInt32 DGNCONDBJGE; // 0x48
	::System::UInt32 DLHOKIMOHFG; // 0x4C
	::System::Boolean KGIAHODIGOE; // 0x50

	::System::Void _ctor(::Class_1_DD365D3DF2F2F979* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DD365D3DF2F2F979*))((::PBYTE)hIl2Cpp + CLASS_1_25BE2AF5F074F391__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25BE2AF5F074F391_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Enter()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25BE2AF5F074F391_ENTER_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_25BE2AF5F074F391_TICK_OFFSET))(this, a1);
	}

	::System::Void LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_25BE2AF5F074F391_LATEUPDATE_OFFSET))(this, a1);
	}

	::System::Boolean Leave(::Class_1_6B41D5D37BA0605F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6B41D5D37BA0605F*))((::PBYTE)hIl2Cpp + CLASS_1_25BE2AF5F074F391_LEAVE_OFFSET))(this, a1);
	}

	::RPG::Client::GamePhaseType GetGamePhaseType()
	{
		return ((::RPG::Client::GamePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25BE2AF5F074F391_GETGAMEPHASETYPE_OFFSET))(this);
	}

	::System::Void Method_1_E52129E82CD2D7F8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25BE2AF5F074F391_METHOD_1_E52129E82CD2D7F8_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_384*>* Method_1_0608E01D4DD006F1()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_384*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25BE2AF5F074F391_METHOD_1_0608E01D4DD006F1_OFFSET))(this);
	}

	::System::Void Method_1_5E9FCCDB6178A9A4(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::RPG::GameCore::BattleLineupData* a5, ::System::String* a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::BattleLineupData*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_25BE2AF5F074F391_METHOD_1_5E9FCCDB6178A9A4_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void _Enter_b__2_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25BE2AF5F074F391__ENTER_B__2_0_OFFSET))(this);
	}
};
