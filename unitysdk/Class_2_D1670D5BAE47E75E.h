#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_70DC0FE443A03F1D.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"

class Class_1_0D541F5223CB5BF9;
namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_D1670D5BAE47E75E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D28CD30)
#define CLASS_2_D1670D5BAE47E75E_METHOD_2_0ED0CC65FCA00A80_OFFSET UNITYSDK_OFFSET(0x1D28D6F0)
#define CLASS_2_D1670D5BAE47E75E_METHOD_2_49AAC80CCF18DF2D_OFFSET UNITYSDK_OFFSET(0x1D28D870)
#define CLASS_2_D1670D5BAE47E75E_METHOD_2_5CF31F8E10B32DAA_OFFSET UNITYSDK_OFFSET(0x1D28D2A0)
#define CLASS_2_D1670D5BAE47E75E_METHOD_2_612D3306DE165574_OFFSET UNITYSDK_OFFSET(0x1D28D8D0)
#define CLASS_2_D1670D5BAE47E75E_METHOD_2_69292918AEE5C06D_OFFSET UNITYSDK_OFFSET(0x1D28D5D0)
#define CLASS_2_D1670D5BAE47E75E_METHOD_2_97C151A47E6F493F_OFFSET UNITYSDK_OFFSET(0x1D28D750)
#define CLASS_2_D1670D5BAE47E75E_METHOD_2_C02168B5282D28AE_OFFSET UNITYSDK_OFFSET(0x1D28CEA0)
#define CLASS_2_D1670D5BAE47E75E_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1D28CDD0)
#define CLASS_2_D1670D5BAE47E75E__CTOR_OFFSET UNITYSDK_OFFSET(0x1D28CE10)

inline static constexpr unsigned int Class_2_D1670D5BAE47E75E_TypeDefinitionIndex = 19259;

class Class_2_D1670D5BAE47E75E : public ::Foundation::SingletonDisposable_1<::Class_2_D1670D5BAE47E75E*>
{
public:
	static ::System::Boolean* StaticGet_Field_2_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D1670D5BAE47E75E_TypeDefinitionIndex)->GetStaticField(0x44E0);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_0D541F5223CB5BF9*>* Field_2_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1670D5BAE47E75E__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1670D5BAE47E75E_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1670D5BAE47E75E_ONCREATE_OFFSET))(this);
	}

	::System::Boolean Method_2_C02168B5282D28AE(::System::Int32 a1, ::Class_1_0D541F5223CB5BF9*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Class_1_0D541F5223CB5BF9*&))((::PBYTE)hIl2Cpp + CLASS_2_D1670D5BAE47E75E_METHOD_2_C02168B5282D28AE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5CF31F8E10B32DAA(::System::Int32 a1, ::System::Action_1<::System::EventArgs*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_2_D1670D5BAE47E75E_METHOD_2_5CF31F8E10B32DAA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_69292918AEE5C06D(::System::Int32 a1, ::System::Action_1<::System::EventArgs*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_2_D1670D5BAE47E75E_METHOD_2_69292918AEE5C06D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0ED0CC65FCA00A80(::Enum_3_70DC0FE443A03F1D a1, ::System::Action_1<::System::EventArgs*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_70DC0FE443A03F1D, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_2_D1670D5BAE47E75E_METHOD_2_0ED0CC65FCA00A80_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_97C151A47E6F493F(::System::Int32 a1, ::System::EventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_D1670D5BAE47E75E_METHOD_2_97C151A47E6F493F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_49AAC80CCF18DF2D(::Enum_3_70DC0FE443A03F1D a1, ::System::Action_1<::System::EventArgs*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_70DC0FE443A03F1D, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + CLASS_2_D1670D5BAE47E75E_METHOD_2_49AAC80CCF18DF2D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_612D3306DE165574(::Enum_3_70DC0FE443A03F1D a1, ::System::EventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_70DC0FE443A03F1D, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_D1670D5BAE47E75E_METHOD_2_612D3306DE165574_OFFSET))(this, a1, a2);
	}
};
