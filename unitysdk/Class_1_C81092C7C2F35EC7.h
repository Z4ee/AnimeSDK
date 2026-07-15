#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2CDF619C23140440;
class Class_1_C81092C7C2F35EC7_Class_3_356AFFAC7ECD341D;
class Class_2_56DCA1B58073717B;
class Class_3_001D9EA49F6215B6;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C81092C7C2F35EC7_EXECUTE_OFFSET UNITYSDK_OFFSET(0x163351E0)
#define CLASS_1_C81092C7C2F35EC7_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x16334A60)
#define CLASS_1_C81092C7C2F35EC7_METHOD_1_0BCA929F38D4D7DB_OFFSET UNITYSDK_OFFSET(0x16335920)
#define CLASS_1_C81092C7C2F35EC7_METHOD_1_1DAEA1372099E262_OFFSET UNITYSDK_OFFSET(0x16335570)
#define CLASS_1_C81092C7C2F35EC7_METHOD_1_4735DEA2C835002D_OFFSET UNITYSDK_OFFSET(0x16334660)
#define CLASS_1_C81092C7C2F35EC7_METHOD_1_48CB2A397A1C56C8_OFFSET UNITYSDK_OFFSET(0x163347F0)
#define CLASS_1_C81092C7C2F35EC7_METHOD_1_5F8C2CE15E2D580A_OFFSET UNITYSDK_OFFSET(0x16335D90)
#define CLASS_1_C81092C7C2F35EC7_METHOD_1_65659F3801D67FF3_OFFSET UNITYSDK_OFFSET(0x163359C0)
#define CLASS_1_C81092C7C2F35EC7_METHOD_1_69392334C440C167_OFFSET UNITYSDK_OFFSET(0x163353D0)
#define CLASS_1_C81092C7C2F35EC7_METHOD_1_88DFD67617E05BA5_OFFSET UNITYSDK_OFFSET(0x16334D20)
#define CLASS_1_C81092C7C2F35EC7_METHOD_1_C6F15E169C6D43A1_OFFSET UNITYSDK_OFFSET(0x163355F0)
#define CLASS_1_C81092C7C2F35EC7_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x16334FD0)
#define CLASS_1_C81092C7C2F35EC7__CTOR_OFFSET UNITYSDK_OFFSET(0x16334370)

inline static constexpr unsigned int Class_1_C81092C7C2F35EC7_TypeDefinitionIndex = 72815;

class Class_1_C81092C7C2F35EC7 : public ::System::Object
{
public:
	::Entitas::IGroup_1<::Class_2_56DCA1B58073717B*>* Field_1_0; // 0x10
	::Entitas::ICollector_1<::Class_2_56DCA1B58073717B*>* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_2; // 0x20
	::Class_1_2CDF619C23140440* Field_1_3; // 0x28
	::Class_3_001D9EA49F6215B6* Field_1_4; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_C81092C7C2F35EC7_Class_3_356AFFAC7ECD341D*>* Field_1_5; // 0x38

	::System::Void _ctor(::Class_1_2CDF619C23140440* a1, ::Class_3_001D9EA49F6215B6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2CDF619C23140440*, ::Class_3_001D9EA49F6215B6*))((::PBYTE)hIl2Cpp + CLASS_1_C81092C7C2F35EC7__CTOR_OFFSET))(this, a1, a2);
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

	::System::Void Method_1_88DFD67617E05BA5(::Class_2_56DCA1B58073717B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_1_C81092C7C2F35EC7_METHOD_1_88DFD67617E05BA5_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0BCA929F38D4D7DB(::Class_2_56DCA1B58073717B* a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_C81092C7C2F35EC7_METHOD_1_0BCA929F38D4D7DB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1DAEA1372099E262(::Class_2_56DCA1B58073717B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_1_C81092C7C2F35EC7_METHOD_1_1DAEA1372099E262_OFFSET))(this, a1);
	}

	::System::Void Method_1_65659F3801D67FF3(::Class_2_56DCA1B58073717B* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C81092C7C2F35EC7_METHOD_1_65659F3801D67FF3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_48CB2A397A1C56C8(::Class_2_56DCA1B58073717B* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C81092C7C2F35EC7_METHOD_1_48CB2A397A1C56C8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C6F15E169C6D43A1(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C81092C7C2F35EC7_METHOD_1_C6F15E169C6D43A1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_69392334C440C167(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C81092C7C2F35EC7_METHOD_1_69392334C440C167_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_5F8C2CE15E2D580A(::Class_2_56DCA1B58073717B* a1, ::System::String* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C81092C7C2F35EC7_METHOD_1_5F8C2CE15E2D580A_OFFSET))(this, a1, a2);
	}
};
