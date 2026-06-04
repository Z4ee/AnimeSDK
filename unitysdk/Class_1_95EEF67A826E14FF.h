#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/RPG/GameCore/FloatMessageType.h"
#include "unitysdk/System/Object.h"

class Class_1_69D7459C7F6EC835;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_95EEF67A826E14FF_GET_MERGEDCOUNT_OFFSET UNITYSDK_OFFSET(0x13A26560)
#define CLASS_1_95EEF67A826E14FF_METHOD_1_12B9BCF82817FBA3_OFFSET UNITYSDK_OFFSET(0x13A26580)
#define CLASS_1_95EEF67A826E14FF_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x13A26830)
#define CLASS_1_95EEF67A826E14FF_METHOD_1_6AC96244C3E8E768_OFFSET UNITYSDK_OFFSET(0x13A26700)
#define CLASS_1_95EEF67A826E14FF_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13A267F0)
#define CLASS_1_95EEF67A826E14FF_SET_MERGEDCOUNT_OFFSET UNITYSDK_OFFSET(0x13A26570)
#define CLASS_1_95EEF67A826E14FF__CTOR_OFFSET UNITYSDK_OFFSET(0x13A26880)

inline static constexpr unsigned int Class_1_95EEF67A826E14FF_TypeDefinitionIndex = 66869;

class Class_1_95EEF67A826E14FF : public ::System::Object
{
public:
	::Class_1_69D7459C7F6EC835* Field_1_0; // 0x10
	::RPG::GameCore::GameEntity* Field_1_1; // 0x18
	::Il2CppArray<::System::Object*>* Field_1_2; // 0x20
	::System::String* Field_1_3; // 0x28
	::RPG::Client::TextID Field_1_4; // 0x30
	::System::Single Field_1_5; // 0x40
	::RPG::GameCore::FloatMessageType Field_1_6; // 0x44
	::System::Boolean Field_1_7; // 0x48
	::System::Boolean Field_1_8; // 0x49
	::RPG::GameCore::EnumStatusType Field_1_9; // 0x4C
	::System::Single Field_1_10; // 0x50
	::System::UInt32 _MergedCount_k__BackingField; // 0x54

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

	::System::Boolean Method_1_6AC96244C3E8E768(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_95EEF67A826E14FF_METHOD_1_6AC96244C3E8E768_OFFSET))(this, a1);
	}
};
