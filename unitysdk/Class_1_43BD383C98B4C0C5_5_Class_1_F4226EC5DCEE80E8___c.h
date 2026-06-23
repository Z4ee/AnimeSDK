#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define CLASS_1_43BD383C98B4C0C5_5_CLASS_1_F4226EC5DCEE80E8___C_METHOD_1_13CAD6C80430C051_OFFSET UNITYSDK_OFFSET(0x1E5AF0B0)
#define CLASS_1_43BD383C98B4C0C5_5_CLASS_1_F4226EC5DCEE80E8___C_METHOD_1_8F0622AEDFE8E37C_OFFSET UNITYSDK_OFFSET(0x1E5AF170)
#define CLASS_1_43BD383C98B4C0C5_5_CLASS_1_F4226EC5DCEE80E8___C_METHOD_1_E322E731F2C9B525_OFFSET UNITYSDK_OFFSET(0x1E5AF160)
#define CLASS_1_43BD383C98B4C0C5_5_CLASS_1_F4226EC5DCEE80E8___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5AF060)
#define CLASS_1_43BD383C98B4C0C5_5_CLASS_1_F4226EC5DCEE80E8___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5AF0A0)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_5_Class_1_F4226EC5DCEE80E8___c_TypeDefinitionIndex = 28198;

class Class_1_43BD383C98B4C0C5_5_Class_1_F4226EC5DCEE80E8___c : public ::System::Object
{
public:
	static ::Class_1_43BD383C98B4C0C5_5_Class_1_F4226EC5DCEE80E8___c** StaticGet___9()
	{
		return (::Class_1_43BD383C98B4C0C5_5_Class_1_F4226EC5DCEE80E8___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_43BD383C98B4C0C5_5_Class_1_F4226EC5DCEE80E8___c_TypeDefinitionIndex)->GetStaticField(0x22CE0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_5_CLASS_1_F4226EC5DCEE80E8___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_5_CLASS_1_F4226EC5DCEE80E8___C__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*> Method_1_13CAD6C80430C051(::System::String* a1, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a2)
	{
		return ((::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*>(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_5_CLASS_1_F4226EC5DCEE80E8___C_METHOD_1_13CAD6C80430C051_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_E322E731F2C9B525(::System::String* a1, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_5_CLASS_1_F4226EC5DCEE80E8___C_METHOD_1_E322E731F2C9B525_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Nullable_1<::System::Int32>> Method_1_8F0622AEDFE8E37C(::System::String* a1, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a2)
	{
		return ((::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Nullable_1<::System::Int32>>(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_5_CLASS_1_F4226EC5DCEE80E8___C_METHOD_1_8F0622AEDFE8E37C_OFFSET))(this, a1, a2);
	}
};
