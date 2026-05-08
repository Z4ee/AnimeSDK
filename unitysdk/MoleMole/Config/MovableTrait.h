#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E36C894DCA3F304A_1.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_131;
class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_MOVABLETRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x16AA6A80)
#define MOLEMOLE_CONFIG_MOVABLETRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16AA65C0)
#define MOLEMOLE_CONFIG_MOVABLETRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16AA5C10)
#define MOLEMOLE_CONFIG_MOVABLETRAIT_METHOD_2_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x16AA5C90)
#define MOLEMOLE_CONFIG_MOVABLETRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0x16AA5920)
#define MOLEMOLE_CONFIG_MOVABLETRAIT_METHOD_2_6454FD4488DDAD17_OFFSET UNITYSDK_OFFSET(0x16AA6B20)
#define MOLEMOLE_CONFIG_MOVABLETRAIT_METHOD_2_6A6D1ECB93526332_OFFSET UNITYSDK_OFFSET(0x16AA6620)
#define MOLEMOLE_CONFIG_MOVABLETRAIT_METHOD_2_93C352BA5B54979E_OFFSET UNITYSDK_OFFSET(0x16AA6CD0)
#define MOLEMOLE_CONFIG_MOVABLETRAIT_METHOD_2_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0x16AA58D0)
#define MOLEMOLE_CONFIG_MOVABLETRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x16AA5A10)
#define MOLEMOLE_CONFIG_MOVABLETRAIT_METHOD_2_D634C677BCB34D1A_OFFSET UNITYSDK_OFFSET(0x16AA6B30)
#define MOLEMOLE_CONFIG_MOVABLETRAIT_METHOD_2_FECAFAD3316F017B_OFFSET UNITYSDK_OFFSET(0x16AA5A80)
#define MOLEMOLE_CONFIG_MOVABLETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x16AA6B10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int MovableTrait_TypeDefinitionIndex = 82231;

	class MovableTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::String* FixedCameraKey; // 0x18
		::Enum_3_E36C894DCA3F304A_1 MovablePathDir; // 0x20
		::UnityEngine::Vector3 PosStart; // 0x24
		::UnityEngine::Vector3 PosEnd; // 0x30
		::System::Int32 initProgress; // 0x3C
		::System::Boolean reverseInputDir; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLETRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLETRAIT_METHOD_2_B73F62522113F21F_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLETRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_C444D4C8B9D548AF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLETRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
		}

		::System::Void Method_2_FECAFAD3316F017B(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLETRAIT_METHOD_2_FECAFAD3316F017B_OFFSET))(this, a1, a2);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLETRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLETRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLETRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_6A6D1ECB93526332(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLETRAIT_METHOD_2_6A6D1ECB93526332_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_6454FD4488DDAD17(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLETRAIT_METHOD_2_6454FD4488DDAD17_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::MovableTrait* Method_2_D634C677BCB34D1A(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::MovableTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLETRAIT_METHOD_2_D634C677BCB34D1A_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLETRAIT_METHOD_2_0BD393E566CD3D4A_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::MovableTrait* Method_2_93C352BA5B54979E(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::MovableTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLETRAIT_METHOD_2_93C352BA5B54979E_OFFSET))(a1);
		}
	};
}
