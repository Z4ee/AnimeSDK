#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/AlchemyChangeHeightRetCode.h"
#include "unitysdk/RPG/Client/Prop/AlchemyLogicType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class AlchemyItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5E3E46A3C620431A_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC4E0ED0)
#define CLASS_1_5E3E46A3C620431A_METHOD_1_2EC6024B9DB8E99C_OFFSET UNITYSDK_OFFSET(0xC4E14C0)
#define CLASS_1_5E3E46A3C620431A_METHOD_1_5ED2D28BC5C625BE_OFFSET UNITYSDK_OFFSET(0xC4E1100)
#define CLASS_1_5E3E46A3C620431A_METHOD_1_9C2E59F9B7157B63_OFFSET UNITYSDK_OFFSET(0xC4E0FA0)
#define CLASS_1_5E3E46A3C620431A_METHOD_1_CC318F9C4BCE7BEE_OFFSET UNITYSDK_OFFSET(0xC4E1330)
#define CLASS_1_5E3E46A3C620431A_METHOD_1_F6B522B422985D1A_OFFSET UNITYSDK_OFFSET(0xC4E1530)
#define CLASS_1_5E3E46A3C620431A__CTOR_OFFSET UNITYSDK_OFFSET(0xC4E0F20)

inline static constexpr unsigned int Class_1_5E3E46A3C620431A_TypeDefinitionIndex = 63656;

class Class_1_5E3E46A3C620431A : public ::System::Object
{
public:
	::Il2CppArray<::System::Int32>* Field_1_0; // 0x10
	::Il2CppArray<::RPG::Client::Prop::AlchemyLogicType>* Field_1_2; // 0x18
	::Il2CppArray<::System::Int32>* Field_1_1; // 0x20

	::System::Void _ctor(::System::Collections::Generic::List_1<::RPG::Client::Prop::AlchemyItem*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Prop::AlchemyItem*>*))((::PBYTE)hIl2Cpp + CLASS_1_5E3E46A3C620431A__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E3E46A3C620431A_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_9C2E59F9B7157B63(::System::Collections::Generic::List_1<::RPG::Client::Prop::AlchemyItem*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Prop::AlchemyItem*>*))((::PBYTE)hIl2Cpp + CLASS_1_5E3E46A3C620431A_METHOD_1_9C2E59F9B7157B63_OFFSET))(this, a1);
	}

	::RPG::Client::Prop::AlchemyChangeHeightRetCode Method_1_5ED2D28BC5C625BE(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::RPG::Client::Prop::AlchemyChangeHeightRetCode(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5E3E46A3C620431A_METHOD_1_5ED2D28BC5C625BE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CC318F9C4BCE7BEE(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5E3E46A3C620431A_METHOD_1_CC318F9C4BCE7BEE_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Prop::AlchemyLogicType Method_1_2EC6024B9DB8E99C(::System::Int32 a1)
	{
		return ((::RPG::Client::Prop::AlchemyLogicType(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5E3E46A3C620431A_METHOD_1_2EC6024B9DB8E99C_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_F6B522B422985D1A(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5E3E46A3C620431A_METHOD_1_F6B522B422985D1A_OFFSET))(this, a1);
	}
};
