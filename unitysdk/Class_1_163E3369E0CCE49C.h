#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_163E3369E0CCE49C_METHOD_1_8B40C286BD2C81B3_OFFSET UNITYSDK_OFFSET(0x18B34760)
#define CLASS_1_163E3369E0CCE49C_METHOD_1_E2580544EE366864_OFFSET UNITYSDK_OFFSET(0x18B34220)
#define CLASS_1_163E3369E0CCE49C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B34110)
#define CLASS_1_163E3369E0CCE49C__CTOR_OFFSET UNITYSDK_OFFSET(0x18B34100)

inline static constexpr unsigned int Class_1_163E3369E0CCE49C_TypeDefinitionIndex = 83897;

class Class_1_163E3369E0CCE49C : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Char>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_163E3369E0CCE49C_TypeDefinitionIndex)->GetStaticField(0x38130);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_163E3369E0CCE49C_TypeDefinitionIndex)->GetStaticField(0x38138);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_163E3369E0CCE49C__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_163E3369E0CCE49C__CCTOR_OFFSET))();
	}

	static ::System::String* Method_1_E2580544EE366864(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_163E3369E0CCE49C_METHOD_1_E2580544EE366864_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_8B40C286BD2C81B3(::System::String* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a3, ::System::Boolean a4)
	{
		return ((::System::String*(*)(::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_163E3369E0CCE49C_METHOD_1_8B40C286BD2C81B3_OFFSET))(a1, a2, a3, a4);
	}
};
