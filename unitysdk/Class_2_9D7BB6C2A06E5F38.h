#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_190.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_43BD383C98B4C0C5_191;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_9D7BB6C2A06E5F38_GET_REPEATCOUNT_OFFSET UNITYSDK_OFFSET(0xAF63A20)
#define CLASS_2_9D7BB6C2A06E5F38_METHOD_2_390623AF74E8C979_OFFSET UNITYSDK_OFFSET(0xAF63A40)
#define CLASS_2_9D7BB6C2A06E5F38_METHOD_2_7F4BE116F51C65C8_OFFSET UNITYSDK_OFFSET(0xAF63D10)
#define CLASS_2_9D7BB6C2A06E5F38_SET_REPEATCOUNT_OFFSET UNITYSDK_OFFSET(0xAF63A30)
#define CLASS_2_9D7BB6C2A06E5F38__CTOR_OFFSET UNITYSDK_OFFSET(0xAF63F90)

inline static constexpr unsigned int Class_2_9D7BB6C2A06E5F38_TypeDefinitionIndex = 72137;

class Class_2_9D7BB6C2A06E5F38 : public ::Class_1_43BD383C98B4C0C5_190
{
public:
	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_191*>* Field_2_0; // 0x10
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_191*>*>* Field_2_1; // 0x18
	::System::Nullable_1<::System::Int32> _RepeatCount_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D7BB6C2A06E5F38__CTOR_OFFSET))(this);
	}

	::System::Nullable_1<::System::Int32> get_RepeatCount()
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D7BB6C2A06E5F38_GET_REPEATCOUNT_OFFSET))(this);
	}

	::System::Void set_RepeatCount(::System::Nullable_1<::System::Int32> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_2_9D7BB6C2A06E5F38_SET_REPEATCOUNT_OFFSET))(this, a1);
	}

	::System::Void Method_2_390623AF74E8C979(::Class_1_43BD383C98B4C0C5_191* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_191*))((::PBYTE)hIl2Cpp + CLASS_2_9D7BB6C2A06E5F38_METHOD_2_390623AF74E8C979_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Int32>* Method_2_7F4BE116F51C65C8(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>*))((::PBYTE)hIl2Cpp + CLASS_2_9D7BB6C2A06E5F38_METHOD_2_7F4BE116F51C65C8_OFFSET))(this, a1);
	}
};
