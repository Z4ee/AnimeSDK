#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CollisionDataFlag.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_416;
class Class_0_16E4307DCC419505_417;
class Class_1_D30B741E780CB2FD;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_98133438BFCB56ED_CLEAR_OFFSET UNITYSDK_OFFSET(0x13824EE0)
#define CLASS_1_98133438BFCB56ED_METHOD_1_0F8EFB6D63ADB169_1_OFFSET UNITYSDK_OFFSET(0x13825030)
#define CLASS_1_98133438BFCB56ED_METHOD_1_0F8EFB6D63ADB169_OFFSET UNITYSDK_OFFSET(0x13824FE0)
#define CLASS_1_98133438BFCB56ED_METHOD_1_4D7F2CC1DBA24BC8_OFFSET UNITYSDK_OFFSET(0x13824F90)
#define CLASS_1_98133438BFCB56ED_METHOD_1_F86E3F6E3E2B1642_OFFSET UNITYSDK_OFFSET(0x13825080)
#define CLASS_1_98133438BFCB56ED__CTOR_OFFSET UNITYSDK_OFFSET(0x138250F0)

inline static constexpr unsigned int Class_1_98133438BFCB56ED_TypeDefinitionIndex = 50119;

class Class_1_98133438BFCB56ED : public ::System::Object
{
public:
	::System::Object* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_416* Field_1_1; // 0x18
	::Class_0_16E4307DCC419505_417* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::Class_1_D30B741E780CB2FD*>* Field_1_3; // 0x28
	::RPG::GameCore::CollisionDataFlag Field_1_4; // 0x30
	::System::UInt32 Field_1_5; // 0x34
	::RPG::GameCore::FixVec2 Field_1_6; // 0x38
	::System::UInt32 Field_1_7; // 0x48
	::System::UInt32 Field_1_8; // 0x4C
	::RPG::GameCore::FixVec2 Field_1_9; // 0x50
	::RPG::GameCore::FixVec2 Field_1_10; // 0x60

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

	::System::Boolean Method_1_F86E3F6E3E2B1642(::Class_1_98133438BFCB56ED* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_98133438BFCB56ED*))((::PBYTE)hIl2Cpp + CLASS_1_98133438BFCB56ED_METHOD_1_F86E3F6E3E2B1642_OFFSET))(this, a1);
	}
};
