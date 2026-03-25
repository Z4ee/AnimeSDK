#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TickListType.h"
#include "unitysdk/System/Object.h"

class Class_1_9D4A5BEC01D9A1EC;
class Class_1_A6BCD2E5D9DCE6F4;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_586E2623305AFAA4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x109437B0)
#define CLASS_1_586E2623305AFAA4_METHOD_1_468F8D9FB111C7D8_OFFSET UNITYSDK_OFFSET(0x10943550)
#define CLASS_1_586E2623305AFAA4_METHOD_1_57AAD589C509DAE5_OFFSET UNITYSDK_OFFSET(0x10942EA0)
#define CLASS_1_586E2623305AFAA4_METHOD_1_71E2450F7D92B7D8_OFFSET UNITYSDK_OFFSET(0x109434D0)
#define CLASS_1_586E2623305AFAA4_METHOD_1_7D5A1113A0454294_OFFSET UNITYSDK_OFFSET(0x10943450)
#define CLASS_1_586E2623305AFAA4_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x109437A0)
#define CLASS_1_586E2623305AFAA4_METHOD_1_D07E5566DF78A613_OFFSET UNITYSDK_OFFSET(0x10943300)
#define CLASS_1_586E2623305AFAA4_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x109436E0)
#define CLASS_1_586E2623305AFAA4_METHOD_1_F7A65DF12D5A66F0_OFFSET UNITYSDK_OFFSET(0x10943660)
#define CLASS_1_586E2623305AFAA4__CTOR_OFFSET UNITYSDK_OFFSET(0x10942CA0)

inline static constexpr unsigned int Class_1_586E2623305AFAA4_TypeDefinitionIndex = 57411;

class Class_1_586E2623305AFAA4 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_0; // 0x10
	::Il2CppArray<::System::Int32>* Field_1_1; // 0x18
	::Il2CppArray<::System::Int32>* Field_1_4; // 0x20
	::Il2CppArray<::Class_1_9D4A5BEC01D9A1EC*>* Field_1_3; // 0x28
	::System::Int32 Field_1_2; // 0x30
	::System::Int32 Field_1_5; // 0x34

	::System::Void _ctor(::System::Int32 a1, ::Il2CppArray<::System::Int32>* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_586E2623305AFAA4__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_57AAD589C509DAE5(::Class_1_A6BCD2E5D9DCE6F4* a1, ::RPG::Client::TickListType a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A6BCD2E5D9DCE6F4*, ::RPG::Client::TickListType))((::PBYTE)hIl2Cpp + CLASS_1_586E2623305AFAA4_METHOD_1_57AAD589C509DAE5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D07E5566DF78A613(::Class_1_A6BCD2E5D9DCE6F4* a1, ::RPG::Client::TickListType a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A6BCD2E5D9DCE6F4*, ::RPG::Client::TickListType))((::PBYTE)hIl2Cpp + CLASS_1_586E2623305AFAA4_METHOD_1_D07E5566DF78A613_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7D5A1113A0454294(::Class_1_A6BCD2E5D9DCE6F4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A6BCD2E5D9DCE6F4*))((::PBYTE)hIl2Cpp + CLASS_1_586E2623305AFAA4_METHOD_1_7D5A1113A0454294_OFFSET))(this, a1);
	}

	::System::Void Method_1_71E2450F7D92B7D8(::Class_1_A6BCD2E5D9DCE6F4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A6BCD2E5D9DCE6F4*))((::PBYTE)hIl2Cpp + CLASS_1_586E2623305AFAA4_METHOD_1_71E2450F7D92B7D8_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_468F8D9FB111C7D8(::System::Int32 a1, ::RPG::Client::TickListType a2)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32, ::RPG::Client::TickListType))((::PBYTE)hIl2Cpp + CLASS_1_586E2623305AFAA4_METHOD_1_468F8D9FB111C7D8_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_F7A65DF12D5A66F0(::RPG::Client::TickListType a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::Client::TickListType))((::PBYTE)hIl2Cpp + CLASS_1_586E2623305AFAA4_METHOD_1_F7A65DF12D5A66F0_OFFSET))(this, a1);
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_586E2623305AFAA4_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_586E2623305AFAA4_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_586E2623305AFAA4_DISPOSE_OFFSET))(this);
	}
};
