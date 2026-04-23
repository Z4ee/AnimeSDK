#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_39BEC054B54B7956_Struct_2_E8E0049CCB14110C.h"
#include "unitysdk/RPG/GameCore/AnimGroupTransitState.h"
#include "unitysdk/System/Object.h"

class Class_1_31530FC809C9EE2A;
class Class_1_38A5D85D4AE9F24D;
namespace RPG::GameCore { class AnimGroupEventConfig; }
namespace RPG::GameCore { class AnimGroupEventEntry; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_39BEC054B54B7956_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA2C99C0)
#define CLASS_1_39BEC054B54B7956_METHOD_1_0EBF3CBF3E627A1D_OFFSET UNITYSDK_OFFSET(0xA2CAFA0)
#define CLASS_1_39BEC054B54B7956_METHOD_1_2233617A6194F273_OFFSET UNITYSDK_OFFSET(0xA2CA3E0)
#define CLASS_1_39BEC054B54B7956_METHOD_1_348F8D9CAE475B91_OFFSET UNITYSDK_OFFSET(0xA2CADF0)
#define CLASS_1_39BEC054B54B7956_METHOD_1_3738AF634C79FDF5_OFFSET UNITYSDK_OFFSET(0xA2CB650)
#define CLASS_1_39BEC054B54B7956_METHOD_1_477AB4AE9C751CBD_OFFSET UNITYSDK_OFFSET(0xA2CA6F0)
#define CLASS_1_39BEC054B54B7956_METHOD_1_83577ADE9FF822E9_OFFSET UNITYSDK_OFFSET(0xA2C9C70)
#define CLASS_1_39BEC054B54B7956_METHOD_1_92C369837D95C392_OFFSET UNITYSDK_OFFSET(0xA2CB100)
#define CLASS_1_39BEC054B54B7956_METHOD_1_CEE7B7EE4DB902A8_OFFSET UNITYSDK_OFFSET(0xA2CA570)
#define CLASS_1_39BEC054B54B7956_METHOD_1_F79D5EC57FBF426E_OFFSET UNITYSDK_OFFSET(0xA2C9B60)
#define CLASS_1_39BEC054B54B7956__CTOR_OFFSET UNITYSDK_OFFSET(0xA2C9920)

inline static constexpr unsigned int Class_1_39BEC054B54B7956_TypeDefinitionIndex = 51561;

class Class_1_39BEC054B54B7956 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_1_39BEC054B54B7956_Struct_2_E8E0049CCB14110C>*>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_1_31530FC809C9EE2A*>* Field_1_0; // 0x18
	::System::UInt64 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_39BEC054B54B7956__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_39BEC054B54B7956_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_F79D5EC57FBF426E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_39BEC054B54B7956_METHOD_1_F79D5EC57FBF426E_OFFSET))(this);
	}

	::System::Void Method_1_83577ADE9FF822E9(::System::String* a1, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>* a2, ::RPG::GameCore::TaskContext* a3, ::Class_1_38A5D85D4AE9F24D* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>*, ::RPG::GameCore::TaskContext*, ::Class_1_38A5D85D4AE9F24D*))((::PBYTE)hIl2Cpp + CLASS_1_39BEC054B54B7956_METHOD_1_83577ADE9FF822E9_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_477AB4AE9C751CBD(::Class_1_38A5D85D4AE9F24D* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_38A5D85D4AE9F24D*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_39BEC054B54B7956_METHOD_1_477AB4AE9C751CBD_OFFSET))(this, a1, a2);
	}

	::System::Func_2<::System::String*, ::System::String*>* Method_1_2233617A6194F273(::System::String* a1, ::Il2CppArray<::RPG::GameCore::AnimGroupEventEntry*>* a2)
	{
		return ((::System::Func_2<::System::String*, ::System::String*>*(*)(::PVOID, ::System::String*, ::Il2CppArray<::RPG::GameCore::AnimGroupEventEntry*>*))((::PBYTE)hIl2Cpp + CLASS_1_39BEC054B54B7956_METHOD_1_2233617A6194F273_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_348F8D9CAE475B91(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_39BEC054B54B7956_METHOD_1_348F8D9CAE475B91_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_92C369837D95C392(::System::Boolean a1, ::System::Boolean a2, ::System::Single a3, ::System::Int32 a4, ::RPG::GameCore::AnimGroupTransitState a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::Int32, ::RPG::GameCore::AnimGroupTransitState))((::PBYTE)hIl2Cpp + CLASS_1_39BEC054B54B7956_METHOD_1_92C369837D95C392_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Collections::Generic::List_1<::Class_1_39BEC054B54B7956_Struct_2_E8E0049CCB14110C>* Method_1_3738AF634C79FDF5(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_39BEC054B54B7956_Struct_2_E8E0049CCB14110C>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_39BEC054B54B7956_METHOD_1_3738AF634C79FDF5_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_39BEC054B54B7956_Struct_2_E8E0049CCB14110C>* Method_1_CEE7B7EE4DB902A8(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_39BEC054B54B7956_Struct_2_E8E0049CCB14110C>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_39BEC054B54B7956_METHOD_1_CEE7B7EE4DB902A8_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_0EBF3CBF3E627A1D(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::UInt64(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_39BEC054B54B7956_METHOD_1_0EBF3CBF3E627A1D_OFFSET))(this, a1, a2);
	}
};
