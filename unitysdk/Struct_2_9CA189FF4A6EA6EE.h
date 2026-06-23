#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_51C724C3FB60D55B.h"
#include "unitysdk/Enum_3_82D6BDE5D533D34E.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_9CA189FF4A6EA6EE__CCTOR_OFFSET UNITYSDK_OFFSET(0x14412510)
#define STRUCT_2_9CA189FF4A6EA6EE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x7D4230)
#define STRUCT_2_9CA189FF4A6EA6EE__CTOR_OFFSET UNITYSDK_OFFSET(0x7D4210)

inline static constexpr unsigned int Struct_2_9CA189FF4A6EA6EE_TypeDefinitionIndex = 70499;

struct alignas(4) Struct_2_9CA189FF4A6EA6EE
{
	static ::Struct_2_9CA189FF4A6EA6EE* StaticGet_Field_2_4()
	{
		return (::Struct_2_9CA189FF4A6EA6EE*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_9CA189FF4A6EA6EE_TypeDefinitionIndex)->GetStaticField(0x9FE0);
	}
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::Enum_3_82D6BDE5D533D34E Field_2_2; // 0x18
	::System::Nullable_1<::Enum_3_51C724C3FB60D55B> Field_2_3; // 0x1C

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::Enum_3_82D6BDE5D533D34E a3, ::System::Nullable_1<::Enum_3_51C724C3FB60D55B> a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Enum_3_82D6BDE5D533D34E, ::System::Nullable_1<::Enum_3_51C724C3FB60D55B>))((::PBYTE)hIl2Cpp + STRUCT_2_9CA189FF4A6EA6EE__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _ctor_1(::Enum_3_82D6BDE5D533D34E a1, ::Enum_3_51C724C3FB60D55B a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_82D6BDE5D533D34E, ::Enum_3_51C724C3FB60D55B))((::PBYTE)hIl2Cpp + STRUCT_2_9CA189FF4A6EA6EE__CTOR_1_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_9CA189FF4A6EA6EE__CCTOR_OFFSET))();
	}
};
