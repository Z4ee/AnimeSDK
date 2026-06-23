#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_86D58C2A2996E647.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"

class Class_1_0D541F5223CB5BF9;
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_78783A73BC2E7725_DISPOSE_OFFSET UNITYSDK_OFFSET(0x127A0A30)
#define CLASS_2_78783A73BC2E7725_METHOD_2_0ED0CC65FCA00A80_OFFSET UNITYSDK_OFFSET(0x127A1480)
#define CLASS_2_78783A73BC2E7725_METHOD_2_2A75DD86D2D27000_OFFSET UNITYSDK_OFFSET(0x127A1030)
#define CLASS_2_78783A73BC2E7725_METHOD_2_49AAC80CCF18DF2D_OFFSET UNITYSDK_OFFSET(0x127A1540)
#define CLASS_2_78783A73BC2E7725_METHOD_2_5CF31F8E10B32DAA_OFFSET UNITYSDK_OFFSET(0x127A0C20)
#define CLASS_2_78783A73BC2E7725_METHOD_2_612D3306DE165574_OFFSET UNITYSDK_OFFSET(0x127A1150)
#define CLASS_2_78783A73BC2E7725_METHOD_2_69292918AEE5C06D_OFFSET UNITYSDK_OFFSET(0x127A1240)
#define CLASS_2_78783A73BC2E7725_METHOD_2_87E85B9C34ED0312_OFFSET UNITYSDK_OFFSET(0x127A14E0)
#define CLASS_2_78783A73BC2E7725_METHOD_2_97C151A47E6F493F_OFFSET UNITYSDK_OFFSET(0x127A0DE0)
#define CLASS_2_78783A73BC2E7725_METHOD_2_9F8864631434A8C7_OFFSET UNITYSDK_OFFSET(0x127A0BA0)
#define CLASS_2_78783A73BC2E7725_METHOD_2_C02168B5282D28AE_OFFSET UNITYSDK_OFFSET(0x127A0F00)
#define CLASS_2_78783A73BC2E7725_METHOD_2_D631E6EFCE1547F3_OFFSET UNITYSDK_OFFSET(0x127A1360)
#define CLASS_2_78783A73BC2E7725_ONCREATE_OFFSET UNITYSDK_OFFSET(0x127A0AD0)
#define CLASS_2_78783A73BC2E7725__CTOR_OFFSET UNITYSDK_OFFSET(0x127A0B10)

inline static constexpr unsigned int Class_2_78783A73BC2E7725_TypeDefinitionIndex = 59757;

class Class_2_78783A73BC2E7725 : public ::Foundation::SingletonDisposable_1<::Class_2_78783A73BC2E7725*>
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_0D541F5223CB5BF9*>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78783A73BC2E7725__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78783A73BC2E7725_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78783A73BC2E7725_ONCREATE_OFFSET))(this);
	}

	::System::Void Method_2_9F8864631434A8C7(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_78783A73BC2E7725_METHOD_2_9F8864631434A8C7_OFFSET))(this, a1);
	}

	::System::Void Method_2_5CF31F8E10B32DAA(::System::Int32 a1, ::System::Action_1<::System::EventArgs*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_2_78783A73BC2E7725_METHOD_2_5CF31F8E10B32DAA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_97C151A47E6F493F(::System::Int32 a1, ::System::EventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_78783A73BC2E7725_METHOD_2_97C151A47E6F493F_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_C02168B5282D28AE(::System::Int32 a1, ::Class_1_0D541F5223CB5BF9*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Class_1_0D541F5223CB5BF9*&))((::PBYTE)hIl2Cpp + CLASS_2_78783A73BC2E7725_METHOD_2_C02168B5282D28AE_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_2A75DD86D2D27000(::System::Int32 a1, ::System::Action_1<::System::EventArgs*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_2_78783A73BC2E7725_METHOD_2_2A75DD86D2D27000_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_612D3306DE165574(::Enum_3_86D58C2A2996E647 a1, ::System::EventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_86D58C2A2996E647, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_78783A73BC2E7725_METHOD_2_612D3306DE165574_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_69292918AEE5C06D(::System::Int32 a1, ::System::Action_1<::System::EventArgs*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_2_78783A73BC2E7725_METHOD_2_69292918AEE5C06D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D631E6EFCE1547F3(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_78783A73BC2E7725_METHOD_2_D631E6EFCE1547F3_OFFSET))(this, a1);
	}

	::System::Void Method_2_0ED0CC65FCA00A80(::Enum_3_86D58C2A2996E647 a1, ::System::Action_1<::System::EventArgs*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_86D58C2A2996E647, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_2_78783A73BC2E7725_METHOD_2_0ED0CC65FCA00A80_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_87E85B9C34ED0312(::Enum_3_86D58C2A2996E647 a1, ::System::Action_1<::System::EventArgs*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_86D58C2A2996E647, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_2_78783A73BC2E7725_METHOD_2_87E85B9C34ED0312_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_49AAC80CCF18DF2D(::Enum_3_86D58C2A2996E647 a1, ::System::Action_1<::System::EventArgs*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_86D58C2A2996E647, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_2_78783A73BC2E7725_METHOD_2_49AAC80CCF18DF2D_OFFSET))(this, a1, a2);
	}
};
