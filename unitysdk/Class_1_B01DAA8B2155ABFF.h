#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_955;
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Reflection { class MemberInfo; }

#define CLASS_1_B01DAA8B2155ABFF_METHOD_1_31115E274EC8B1CC_OFFSET UNITYSDK_OFFSET(0xB487B70)
#define CLASS_1_B01DAA8B2155ABFF_METHOD_1_661CBA7D0F34BEDC_OFFSET UNITYSDK_OFFSET(0xB487A10)
#define CLASS_1_B01DAA8B2155ABFF__CCTOR_OFFSET UNITYSDK_OFFSET(0xB4886F0)

inline static constexpr unsigned int Class_1_B01DAA8B2155ABFF_TypeDefinitionIndex = 67236;

class Class_1_B01DAA8B2155ABFF : public ::System::Object
{
public:
	static ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Reflection::MemberInfo*>*>** StaticGet_LFEOEENNDBB()
	{
		return (::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Reflection::MemberInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B01DAA8B2155ABFF_TypeDefinitionIndex)->GetStaticField(0x6B30);
	}
	// static const ::System::String* IBOJIJDDBHF; // 0x0
	// static const ::System::String* BJCIHLALBJI; // 0x0
	// static const ::System::String* BAMBGMGPMKI; // 0x0
	// static const ::System::Char FLMHFGHHGDB; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B01DAA8B2155ABFF__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Reflection::MemberInfo*>* Method_1_661CBA7D0F34BEDC(::System::Type* a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Reflection::MemberInfo*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_B01DAA8B2155ABFF_METHOD_1_661CBA7D0F34BEDC_OFFSET))(a1);
	}

	static ::System::Object* Method_1_31115E274EC8B1CC(::System::String* a1, ::Class_0_16E4307DCC419505_955* a2)
	{
		return ((::System::Object*(*)(::System::String*, ::Class_0_16E4307DCC419505_955*))((::PBYTE)hIl2Cpp + CLASS_1_B01DAA8B2155ABFF_METHOD_1_31115E274EC8B1CC_OFFSET))(a1, a2);
	}
};
