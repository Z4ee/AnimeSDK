#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_927A87B991F81532.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"

class Class_1_19C62F41C71F0C80;
namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_78783A73BC2E7725_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x113BE960)
#define CLASS_2_78783A73BC2E7725_1_METHOD_2_0ED0CC65FCA00A80_OFFSET UNITYSDK_OFFSET(0x113BEE40)
#define CLASS_2_78783A73BC2E7725_1_METHOD_2_2A75DD86D2D27000_OFFSET UNITYSDK_OFFSET(0x113BF0C0)
#define CLASS_2_78783A73BC2E7725_1_METHOD_2_49AAC80CCF18DF2D_OFFSET UNITYSDK_OFFSET(0x113BF2D0)
#define CLASS_2_78783A73BC2E7725_1_METHOD_2_5CF31F8E10B32DAA_OFFSET UNITYSDK_OFFSET(0x113BEEA0)
#define CLASS_2_78783A73BC2E7725_1_METHOD_2_612D3306DE165574_OFFSET UNITYSDK_OFFSET(0x113BF1E0)
#define CLASS_2_78783A73BC2E7725_1_METHOD_2_69292918AEE5C06D_OFFSET UNITYSDK_OFFSET(0x113BED20)
#define CLASS_2_78783A73BC2E7725_1_METHOD_2_87E85B9C34ED0312_OFFSET UNITYSDK_OFFSET(0x113BF060)
#define CLASS_2_78783A73BC2E7725_1_METHOD_2_97C151A47E6F493F_OFFSET UNITYSDK_OFFSET(0x113BEC00)
#define CLASS_2_78783A73BC2E7725_1_METHOD_2_C02168B5282D28AE_OFFSET UNITYSDK_OFFSET(0x113BEAD0)
#define CLASS_2_78783A73BC2E7725_1_ONCREATE_OFFSET UNITYSDK_OFFSET(0x113BEA00)
#define CLASS_2_78783A73BC2E7725_1__CTOR_OFFSET UNITYSDK_OFFSET(0x113BEA40)

inline static constexpr unsigned int Class_2_78783A73BC2E7725_1_TypeDefinitionIndex = 51458;

class Class_2_78783A73BC2E7725_1 : public ::Foundation::SingletonDisposable_1<::Class_2_78783A73BC2E7725_1*>
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_19C62F41C71F0C80*>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78783A73BC2E7725_1__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78783A73BC2E7725_1_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78783A73BC2E7725_1_ONCREATE_OFFSET))(this);
	}

	::System::Boolean Method_2_C02168B5282D28AE(::System::Int32 a1, ::Class_1_19C62F41C71F0C80*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Class_1_19C62F41C71F0C80*&))((::PBYTE)hIl2Cpp + CLASS_2_78783A73BC2E7725_1_METHOD_2_C02168B5282D28AE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_97C151A47E6F493F(::System::Int32 a1, ::System::EventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_78783A73BC2E7725_1_METHOD_2_97C151A47E6F493F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_69292918AEE5C06D(::System::Int32 a1, ::System::Action_1<::System::EventArgs*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_2_78783A73BC2E7725_1_METHOD_2_69292918AEE5C06D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0ED0CC65FCA00A80(::Enum_3_927A87B991F81532 a1, ::System::Action_1<::System::EventArgs*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_927A87B991F81532, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_2_78783A73BC2E7725_1_METHOD_2_0ED0CC65FCA00A80_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_87E85B9C34ED0312(::Enum_3_927A87B991F81532 a1, ::System::Action_1<::System::EventArgs*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_927A87B991F81532, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_2_78783A73BC2E7725_1_METHOD_2_87E85B9C34ED0312_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_2A75DD86D2D27000(::System::Int32 a1, ::System::Action_1<::System::EventArgs*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_2_78783A73BC2E7725_1_METHOD_2_2A75DD86D2D27000_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_612D3306DE165574(::Enum_3_927A87B991F81532 a1, ::System::EventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_927A87B991F81532, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_78783A73BC2E7725_1_METHOD_2_612D3306DE165574_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_49AAC80CCF18DF2D(::Enum_3_927A87B991F81532 a1, ::System::Action_1<::System::EventArgs*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_927A87B991F81532, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_2_78783A73BC2E7725_1_METHOD_2_49AAC80CCF18DF2D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5CF31F8E10B32DAA(::System::Int32 a1, ::System::Action_1<::System::EventArgs*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_2_78783A73BC2E7725_1_METHOD_2_5CF31F8E10B32DAA_OFFSET))(this, a1, a2);
	}
};
