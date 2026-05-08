#pragma once
#include "unitysdk/unitysdk.h"
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

#define MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x14253B00)
#define MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x142537F0)
#define MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14253470)
#define MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0x14253210)
#define MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_METHOD_2_33255E0C2BFC06C1_OFFSET UNITYSDK_OFFSET(0x14253BF0)
#define MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_METHOD_2_343A993BA0B59163_OFFSET UNITYSDK_OFFSET(0x14253D30)
#define MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_METHOD_2_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0x142534F0)
#define MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_METHOD_2_6454FD4488DDAD17_OFFSET UNITYSDK_OFFSET(0x14253ED0)
#define MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_METHOD_2_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0x14253200)
#define MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_METHOD_2_B79233E5C788E689_OFFSET UNITYSDK_OFFSET(0x14253850)
#define MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x14253300)
#define MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_METHOD_2_FECAFAD3316F017B_OFFSET UNITYSDK_OFFSET(0x14253370)
#define MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x14253BE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int MovableFollowTrait_TypeDefinitionIndex = 61161;

	class MovableFollowTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::UnityEngine::Vector3 PosOffset; // 0x18
		::System::Int32 FollowConfigID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_A042C46DE73C3043(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_METHOD_2_A042C46DE73C3043_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_C444D4C8B9D548AF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
		}

		::System::Void Method_2_FECAFAD3316F017B(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_METHOD_2_FECAFAD3316F017B_OFFSET))(this, a1, a2);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::MovableFollowTrait* Method_2_33255E0C2BFC06C1(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::MovableFollowTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_METHOD_2_33255E0C2BFC06C1_OFFSET))(a1);
		}

		::System::Boolean Method_2_B79233E5C788E689(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_METHOD_2_B79233E5C788E689_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_METHOD_2_4E5AC15A8307DCD8_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::MovableFollowTrait* Method_2_343A993BA0B59163(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::MovableFollowTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_METHOD_2_343A993BA0B59163_OFFSET))(a1, a2);
		}

		::System::Void Method_2_6454FD4488DDAD17(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_METHOD_2_6454FD4488DDAD17_OFFSET))(this, a1, a2);
		}
	};
}
