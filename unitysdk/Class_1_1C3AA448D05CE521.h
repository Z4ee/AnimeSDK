#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1C3AA448D05CE521_Struct_2_E8E0049CCB14110C.h"
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

#define CLASS_1_1C3AA448D05CE521_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16376910)
#define CLASS_1_1C3AA448D05CE521_METHOD_1_01B0966926B881C1_OFFSET UNITYSDK_OFFSET(0x16377FE0)
#define CLASS_1_1C3AA448D05CE521_METHOD_1_2233617A6194F273_OFFSET UNITYSDK_OFFSET(0x16377320)
#define CLASS_1_1C3AA448D05CE521_METHOD_1_58C0901B5D9A901A_OFFSET UNITYSDK_OFFSET(0x16378500)
#define CLASS_1_1C3AA448D05CE521_METHOD_1_601EF3E7226D7DC2_OFFSET UNITYSDK_OFFSET(0x16376A20)
#define CLASS_1_1C3AA448D05CE521_METHOD_1_6D5CE6C159654536_OFFSET UNITYSDK_OFFSET(0x16377E80)
#define CLASS_1_1C3AA448D05CE521_METHOD_1_7CA5AC2F0885F9B0_OFFSET UNITYSDK_OFFSET(0x16377CB0)
#define CLASS_1_1C3AA448D05CE521_METHOD_1_83E7666638E2D7C4_OFFSET UNITYSDK_OFFSET(0x16377600)
#define CLASS_1_1C3AA448D05CE521_METHOD_1_890C34426828DB0A_OFFSET UNITYSDK_OFFSET(0x16376B80)
#define CLASS_1_1C3AA448D05CE521_METHOD_1_EC2FF9133A4B694F_OFFSET UNITYSDK_OFFSET(0x163774C0)
#define CLASS_1_1C3AA448D05CE521__CTOR_OFFSET UNITYSDK_OFFSET(0x16376870)

inline static constexpr unsigned int Class_1_1C3AA448D05CE521_TypeDefinitionIndex = 53382;

class Class_1_1C3AA448D05CE521 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_1_1C3AA448D05CE521_Struct_2_E8E0049CCB14110C>*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_31530FC809C9EE2A*>* Field_1_1; // 0x18
	::System::UInt64 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C3AA448D05CE521__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C3AA448D05CE521_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_601EF3E7226D7DC2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C3AA448D05CE521_METHOD_1_601EF3E7226D7DC2_OFFSET))(this);
	}

	::System::Void Method_1_890C34426828DB0A(::System::String* a1, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>* a2, ::RPG::GameCore::TaskContext* a3, ::Class_1_38A5D85D4AE9F24D* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>*, ::RPG::GameCore::TaskContext*, ::Class_1_38A5D85D4AE9F24D*))((::PBYTE)hIl2Cpp + CLASS_1_1C3AA448D05CE521_METHOD_1_890C34426828DB0A_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_83E7666638E2D7C4(::Class_1_38A5D85D4AE9F24D* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_38A5D85D4AE9F24D*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1C3AA448D05CE521_METHOD_1_83E7666638E2D7C4_OFFSET))(this, a1, a2);
	}

	::System::Func_2<::System::String*, ::System::String*>* Method_1_2233617A6194F273(::System::String* a1, ::Il2CppArray<::RPG::GameCore::AnimGroupEventEntry*>* a2)
	{
		return ((::System::Func_2<::System::String*, ::System::String*>*(*)(::PVOID, ::System::String*, ::Il2CppArray<::RPG::GameCore::AnimGroupEventEntry*>*))((::PBYTE)hIl2Cpp + CLASS_1_1C3AA448D05CE521_METHOD_1_2233617A6194F273_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7CA5AC2F0885F9B0(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1C3AA448D05CE521_METHOD_1_7CA5AC2F0885F9B0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_01B0966926B881C1(::System::Boolean a1, ::System::Boolean a2, ::System::Single a3, ::System::Int32 a4, ::RPG::GameCore::AnimGroupTransitState a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::Int32, ::RPG::GameCore::AnimGroupTransitState))((::PBYTE)hIl2Cpp + CLASS_1_1C3AA448D05CE521_METHOD_1_01B0966926B881C1_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Collections::Generic::List_1<::Class_1_1C3AA448D05CE521_Struct_2_E8E0049CCB14110C>* Method_1_58C0901B5D9A901A(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_1C3AA448D05CE521_Struct_2_E8E0049CCB14110C>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1C3AA448D05CE521_METHOD_1_58C0901B5D9A901A_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_1C3AA448D05CE521_Struct_2_E8E0049CCB14110C>* Method_1_EC2FF9133A4B694F(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_1C3AA448D05CE521_Struct_2_E8E0049CCB14110C>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1C3AA448D05CE521_METHOD_1_EC2FF9133A4B694F_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_6D5CE6C159654536(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::UInt64(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1C3AA448D05CE521_METHOD_1_6D5CE6C159654536_OFFSET))(this, a1, a2);
	}
};
