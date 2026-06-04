#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3504E309EE87A23B;
class Class_1_BDD8A5928D7AD0BA;
namespace RPG::GameCore { class LevelPedestrianV2BakedInfo; }
namespace RPG::GameCore { class LevelPedestrianV2Info; }

#define CLASS_1_1E87BF7E480444D6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x143530A0)
#define CLASS_1_1E87BF7E480444D6_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x14353040)
#define CLASS_1_1E87BF7E480444D6_METHOD_1_0467C78944D42A01_OFFSET UNITYSDK_OFFSET(0x14353540)
#define CLASS_1_1E87BF7E480444D6_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x14353050)
#define CLASS_1_1E87BF7E480444D6_METHOD_1_9765352E01408D38_OFFSET UNITYSDK_OFFSET(0x14353140)
#define CLASS_1_1E87BF7E480444D6_METHOD_1_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x143535E0)
#define CLASS_1_1E87BF7E480444D6_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x14353070)
#define CLASS_1_1E87BF7E480444D6_METHOD_1_F9F3538A031EA7E8_OFFSET UNITYSDK_OFFSET(0x14353060)
#define CLASS_1_1E87BF7E480444D6__CTOR_OFFSET UNITYSDK_OFFSET(0x14353080)

inline static constexpr unsigned int Class_1_1E87BF7E480444D6_TypeDefinitionIndex = 64797;

class Class_1_1E87BF7E480444D6 : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_3504E309EE87A23B*>* Field_1_0; // 0x10
	::Il2CppArray<::RPG::GameCore::LevelPedestrianV2BakedInfo*>* Field_1_1; // 0x18
	::Class_1_BDD8A5928D7AD0BA* Field_1_2; // 0x20
	::Il2CppArray<::RPG::GameCore::LevelPedestrianV2Info*>* Field_1_3; // 0x28
	::System::UInt32 _GroupID_k__BackingField; // 0x30

	::System::Void _ctor(::Class_1_BDD8A5928D7AD0BA* a1, ::System::UInt32 a2, ::Il2CppArray<::RPG::GameCore::LevelPedestrianV2Info*>* a3, ::Il2CppArray<::RPG::GameCore::LevelPedestrianV2BakedInfo*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BDD8A5928D7AD0BA*, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::LevelPedestrianV2Info*>*, ::Il2CppArray<::RPG::GameCore::LevelPedestrianV2BakedInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_1E87BF7E480444D6__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::UInt32 get_GroupID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E87BF7E480444D6_GET_GROUPID_OFFSET))(this);
	}

	::Class_1_BDD8A5928D7AD0BA* Method_1_24748FC20F375725()
	{
		return ((::Class_1_BDD8A5928D7AD0BA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E87BF7E480444D6_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::Il2CppArray<::Class_1_3504E309EE87A23B*>* Method_1_F9F3538A031EA7E8()
	{
		return ((::Il2CppArray<::Class_1_3504E309EE87A23B*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E87BF7E480444D6_METHOD_1_F9F3538A031EA7E8_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E87BF7E480444D6_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E87BF7E480444D6_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_9765352E01408D38()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E87BF7E480444D6_METHOD_1_9765352E01408D38_OFFSET))(this);
	}

	::System::Void Method_1_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E87BF7E480444D6_METHOD_1_E3DE31A03057E055_OFFSET))(this);
	}

	static ::RPG::GameCore::LevelPedestrianV2BakedInfo* Method_1_0467C78944D42A01(::RPG::GameCore::LevelPedestrianV2Info* a1, ::Il2CppArray<::RPG::GameCore::LevelPedestrianV2BakedInfo*>* a2)
	{
		return ((::RPG::GameCore::LevelPedestrianV2BakedInfo*(*)(::RPG::GameCore::LevelPedestrianV2Info*, ::Il2CppArray<::RPG::GameCore::LevelPedestrianV2BakedInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_1E87BF7E480444D6_METHOD_1_0467C78944D42A01_OFFSET))(a1, a2);
	}
};
