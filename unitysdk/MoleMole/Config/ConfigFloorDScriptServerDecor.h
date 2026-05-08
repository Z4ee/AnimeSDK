#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigBlackboardParam.h"
#include "unitysdk/MoleMole/Config/ConfigDecorBase.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGFLOORDSCRIPTSERVERDECOR_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16A8DCA0)
#define MOLEMOLE_CONFIG_CONFIGFLOORDSCRIPTSERVERDECOR_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16A8D6F0)
#define MOLEMOLE_CONFIG_CONFIGFLOORDSCRIPTSERVERDECOR_METHOD_2_55E75AEF0A8C6926_OFFSET UNITYSDK_OFFSET(0x16A8E070)
#define MOLEMOLE_CONFIG_CONFIGFLOORDSCRIPTSERVERDECOR_METHOD_2_5C90773220FA8136_OFFSET UNITYSDK_OFFSET(0x16A8D510)
#define MOLEMOLE_CONFIG_CONFIGFLOORDSCRIPTSERVERDECOR_METHOD_2_67CB24BB9ED7D9E0_OFFSET UNITYSDK_OFFSET(0x16A8E220)
#define MOLEMOLE_CONFIG_CONFIGFLOORDSCRIPTSERVERDECOR_METHOD_2_72BF6AD1701A5726_OFFSET UNITYSDK_OFFSET(0x16A8DD00)
#define MOLEMOLE_CONFIG_CONFIGFLOORDSCRIPTSERVERDECOR_METHOD_2_7821D1D4DDDF7E01_OFFSET UNITYSDK_OFFSET(0x16A8D770)
#define MOLEMOLE_CONFIG_CONFIGFLOORDSCRIPTSERVERDECOR_METHOD_2_81438D3AF9EEE8D8_OFFSET UNITYSDK_OFFSET(0x16A8D580)
#define MOLEMOLE_CONFIG_CONFIGFLOORDSCRIPTSERVERDECOR_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x16A8D680)
#define MOLEMOLE_CONFIG_CONFIGFLOORDSCRIPTSERVERDECOR__CTOR_OFFSET UNITYSDK_OFFSET(0x16A8E060)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigFloorDScriptServerDecor_TypeDefinitionIndex = 81658;

	class ConfigFloorDScriptServerDecor : public ::MoleMole::Config::ConfigDecorBase
	{
	public:
		::System::Int32 ID; // 0x18
		::System::String* DFScriptName; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>* InitParam; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORDSCRIPTSERVERDECOR__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_5C90773220FA8136(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORDSCRIPTSERVERDECOR_METHOD_2_5C90773220FA8136_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigDecorBase* Method_2_81438D3AF9EEE8D8()
		{
			return ((::MoleMole::Config::ConfigDecorBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORDSCRIPTSERVERDECOR_METHOD_2_81438D3AF9EEE8D8_OFFSET))(this);
		}

		::System::Int32 Method_2_C444D4C8B9D548AF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORDSCRIPTSERVERDECOR_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORDSCRIPTSERVERDECOR_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORDSCRIPTSERVERDECOR_FROMBINARY_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::ConfigFloorDScriptServerDecor* Method_2_55E75AEF0A8C6926(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::ConfigFloorDScriptServerDecor*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORDSCRIPTSERVERDECOR_METHOD_2_55E75AEF0A8C6926_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_72BF6AD1701A5726(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORDSCRIPTSERVERDECOR_METHOD_2_72BF6AD1701A5726_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_7821D1D4DDDF7E01(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORDSCRIPTSERVERDECOR_METHOD_2_7821D1D4DDDF7E01_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::ConfigFloorDScriptServerDecor* Method_2_67CB24BB9ED7D9E0(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::ConfigFloorDScriptServerDecor*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFLOORDSCRIPTSERVERDECOR_METHOD_2_67CB24BB9ED7D9E0_OFFSET))(a1);
		}
	};
}
