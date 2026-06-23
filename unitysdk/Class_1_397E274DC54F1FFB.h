#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A6B26016D9623887;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Renderer; }

#define CLASS_1_397E274DC54F1FFB_METHOD_1_4C7E22ECF559A04C_OFFSET UNITYSDK_OFFSET(0x10D9CCE0)
#define CLASS_1_397E274DC54F1FFB_METHOD_1_AA2378C4CD6F8D6B_OFFSET UNITYSDK_OFFSET(0x10D9D2B0)
#define CLASS_1_397E274DC54F1FFB_METHOD_1_B24AE07EF24AF37D_OFFSET UNITYSDK_OFFSET(0x10D9CF40)
#define CLASS_1_397E274DC54F1FFB_METHOD_1_DA908C199E372FD6_OFFSET UNITYSDK_OFFSET(0x10D9D590)
#define CLASS_1_397E274DC54F1FFB__CCTOR_OFFSET UNITYSDK_OFFSET(0x10D9CC40)
#define CLASS_1_397E274DC54F1FFB__CTOR_OFFSET UNITYSDK_OFFSET(0x10D9CC30)

inline static constexpr unsigned int Class_1_397E274DC54F1FFB_TypeDefinitionIndex = 86605;

class Class_1_397E274DC54F1FFB : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::Class_1_A6B26016D9623887*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::Class_1_A6B26016D9623887*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_397E274DC54F1FFB_TypeDefinitionIndex)->GetStaticField(0x31AC0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_397E274DC54F1FFB__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_397E274DC54F1FFB__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_4C7E22ECF559A04C(::UnityEngine::Renderer* a1)
	{
		return ((::System::Void(*)(::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_1_397E274DC54F1FFB_METHOD_1_4C7E22ECF559A04C_OFFSET))(a1);
	}

	static ::System::Void Method_1_B24AE07EF24AF37D(::UnityEngine::Renderer* a1)
	{
		return ((::System::Void(*)(::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_1_397E274DC54F1FFB_METHOD_1_B24AE07EF24AF37D_OFFSET))(a1);
	}

	static ::System::Void Method_1_AA2378C4CD6F8D6B(::Il2CppArray<::UnityEngine::Renderer*>* a1)
	{
		return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + CLASS_1_397E274DC54F1FFB_METHOD_1_AA2378C4CD6F8D6B_OFFSET))(a1);
	}

	static ::System::Void Method_1_DA908C199E372FD6(::Il2CppArray<::UnityEngine::Renderer*>* a1)
	{
		return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + CLASS_1_397E274DC54F1FFB_METHOD_1_DA908C199E372FD6_OFFSET))(a1);
	}
};
