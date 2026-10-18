#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_0_16E4307DCC419505_107;
class Class_1_1ABDF1855FCDB08F;
class Class_1_9F6ACA37AE08B5F1;
class Class_1_D05699509194BF9B;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Immutable { template <typename T> class IImmutableSet_1; }

#define CLASS_1_9DC05C24123B42D8_ADD_ONANYMOLDUSABILITYCHANGED_OFFSET UNITYSDK_OFFSET(0x1C540950)
#define CLASS_1_9DC05C24123B42D8_GET_CHIPMOLDS_OFFSET UNITYSDK_OFFSET(0x1C540930)
#define CLASS_1_9DC05C24123B42D8_METHOD_1_630A3B9C63A23882_OFFSET UNITYSDK_OFFSET(0x1C540A90)
#define CLASS_1_9DC05C24123B42D8_METHOD_1_7345931E74FD1609_OFFSET UNITYSDK_OFFSET(0x1C541D70)
#define CLASS_1_9DC05C24123B42D8_METHOD_1_9A4B8D8B70CE3845_1_OFFSET UNITYSDK_OFFSET(0x1C541D00)
#define CLASS_1_9DC05C24123B42D8_METHOD_1_9A4B8D8B70CE3845_OFFSET UNITYSDK_OFFSET(0x1C541C90)
#define CLASS_1_9DC05C24123B42D8_METHOD_1_BDFB52DA4529CC70_OFFSET UNITYSDK_OFFSET(0x1C541630)
#define CLASS_1_9DC05C24123B42D8_METHOD_1_C2C7D48E96452157_OFFSET UNITYSDK_OFFSET(0x1C540A10)
#define CLASS_1_9DC05C24123B42D8_METHOD_1_E53DFBBB5F1609C2_OFFSET UNITYSDK_OFFSET(0x1C5414E0)
#define CLASS_1_9DC05C24123B42D8_REMOVE_ONANYMOLDUSABILITYCHANGED_OFFSET UNITYSDK_OFFSET(0x1C5409B0)
#define CLASS_1_9DC05C24123B42D8_SET_CHIPMOLDS_OFFSET UNITYSDK_OFFSET(0x1C540940)
#define CLASS_1_9DC05C24123B42D8__BINDBUFFCHIPMOLDUSECOUNTLIMIT_B__11_0_OFFSET UNITYSDK_OFFSET(0x1C541DF0)
#define CLASS_1_9DC05C24123B42D8__CTOR_OFFSET UNITYSDK_OFFSET(0x1C541DE0)

inline static constexpr unsigned int Class_1_9DC05C24123B42D8_TypeDefinitionIndex = 41809;

class Class_1_9DC05C24123B42D8 : public ::System::Object
{
public:
	::System::Action* OnAnyMoldUsabilityChanged; // 0x10
	::System::Collections::Generic::HashSet_1<::System::UInt32>* CCKIGNEOCNJ; // 0x18
	::Class_1_9F6ACA37AE08B5F1* DAABOFCNGGM; // 0x20
	::System::Collections::Generic::IReadOnlyList_1<::Class_1_D05699509194BF9B*>* _ChipMolds_k__BackingField; // 0x28
	::System::Nullable_1<::UnityEngine::Vector2Int> JGLJCHGAIHP; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9DC05C24123B42D8__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_D05699509194BF9B*>* get_ChipMolds()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_D05699509194BF9B*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9DC05C24123B42D8_GET_CHIPMOLDS_OFFSET))(this);
	}

	::System::Void set_ChipMolds(::System::Collections::Generic::IReadOnlyList_1<::Class_1_D05699509194BF9B*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_D05699509194BF9B*>*))((::PBYTE)hIl2Cpp + CLASS_1_9DC05C24123B42D8_SET_CHIPMOLDS_OFFSET))(this, a1);
	}

	::System::Void add_OnAnyMoldUsabilityChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_9DC05C24123B42D8_ADD_ONANYMOLDUSABILITYCHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnAnyMoldUsabilityChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_9DC05C24123B42D8_REMOVE_ONANYMOLDUSABILITYCHANGED_OFFSET))(this, a1);
	}

	::System::Void Method_1_C2C7D48E96452157(::UnityEngine::Vector2Int a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_9DC05C24123B42D8_METHOD_1_C2C7D48E96452157_OFFSET))(this, a1);
	}

	::System::Void Method_1_E53DFBBB5F1609C2(::Class_1_9F6ACA37AE08B5F1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9F6ACA37AE08B5F1*))((::PBYTE)hIl2Cpp + CLASS_1_9DC05C24123B42D8_METHOD_1_E53DFBBB5F1609C2_OFFSET))(this, a1);
	}

	::System::Void Method_1_BDFB52DA4529CC70(::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_107*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_107*>*))((::PBYTE)hIl2Cpp + CLASS_1_9DC05C24123B42D8_METHOD_1_BDFB52DA4529CC70_OFFSET))(this, a1);
	}

	::System::Void Method_1_630A3B9C63A23882()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9DC05C24123B42D8_METHOD_1_630A3B9C63A23882_OFFSET))(this);
	}

	::System::Void Method_1_9A4B8D8B70CE3845(::Class_1_1ABDF1855FCDB08F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1ABDF1855FCDB08F*))((::PBYTE)hIl2Cpp + CLASS_1_9DC05C24123B42D8_METHOD_1_9A4B8D8B70CE3845_OFFSET))(this, a1);
	}

	::System::Void Method_1_9A4B8D8B70CE3845_1(::Class_1_1ABDF1855FCDB08F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1ABDF1855FCDB08F*))((::PBYTE)hIl2Cpp + CLASS_1_9DC05C24123B42D8_METHOD_1_9A4B8D8B70CE3845_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_7345931E74FD1609(::System::Collections::Immutable::IImmutableSet_1<::Class_1_1ABDF1855FCDB08F*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Immutable::IImmutableSet_1<::Class_1_1ABDF1855FCDB08F*>*))((::PBYTE)hIl2Cpp + CLASS_1_9DC05C24123B42D8_METHOD_1_7345931E74FD1609_OFFSET))(this, a1);
	}

	::System::Void _BindBuffChipMoldUseCountLimit_b__11_0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9DC05C24123B42D8__BINDBUFFCHIPMOLDUSECOUNTLIMIT_B__11_0_OFFSET))(this, a1);
	}
};
