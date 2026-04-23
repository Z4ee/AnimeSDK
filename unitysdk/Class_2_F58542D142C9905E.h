#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_E21F6DE9B7FA4D05;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::GameCore { class CheckMainMissionFinishedInCurrentVersion; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_F58542D142C9905E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x98E0E50)
#define CLASS_2_F58542D142C9905E_METHOD_2_4251679132C6DD38_OFFSET UNITYSDK_OFFSET(0x98E19B0)
#define CLASS_2_F58542D142C9905E_METHOD_2_AA94FA8CF47EE2A0_1_OFFSET UNITYSDK_OFFSET(0x98E16B0)
#define CLASS_2_F58542D142C9905E_METHOD_2_AA94FA8CF47EE2A0_OFFSET UNITYSDK_OFFSET(0x98E13B0)
#define CLASS_2_F58542D142C9905E_METHOD_2_E9D9F09754C14D8E_OFFSET UNITYSDK_OFFSET(0x98E1180)
#define CLASS_2_F58542D142C9905E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x98E0FF0)
#define CLASS_2_F58542D142C9905E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x98E0EF0)
#define CLASS_2_F58542D142C9905E_TICK_OFFSET UNITYSDK_OFFSET(0x98E0F90)
#define CLASS_2_F58542D142C9905E__CTOR_OFFSET UNITYSDK_OFFSET(0x98E0C40)

inline static constexpr unsigned int Class_2_F58542D142C9905E_TypeDefinitionIndex = 48613;

class Class_2_F58542D142C9905E : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_E21F6DE9B7FA4D05* Field_2_4; // 0x18
	::Class_3_E21F6DE9B7FA4D05* Field_2_3; // 0x20
	::RPG::GameCore::TaskContext* Field_2_0; // 0x28
	::RPG::GameCore::CheckMainMissionFinishedInCurrentVersion* Field_2_1; // 0x30
	::System::UInt32 Field_2_2; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CheckMainMissionFinishedInCurrentVersion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CheckMainMissionFinishedInCurrentVersion*))((::PBYTE)hIl2Cpp + CLASS_2_F58542D142C9905E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F58542D142C9905E_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F58542D142C9905E_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F58542D142C9905E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F58542D142C9905E_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_E9D9F09754C14D8E(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F58542D142C9905E_METHOD_2_E9D9F09754C14D8E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_AA94FA8CF47EE2A0(::System::UInt32 a1, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_F58542D142C9905E_METHOD_2_AA94FA8CF47EE2A0_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_AA94FA8CF47EE2A0_1(::System::UInt32 a1, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_F58542D142C9905E_METHOD_2_AA94FA8CF47EE2A0_1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_4251679132C6DD38(::System::UInt32 a1, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a2, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_F58542D142C9905E_METHOD_2_4251679132C6DD38_OFFSET))(this, a1, a2, a3);
	}
};
