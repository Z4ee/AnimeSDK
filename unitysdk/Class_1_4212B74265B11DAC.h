#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTarget.h"
#include "unitysdk/RPG/Client/LockSource.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_340;
namespace RPG::Client { class GameplayLockModuleConfigList; }
namespace RPG::Client { class LockTargetParam; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4212B74265B11DAC_METHOD_1_353E59F723E1DA81_OFFSET UNITYSDK_OFFSET(0x170203D0)
#define CLASS_1_4212B74265B11DAC_METHOD_1_45AA665480CD72A0_OFFSET UNITYSDK_OFFSET(0x17020270)
#define CLASS_1_4212B74265B11DAC_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x17020220)
#define CLASS_1_4212B74265B11DAC_METHOD_1_C67E0B0D70277E71_OFFSET UNITYSDK_OFFSET(0x17020510)
#define CLASS_1_4212B74265B11DAC_METHOD_1_D01A0D6B3E26D421_OFFSET UNITYSDK_OFFSET(0x170206B0)
#define CLASS_1_4212B74265B11DAC_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x17020180)
#define CLASS_1_4212B74265B11DAC__CTOR_OFFSET UNITYSDK_OFFSET(0x17020750)

inline static constexpr unsigned int Class_1_4212B74265B11DAC_TypeDefinitionIndex = 45939;

class Class_1_4212B74265B11DAC : public ::System::Object
{
public:
	static ::RPG::Client::GameplayLockModuleConfigList** StaticGet_Field_1_0()
	{
		return (::RPG::Client::GameplayLockModuleConfigList**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4212B74265B11DAC_TypeDefinitionIndex)->GetStaticField(0x3FAF0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4212B74265B11DAC__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4212B74265B11DAC_METHOD_1_F8C7231308CD2C82_OFFSET))();
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4212B74265B11DAC_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_340* Method_1_45AA665480CD72A0(::RPG::Client::LockSource a1)
	{
		return ((::Class_0_16E4307DCC419505_340*(*)(::RPG::Client::LockSource))((::PBYTE)hIl2Cpp + CLASS_1_4212B74265B11DAC_METHOD_1_45AA665480CD72A0_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_340*>* Method_1_353E59F723E1DA81()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_340*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4212B74265B11DAC_METHOD_1_353E59F723E1DA81_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::RPG::Client::GamePlayLockTarget>* Method_1_C67E0B0D70277E71(::RPG::Client::LockSource a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::GamePlayLockTarget>*(*)(::RPG::Client::LockSource))((::PBYTE)hIl2Cpp + CLASS_1_4212B74265B11DAC_METHOD_1_C67E0B0D70277E71_OFFSET))(a1);
	}

	static ::RPG::Client::LockTargetParam* Method_1_D01A0D6B3E26D421(::RPG::Client::GamePlayLockTarget a1)
	{
		return ((::RPG::Client::LockTargetParam*(*)(::RPG::Client::GamePlayLockTarget))((::PBYTE)hIl2Cpp + CLASS_1_4212B74265B11DAC_METHOD_1_D01A0D6B3E26D421_OFFSET))(a1);
	}
};
