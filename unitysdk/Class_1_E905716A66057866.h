#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_E905716A66057866_METHOD_1_2FF85733DB45EE9C_OFFSET UNITYSDK_OFFSET(0x1614AB10)
#define CLASS_1_E905716A66057866_METHOD_1_53ACAFDC46263320_OFFSET UNITYSDK_OFFSET(0x1614ACE0)
#define CLASS_1_E905716A66057866_METHOD_1_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0x1614A870)
#define CLASS_1_E905716A66057866_METHOD_1_86026B47A3027B67_OFFSET UNITYSDK_OFFSET(0x1614AC40)
#define CLASS_1_E905716A66057866_METHOD_1_D936FF1923FB59BE_OFFSET UNITYSDK_OFFSET(0x1614AA70)
#define CLASS_1_E905716A66057866__CCTOR_OFFSET UNITYSDK_OFFSET(0x1614A7A0)

inline static constexpr unsigned int Class_1_E905716A66057866_TypeDefinitionIndex = 79635;

class Class_1_E905716A66057866 : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E905716A66057866_TypeDefinitionIndex)->GetStaticField(0x34810);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E905716A66057866__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_735EE20B25F86BF4()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E905716A66057866_METHOD_1_735EE20B25F86BF4_OFFSET))();
	}

	static ::Il2CppArray<::System::String*>* Method_1_D936FF1923FB59BE(::System::String* a1)
	{
		return ((::Il2CppArray<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E905716A66057866_METHOD_1_D936FF1923FB59BE_OFFSET))(a1);
	}

	static ::System::Void Method_1_2FF85733DB45EE9C(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E905716A66057866_METHOD_1_2FF85733DB45EE9C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_86026B47A3027B67()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_E905716A66057866_METHOD_1_86026B47A3027B67_OFFSET))();
	}

	static ::System::Void Method_1_53ACAFDC46263320(::System::String* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_E905716A66057866_METHOD_1_53ACAFDC46263320_OFFSET))(a1, a2);
	}
};
