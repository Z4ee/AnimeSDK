#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigBlackboardParam.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_0_16E4307DCC419505_131;
class Class_1_236FD73ABC492E3F;
class Class_1_F91ACF27C085FD90;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x124197F0)
#define MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12419260)
#define MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0x12418FF0)
#define MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT_METHOD_2_231BC018B484BC03_OFFSET UNITYSDK_OFFSET(0x12419F80)
#define MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0x1241A0C0)
#define MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT_METHOD_2_5C90773220FA8136_OFFSET UNITYSDK_OFFSET(0x12418F80)
#define MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT_METHOD_2_6454FD4488DDAD17_OFFSET UNITYSDK_OFFSET(0x12419F70)
#define MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT_METHOD_2_72BF6AD1701A5726_OFFSET UNITYSDK_OFFSET(0x12419850)
#define MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT_METHOD_2_7821D1D4DDDF7E01_OFFSET UNITYSDK_OFFSET(0x124192E0)
#define MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT_METHOD_2_AFA5367974917E19_OFFSET UNITYSDK_OFFSET(0x12419DD0)
#define MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x124190E0)
#define MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT_METHOD_2_F2991A902CA63635_OFFSET UNITYSDK_OFFSET(0x12419B80)
#define MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT_METHOD_2_FECAFAD3316F017B_OFFSET UNITYSDK_OFFSET(0x12419150)
#define MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x12419DC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDFScriptTrait_TypeDefinitionIndex = 40666;

	class ConfigDFScriptTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::String* DFScriptName; // 0x18
		::System::Boolean OverrideParamOnSuiteSwitch; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>* InitParam; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_5C90773220FA8136(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT_METHOD_2_5C90773220FA8136_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_C444D4C8B9D548AF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
		}

		::System::Void Method_2_FECAFAD3316F017B(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT_METHOD_2_FECAFAD3316F017B_OFFSET))(this, a1, a2);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_F2991A902CA63635(::Class_1_F91ACF27C085FD90* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F91ACF27C085FD90*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT_METHOD_2_F2991A902CA63635_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::ConfigDFScriptTrait* Method_2_AFA5367974917E19(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::ConfigDFScriptTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT_METHOD_2_AFA5367974917E19_OFFSET))(a1, a2);
		}

		::System::Void Method_2_6454FD4488DDAD17(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT_METHOD_2_6454FD4488DDAD17_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_7821D1D4DDDF7E01(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT_METHOD_2_7821D1D4DDDF7E01_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_72BF6AD1701A5726(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT_METHOD_2_72BF6AD1701A5726_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::ConfigDFScriptTrait* Method_2_231BC018B484BC03(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::ConfigDFScriptTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT_METHOD_2_231BC018B484BC03_OFFSET))(a1);
		}

		::System::Boolean Method_2_2A6B87C525933554(::Class_1_F91ACF27C085FD90* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F91ACF27C085FD90*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDFSCRIPTTRAIT_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
		}
	};
}
