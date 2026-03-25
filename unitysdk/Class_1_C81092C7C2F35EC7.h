#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_867B6CE75953535A_1;
class Class_1_C81092C7C2F35EC7_Class_3_42C3ADEFE001CF00;
class Class_2_0C58AD91B0F4D809;
class Class_3_D6E9A038FA23103A;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C81092C7C2F35EC7_EXECUTE_OFFSET UNITYSDK_OFFSET(0x118D1520)
#define CLASS_1_C81092C7C2F35EC7_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x118D0E30)
#define CLASS_1_C81092C7C2F35EC7_METHOD_1_0BCA929F38D4D7DB_OFFSET UNITYSDK_OFFSET(0x118D1D80)
#define CLASS_1_C81092C7C2F35EC7_METHOD_1_1DAEA1372099E262_OFFSET UNITYSDK_OFFSET(0x118D1920)
#define CLASS_1_C81092C7C2F35EC7_METHOD_1_36D3392E29CB6313_OFFSET UNITYSDK_OFFSET(0x118D21A0)
#define CLASS_1_C81092C7C2F35EC7_METHOD_1_45386A1CD3A2A446_OFFSET UNITYSDK_OFFSET(0x118D19A0)
#define CLASS_1_C81092C7C2F35EC7_METHOD_1_48278047645E0369_OFFSET UNITYSDK_OFFSET(0x118D1720)
#define CLASS_1_C81092C7C2F35EC7_METHOD_1_59779BE96F16C058_OFFSET UNITYSDK_OFFSET(0x118D1E20)
#define CLASS_1_C81092C7C2F35EC7_METHOD_1_6A664DCBFEADE56F_OFFSET UNITYSDK_OFFSET(0x118D0B90)
#define CLASS_1_C81092C7C2F35EC7_METHOD_1_88DFD67617E05BA5_OFFSET UNITYSDK_OFFSET(0x118D1080)
#define CLASS_1_C81092C7C2F35EC7_METHOD_1_9BD6AB2A1D499FA4_OFFSET UNITYSDK_OFFSET(0x118D09D0)
#define CLASS_1_C81092C7C2F35EC7_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x118D1340)
#define CLASS_1_C81092C7C2F35EC7__CTOR_OFFSET UNITYSDK_OFFSET(0x118D0690)

inline static constexpr unsigned int Class_1_C81092C7C2F35EC7_TypeDefinitionIndex = 62476;

class Class_1_C81092C7C2F35EC7 : public ::System::Object
{
public:
	::Entitas::IGroup_1<::Class_2_0C58AD91B0F4D809*>* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_5; // 0x18
	::Class_3_D6E9A038FA23103A* Field_1_1; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_C81092C7C2F35EC7_Class_3_42C3ADEFE001CF00*>* Field_1_4; // 0x28
	::Class_1_867B6CE75953535A_1* Field_1_0; // 0x30
	::Entitas::ICollector_1<::Class_2_0C58AD91B0F4D809*>* Field_1_3; // 0x38

	::System::Void _ctor(::Class_1_867B6CE75953535A_1* a1, ::Class_3_D6E9A038FA23103A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A_1*, ::Class_3_D6E9A038FA23103A*))((::PBYTE)hIl2Cpp + CLASS_1_C81092C7C2F35EC7__CTOR_OFFSET))(this, a1, a2);
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

	::System::Void Method_1_88DFD67617E05BA5(::Class_2_0C58AD91B0F4D809* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_1_C81092C7C2F35EC7_METHOD_1_88DFD67617E05BA5_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0BCA929F38D4D7DB(::Class_2_0C58AD91B0F4D809* a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_C81092C7C2F35EC7_METHOD_1_0BCA929F38D4D7DB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1DAEA1372099E262(::Class_2_0C58AD91B0F4D809* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_1_C81092C7C2F35EC7_METHOD_1_1DAEA1372099E262_OFFSET))(this, a1);
	}

	::System::Void Method_1_59779BE96F16C058(::Class_2_0C58AD91B0F4D809* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C81092C7C2F35EC7_METHOD_1_59779BE96F16C058_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6A664DCBFEADE56F(::Class_2_0C58AD91B0F4D809* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C81092C7C2F35EC7_METHOD_1_6A664DCBFEADE56F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_45386A1CD3A2A446(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C81092C7C2F35EC7_METHOD_1_45386A1CD3A2A446_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_48278047645E0369(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C81092C7C2F35EC7_METHOD_1_48278047645E0369_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_36D3392E29CB6313(::Class_2_0C58AD91B0F4D809* a1, ::System::String* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C81092C7C2F35EC7_METHOD_1_36D3392E29CB6313_OFFSET))(this, a1, a2);
	}
};
