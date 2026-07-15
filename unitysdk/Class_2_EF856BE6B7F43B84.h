#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::GameCore { class CheckMainMissionFinishedInCurrentVersion; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_EF856BE6B7F43B84_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E61090)
#define CLASS_2_EF856BE6B7F43B84_METHOD_2_572B754BF5102DD8_1_OFFSET UNITYSDK_OFFSET(0x15E61B60)
#define CLASS_2_EF856BE6B7F43B84_METHOD_2_572B754BF5102DD8_OFFSET UNITYSDK_OFFSET(0x15E61710)
#define CLASS_2_EF856BE6B7F43B84_METHOD_2_8D7DF28B6BFB6E2F_OFFSET UNITYSDK_OFFSET(0x15E61FB0)
#define CLASS_2_EF856BE6B7F43B84_METHOD_2_E9D9F09754C14D8E_OFFSET UNITYSDK_OFFSET(0x15E614D0)
#define CLASS_2_EF856BE6B7F43B84_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E61310)
#define CLASS_2_EF856BE6B7F43B84_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15E61200)
#define CLASS_2_EF856BE6B7F43B84_TICK_OFFSET UNITYSDK_OFFSET(0x15E612B0)
#define CLASS_2_EF856BE6B7F43B84__CTOR_OFFSET UNITYSDK_OFFSET(0x15E60E60)

inline static constexpr unsigned int Class_2_EF856BE6B7F43B84_TypeDefinitionIndex = 50255;

class Class_2_EF856BE6B7F43B84 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* Field_2_0; // 0x18
	::Class_3_07C3C4D2990C49EE* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28
	::RPG::GameCore::CheckMainMissionFinishedInCurrentVersion* Field_2_3; // 0x30
	::System::UInt32 Field_2_4; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CheckMainMissionFinishedInCurrentVersion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CheckMainMissionFinishedInCurrentVersion*))((::PBYTE)hIl2Cpp + CLASS_2_EF856BE6B7F43B84__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF856BE6B7F43B84_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EF856BE6B7F43B84_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF856BE6B7F43B84_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF856BE6B7F43B84_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_E9D9F09754C14D8E(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_EF856BE6B7F43B84_METHOD_2_E9D9F09754C14D8E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_572B754BF5102DD8(::System::UInt32 a1, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_EF856BE6B7F43B84_METHOD_2_572B754BF5102DD8_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_572B754BF5102DD8_1(::System::UInt32 a1, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_EF856BE6B7F43B84_METHOD_2_572B754BF5102DD8_1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_8D7DF28B6BFB6E2F(::System::UInt32 a1, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a2, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_EF856BE6B7F43B84_METHOD_2_8D7DF28B6BFB6E2F_OFFSET))(this, a1, a2, a3);
	}
};
