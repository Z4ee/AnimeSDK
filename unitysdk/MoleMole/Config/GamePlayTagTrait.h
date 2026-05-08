#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameplayTag.h"

class Class_0_16E4307DCC419505_131;
class Class_1_236FD73ABC492E3F;
class Class_1_F91ACF27C085FD90;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x175447C0)
#define MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x175443B0)
#define MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17543F90)
#define MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_METHOD_2_0C2EFE0988AB1854_OFFSET UNITYSDK_OFFSET(0x175449F0)
#define MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_METHOD_2_18ABA27B5DEF4779_OFFSET UNITYSDK_OFFSET(0x17544720)
#define MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0x17543D50)
#define MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0x17544CD0)
#define MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_METHOD_2_5C90773220FA8136_OFFSET UNITYSDK_OFFSET(0x17543CE0)
#define MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_METHOD_2_6454FD4488DDAD17_OFFSET UNITYSDK_OFFSET(0x175449E0)
#define MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x17543E40)
#define MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_METHOD_2_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0x17544010)
#define MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_METHOD_2_F0B53475B501D65C_OFFSET UNITYSDK_OFFSET(0x17544B30)
#define MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_METHOD_2_F1153A4377815E0F_OFFSET UNITYSDK_OFFSET(0x17544410)
#define MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_METHOD_2_FECAFAD3316F017B_OFFSET UNITYSDK_OFFSET(0x17543EB0)
#define MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_ONPREENTITYREADY_OFFSET UNITYSDK_OFFSET(0x17544870)
#define MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x175449D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int GamePlayTagTrait_TypeDefinitionIndex = 55704;

	class GamePlayTagTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* TagList; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::GameplayTag>* EntityTagList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_5C90773220FA8136(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_METHOD_2_5C90773220FA8136_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_C444D4C8B9D548AF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
		}

		::System::Void Method_2_FECAFAD3316F017B(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_METHOD_2_FECAFAD3316F017B_OFFSET))(this, a1, a2);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_18ABA27B5DEF4779(::Class_1_F91ACF27C085FD90* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F91ACF27C085FD90*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_METHOD_2_18ABA27B5DEF4779_OFFSET))(this, a1);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, a1);
		}

		::System::Void OnPreEntityReady(::MoleMole::EntityHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_ONPREENTITYREADY_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_METHOD_2_DF413489329CBAF8_OFFSET))(this, a1);
		}

		::System::Void Method_2_6454FD4488DDAD17(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_METHOD_2_6454FD4488DDAD17_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::GamePlayTagTrait* Method_2_0C2EFE0988AB1854(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::GamePlayTagTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_METHOD_2_0C2EFE0988AB1854_OFFSET))(a1);
		}

		static ::MoleMole::Config::GamePlayTagTrait* Method_2_F0B53475B501D65C(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::GamePlayTagTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_METHOD_2_F0B53475B501D65C_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_F1153A4377815E0F(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_METHOD_2_F1153A4377815E0F_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_2A6B87C525933554(::Class_1_F91ACF27C085FD90* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F91ACF27C085FD90*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPLAYTAGTRAIT_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
		}
	};
}
