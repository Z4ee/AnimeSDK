#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_131;
class Class_1_236FD73ABC492E3F;
class Class_1_F91ACF27C085FD90;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CURVEMOVETRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x124315E0)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12430A60)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x12430AE0)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0x12430750)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0x124320A0)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_307DF4AAAB418BF2_OFFSET UNITYSDK_OFFSET(0x12431F00)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_39C75ED00C6629F7_OFFSET UNITYSDK_OFFSET(0x12431AA0)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_6454FD4488DDAD17_OFFSET UNITYSDK_OFFSET(0x12431EF0)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_7D22EC5431ECF5C7_OFFSET UNITYSDK_OFFSET(0x12431640)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_8623576908BFA866_OFFSET UNITYSDK_OFFSET(0x12432130)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x12430840)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_D4ABEF7DE8CFDB8D_OFFSET UNITYSDK_OFFSET(0x124306D0)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_FECAFAD3316F017B_OFFSET UNITYSDK_OFFSET(0x124308B0)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x12431B80)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x12431EE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CurveMoveTrait_TypeDefinitionIndex = 39874;

	class CurveMoveTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Single MinHeight; // 0x18
		::System::Single MaxHeight; // 0x1C
		::System::Single ColliderOpenHeight; // 0x20
		::System::Single TimeOffset; // 0x24
		::System::Collections::Generic::List_1<::System::Int32>* TimePeriods; // 0x28
		::System::String* UpCurveKey; // 0x30
		::System::String* DownCurveKey; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_D4ABEF7DE8CFDB8D(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_D4ABEF7DE8CFDB8D_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
		}

		::System::Int32 Method_2_C444D4C8B9D548AF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
		}

		::System::Void Method_2_FECAFAD3316F017B(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_FECAFAD3316F017B_OFFSET))(this, a1, a2);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_39C75ED00C6629F7(::Class_1_F91ACF27C085FD90* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F91ACF27C085FD90*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_39C75ED00C6629F7_OFFSET))(this, a1);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT_ONPOSTENTITYREADY_OFFSET))(this, a1);
		}

		::System::Void Method_2_6454FD4488DDAD17(::Class_0_16E4307DCC419505_131* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_131*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_6454FD4488DDAD17_OFFSET))(this, a1, a2);
		}

		static ::MoleMole::Config::CurveMoveTrait* Method_2_307DF4AAAB418BF2(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::MoleMole::Config::CurveMoveTrait*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_307DF4AAAB418BF2_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_7D22EC5431ECF5C7(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_7D22EC5431ECF5C7_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_0BD393E566CD3D4A_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_2A6B87C525933554(::Class_1_F91ACF27C085FD90* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F91ACF27C085FD90*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
		}

		static ::MoleMole::Config::CurveMoveTrait* Method_2_8623576908BFA866(::FlexBuffers::FlxValue a1)
		{
			return ((::MoleMole::Config::CurveMoveTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT_METHOD_2_8623576908BFA866_OFFSET))(a1);
		}
	};
}
