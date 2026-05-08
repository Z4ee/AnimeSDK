#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigDecorBase.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGDUNGEONENDRULEDECOR_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1241A880)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONENDRULEDECOR_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1241A450)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONENDRULEDECOR_METHOD_2_5C90773220FA8136_OFFSET UNITYSDK_OFFSET(0x1241A270)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONENDRULEDECOR_METHOD_2_5C9725213F2A79F5_OFFSET UNITYSDK_OFFSET(0x1241ACC0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONENDRULEDECOR_METHOD_2_81438D3AF9EEE8D8_OFFSET UNITYSDK_OFFSET(0x1241A2E0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONENDRULEDECOR_METHOD_2_AC7502C279CCBC25_OFFSET UNITYSDK_OFFSET(0x1241AE70)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONENDRULEDECOR_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x1241A3E0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONENDRULEDECOR_METHOD_2_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0x1241A4D0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONENDRULEDECOR_METHOD_2_F1153A4377815E0F_OFFSET UNITYSDK_OFFSET(0x1241A8E0)
#define MOLEMOLE_CONFIG_CONFIGDUNGEONENDRULEDECOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1241ACB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDungeonEndRuleDecor_TypeDefinitionIndex = 38952;

	class ConfigDungeonEndRuleDecor : public ::MoleMole::Config::ConfigDecorBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* GroupIDList; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* GamePlayTagList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONENDRULEDECOR__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_5C90773220FA8136(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONENDRULEDECOR_METHOD_2_5C90773220FA8136_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigDecorBase* Method_2_81438D3AF9EEE8D8()
		{
			return ((::MoleMole::Config::ConfigDecorBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONENDRULEDECOR_METHOD_2_81438D3AF9EEE8D8_OFFSET))(this);
		}

		::System::Int32 Method_2_C444D4C8B9D548AF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONENDRULEDECOR_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONENDRULEDECOR_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONENDRULEDECOR_FROMBINARY_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::ConfigDungeonEndRuleDecor* Method_2_5C9725213F2A79F5(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::ConfigDungeonEndRuleDecor*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONENDRULEDECOR_METHOD_2_5C9725213F2A79F5_OFFSET))(a1, a2);
		}

		static ::MoleMole::Config::ConfigDungeonEndRuleDecor* Method_2_AC7502C279CCBC25(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::ConfigDungeonEndRuleDecor*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONENDRULEDECOR_METHOD_2_AC7502C279CCBC25_OFFSET))(a1);
		}

		::System::Boolean Method_2_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONENDRULEDECOR_METHOD_2_DF413489329CBAF8_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_F1153A4377815E0F(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDUNGEONENDRULEDECOR_METHOD_2_F1153A4377815E0F_OFFSET))(this, a1, a2);
		}
	};
}
