#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::GameCore { class CheckMainMissionFinishedInCurrentVersion; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_6AF70F49F5F8E7CB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA6F9600)
#define CLASS_2_6AF70F49F5F8E7CB_METHOD_2_5ED80E2AC98482FB_1_OFFSET UNITYSDK_OFFSET(0xA6F9EC0)
#define CLASS_2_6AF70F49F5F8E7CB_METHOD_2_5ED80E2AC98482FB_OFFSET UNITYSDK_OFFSET(0xA6F9BB0)
#define CLASS_2_6AF70F49F5F8E7CB_METHOD_2_6507E6FA73562FE1_OFFSET UNITYSDK_OFFSET(0xA6FA1D0)
#define CLASS_2_6AF70F49F5F8E7CB_METHOD_2_E9D9F09754C14D8E_OFFSET UNITYSDK_OFFSET(0xA6F9970)
#define CLASS_2_6AF70F49F5F8E7CB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA6F97B0)
#define CLASS_2_6AF70F49F5F8E7CB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA6F96A0)
#define CLASS_2_6AF70F49F5F8E7CB_TICK_OFFSET UNITYSDK_OFFSET(0xA6F9750)
#define CLASS_2_6AF70F49F5F8E7CB__CTOR_OFFSET UNITYSDK_OFFSET(0xA6F93D0)

inline static constexpr unsigned int Class_2_6AF70F49F5F8E7CB_TypeDefinitionIndex = 49240;

class Class_2_6AF70F49F5F8E7CB : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::Class_3_07C3C4D2990C49EE* Field_2_1; // 0x20
	::RPG::GameCore::CheckMainMissionFinishedInCurrentVersion* Field_2_2; // 0x28
	::Class_3_07C3C4D2990C49EE* Field_2_3; // 0x30
	::System::UInt32 Field_2_4; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CheckMainMissionFinishedInCurrentVersion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CheckMainMissionFinishedInCurrentVersion*))((::PBYTE)hIl2Cpp + CLASS_2_6AF70F49F5F8E7CB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6AF70F49F5F8E7CB_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6AF70F49F5F8E7CB_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6AF70F49F5F8E7CB_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6AF70F49F5F8E7CB_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_E9D9F09754C14D8E(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6AF70F49F5F8E7CB_METHOD_2_E9D9F09754C14D8E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_5ED80E2AC98482FB(::System::UInt32 a1, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_6AF70F49F5F8E7CB_METHOD_2_5ED80E2AC98482FB_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_5ED80E2AC98482FB_1(::System::UInt32 a1, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_6AF70F49F5F8E7CB_METHOD_2_5ED80E2AC98482FB_1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_6507E6FA73562FE1(::System::UInt32 a1, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a2, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_6AF70F49F5F8E7CB_METHOD_2_6507E6FA73562FE1_OFFSET))(this, a1, a2, a3);
	}
};
