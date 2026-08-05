#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0B501CAB4EA8211F_Struct_2_0D8C63B1CC32553A_1.h"
#include "unitysdk/Enum_3_3A8D4AF679CBDF1E.h"
#include "unitysdk/Enum_3_4125E22C5A7D75B1.h"
#include "unitysdk/Enum_3_4A483BC3F77616F6.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_2_DE520563CFD9F77A;
namespace MoleMole::MiniGame::TartarusHounds::View { class ViewEntityGame; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_0B501CAB4EA8211F_METHOD_1_4E608ED8CF3CBCB8_OFFSET UNITYSDK_OFFSET(0x1489E610)
#define CLASS_1_0B501CAB4EA8211F_METHOD_1_6F73A40265D5B980_OFFSET UNITYSDK_OFFSET(0x1489E840)
#define CLASS_1_0B501CAB4EA8211F_METHOD_1_70F807F41F81D824_OFFSET UNITYSDK_OFFSET(0x1489EB60)
#define CLASS_1_0B501CAB4EA8211F_METHOD_1_74742E2CC68810E2_OFFSET UNITYSDK_OFFSET(0x1489EF50)
#define CLASS_1_0B501CAB4EA8211F_METHOD_1_95ADE8ED590C5559_OFFSET UNITYSDK_OFFSET(0x1489F3B0)
#define CLASS_1_0B501CAB4EA8211F_METHOD_1_A440E8AEAE03F8F7_OFFSET UNITYSDK_OFFSET(0x1489E3A0)
#define CLASS_1_0B501CAB4EA8211F_METHOD_1_C401240752BDEFA5_OFFSET UNITYSDK_OFFSET(0x1489EA60)
#define CLASS_1_0B501CAB4EA8211F_METHOD_1_D412F0348A00EBB5_OFFSET UNITYSDK_OFFSET(0x1489ED10)
#define CLASS_1_0B501CAB4EA8211F_METHOD_1_E484621534821291_OFFSET UNITYSDK_OFFSET(0x1489E4F0)
#define CLASS_1_0B501CAB4EA8211F_METHOD_1_E6168D64FA75612E_OFFSET UNITYSDK_OFFSET(0x1489EE50)
#define CLASS_1_0B501CAB4EA8211F__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1489E320)
#define CLASS_1_0B501CAB4EA8211F__CTOR_OFFSET UNITYSDK_OFFSET(0x1489E2A0)

inline static constexpr unsigned int Class_1_0B501CAB4EA8211F_TypeDefinitionIndex = 51865;

class Class_1_0B501CAB4EA8211F : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x1E; // 0x0
	::System::Collections::Generic::HashSet_1<::System::ValueTuple_3<::System::UInt32, ::System::UInt32, ::System::UInt32>>* Field_1_2; // 0x10
	::System::Collections::Generic::Queue_1<::Class_2_DE520563CFD9F77A*>* Field_1_4; // 0x18
	::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame* Field_1_1; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_0B501CAB4EA8211F_Struct_2_0D8C63B1CC32553A_1>* Field_1_3; // 0x28
	::System::Single Field_1_6; // 0x30
	::System::Single Field_1_7; // 0x34
	::System::Single Field_1_5; // 0x38

	::System::Void _ctor(::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame*))((::PBYTE)hIl2Cpp + CLASS_1_0B501CAB4EA8211F__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B501CAB4EA8211F__CTOR_1_OFFSET))(this);
	}

	::System::Void Method_1_A440E8AEAE03F8F7(::Class_1_0B501CAB4EA8211F_Struct_2_0D8C63B1CC32553A_1 a1, ::Enum_3_4A483BC3F77616F6 a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0B501CAB4EA8211F_Struct_2_0D8C63B1CC32553A_1, ::Enum_3_4A483BC3F77616F6, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0B501CAB4EA8211F_METHOD_1_A440E8AEAE03F8F7_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void Method_1_E484621534821291(::Class_1_0B501CAB4EA8211F* a1)
	{
		return ((::System::Void(*)(::Class_1_0B501CAB4EA8211F*))((::PBYTE)hIl2Cpp + CLASS_1_0B501CAB4EA8211F_METHOD_1_E484621534821291_OFFSET))(a1);
	}

	::System::Void Method_1_4E608ED8CF3CBCB8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0B501CAB4EA8211F_METHOD_1_4E608ED8CF3CBCB8_OFFSET))(this, a1);
	}

	::System::Void Method_1_C401240752BDEFA5(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0B501CAB4EA8211F_METHOD_1_C401240752BDEFA5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_70F807F41F81D824(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0B501CAB4EA8211F_METHOD_1_70F807F41F81D824_OFFSET))(this, a1);
	}

	::System::Void Method_1_D412F0348A00EBB5(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0B501CAB4EA8211F_METHOD_1_D412F0348A00EBB5_OFFSET))(this, a1);
	}

	static ::Class_1_0B501CAB4EA8211F* Method_1_E6168D64FA75612E(::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame* a1)
	{
		return ((::Class_1_0B501CAB4EA8211F*(*)(::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame*))((::PBYTE)hIl2Cpp + CLASS_1_0B501CAB4EA8211F_METHOD_1_E6168D64FA75612E_OFFSET))(a1);
	}

	::System::Void Method_1_6F73A40265D5B980()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B501CAB4EA8211F_METHOD_1_6F73A40265D5B980_OFFSET))(this);
	}

	::System::Void Method_1_74742E2CC68810E2(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::Enum_3_3A8D4AF679CBDF1E a4, ::Enum_3_4125E22C5A7D75B1 a5, ::System::Int32 a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::Enum_3_3A8D4AF679CBDF1E, ::Enum_3_4125E22C5A7D75B1, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0B501CAB4EA8211F_METHOD_1_74742E2CC68810E2_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_95ADE8ED590C5559(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0B501CAB4EA8211F_METHOD_1_95ADE8ED590C5559_OFFSET))(this, a1);
	}
};
