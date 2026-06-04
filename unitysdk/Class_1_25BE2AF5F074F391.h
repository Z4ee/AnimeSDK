#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_278;
class Class_1_6B41D5D37BA0605F;
class Class_1_CA3918258B4D86BD;
class Class_1_DD365D3DF2F2F979;
namespace RPG::Client { class EnvironmentSystem; }
namespace RPG::GameCore { class BattleLineupData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_25BE2AF5F074F391_DISPOSE_OFFSET UNITYSDK_OFFSET(0x145F9E60)
#define CLASS_1_25BE2AF5F074F391_ENTER_OFFSET UNITYSDK_OFFSET(0x145F9EB0)
#define CLASS_1_25BE2AF5F074F391_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0x145FA4F0)
#define CLASS_1_25BE2AF5F074F391_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x145FA400)
#define CLASS_1_25BE2AF5F074F391_LEAVE_OFFSET UNITYSDK_OFFSET(0x145FA460)
#define CLASS_1_25BE2AF5F074F391_METHOD_1_0608E01D4DD006F1_OFFSET UNITYSDK_OFFSET(0x145FA620)
#define CLASS_1_25BE2AF5F074F391_METHOD_1_5E9FCCDB6178A9A4_OFFSET UNITYSDK_OFFSET(0x145FA090)
#define CLASS_1_25BE2AF5F074F391_METHOD_1_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x145FA540)
#define CLASS_1_25BE2AF5F074F391_TICK_OFFSET UNITYSDK_OFFSET(0x145FA3A0)
#define CLASS_1_25BE2AF5F074F391__CTOR_OFFSET UNITYSDK_OFFSET(0x145F9E50)
#define CLASS_1_25BE2AF5F074F391__ENTER_B__2_0_OFFSET UNITYSDK_OFFSET(0x145FA6B0)

inline static constexpr unsigned int Class_1_25BE2AF5F074F391_TypeDefinitionIndex = 57206;

class Class_1_25BE2AF5F074F391 : public ::System::Object
{
public:
	static ::Class_1_DD365D3DF2F2F979** StaticGet_Field_1_0()
	{
		return (::Class_1_DD365D3DF2F2F979**)Il2CppClass::FromTypeDefinitionIndex(Class_1_25BE2AF5F074F391_TypeDefinitionIndex)->GetStaticField(0x54C00);
	}
	::Class_1_CA3918258B4D86BD* Field_1_1; // 0x10
	::RPG::Client::EnvironmentSystem* Field_1_2; // 0x18
	::System::String* Field_1_3; // 0x20
	::Class_1_DD365D3DF2F2F979* Field_1_4; // 0x28
	::System::String* Field_1_5; // 0x30
	::RPG::GameCore::BattleLineupData* Field_1_6; // 0x38
	::System::Boolean Field_1_7; // 0x40
	::System::UInt32 Field_1_8; // 0x44
	::System::UInt32 Field_1_9; // 0x48
	::System::UInt32 Field_1_10; // 0x4C
	::System::UInt32 Field_1_11; // 0x50

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

	::System::Void Method_1_60E1F7F58CCF739F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25BE2AF5F074F391_METHOD_1_60E1F7F58CCF739F_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_278*>* Method_1_0608E01D4DD006F1()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_278*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25BE2AF5F074F391_METHOD_1_0608E01D4DD006F1_OFFSET))(this);
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
