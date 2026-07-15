#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/Struct_2_64F26B9ED0181D80__PropertyRawValues_e__FixedBuffer.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }

#define STRUCT_2_64F26B9ED0181D80_METHOD_2_6676B536AB0BDA5B_OFFSET UNITYSDK_OFFSET(0x3900870)
#define STRUCT_2_64F26B9ED0181D80_METHOD_2_8F658EF3CF4B7FEE_OFFSET UNITYSDK_OFFSET(0x39008C0)
#define STRUCT_2_64F26B9ED0181D80__CCTOR_OFFSET UNITYSDK_OFFSET(0x16492670)

inline static constexpr unsigned int Struct_2_64F26B9ED0181D80_TypeDefinitionIndex = 56372;

struct alignas(8) Struct_2_64F26B9ED0181D80
{
	static ::Il2CppArray<::RPG::GameCore::AbilityProperty>** StaticGet_Field_2_0()
	{
		return (::Il2CppArray<::RPG::GameCore::AbilityProperty>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_64F26B9ED0181D80_TypeDefinitionIndex)->GetStaticField(0x2D030);
	}
	// static const ::System::Int32 Field_2_1 = 0x1B; // 0x0
	::System::UInt32 Field_2_2; // 0x10
	::Struct_2_64F26B9ED0181D80__PropertyRawValues_e__FixedBuffer Field_2_3; // 0x18

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_64F26B9ED0181D80__CCTOR_OFFSET))();
	}

	::System::Boolean Method_2_6676B536AB0BDA5B(::Struct_2_64F26B9ED0181D80 a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_64F26B9ED0181D80, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + STRUCT_2_64F26B9ED0181D80_METHOD_2_6676B536AB0BDA5B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8F658EF3CF4B7FEE(::System::Text::StringBuilder* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + STRUCT_2_64F26B9ED0181D80_METHOD_2_8F658EF3CF4B7FEE_OFFSET))(this, a1);
	}
};
