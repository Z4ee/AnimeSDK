#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Predicate_1; }

#define FOUNDATION_UNREAL_FNAME___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BA63F40)
#define FOUNDATION_UNREAL_FNAME___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA63F80)
#define FOUNDATION_UNREAL_FNAME___C__SPLIT_B__5_0_OFFSET UNITYSDK_OFFSET(0x1BA63F90)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int FName___c_TypeDefinitionIndex = 8848;

	class FName___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::System::Char>** StaticGet___9__5_0()
		{
			return (::System::Predicate_1<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(FName___c_TypeDefinitionIndex)->GetStaticField(0x7DF0);
		}
		static ::Foundation::Unreal::FName___c** StaticGet___9()
		{
			return (::Foundation::Unreal::FName___c**)Il2CppClass::FromTypeDefinitionIndex(FName___c_TypeDefinitionIndex)->GetStaticField(0x7DF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAME___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAME___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _Split_b__5_0(::System::Char item)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAME___C__SPLIT_B__5_0_OFFSET))(this, item);
		}
	};
}
