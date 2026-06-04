#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_9BF8902D61AE1796.h"
#include "unitysdk/System/Object.h"

class Class_1_792EB2ECE91074D4_Class_3_C45EB1E2BA95C560_2;
class Class_1_B4357A1C72BABC6B;
class Class_2_B9E8C2EEAA5C96EC;
class Class_3_1E4F9B0ED3BF21DE;
namespace Entitas { class IComponent; }
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_792EB2ECE91074D4_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1064D4B0)
#define CLASS_1_792EB2ECE91074D4_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1064C720)
#define CLASS_1_792EB2ECE91074D4_METHOD_1_385C022D4562600D_OFFSET UNITYSDK_OFFSET(0x1064D880)
#define CLASS_1_792EB2ECE91074D4_METHOD_1_674F73509924BD16_OFFSET UNITYSDK_OFFSET(0x1064DB20)
#define CLASS_1_792EB2ECE91074D4_METHOD_1_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x1064DCE0)
#define CLASS_1_792EB2ECE91074D4_METHOD_1_9944B2D3338B9ADA_OFFSET UNITYSDK_OFFSET(0x1064CD30)
#define CLASS_1_792EB2ECE91074D4_METHOD_1_E16846F6D6EF4D1B_1_OFFSET UNITYSDK_OFFSET(0x1064DEC0)
#define CLASS_1_792EB2ECE91074D4_METHOD_1_E16846F6D6EF4D1B_OFFSET UNITYSDK_OFFSET(0x1064DE70)
#define CLASS_1_792EB2ECE91074D4_METHOD_1_ED6CF54BFD44815E_OFFSET UNITYSDK_OFFSET(0x1064D6D0)
#define CLASS_1_792EB2ECE91074D4_METHOD_1_F5690A3ADC60244A_OFFSET UNITYSDK_OFFSET(0x1064DDA0)
#define CLASS_1_792EB2ECE91074D4_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x1064CFD0)
#define CLASS_1_792EB2ECE91074D4__CTOR_OFFSET UNITYSDK_OFFSET(0x1064C540)

inline static constexpr unsigned int Class_1_792EB2ECE91074D4_TypeDefinitionIndex = 71692;

class Class_1_792EB2ECE91074D4 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_792EB2ECE91074D4_Class_3_C45EB1E2BA95C560_2*>* Field_1_2; // 0x10
	::Class_3_1E4F9B0ED3BF21DE* Field_1_3; // 0x18
	::Struct_2_9BF8902D61AE1796 Field_1_4; // 0x20
	::Struct_2_9BF8902D61AE1796 Field_1_5; // 0xB0
	::Entitas::IGroup_1<::Class_2_B9E8C2EEAA5C96EC*>* Field_1_6; // 0x140
	::Entitas::ICollector_1<::Class_2_B9E8C2EEAA5C96EC*>* Field_1_7; // 0x148
	::Class_1_B4357A1C72BABC6B* Field_1_8; // 0x150
	::System::Boolean Field_1_9; // 0x158
	::System::Boolean Field_1_10; // 0x159
	::System::Boolean Field_1_11; // 0x15A

	::System::Void _ctor(::Class_1_B4357A1C72BABC6B* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4357A1C72BABC6B*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_1_792EB2ECE91074D4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_792EB2ECE91074D4_INITIALIZE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_792EB2ECE91074D4_TEARDOWN_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_792EB2ECE91074D4_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_9944B2D3338B9ADA(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_792EB2ECE91074D4_METHOD_1_9944B2D3338B9ADA_OFFSET))(this, a1);
	}

	::System::Void Method_1_ED6CF54BFD44815E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_792EB2ECE91074D4_METHOD_1_ED6CF54BFD44815E_OFFSET))(this, a1);
	}

	::System::Void Method_1_385C022D4562600D(::Entitas::IGroup_1<::Class_2_B9E8C2EEAA5C96EC*>* a1, ::Class_2_B9E8C2EEAA5C96EC* a2, ::System::Int32 a3, ::Entitas::IComponent* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IGroup_1<::Class_2_B9E8C2EEAA5C96EC*>*, ::Class_2_B9E8C2EEAA5C96EC*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_792EB2ECE91074D4_METHOD_1_385C022D4562600D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_674F73509924BD16()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_792EB2ECE91074D4_METHOD_1_674F73509924BD16_OFFSET))(this);
	}

	::System::Void Method_1_F5690A3ADC60244A(::Class_2_B9E8C2EEAA5C96EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_792EB2ECE91074D4_METHOD_1_F5690A3ADC60244A_OFFSET))(this, a1);
	}

	::System::Void Method_1_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_792EB2ECE91074D4_METHOD_1_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_1_E16846F6D6EF4D1B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_792EB2ECE91074D4_METHOD_1_E16846F6D6EF4D1B_OFFSET))(this);
	}

	::System::Void Method_1_E16846F6D6EF4D1B_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_792EB2ECE91074D4_METHOD_1_E16846F6D6EF4D1B_1_OFFSET))(this);
	}
};
