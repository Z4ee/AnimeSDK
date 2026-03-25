#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CollisionDataFlag.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_427;
class Class_0_16E4307DCC419505_428;
class Class_1_2C7816CF4E9F7398;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_98133438BFCB56ED_CLEAR_OFFSET UNITYSDK_OFFSET(0x89BB4E0)
#define CLASS_1_98133438BFCB56ED_METHOD_1_0F8EFB6D63ADB169_1_OFFSET UNITYSDK_OFFSET(0x89BB600)
#define CLASS_1_98133438BFCB56ED_METHOD_1_0F8EFB6D63ADB169_OFFSET UNITYSDK_OFFSET(0x89BB5B0)
#define CLASS_1_98133438BFCB56ED_METHOD_1_4D7F2CC1DBA24BC8_OFFSET UNITYSDK_OFFSET(0x89BB560)
#define CLASS_1_98133438BFCB56ED__CTOR_OFFSET UNITYSDK_OFFSET(0x89BB650)

inline static constexpr unsigned int Class_1_98133438BFCB56ED_TypeDefinitionIndex = 45268;

class Class_1_98133438BFCB56ED : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_427*>* Field_1_7; // 0x10
	::System::Object* Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::Class_1_2C7816CF4E9F7398*>* Field_1_8; // 0x20
	::Class_0_16E4307DCC419505_428* Field_1_4; // 0x28
	::RPG::GameCore::FixVec2 Field_1_2; // 0x30
	::RPG::GameCore::CollisionDataFlag Field_1_5; // 0x40
	::System::UInt32 Field_1_1; // 0x44
	::RPG::GameCore::FixVec2 Field_1_3; // 0x48
	::RPG::GameCore::FixVec2 Field_1_6; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98133438BFCB56ED__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98133438BFCB56ED_CLEAR_OFFSET))(this);
	}

	::System::Boolean Method_1_4D7F2CC1DBA24BC8(::RPG::GameCore::CollisionDataFlag a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CollisionDataFlag))((::PBYTE)hIl2Cpp + CLASS_1_98133438BFCB56ED_METHOD_1_4D7F2CC1DBA24BC8_OFFSET))(this, a1);
	}

	::System::Void Method_1_0F8EFB6D63ADB169(::RPG::GameCore::CollisionDataFlag a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CollisionDataFlag))((::PBYTE)hIl2Cpp + CLASS_1_98133438BFCB56ED_METHOD_1_0F8EFB6D63ADB169_OFFSET))(this, a1);
	}

	::System::Void Method_1_0F8EFB6D63ADB169_1(::RPG::GameCore::CollisionDataFlag a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CollisionDataFlag))((::PBYTE)hIl2Cpp + CLASS_1_98133438BFCB56ED_METHOD_1_0F8EFB6D63ADB169_1_OFFSET))(this, a1);
	}
};
