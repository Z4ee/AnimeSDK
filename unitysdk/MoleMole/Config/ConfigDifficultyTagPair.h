#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGDIFFICULTYTAGPAIR_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1752F9C0)
#define MOLEMOLE_CONFIG_CONFIGDIFFICULTYTAGPAIR_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1752F5D0)
#define MOLEMOLE_CONFIG_CONFIGDIFFICULTYTAGPAIR_METHOD_1_25996F1180FB0C28_OFFSET UNITYSDK_OFFSET(0x1752FA20)
#define MOLEMOLE_CONFIG_CONFIGDIFFICULTYTAGPAIR_METHOD_1_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0x1752F650)
#define MOLEMOLE_CONFIG_CONFIGDIFFICULTYTAGPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x1752FCB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDifficultyTagPair_TypeDefinitionIndex = 59155;

	class ConfigDifficultyTagPair : public ::System::Object
	{
	public:
		::System::Int32 DifficultyType; // 0x10
		::System::String* GameplayTag; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDIFFICULTYTAGPAIR__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDIFFICULTYTAGPAIR_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDIFFICULTYTAGPAIR_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_25996F1180FB0C28(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDIFFICULTYTAGPAIR_METHOD_1_25996F1180FB0C28_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDIFFICULTYTAGPAIR_METHOD_1_4E5AC15A8307DCD8_OFFSET))(this, a1);
		}
	};
}
