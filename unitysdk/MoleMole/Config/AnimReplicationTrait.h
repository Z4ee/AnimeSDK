#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_ANIMREPLICATIONTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x122EDE30)
#define MOLEMOLE_CONFIG_ANIMREPLICATIONTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x122EDD80)
#define MOLEMOLE_CONFIG_ANIMREPLICATIONTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0x122EDC10)
#define MOLEMOLE_CONFIG_ANIMREPLICATIONTRAIT_METHOD_2_2C1CDBD449C1FB0D_OFFSET UNITYSDK_OFFSET(0x122EE120)
#define MOLEMOLE_CONFIG_ANIMREPLICATIONTRAIT_METHOD_2_3A09D897EF162520_OFFSET UNITYSDK_OFFSET(0x122EDFC0)
#define MOLEMOLE_CONFIG_ANIMREPLICATIONTRAIT_METHOD_2_969A80C882053A6C_OFFSET UNITYSDK_OFFSET(0x122EDEC0)
#define MOLEMOLE_CONFIG_ANIMREPLICATIONTRAIT_METHOD_2_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0x122EDC00)
#define MOLEMOLE_CONFIG_ANIMREPLICATIONTRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x122EDD10)
#define MOLEMOLE_CONFIG_ANIMREPLICATIONTRAIT_METHOD_2_D4DA1493472613E6_OFFSET UNITYSDK_OFFSET(0x122EDE00)
#define MOLEMOLE_CONFIG_ANIMREPLICATIONTRAIT_POSTBUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x122EDF20)
#define MOLEMOLE_CONFIG_ANIMREPLICATIONTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x122EDFB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimReplicationTrait_TypeDefinitionIndex = 79259;

	class AnimReplicationTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMREPLICATIONTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_A042C46DE73C3043(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMREPLICATIONTRAIT_METHOD_2_A042C46DE73C3043_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMREPLICATIONTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_C444D4C8B9D548AF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMREPLICATIONTRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMREPLICATIONTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMREPLICATIONTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean PostBuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMREPLICATIONTRAIT_POSTBUILDENTITYCOMPONENT_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_D4DA1493472613E6(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMREPLICATIONTRAIT_METHOD_2_D4DA1493472613E6_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::AnimReplicationTrait* Method_2_3A09D897EF162520(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::AnimReplicationTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMREPLICATIONTRAIT_METHOD_2_3A09D897EF162520_OFFSET))(a1);
		}

		static ::MoleMole::Config::AnimReplicationTrait* Method_2_2C1CDBD449C1FB0D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::AnimReplicationTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMREPLICATIONTRAIT_METHOD_2_2C1CDBD449C1FB0D_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_969A80C882053A6C(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMREPLICATIONTRAIT_METHOD_2_969A80C882053A6C_OFFSET))(this, a1, a2);
		}
	};
}
