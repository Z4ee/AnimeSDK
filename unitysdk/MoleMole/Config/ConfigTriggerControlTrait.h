#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigTriggerCreationData.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_1_236FD73ABC492E3F;
class Class_1_F91ACF27C085FD90;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1242F400)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1242EF70)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0x1242EE00)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0x1242FA30)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_METHOD_2_51653CCA11680E8C_OFFSET UNITYSDK_OFFSET(0x1242FAC0)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_METHOD_2_5C90773220FA8136_OFFSET UNITYSDK_OFFSET(0x1242ED90)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_METHOD_2_8741A88D50268453_OFFSET UNITYSDK_OFFSET(0x1242EFF0)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_METHOD_2_A9776253926095D2_OFFSET UNITYSDK_OFFSET(0x1242F880)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x1242EF00)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_METHOD_2_CD729A9634455FE2_OFFSET UNITYSDK_OFFSET(0x1242F780)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_METHOD_2_F1153A4377815E0F_OFFSET UNITYSDK_OFFSET(0x1242F460)
#define MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1242F870)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigTriggerControlTrait_TypeDefinitionIndex = 62017;

	class ConfigTriggerControlTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* ColliderConfig; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigTriggerCreationData>* ColliderCreation; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_5C90773220FA8136(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_METHOD_2_5C90773220FA8136_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_C444D4C8B9D548AF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_CD729A9634455FE2(::Class_1_F91ACF27C085FD90* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F91ACF27C085FD90*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_METHOD_2_CD729A9634455FE2_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::ConfigTriggerControlTrait* Method_2_A9776253926095D2(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::ConfigTriggerControlTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_METHOD_2_A9776253926095D2_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_2A6B87C525933554(::Class_1_F91ACF27C085FD90* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F91ACF27C085FD90*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_F1153A4377815E0F(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_METHOD_2_F1153A4377815E0F_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::ConfigTriggerControlTrait* Method_2_51653CCA11680E8C(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::ConfigTriggerControlTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_METHOD_2_51653CCA11680E8C_OFFSET))(a1);
		}

		::System::Boolean Method_2_8741A88D50268453(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRIGGERCONTROLTRAIT_METHOD_2_8741A88D50268453_OFFSET))(this, a1);
		}
	};
}
