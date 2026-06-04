#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/AlchemyChangeHeightRetCode.h"
#include "unitysdk/RPG/Client/Prop/AlchemyLogicType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class AlchemyItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9E209684D69E6FCD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14589290)
#define CLASS_1_9E209684D69E6FCD_METHOD_1_2EC6024B9DB8E99C_OFFSET UNITYSDK_OFFSET(0x145896D0)
#define CLASS_1_9E209684D69E6FCD_METHOD_1_68EEA14805A29388_OFFSET UNITYSDK_OFFSET(0x14589360)
#define CLASS_1_9E209684D69E6FCD_METHOD_1_BFAF7EF20619AC12_OFFSET UNITYSDK_OFFSET(0x14589480)
#define CLASS_1_9E209684D69E6FCD_METHOD_1_CC318F9C4BCE7BEE_OFFSET UNITYSDK_OFFSET(0x145895A0)
#define CLASS_1_9E209684D69E6FCD_METHOD_1_F6B522B422985D1A_OFFSET UNITYSDK_OFFSET(0x14589740)
#define CLASS_1_9E209684D69E6FCD__CTOR_OFFSET UNITYSDK_OFFSET(0x145892E0)

inline static constexpr unsigned int Class_1_9E209684D69E6FCD_TypeDefinitionIndex = 72724;

class Class_1_9E209684D69E6FCD : public ::System::Object
{
public:
	::Il2CppArray<::System::Int32>* Field_1_0; // 0x10
	::Il2CppArray<::System::Int32>* Field_1_1; // 0x18
	::Il2CppArray<::RPG::Client::Prop::AlchemyLogicType>* Field_1_2; // 0x20

	::System::Void _ctor(::System::Collections::Generic::List_1<::RPG::Client::Prop::AlchemyItem*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Prop::AlchemyItem*>*))((::PBYTE)hIl2Cpp + CLASS_1_9E209684D69E6FCD__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E209684D69E6FCD_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_68EEA14805A29388(::System::Collections::Generic::List_1<::RPG::Client::Prop::AlchemyItem*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Prop::AlchemyItem*>*))((::PBYTE)hIl2Cpp + CLASS_1_9E209684D69E6FCD_METHOD_1_68EEA14805A29388_OFFSET))(this, a1);
	}

	::RPG::Client::Prop::AlchemyChangeHeightRetCode Method_1_BFAF7EF20619AC12(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::RPG::Client::Prop::AlchemyChangeHeightRetCode(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9E209684D69E6FCD_METHOD_1_BFAF7EF20619AC12_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CC318F9C4BCE7BEE(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9E209684D69E6FCD_METHOD_1_CC318F9C4BCE7BEE_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Prop::AlchemyLogicType Method_1_2EC6024B9DB8E99C(::System::Int32 a1)
	{
		return ((::RPG::Client::Prop::AlchemyLogicType(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9E209684D69E6FCD_METHOD_1_2EC6024B9DB8E99C_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_F6B522B422985D1A(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9E209684D69E6FCD_METHOD_1_F6B522B422985D1A_OFFSET))(this, a1);
	}
};
