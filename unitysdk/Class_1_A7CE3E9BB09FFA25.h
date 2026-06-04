#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1032;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyCollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_A7CE3E9BB09FFA25_METHOD_1_213DFA13EA6363F2_OFFSET UNITYSDK_OFFSET(0x143CBEE0)
#define CLASS_1_A7CE3E9BB09FFA25_METHOD_1_2E639497F90C0747_OFFSET UNITYSDK_OFFSET(0x143CC280)
#define CLASS_1_A7CE3E9BB09FFA25_METHOD_1_3E45BBA9371FFA98_OFFSET UNITYSDK_OFFSET(0x143CBA70)
#define CLASS_1_A7CE3E9BB09FFA25_METHOD_1_71702885F3BDFF89_OFFSET UNITYSDK_OFFSET(0x143CBE60)
#define CLASS_1_A7CE3E9BB09FFA25_METHOD_1_B8F643DBEA874C7F_OFFSET UNITYSDK_OFFSET(0x143CBF60)
#define CLASS_1_A7CE3E9BB09FFA25_METHOD_1_E386E74CB62ED920_OFFSET UNITYSDK_OFFSET(0x143CC0E0)
#define CLASS_1_A7CE3E9BB09FFA25__CCTOR_OFFSET UNITYSDK_OFFSET(0x143CC420)

inline static constexpr unsigned int Class_1_A7CE3E9BB09FFA25_TypeDefinitionIndex = 68345;

class Class_1_A7CE3E9BB09FFA25 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1032*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1032*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A7CE3E9BB09FFA25_TypeDefinitionIndex)->GetStaticField(0x35650);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A7CE3E9BB09FFA25__CCTOR_OFFSET))();
	}

	static ::System::Int32 Method_1_3E45BBA9371FFA98(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Int32(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_A7CE3E9BB09FFA25_METHOD_1_3E45BBA9371FFA98_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_71702885F3BDFF89(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Int32(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_A7CE3E9BB09FFA25_METHOD_1_71702885F3BDFF89_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_213DFA13EA6363F2(::UnityEngine::Transform* a1)
	{
		return ((::System::Int32(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_A7CE3E9BB09FFA25_METHOD_1_213DFA13EA6363F2_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_B8F643DBEA874C7F(::Class_0_16E4307DCC419505_1032* a1, ::Class_0_16E4307DCC419505_1032* a2)
	{
		return ((::System::Int32(*)(::Class_0_16E4307DCC419505_1032*, ::Class_0_16E4307DCC419505_1032*))((::PBYTE)hIl2Cpp + CLASS_1_A7CE3E9BB09FFA25_METHOD_1_B8F643DBEA874C7F_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_E386E74CB62ED920(::UnityEngine::Transform* a1)
	{
		return ((::System::String*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_A7CE3E9BB09FFA25_METHOD_1_E386E74CB62ED920_OFFSET))(a1);
	}

	static ::System::String* Method_1_2E639497F90C0747(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::String*(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_A7CE3E9BB09FFA25_METHOD_1_2E639497F90C0747_OFFSET))(a1, a2);
	}
};
