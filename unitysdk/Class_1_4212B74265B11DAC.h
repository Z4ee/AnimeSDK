#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTarget.h"
#include "unitysdk/RPG/Client/LockSource.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_295;
namespace RPG::Client { class GameplayLockModuleConfigList; }
namespace RPG::Client { class LockTargetParam; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4212B74265B11DAC_METHOD_1_45AA665480CD72A0_OFFSET UNITYSDK_OFFSET(0x8C56A60)
#define CLASS_1_4212B74265B11DAC_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x8C56A10)
#define CLASS_1_4212B74265B11DAC_METHOD_1_79BFA6338781DABE_OFFSET UNITYSDK_OFFSET(0x8C56E70)
#define CLASS_1_4212B74265B11DAC_METHOD_1_C67E0B0D70277E71_OFFSET UNITYSDK_OFFSET(0x8C56CC0)
#define CLASS_1_4212B74265B11DAC_METHOD_1_E95FAFDD938CDF8D_OFFSET UNITYSDK_OFFSET(0x8C56BD0)
#define CLASS_1_4212B74265B11DAC_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x8C56970)
#define CLASS_1_4212B74265B11DAC__CTOR_OFFSET UNITYSDK_OFFSET(0x8C56F10)

inline static constexpr unsigned int Class_1_4212B74265B11DAC_TypeDefinitionIndex = 38584;

class Class_1_4212B74265B11DAC : public ::System::Object
{
public:
	static ::RPG::Client::GameplayLockModuleConfigList** StaticGet_Field_1_0()
	{
		return (::RPG::Client::GameplayLockModuleConfigList**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4212B74265B11DAC_TypeDefinitionIndex)->GetStaticField(0x22B0);
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

	static ::Class_0_16E4307DCC419505_295* Method_1_45AA665480CD72A0(::RPG::Client::LockSource a1)
	{
		return ((::Class_0_16E4307DCC419505_295*(*)(::RPG::Client::LockSource))((::PBYTE)hIl2Cpp + CLASS_1_4212B74265B11DAC_METHOD_1_45AA665480CD72A0_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_295*>* Method_1_E95FAFDD938CDF8D()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_295*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4212B74265B11DAC_METHOD_1_E95FAFDD938CDF8D_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::RPG::Client::GamePlayLockTarget>* Method_1_C67E0B0D70277E71(::RPG::Client::LockSource a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::GamePlayLockTarget>*(*)(::RPG::Client::LockSource))((::PBYTE)hIl2Cpp + CLASS_1_4212B74265B11DAC_METHOD_1_C67E0B0D70277E71_OFFSET))(a1);
	}

	static ::RPG::Client::LockTargetParam* Method_1_79BFA6338781DABE(::RPG::Client::GamePlayLockTarget a1)
	{
		return ((::RPG::Client::LockTargetParam*(*)(::RPG::Client::GamePlayLockTarget))((::PBYTE)hIl2Cpp + CLASS_1_4212B74265B11DAC_METHOD_1_79BFA6338781DABE_OFFSET))(a1);
	}
};
