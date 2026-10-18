#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_412;
namespace System { class Type; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Reflection { class ConstructorInfo; }

#define CLASS_1_5BEBE421A8090ABA_METHOD_1_007D15B0F42A24E8_OFFSET UNITYSDK_OFFSET(0x1EC57F10)
#define CLASS_1_5BEBE421A8090ABA_METHOD_1_58AF64EF48C137E0_OFFSET UNITYSDK_OFFSET(0x1EC57C50)
#define CLASS_1_5BEBE421A8090ABA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC58400)

inline static constexpr unsigned int Class_1_5BEBE421A8090ABA_TypeDefinitionIndex = 44219;

class Class_1_5BEBE421A8090ABA : public ::System::Object
{
public:
	static ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Reflection::ConstructorInfo*>** StaticGet_AEFFOKJDDEH()
	{
		return (::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Reflection::ConstructorInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5BEBE421A8090ABA_TypeDefinitionIndex)->GetStaticField(0x499F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5BEBE421A8090ABA__CCTOR_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_412* Method_1_58AF64EF48C137E0(::System::Object* a1)
	{
		return ((::Class_0_16E4307DCC419505_412*(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5BEBE421A8090ABA_METHOD_1_58AF64EF48C137E0_OFFSET))(a1);
	}

	static ::System::Reflection::ConstructorInfo* Method_1_007D15B0F42A24E8(::System::Type* a1)
	{
		return ((::System::Reflection::ConstructorInfo*(*)(::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_5BEBE421A8090ABA_METHOD_1_007D15B0F42A24E8_OFFSET))(a1);
	}
};
