#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2CDF619C23140440;
class Class_1_C81092C7C2F35EC7_Class_3_C0D189AA62C8FC80;
class Class_2_B8E38BF47138A2E5;
class Class_3_912CC478F2B21832;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C81092C7C2F35EC7_EXECUTE_OFFSET UNITYSDK_OFFSET(0x156BF1E0)
#define CLASS_1_C81092C7C2F35EC7_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x156BE9A0)
#define CLASS_1_C81092C7C2F35EC7_METHOD_1_0BCA929F38D4D7DB_OFFSET UNITYSDK_OFFSET(0x156BF9B0)
#define CLASS_1_C81092C7C2F35EC7_METHOD_1_18B783781170954B_OFFSET UNITYSDK_OFFSET(0x156BEC90)
#define CLASS_1_C81092C7C2F35EC7_METHOD_1_1EFC30D7D15323A0_OFFSET UNITYSDK_OFFSET(0x156BF400)
#define CLASS_1_C81092C7C2F35EC7_METHOD_1_65659F3801D67FF3_OFFSET UNITYSDK_OFFSET(0x156BFA50)
#define CLASS_1_C81092C7C2F35EC7_METHOD_1_6A664DCBFEADE56F_OFFSET UNITYSDK_OFFSET(0x156BE700)
#define CLASS_1_C81092C7C2F35EC7_METHOD_1_9BD6AB2A1D499FA4_OFFSET UNITYSDK_OFFSET(0x156BE520)
#define CLASS_1_C81092C7C2F35EC7_METHOD_1_BA909F788A11F4B6_OFFSET UNITYSDK_OFFSET(0x156BF650)
#define CLASS_1_C81092C7C2F35EC7_METHOD_1_ED58464BD3DE615C_OFFSET UNITYSDK_OFFSET(0x156BFE20)
#define CLASS_1_C81092C7C2F35EC7_METHOD_1_FD8DFECF25281CF4_OFFSET UNITYSDK_OFFSET(0x156BF5D0)
#define CLASS_1_C81092C7C2F35EC7_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x156BEF90)
#define CLASS_1_C81092C7C2F35EC7__CTOR_OFFSET UNITYSDK_OFFSET(0x156BE210)

inline static constexpr unsigned int Class_1_C81092C7C2F35EC7_TypeDefinitionIndex = 76276;

class Class_1_C81092C7C2F35EC7 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_C81092C7C2F35EC7_Class_3_C0D189AA62C8FC80*>* GFIPFGJPHHI; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* BMEOJFMJJFI; // 0x18
	::Class_3_912CC478F2B21832* PDENFEFCAGN; // 0x20
	::Entitas::ICollector_1<::Class_2_B8E38BF47138A2E5*>* KLPOJBKOOOK; // 0x28
	::Class_1_2CDF619C23140440* FKINCGODJEP; // 0x30
	::Entitas::IGroup_1<::Class_2_B8E38BF47138A2E5*>* BBANBAKCLCK; // 0x38

	::System::Void _ctor(::Class_1_2CDF619C23140440* a1, ::Class_3_912CC478F2B21832* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2CDF619C23140440*, ::Class_3_912CC478F2B21832*))((::PBYTE)hIl2Cpp + CLASS_1_C81092C7C2F35EC7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9BD6AB2A1D499FA4(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_1_C81092C7C2F35EC7_METHOD_1_9BD6AB2A1D499FA4_OFFSET))(this, a1, a2);
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

	::System::Void Method_1_18B783781170954B(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_C81092C7C2F35EC7_METHOD_1_18B783781170954B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0BCA929F38D4D7DB(::Class_2_B8E38BF47138A2E5* a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_C81092C7C2F35EC7_METHOD_1_0BCA929F38D4D7DB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FD8DFECF25281CF4(::Class_2_B8E38BF47138A2E5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*))((::PBYTE)hIl2Cpp + CLASS_1_C81092C7C2F35EC7_METHOD_1_FD8DFECF25281CF4_OFFSET))(this, a1);
	}

	::System::Void Method_1_65659F3801D67FF3(::Class_2_B8E38BF47138A2E5* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C81092C7C2F35EC7_METHOD_1_65659F3801D67FF3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6A664DCBFEADE56F(::Class_2_B8E38BF47138A2E5* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C81092C7C2F35EC7_METHOD_1_6A664DCBFEADE56F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BA909F788A11F4B6(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C81092C7C2F35EC7_METHOD_1_BA909F788A11F4B6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1EFC30D7D15323A0(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C81092C7C2F35EC7_METHOD_1_1EFC30D7D15323A0_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_ED58464BD3DE615C(::Class_2_B8E38BF47138A2E5* a1, ::System::String* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C81092C7C2F35EC7_METHOD_1_ED58464BD3DE615C_OFFSET))(this, a1, a2);
	}
};
