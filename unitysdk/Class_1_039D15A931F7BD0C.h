#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_B80DB3B3997F600B;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_039D15A931F7BD0C_METHOD_1_1F86D36F19DCBA06_OFFSET UNITYSDK_OFFSET(0x159A9AD0)
#define CLASS_1_039D15A931F7BD0C_METHOD_1_3B119FE486105FA9_OFFSET UNITYSDK_OFFSET(0x159A9BC0)
#define CLASS_1_039D15A931F7BD0C_METHOD_1_739DB9F245C7FAD0_OFFSET UNITYSDK_OFFSET(0x159A9DA0)
#define CLASS_1_039D15A931F7BD0C_METHOD_1_881E0F810E4F1BC1_OFFSET UNITYSDK_OFFSET(0x159A9910)
#define CLASS_1_039D15A931F7BD0C_METHOD_1_F7FE3CE45927D370_OFFSET UNITYSDK_OFFSET(0x159A99C0)

inline static constexpr unsigned int Class_1_039D15A931F7BD0C_TypeDefinitionIndex = 53401;

class Class_1_039D15A931F7BD0C : public ::System::Object
{
public:
	static ::Class_1_B80DB3B3997F600B** StaticGet_Field_1_1()
	{
		return (::Class_1_B80DB3B3997F600B**)Il2CppClass::FromTypeDefinitionIndex(Class_1_039D15A931F7BD0C_TypeDefinitionIndex)->GetStaticField(0x4A130);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::AssetPath>** StaticGet_Field_1_7()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_039D15A931F7BD0C_TypeDefinitionIndex)->GetStaticField(0x4A138);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_039D15A931F7BD0C_TypeDefinitionIndex)->GetStaticField(0x4A140);
	}
	// static const ::System::String* Field_1_3; // 0x0
	// static const ::System::String* Field_1_2; // 0x0

	static ::System::Boolean Method_1_881E0F810E4F1BC1(::System::Int32 a1, ::Foundation::AssetPath& a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::Foundation::AssetPath&))((::PBYTE)hIl2Cpp + CLASS_1_039D15A931F7BD0C_METHOD_1_881E0F810E4F1BC1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F7FE3CE45927D370(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::Int32>*& a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_1_039D15A931F7BD0C_METHOD_1_F7FE3CE45927D370_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1F86D36F19DCBA06(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_039D15A931F7BD0C_METHOD_1_1F86D36F19DCBA06_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_3B119FE486105FA9(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_039D15A931F7BD0C_METHOD_1_3B119FE486105FA9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_739DB9F245C7FAD0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_039D15A931F7BD0C_METHOD_1_739DB9F245C7FAD0_OFFSET))();
	}
};
