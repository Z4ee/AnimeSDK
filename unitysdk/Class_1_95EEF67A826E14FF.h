#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/RPG/GameCore/FloatMessageType.h"
#include "unitysdk/System/Object.h"

class Class_1_2AA304B71C6E8B6D;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_95EEF67A826E14FF_GET_MERGEDCOUNT_OFFSET UNITYSDK_OFFSET(0x17F94930)
#define CLASS_1_95EEF67A826E14FF_METHOD_1_12B9BCF82817FBA3_OFFSET UNITYSDK_OFFSET(0x17F94950)
#define CLASS_1_95EEF67A826E14FF_METHOD_1_2AD3741D25035F49_OFFSET UNITYSDK_OFFSET(0x17F94AD0)
#define CLASS_1_95EEF67A826E14FF_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x17F94C90)
#define CLASS_1_95EEF67A826E14FF_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17F94C50)
#define CLASS_1_95EEF67A826E14FF_SET_MERGEDCOUNT_OFFSET UNITYSDK_OFFSET(0x17F94940)
#define CLASS_1_95EEF67A826E14FF__CTOR_OFFSET UNITYSDK_OFFSET(0x17F94CE0)

inline static constexpr unsigned int Class_1_95EEF67A826E14FF_TypeDefinitionIndex = 71491;

class Class_1_95EEF67A826E14FF : public ::System::Object
{
public:
	::Class_1_2AA304B71C6E8B6D* NJGPHAIEOBP; // 0x10
	::System::String* GHGOKMODGJK; // 0x18
	::Il2CppArray<::System::Object*>* MOJOOLJFAIG; // 0x20
	::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x28
	::System::Single GHOOBAHOGAM; // 0x30
	::RPG::GameCore::FloatMessageType GBJBHFGLNDP; // 0x34
	::RPG::GameCore::EnumStatusType EGBFNFCEPHD; // 0x38
	::System::UInt32 _MergedCount_k__BackingField; // 0x3C
	::RPG::Client::TextID ANAJAIHNJLK; // 0x40
	::System::Boolean EAMEABKBBEJ; // 0x50
	::System::Boolean BAGHDLLONAC; // 0x51
	::System::Single HKGPLKJOCDH; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95EEF67A826E14FF__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_MergedCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95EEF67A826E14FF_GET_MERGEDCOUNT_OFFSET))(this);
	}

	::System::Void set_MergedCount(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_95EEF67A826E14FF_SET_MERGEDCOUNT_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_12B9BCF82817FBA3(::Class_1_95EEF67A826E14FF* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_95EEF67A826E14FF*))((::PBYTE)hIl2Cpp + CLASS_1_95EEF67A826E14FF_METHOD_1_12B9BCF82817FBA3_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95EEF67A826E14FF_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_95EEF67A826E14FF_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_2AD3741D25035F49(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_95EEF67A826E14FF_METHOD_1_2AD3741D25035F49_OFFSET))(this, a1);
	}
};
