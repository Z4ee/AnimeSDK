#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_60475C2D4D583319___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x134D6C70)
#define CLASS_1_60475C2D4D583319___C__CHOOSESLOT_B__7_0_OFFSET UNITYSDK_OFFSET(0x134D6CB0)
#define CLASS_1_60475C2D4D583319___C__CTOR_OFFSET UNITYSDK_OFFSET(0x134D6CA0)

inline static constexpr unsigned int Class_1_60475C2D4D583319___c_TypeDefinitionIndex = 49018;

class Class_1_60475C2D4D583319___c : public ::System::Object
{
public:
	static ::Class_1_60475C2D4D583319___c** StaticGet___9()
	{
		return (::Class_1_60475C2D4D583319___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_60475C2D4D583319___c_TypeDefinitionIndex)->GetStaticField(0x36430);
	}
	static ::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Single>>** StaticGet___9__7_0()
	{
		return (::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Single>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_60475C2D4D583319___c_TypeDefinitionIndex)->GetStaticField(0x36438);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_60475C2D4D583319___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60475C2D4D583319___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _ChooseSlot_b__7_0(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Single> a1, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Single> a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Single>, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Single>))((::PBYTE)hIl2Cpp + CLASS_1_60475C2D4D583319___C__CHOOSESLOT_B__7_0_OFFSET))(this, a1, a2);
	}
};
