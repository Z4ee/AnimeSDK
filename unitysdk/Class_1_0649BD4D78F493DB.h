#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class Class_2_785FDC7D0DA58280;
class Class_2_955DD92F46F6BCF9;
class Class_3_008B4741BE8E4B4F;
class Class_3_01B4CC30216C9ABE_1;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Texture2D; }

#define CLASS_1_0649BD4D78F493DB_METHOD_1_78892FE80287F0A0_OFFSET UNITYSDK_OFFSET(0x1E293980)
#define CLASS_1_0649BD4D78F493DB_METHOD_1_94F0243C9C08E3D5_OFFSET UNITYSDK_OFFSET(0x1E2938D0)
#define CLASS_1_0649BD4D78F493DB_METHOD_1_A0EFED1A72DC265A_OFFSET UNITYSDK_OFFSET(0x1E293DC0)
#define CLASS_1_0649BD4D78F493DB_METHOD_1_DBD8B0E073173E36_OFFSET UNITYSDK_OFFSET(0x1E294120)
#define CLASS_1_0649BD4D78F493DB_METHOD_1_EF7FBA37D093A545_OFFSET UNITYSDK_OFFSET(0x1E2940A0)
#define CLASS_1_0649BD4D78F493DB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2938C0)

inline static constexpr unsigned int Class_1_0649BD4D78F493DB_TypeDefinitionIndex = 89434;

class Class_1_0649BD4D78F493DB : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_1()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0649BD4D78F493DB_TypeDefinitionIndex)->GetStaticField(0x12B60);
	}
	// static const ::System::String* Field_1_0; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0649BD4D78F493DB__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_94F0243C9C08E3D5(::Class_3_008B4741BE8E4B4F* a1, ::Class_2_955DD92F46F6BCF9* a2, ::System::Action* a3, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::AssetRequestHandle>* a4)
	{
		return ((::System::Boolean(*)(::Class_3_008B4741BE8E4B4F*, ::Class_2_955DD92F46F6BCF9*, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + CLASS_1_0649BD4D78F493DB_METHOD_1_94F0243C9C08E3D5_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_78892FE80287F0A0(::Class_3_008B4741BE8E4B4F* a1, ::Class_2_955DD92F46F6BCF9* a2, ::System::Action* a3, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::AssetRequestHandle>* a4)
	{
		return ((::System::Boolean(*)(::Class_3_008B4741BE8E4B4F*, ::Class_2_955DD92F46F6BCF9*, ::System::Action*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + CLASS_1_0649BD4D78F493DB_METHOD_1_78892FE80287F0A0_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_3_01B4CC30216C9ABE_1* Method_1_EF7FBA37D093A545(::Class_2_785FDC7D0DA58280* a1)
	{
		return ((::Class_3_01B4CC30216C9ABE_1*(*)(::Class_2_785FDC7D0DA58280*))((::PBYTE)hIl2Cpp + CLASS_1_0649BD4D78F493DB_METHOD_1_EF7FBA37D093A545_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_DBD8B0E073173E36(::Class_2_785FDC7D0DA58280* a1)
	{
		return ((::System::UInt32(*)(::Class_2_785FDC7D0DA58280*))((::PBYTE)hIl2Cpp + CLASS_1_0649BD4D78F493DB_METHOD_1_DBD8B0E073173E36_OFFSET))(a1);
	}

	static ::UnityEngine::Texture2D* Method_1_A0EFED1A72DC265A(::System::Int32 a1, ::System::String* a2, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::AssetRequestHandle>* a3)
	{
		return ((::UnityEngine::Texture2D*(*)(::System::Int32, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + CLASS_1_0649BD4D78F493DB_METHOD_1_A0EFED1A72DC265A_OFFSET))(a1, a2, a3);
	}
};
