#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_F933EDA6A92EC609___C_METHOD_1_60884C9F8A94DD70_OFFSET UNITYSDK_OFFSET(0x14432D50)
#define CLASS_1_F933EDA6A92EC609___C_METHOD_1_F7ED3B609F57276D_OFFSET UNITYSDK_OFFSET(0x14432D60)
#define CLASS_1_F933EDA6A92EC609___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14432D00)
#define CLASS_1_F933EDA6A92EC609___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14432D40)

inline static constexpr unsigned int Class_1_F933EDA6A92EC609___c_TypeDefinitionIndex = 66711;

class Class_1_F933EDA6A92EC609___c : public ::System::Object
{
public:
	static ::Class_1_F933EDA6A92EC609___c** StaticGet___9()
	{
		return (::Class_1_F933EDA6A92EC609___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F933EDA6A92EC609___c_TypeDefinitionIndex)->GetStaticField(0x47F20);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F933EDA6A92EC609___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F933EDA6A92EC609___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_60884C9F8A94DD70(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::String*> a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::String*>))((::PBYTE)hIl2Cpp + CLASS_1_F933EDA6A92EC609___C_METHOD_1_60884C9F8A94DD70_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_F7ED3B609F57276D(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::String*> a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::String*>))((::PBYTE)hIl2Cpp + CLASS_1_F933EDA6A92EC609___C_METHOD_1_F7ED3B609F57276D_OFFSET))(this, a1);
	}
};
