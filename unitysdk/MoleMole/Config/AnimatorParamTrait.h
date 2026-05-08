#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigAnimatorBoolParam.h"
#include "unitysdk/MoleMole/Config/ConfigAnimatorFloatParam.h"
#include "unitysdk/MoleMole/Config/ConfigAnimatorIntParam.h"
#include "unitysdk/MoleMole/Config/ConfigAnimatorTriggerParam.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_131;
class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0xECFD7F0)
#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xECFD440)
#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xECFCAF0)
#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_METHOD_2_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0xECFCB70)
#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0xECFC830)
#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_METHOD_2_283B2E4EDEF60FFA_OFFSET UNITYSDK_OFFSET(0xECFDDD0)
#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_METHOD_2_6454FD4488DDAD17_OFFSET UNITYSDK_OFFSET(0xECFDF10)
#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_METHOD_2_7FD63C6343C37996_OFFSET UNITYSDK_OFFSET(0xECFD4A0)
#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_METHOD_2_AE8F3CB0A682A6CA_OFFSET UNITYSDK_OFFSET(0xECFDF20)
#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0xECFC920)
#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_METHOD_2_D48F6ED8C47DDD04_OFFSET UNITYSDK_OFFSET(0xECFC7A0)
#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_METHOD_2_FECAFAD3316F017B_OFFSET UNITYSDK_OFFSET(0xECFC990)
#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0xECFD870)
#define MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xECFDDC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorParamTrait_TypeDefinitionIndex = 72508;

	class AnimatorParamTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigAnimatorTriggerParam>* AnimatorTriggerParams; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigAnimatorBoolParam>* AnimatorBoolParams; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigAnimatorIntParam>* AnimatorIntParams; // 0x28
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigAnimatorFloatParam>* AnimatorFloatParams; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_D48F6ED8C47DDD04(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_METHOD_2_D48F6ED8C47DDD04_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_C444D4C8B9D548AF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
		}

		::System::Void Method_2_FECAFAD3316F017B(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_METHOD_2_FECAFAD3316F017B_OFFSET))(this, a1, a2);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, a1);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_ONPOSTENTITYREADY_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::AnimatorParamTrait* Method_2_283B2E4EDEF60FFA(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::AnimatorParamTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_METHOD_2_283B2E4EDEF60FFA_OFFSET))(a1);
		}

		::System::Void Method_2_6454FD4488DDAD17(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_METHOD_2_6454FD4488DDAD17_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_METHOD_2_0BD393E566CD3D4A_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::AnimatorParamTrait* Method_2_AE8F3CB0A682A6CA(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::AnimatorParamTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_METHOD_2_AE8F3CB0A682A6CA_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_7FD63C6343C37996(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORPARAMTRAIT_METHOD_2_7FD63C6343C37996_OFFSET))(this, a1, a2);
		}
	};
}
