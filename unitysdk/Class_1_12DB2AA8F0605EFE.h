#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_12DB2AA8F0605EFE_METHOD_1_ABA3152B8019E144_OFFSET UNITYSDK_OFFSET(0x11AA9D30)
#define CLASS_1_12DB2AA8F0605EFE__CCTOR_OFFSET UNITYSDK_OFFSET(0x11AA9A80)
#define CLASS_1_12DB2AA8F0605EFE__CTOR_OFFSET UNITYSDK_OFFSET(0x11AA9D20)

inline static constexpr unsigned int Class_1_12DB2AA8F0605EFE_TypeDefinitionIndex = 58069;

class Class_1_12DB2AA8F0605EFE : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_Field_1_13()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_12DB2AA8F0605EFE_TypeDefinitionIndex)->GetStaticField(0x41500);
	}
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_2; // 0x0
	// static const ::System::String* Field_1_3; // 0x0
	// static const ::System::String* Field_1_4; // 0x0
	// static const ::System::String* Field_1_5; // 0x0
	// static const ::System::String* Field_1_6; // 0x0
	// static const ::System::String* Field_1_7; // 0x0
	// static const ::System::String* Field_1_8; // 0x0
	// static const ::System::String* Field_1_9; // 0x0
	// static const ::System::String* Field_1_10; // 0x0
	// static const ::System::String* Field_1_11; // 0x0
	// static const ::System::String* Field_1_12; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_12DB2AA8F0605EFE__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12DB2AA8F0605EFE__CTOR_OFFSET))(this);
	}

	static ::MoleMole::GameplayTag Method_1_ABA3152B8019E144(::System::Int32 a1)
	{
		return ((::MoleMole::GameplayTag(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_12DB2AA8F0605EFE_METHOD_1_ABA3152B8019E144_OFFSET))(a1);
	}
};
