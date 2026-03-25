#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_866;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyCollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_A7CE3E9BB09FFA25_METHOD_1_213DFA13EA6363F2_OFFSET UNITYSDK_OFFSET(0x10CE0DD0)
#define CLASS_1_A7CE3E9BB09FFA25_METHOD_1_2E639497F90C0747_OFFSET UNITYSDK_OFFSET(0x10CE1150)
#define CLASS_1_A7CE3E9BB09FFA25_METHOD_1_3E45BBA9371FFA98_OFFSET UNITYSDK_OFFSET(0x10CE0800)
#define CLASS_1_A7CE3E9BB09FFA25_METHOD_1_71702885F3BDFF89_OFFSET UNITYSDK_OFFSET(0x10CE0D50)
#define CLASS_1_A7CE3E9BB09FFA25_METHOD_1_B8F643DBEA874C7F_OFFSET UNITYSDK_OFFSET(0x10CE0E50)
#define CLASS_1_A7CE3E9BB09FFA25_METHOD_1_E195E24201C0F1C5_OFFSET UNITYSDK_OFFSET(0x10CE0FD0)
#define CLASS_1_A7CE3E9BB09FFA25__CCTOR_OFFSET UNITYSDK_OFFSET(0x10CE1300)

inline static constexpr unsigned int Class_1_A7CE3E9BB09FFA25_TypeDefinitionIndex = 59995;

class Class_1_A7CE3E9BB09FFA25 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_866*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_866*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A7CE3E9BB09FFA25_TypeDefinitionIndex)->GetStaticField(0x48EC0);
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

	static ::System::Int32 Method_1_B8F643DBEA874C7F(::Class_0_16E4307DCC419505_866* a1, ::Class_0_16E4307DCC419505_866* a2)
	{
		return ((::System::Int32(*)(::Class_0_16E4307DCC419505_866*, ::Class_0_16E4307DCC419505_866*))((::PBYTE)hIl2Cpp + CLASS_1_A7CE3E9BB09FFA25_METHOD_1_B8F643DBEA874C7F_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_E195E24201C0F1C5(::UnityEngine::Transform* a1)
	{
		return ((::System::String*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_A7CE3E9BB09FFA25_METHOD_1_E195E24201C0F1C5_OFFSET))(a1);
	}

	static ::System::String* Method_1_2E639497F90C0747(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::String*(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_A7CE3E9BB09FFA25_METHOD_1_2E639497F90C0747_OFFSET))(a1, a2);
	}
};
