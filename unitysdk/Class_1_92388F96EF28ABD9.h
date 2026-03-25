#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskState.h"
#include "unitysdk/System/Object.h"

class Class_1_5F51D4049EA87B7B;
class Class_2_A48F3719AA1CF200_6;
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_92388F96EF28ABD9_METHOD_1_00605CD46BC5ED28_OFFSET UNITYSDK_OFFSET(0xAC4E9B0)
#define CLASS_1_92388F96EF28ABD9_METHOD_1_0242740B5FCECEB0_OFFSET UNITYSDK_OFFSET(0xAC4EDC0)
#define CLASS_1_92388F96EF28ABD9_METHOD_1_03B1BF2F2F8589FD_1_OFFSET UNITYSDK_OFFSET(0xAC4ED10)
#define CLASS_1_92388F96EF28ABD9_METHOD_1_03B1BF2F2F8589FD_OFFSET UNITYSDK_OFFSET(0xAC4ECD0)
#define CLASS_1_92388F96EF28ABD9_METHOD_1_12193FC087E9BA96_OFFSET UNITYSDK_OFFSET(0xAC4F8C0)
#define CLASS_1_92388F96EF28ABD9_METHOD_1_1E75D1048887FA79_OFFSET UNITYSDK_OFFSET(0xAC4F570)
#define CLASS_1_92388F96EF28ABD9_METHOD_1_2A3B576062AF0AEF_OFFSET UNITYSDK_OFFSET(0xAC3FA60)
#define CLASS_1_92388F96EF28ABD9_METHOD_1_42B462697B2CAC06_OFFSET UNITYSDK_OFFSET(0xAC4EE40)
#define CLASS_1_92388F96EF28ABD9_METHOD_1_479CE08B677E33EA_OFFSET UNITYSDK_OFFSET(0xAC4F850)
#define CLASS_1_92388F96EF28ABD9_METHOD_1_78DEE2B917F86815_OFFSET UNITYSDK_OFFSET(0xAC4EC40)
#define CLASS_1_92388F96EF28ABD9_METHOD_1_81B95CC4AEC1CD86_OFFSET UNITYSDK_OFFSET(0xAC426E0)
#define CLASS_1_92388F96EF28ABD9_METHOD_1_9243D8B6EA609B61_OFFSET UNITYSDK_OFFSET(0xAC4ED50)
#define CLASS_1_92388F96EF28ABD9_METHOD_1_B99A23024907E096_OFFSET UNITYSDK_OFFSET(0xAC4EF20)
#define CLASS_1_92388F96EF28ABD9_METHOD_1_D283E963BEE39BB3_1_OFFSET UNITYSDK_OFFSET(0xAC4EA40)
#define CLASS_1_92388F96EF28ABD9_METHOD_1_D283E963BEE39BB3_OFFSET UNITYSDK_OFFSET(0xAC4E9F0)
#define CLASS_1_92388F96EF28ABD9_METHOD_1_DAFB0CB11B77534F_OFFSET UNITYSDK_OFFSET(0xAC42F20)
#define CLASS_1_92388F96EF28ABD9_METHOD_1_E29FC0C720DDC552_OFFSET UNITYSDK_OFFSET(0xAC4EA90)
#define CLASS_1_92388F96EF28ABD9_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xAC4E9A0)
#define CLASS_1_92388F96EF28ABD9__CCTOR_OFFSET UNITYSDK_OFFSET(0xAC4F950)

inline static constexpr unsigned int Class_1_92388F96EF28ABD9_TypeDefinitionIndex = 44722;

class Class_1_92388F96EF28ABD9 : public ::System::Object
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_0()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_92388F96EF28ABD9_TypeDefinitionIndex)->GetStaticField(0x37130);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_92388F96EF28ABD9__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_92388F96EF28ABD9_METHOD_1_F0088C88851A7DFB_OFFSET))();
	}

	static ::System::Void Method_1_00605CD46BC5ED28(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_92388F96EF28ABD9_METHOD_1_00605CD46BC5ED28_OFFSET))(a1);
	}

	static ::System::Void Method_1_D283E963BEE39BB3(::RPG::GameCore::TaskContext* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_92388F96EF28ABD9_METHOD_1_D283E963BEE39BB3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D283E963BEE39BB3_1(::RPG::GameCore::TaskContext* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_92388F96EF28ABD9_METHOD_1_D283E963BEE39BB3_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_81B95CC4AEC1CD86(::RPG::GameCore::TaskContext* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_92388F96EF28ABD9_METHOD_1_81B95CC4AEC1CD86_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_78DEE2B917F86815(::RPG::GameCore::TaskContext* a1, ::System::Boolean a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_92388F96EF28ABD9_METHOD_1_78DEE2B917F86815_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_03B1BF2F2F8589FD(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_92388F96EF28ABD9_METHOD_1_03B1BF2F2F8589FD_OFFSET))(a1);
	}

	static ::System::Void Method_1_03B1BF2F2F8589FD_1(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_92388F96EF28ABD9_METHOD_1_03B1BF2F2F8589FD_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_DAFB0CB11B77534F(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_92388F96EF28ABD9_METHOD_1_DAFB0CB11B77534F_OFFSET))(a1);
	}

	static ::System::Void Method_1_9243D8B6EA609B61(::System::Boolean a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_92388F96EF28ABD9_METHOD_1_9243D8B6EA609B61_OFFSET))(a1, a2);
	}

	static ::Class_1_5F51D4049EA87B7B* Method_1_0242740B5FCECEB0(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TaskConfig* a2)
	{
		return ((::Class_1_5F51D4049EA87B7B*(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::TaskConfig*))((::PBYTE)hIl2Cpp + CLASS_1_92388F96EF28ABD9_METHOD_1_0242740B5FCECEB0_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::Class_1_5F51D4049EA87B7B*>* Method_1_42B462697B2CAC06(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>* a2, ::Class_2_A48F3719AA1CF200_6* a3)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_5F51D4049EA87B7B*>*(*)(::RPG::GameCore::TaskContext*, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>*, ::Class_2_A48F3719AA1CF200_6*))((::PBYTE)hIl2Cpp + CLASS_1_92388F96EF28ABD9_METHOD_1_42B462697B2CAC06_OFFSET))(a1, a2, a3);
	}

	static ::Il2CppArray<::Class_1_5F51D4049EA87B7B*>* Method_1_B99A23024907E096(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>* a2, ::Class_2_A48F3719AA1CF200_6* a3)
	{
		return ((::Il2CppArray<::Class_1_5F51D4049EA87B7B*>*(*)(::RPG::GameCore::TaskContext*, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>*, ::Class_2_A48F3719AA1CF200_6*))((::PBYTE)hIl2Cpp + CLASS_1_92388F96EF28ABD9_METHOD_1_B99A23024907E096_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_1E75D1048887FA79(::System::Collections::Generic::List_1<::Class_1_5F51D4049EA87B7B*>* a1, ::Class_1_5F51D4049EA87B7B* a2, ::Class_2_A48F3719AA1CF200_6* a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_1_5F51D4049EA87B7B*>*, ::Class_1_5F51D4049EA87B7B*, ::Class_2_A48F3719AA1CF200_6*))((::PBYTE)hIl2Cpp + CLASS_1_92388F96EF28ABD9_METHOD_1_1E75D1048887FA79_OFFSET))(a1, a2, a3);
	}

	static ::RPG::GameCore::TaskState Method_1_2A3B576062AF0AEF(::Class_1_5F51D4049EA87B7B* a1)
	{
		return ((::RPG::GameCore::TaskState(*)(::Class_1_5F51D4049EA87B7B*))((::PBYTE)hIl2Cpp + CLASS_1_92388F96EF28ABD9_METHOD_1_2A3B576062AF0AEF_OFFSET))(a1);
	}

	static ::RPG::GameCore::GameEntity* Method_1_479CE08B677E33EA(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_92388F96EF28ABD9_METHOD_1_479CE08B677E33EA_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_12193FC087E9BA96(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DynamicFloat* a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::DynamicFloat*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_92388F96EF28ABD9_METHOD_1_12193FC087E9BA96_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_E29FC0C720DDC552(::RPG::GameCore::TaskContext* a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::RPG::GameCore::TaskContext*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_92388F96EF28ABD9_METHOD_1_E29FC0C720DDC552_OFFSET))(a1, a2);
	}
};
