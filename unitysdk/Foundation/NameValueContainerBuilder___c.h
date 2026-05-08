#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

#define FOUNDATION_NAMEVALUECONTAINERBUILDER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B381BA0)
#define FOUNDATION_NAMEVALUECONTAINERBUILDER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B381BE0)
#define FOUNDATION_NAMEVALUECONTAINERBUILDER___C___CCTOR_B__12_0_OFFSET UNITYSDK_OFFSET(0x1B381BF0)

namespace Foundation
{
	inline static constexpr unsigned int NameValueContainerBuilder___c_TypeDefinitionIndex = 9194;

	class NameValueContainerBuilder___c : public ::System::Object
	{
	public:
		static ::Foundation::NameValueContainerBuilder___c** StaticGet___9()
		{
			return (::Foundation::NameValueContainerBuilder___c**)Il2CppClass::FromTypeDefinitionIndex(NameValueContainerBuilder___c_TypeDefinitionIndex)->GetStaticField(0x7D10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_NAMEVALUECONTAINERBUILDER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_NAMEVALUECONTAINERBUILDER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __cctor_b__12_0(::System::ValueTuple_2<::Foundation::Unreal::FName, ::System::Int32> a, ::System::ValueTuple_2<::Foundation::Unreal::FName, ::System::Int32> b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::Foundation::Unreal::FName, ::System::Int32>, ::System::ValueTuple_2<::Foundation::Unreal::FName, ::System::Int32>))((::PBYTE)hIl2Cpp + FOUNDATION_NAMEVALUECONTAINERBUILDER___C___CCTOR_B__12_0_OFFSET))(this, a, b);
		}
	};
}
