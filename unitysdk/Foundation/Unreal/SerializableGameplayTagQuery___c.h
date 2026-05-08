#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define FOUNDATION_UNREAL_SERIALIZABLEGAMEPLAYTAGQUERY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C0A3FE0)
#define FOUNDATION_UNREAL_SERIALIZABLEGAMEPLAYTAGQUERY___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0A4020)
#define FOUNDATION_UNREAL_SERIALIZABLEGAMEPLAYTAGQUERY___C__DESERIALIZE_B__8_0_OFFSET UNITYSDK_OFFSET(0x1C0A4030)
#define FOUNDATION_UNREAL_SERIALIZABLEGAMEPLAYTAGQUERY___C__SERIALIZE_B__9_0_OFFSET UNITYSDK_OFFSET(0x1C0A4210)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int SerializableGameplayTagQuery___c_TypeDefinitionIndex = 8779;

	class SerializableGameplayTagQuery___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::String*, ::Foundation::Unreal::FGameplayTag>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::System::String*, ::Foundation::Unreal::FGameplayTag>**)Il2CppClass::FromTypeDefinitionIndex(SerializableGameplayTagQuery___c_TypeDefinitionIndex)->GetStaticField(0x7F00);
		}
		static ::Foundation::Unreal::SerializableGameplayTagQuery___c** StaticGet___9()
		{
			return (::Foundation::Unreal::SerializableGameplayTagQuery___c**)Il2CppClass::FromTypeDefinitionIndex(SerializableGameplayTagQuery___c_TypeDefinitionIndex)->GetStaticField(0x7F08);
		}
		static ::System::Func_2<::Foundation::Unreal::FGameplayTag, ::System::String*>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::Foundation::Unreal::FGameplayTag, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SerializableGameplayTagQuery___c_TypeDefinitionIndex)->GetStaticField(0x7F10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_SERIALIZABLEGAMEPLAYTAGQUERY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_SERIALIZABLEGAMEPLAYTAGQUERY___C__CTOR_OFFSET))(this);
		}

		::Foundation::Unreal::FGameplayTag _Deserialize_b__8_0(::System::String* item)
		{
			return ((::Foundation::Unreal::FGameplayTag(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_SERIALIZABLEGAMEPLAYTAGQUERY___C__DESERIALIZE_B__8_0_OFFSET))(this, item);
		}

		::System::String* _Serialize_b__9_0(::Foundation::Unreal::FGameplayTag item)
		{
			return ((::System::String*(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_SERIALIZABLEGAMEPLAYTAGQUERY___C__SERIALIZE_B__9_0_OFFSET))(this, item);
		}
	};
}
