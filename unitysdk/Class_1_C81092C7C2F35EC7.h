#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2CDF619C23140440;
class Class_1_C81092C7C2F35EC7_Class_3_C0D189AA62C8FC80;
class Class_2_B8E38BF47138A2E5;
class Class_3_D6E9A038FA23103A;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C81092C7C2F35EC7_EXECUTE_OFFSET UNITYSDK_OFFSET(0x13891850)
#define CLASS_1_C81092C7C2F35EC7_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x13891160)
#define CLASS_1_C81092C7C2F35EC7_METHOD_1_0BCA929F38D4D7DB_OFFSET UNITYSDK_OFFSET(0x13891FD0)
#define CLASS_1_C81092C7C2F35EC7_METHOD_1_1EFC30D7D15323A0_OFFSET UNITYSDK_OFFSET(0x13891A20)
#define CLASS_1_C81092C7C2F35EC7_METHOD_1_3956F98173A4FAEA_OFFSET UNITYSDK_OFFSET(0x13892070)
#define CLASS_1_C81092C7C2F35EC7_METHOD_1_4735DEA2C835002D_OFFSET UNITYSDK_OFFSET(0x13890D60)
#define CLASS_1_C81092C7C2F35EC7_METHOD_1_48CB2A397A1C56C8_OFFSET UNITYSDK_OFFSET(0x13890EF0)
#define CLASS_1_C81092C7C2F35EC7_METHOD_1_5F8C2CE15E2D580A_OFFSET UNITYSDK_OFFSET(0x13892420)
#define CLASS_1_C81092C7C2F35EC7_METHOD_1_88DFD67617E05BA5_OFFSET UNITYSDK_OFFSET(0x138913B0)
#define CLASS_1_C81092C7C2F35EC7_METHOD_1_BA909F788A11F4B6_OFFSET UNITYSDK_OFFSET(0x13891C70)
#define CLASS_1_C81092C7C2F35EC7_METHOD_1_C75A94AFCA1341AB_OFFSET UNITYSDK_OFFSET(0x13891BF0)
#define CLASS_1_C81092C7C2F35EC7_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x13891660)
#define CLASS_1_C81092C7C2F35EC7__CTOR_OFFSET UNITYSDK_OFFSET(0x13890A50)

inline static constexpr unsigned int Class_1_C81092C7C2F35EC7_TypeDefinitionIndex = 71291;

class Class_1_C81092C7C2F35EC7 : public ::System::Object
{
public:
	::Class_3_D6E9A038FA23103A* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_1; // 0x18
	::Entitas::IGroup_1<::Class_2_B8E38BF47138A2E5*>* Field_1_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_C81092C7C2F35EC7_Class_3_C0D189AA62C8FC80*>* Field_1_3; // 0x28
	::Entitas::ICollector_1<::Class_2_B8E38BF47138A2E5*>* Field_1_4; // 0x30
	::Class_1_2CDF619C23140440* Field_1_5; // 0x38

	::System::Void _ctor(::Class_1_2CDF619C23140440* a1, ::Class_3_D6E9A038FA23103A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2CDF619C23140440*, ::Class_3_D6E9A038FA23103A*))((::PBYTE)hIl2Cpp + CLASS_1_C81092C7C2F35EC7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4735DEA2C835002D(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_1_C81092C7C2F35EC7_METHOD_1_4735DEA2C835002D_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C81092C7C2F35EC7_INITIALIZE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C81092C7C2F35EC7_TEARDOWN_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C81092C7C2F35EC7_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_88DFD67617E05BA5(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_C81092C7C2F35EC7_METHOD_1_88DFD67617E05BA5_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0BCA929F38D4D7DB(::Class_2_B8E38BF47138A2E5* a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_C81092C7C2F35EC7_METHOD_1_0BCA929F38D4D7DB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C75A94AFCA1341AB(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_C81092C7C2F35EC7_METHOD_1_C75A94AFCA1341AB_OFFSET))(this, a1);
	}

	::System::Void Method_1_3956F98173A4FAEA(::Class_2_B8E38BF47138A2E5* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C81092C7C2F35EC7_METHOD_1_3956F98173A4FAEA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_48CB2A397A1C56C8(::Class_2_B8E38BF47138A2E5* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C81092C7C2F35EC7_METHOD_1_48CB2A397A1C56C8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BA909F788A11F4B6(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C81092C7C2F35EC7_METHOD_1_BA909F788A11F4B6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1EFC30D7D15323A0(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C81092C7C2F35EC7_METHOD_1_1EFC30D7D15323A0_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_5F8C2CE15E2D580A(::Class_2_B8E38BF47138A2E5* a1, ::System::String* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C81092C7C2F35EC7_METHOD_1_5F8C2CE15E2D580A_OFFSET))(this, a1, a2);
	}
};
