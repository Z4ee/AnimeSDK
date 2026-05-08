#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorAirHitType.h"
#include "unitysdk/MoleMole/Config/AnimatorGroundHitType.h"
#include "unitysdk/MoleMole/Config/AnimatorHitEffect.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_2641A7E1296F497F_METHOD_1_6D9AE4F023B60CB9_OFFSET UNITYSDK_OFFSET(0x123EC7F0)
#define CLASS_1_2641A7E1296F497F_METHOD_1_852DAECA64FA91DA_OFFSET UNITYSDK_OFFSET(0x123EC480)
#define CLASS_1_2641A7E1296F497F_METHOD_1_8E412F0B10AC31E0_OFFSET UNITYSDK_OFFSET(0x123ECBB0)
#define CLASS_1_2641A7E1296F497F__CCTOR_OFFSET UNITYSDK_OFFSET(0x123EC470)

inline static constexpr unsigned int Class_1_2641A7E1296F497F_TypeDefinitionIndex = 49400;

class Class_1_2641A7E1296F497F : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2641A7E1296F497F_TypeDefinitionIndex)->GetStaticField(0x40070);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2641A7E1296F497F_TypeDefinitionIndex)->GetStaticField(0x40078);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2641A7E1296F497F_TypeDefinitionIndex)->GetStaticField(0x40080);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2641A7E1296F497F__CCTOR_OFFSET))();
	}

	static ::System::String* Method_1_852DAECA64FA91DA(::MoleMole::Config::AnimatorGroundHitType a1)
	{
		return ((::System::String*(*)(::MoleMole::Config::AnimatorGroundHitType))((::PBYTE)hIl2Cpp + CLASS_1_2641A7E1296F497F_METHOD_1_852DAECA64FA91DA_OFFSET))(a1);
	}

	static ::System::String* Method_1_6D9AE4F023B60CB9(::MoleMole::Config::AnimatorHitEffect a1)
	{
		return ((::System::String*(*)(::MoleMole::Config::AnimatorHitEffect))((::PBYTE)hIl2Cpp + CLASS_1_2641A7E1296F497F_METHOD_1_6D9AE4F023B60CB9_OFFSET))(a1);
	}

	static ::System::String* Method_1_8E412F0B10AC31E0(::MoleMole::Config::AnimatorAirHitType a1)
	{
		return ((::System::String*(*)(::MoleMole::Config::AnimatorAirHitType))((::PBYTE)hIl2Cpp + CLASS_1_2641A7E1296F497F_METHOD_1_8E412F0B10AC31E0_OFFSET))(a1);
	}
};
