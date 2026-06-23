#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_75B8E35856A8AD03;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_98AF17B046D48248_METHOD_1_222951B8BA7FC1B0_OFFSET UNITYSDK_OFFSET(0x109EF3C0)
#define CLASS_1_98AF17B046D48248_METHOD_1_27CDA859F7ADAF64_OFFSET UNITYSDK_OFFSET(0x109EFEF0)
#define CLASS_1_98AF17B046D48248_METHOD_1_44C6956149352354_OFFSET UNITYSDK_OFFSET(0x109EF330)
#define CLASS_1_98AF17B046D48248_METHOD_1_601EF3E7226D7DC2_OFFSET UNITYSDK_OFFSET(0x109EF6C0)
#define CLASS_1_98AF17B046D48248_METHOD_1_6090BA8286D94A44_OFFSET UNITYSDK_OFFSET(0x109EF4F0)
#define CLASS_1_98AF17B046D48248_METHOD_1_8B0F5C62B0444070_OFFSET UNITYSDK_OFFSET(0x109EF990)
#define CLASS_1_98AF17B046D48248_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x109F0390)
#define CLASS_1_98AF17B046D48248_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x109F0280)
#define CLASS_1_98AF17B046D48248_METHOD_1_DDB2FF13674ACFC1_OFFSET UNITYSDK_OFFSET(0x109EF200)
#define CLASS_1_98AF17B046D48248__CCTOR_OFFSET UNITYSDK_OFFSET(0x109EF160)

inline static constexpr unsigned int Class_1_98AF17B046D48248_TypeDefinitionIndex = 77619;

class Class_1_98AF17B046D48248 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_75B8E35856A8AD03*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_75B8E35856A8AD03*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_98AF17B046D48248_TypeDefinitionIndex)->GetStaticField(0x316E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_98AF17B046D48248__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::System::Int32>* Method_1_DDB2FF13674ACFC1()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_98AF17B046D48248_METHOD_1_DDB2FF13674ACFC1_OFFSET))();
	}

	static ::System::Collections::IEnumerator* Method_1_44C6956149352354(::System::Single a1, ::System::Action_1<::System::Single>* a2)
	{
		return ((::System::Collections::IEnumerator*(*)(::System::Single, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_98AF17B046D48248_METHOD_1_44C6956149352354_OFFSET))(a1, a2);
	}

	static ::Class_1_75B8E35856A8AD03* Method_1_222951B8BA7FC1B0(::System::Int32 a1)
	{
		return ((::Class_1_75B8E35856A8AD03*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_98AF17B046D48248_METHOD_1_222951B8BA7FC1B0_OFFSET))(a1);
	}

	static ::System::Void Method_1_6090BA8286D94A44(::Foundation::AssetPath a1, ::System::Action_1<::Foundation::AssetRequestHandle>* a2)
	{
		return ((::System::Void(*)(::Foundation::AssetPath, ::System::Action_1<::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + CLASS_1_98AF17B046D48248_METHOD_1_6090BA8286D94A44_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_601EF3E7226D7DC2()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_98AF17B046D48248_METHOD_1_601EF3E7226D7DC2_OFFSET))();
	}

	static ::System::Void Method_1_27CDA859F7ADAF64(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_98AF17B046D48248_METHOD_1_27CDA859F7ADAF64_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AA169839CB93802A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_98AF17B046D48248_METHOD_1_AA169839CB93802A_OFFSET))();
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_98AF17B046D48248_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_8B0F5C62B0444070(::Foundation::AssetPath a1)
	{
		return ((::System::Boolean(*)(::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_1_98AF17B046D48248_METHOD_1_8B0F5C62B0444070_OFFSET))(a1);
	}
};
