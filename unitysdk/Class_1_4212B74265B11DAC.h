#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTarget.h"
#include "unitysdk/RPG/Client/LockSource.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_303;
namespace RPG::Client { class GameplayLockModuleConfigList; }
namespace RPG::Client { class LockTargetParam; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4212B74265B11DAC_METHOD_1_45AA665480CD72A0_OFFSET UNITYSDK_OFFSET(0x9989320)
#define CLASS_1_4212B74265B11DAC_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x99892D0)
#define CLASS_1_4212B74265B11DAC_METHOD_1_79BFA6338781DABE_OFFSET UNITYSDK_OFFSET(0x9989730)
#define CLASS_1_4212B74265B11DAC_METHOD_1_C67E0B0D70277E71_OFFSET UNITYSDK_OFFSET(0x9989580)
#define CLASS_1_4212B74265B11DAC_METHOD_1_E95FAFDD938CDF8D_OFFSET UNITYSDK_OFFSET(0x9989490)
#define CLASS_1_4212B74265B11DAC_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x9989230)
#define CLASS_1_4212B74265B11DAC__CTOR_OFFSET UNITYSDK_OFFSET(0x99897D0)

inline static constexpr unsigned int Class_1_4212B74265B11DAC_TypeDefinitionIndex = 44475;

class Class_1_4212B74265B11DAC : public ::System::Object
{
public:
	static ::RPG::Client::GameplayLockModuleConfigList** StaticGet_Field_1_0()
	{
		return (::RPG::Client::GameplayLockModuleConfigList**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4212B74265B11DAC_TypeDefinitionIndex)->GetStaticField(0x1B830);
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

	static ::Class_0_16E4307DCC419505_303* Method_1_45AA665480CD72A0(::RPG::Client::LockSource a1)
	{
		return ((::Class_0_16E4307DCC419505_303*(*)(::RPG::Client::LockSource))((::PBYTE)hIl2Cpp + CLASS_1_4212B74265B11DAC_METHOD_1_45AA665480CD72A0_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_303*>* Method_1_E95FAFDD938CDF8D()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_303*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4212B74265B11DAC_METHOD_1_E95FAFDD938CDF8D_OFFSET))();
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
