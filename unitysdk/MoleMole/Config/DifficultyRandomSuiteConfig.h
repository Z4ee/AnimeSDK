#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace MoleMole::Config { class SuiteWeightEntry; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_DIFFICULTYRANDOMSUITECONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x172B40D0)
#define MOLEMOLE_CONFIG_DIFFICULTYRANDOMSUITECONFIG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x172B3D40)
#define MOLEMOLE_CONFIG_DIFFICULTYRANDOMSUITECONFIG_METHOD_1_0AFE2382BF92DEC7_OFFSET UNITYSDK_OFFSET(0x172B4130)
#define MOLEMOLE_CONFIG_DIFFICULTYRANDOMSUITECONFIG_METHOD_1_8741A88D50268453_OFFSET UNITYSDK_OFFSET(0x172B3DC0)
#define MOLEMOLE_CONFIG_DIFFICULTYRANDOMSUITECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x172B43E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int DifficultyRandomSuiteConfig_TypeDefinitionIndex = 66703;

	class DifficultyRandomSuiteConfig : public ::System::Object
	{
	public:
		::System::Int32 Difficulty; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::Config::SuiteWeightEntry*>* SuiteWeights; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIFFICULTYRANDOMSUITECONFIG__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIFFICULTYRANDOMSUITECONFIG_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIFFICULTYRANDOMSUITECONFIG_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_0AFE2382BF92DEC7(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIFFICULTYRANDOMSUITECONFIG_METHOD_1_0AFE2382BF92DEC7_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_8741A88D50268453(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIFFICULTYRANDOMSUITECONFIG_METHOD_1_8741A88D50268453_OFFSET))(this, a1);
		}
	};
}
