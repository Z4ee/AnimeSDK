#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace MoleMole::Config { class SuiteWeightEntry; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_DIFFICULTYRANDOMSUITECONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17D64A40)
#define MOLEMOLE_CONFIG_DIFFICULTYRANDOMSUITECONFIG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17D64660)
#define MOLEMOLE_CONFIG_DIFFICULTYRANDOMSUITECONFIG_METHOD_1_25996F1180FB0C28_OFFSET UNITYSDK_OFFSET(0x17D64AA0)
#define MOLEMOLE_CONFIG_DIFFICULTYRANDOMSUITECONFIG_METHOD_1_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0x17D646E0)
#define MOLEMOLE_CONFIG_DIFFICULTYRANDOMSUITECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17D64D50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int DifficultyRandomSuiteConfig_TypeDefinitionIndex = 40810;

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

		::System::Boolean Method_1_5B0202969299569F(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIFFICULTYRANDOMSUITECONFIG_METHOD_1_5B0202969299569F_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_25996F1180FB0C28(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIFFICULTYRANDOMSUITECONFIG_METHOD_1_25996F1180FB0C28_OFFSET))(this, a1, a2);
		}
	};
}
