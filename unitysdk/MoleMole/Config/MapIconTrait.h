#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_0_16E4307DCC419505_131;
class Class_1_236FD73ABC492E3F;
class Class_1_F91ACF27C085FD90;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_MAPICONTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x153D2420)
#define MOLEMOLE_CONFIG_MAPICONTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x153D18B0)
#define MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x153D1930)
#define MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_18ABA27B5DEF4779_OFFSET UNITYSDK_OFFSET(0x153D2BF0)
#define MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0x153D15A0)
#define MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0x153D2FC0)
#define MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_5C90773220FA8136_OFFSET UNITYSDK_OFFSET(0x153D1530)
#define MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_5EA5C90D9F5F1822_OFFSET UNITYSDK_OFFSET(0x153D2480)
#define MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_6454FD4488DDAD17_OFFSET UNITYSDK_OFFSET(0x153D2FB0)
#define MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_8FEED2164DA1E9D9_OFFSET UNITYSDK_OFFSET(0x153D2E70)
#define MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x153D1690)
#define MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_FABFCCE6EC5D077B_OFFSET UNITYSDK_OFFSET(0x153D2CD0)
#define MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_FECAFAD3316F017B_OFFSET UNITYSDK_OFFSET(0x153D1700)
#define MOLEMOLE_CONFIG_MAPICONTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x153D2CC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int MapIconTrait_TypeDefinitionIndex = 69586;

	class MapIconTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 InfoPanelID; // 0x18
		::System::Boolean ShowInOutside; // 0x1C
		::System::String* VOStateKey; // 0x20
		::System::Int32 VOStateValue; // 0x28
		::System::Boolean CanTrack; // 0x2C
		::System::Boolean DefaultHide; // 0x2D
		::System::Collections::Generic::List_1<::System::Int32>* ValidSuitIndex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAPICONTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_5C90773220FA8136(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_5C90773220FA8136_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_C444D4C8B9D548AF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
		}

		::System::Void Method_2_FECAFAD3316F017B(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_FECAFAD3316F017B_OFFSET))(this, a1, a2);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAPICONTRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAPICONTRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_18ABA27B5DEF4779(::Class_1_F91ACF27C085FD90* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F91ACF27C085FD90*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_18ABA27B5DEF4779_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::MapIconTrait* Method_2_FABFCCE6EC5D077B(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::MapIconTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_FABFCCE6EC5D077B_OFFSET))(a1, a2);
		}

		static ::MoleMole::Config::MapIconTrait* Method_2_8FEED2164DA1E9D9(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::MapIconTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_8FEED2164DA1E9D9_OFFSET))(a1);
		}

		::System::Boolean Method_2_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_0BD393E566CD3D4A_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_5EA5C90D9F5F1822(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_5EA5C90D9F5F1822_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_6454FD4488DDAD17(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_6454FD4488DDAD17_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_2A6B87C525933554(::Class_1_F91ACF27C085FD90* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F91ACF27C085FD90*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MAPICONTRAIT_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
		}
	};
}
