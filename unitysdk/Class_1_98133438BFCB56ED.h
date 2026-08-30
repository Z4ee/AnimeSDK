#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CollisionDataFlag.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_475;
class Class_0_16E4307DCC419505_476;
class Class_1_D30B741E780CB2FD;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_98133438BFCB56ED_CLEAR_OFFSET UNITYSDK_OFFSET(0x19110E20)
#define CLASS_1_98133438BFCB56ED_METHOD_1_0F8EFB6D63ADB169_1_OFFSET UNITYSDK_OFFSET(0x19110F70)
#define CLASS_1_98133438BFCB56ED_METHOD_1_0F8EFB6D63ADB169_OFFSET UNITYSDK_OFFSET(0x19110F20)
#define CLASS_1_98133438BFCB56ED_METHOD_1_4D7F2CC1DBA24BC8_OFFSET UNITYSDK_OFFSET(0x19110ED0)
#define CLASS_1_98133438BFCB56ED_METHOD_1_F86E3F6E3E2B1642_OFFSET UNITYSDK_OFFSET(0x19110FC0)
#define CLASS_1_98133438BFCB56ED__CTOR_OFFSET UNITYSDK_OFFSET(0x19111030)

inline static constexpr unsigned int Class_1_98133438BFCB56ED_TypeDefinitionIndex = 53885;

class Class_1_98133438BFCB56ED : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_D30B741E780CB2FD*>* NKAFONEMJEN; // 0x10
	::System::Object* MLJJIEIPIEM; // 0x18
	::Class_0_16E4307DCC419505_475* JAONPDHCMBO; // 0x20
	::Class_0_16E4307DCC419505_476* GJBOKLDCKEG; // 0x28
	::RPG::GameCore::FixVec2 IFJHHDGEKGO; // 0x30
	::RPG::GameCore::CollisionDataFlag FNPGDNFLMPC; // 0x40
	::System::UInt32 EOKHPIOALOA; // 0x44
	::RPG::GameCore::FixVec2 IHOOPLCHJCI; // 0x48
	::RPG::GameCore::FixVec2 PECPBEOHOJC; // 0x58
	::System::UInt32 PHFMCACHFIJ; // 0x68
	::System::UInt32 OOMBNFMJLEO; // 0x6C

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
