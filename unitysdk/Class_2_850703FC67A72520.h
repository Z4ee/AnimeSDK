#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class ShowDeleteMissionDialog; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_850703FC67A72520_DISPOSE_OFFSET UNITYSDK_OFFSET(0x87EBDD0)
#define CLASS_2_850703FC67A72520_METHOD_2_09AB8FC0B8BA1B6E_OFFSET UNITYSDK_OFFSET(0x87EC440)
#define CLASS_2_850703FC67A72520_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x87EBF00)
#define CLASS_2_850703FC67A72520_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x87EC2B0)
#define CLASS_2_850703FC67A72520_TICK_OFFSET UNITYSDK_OFFSET(0x87EC3E0)
#define CLASS_2_850703FC67A72520__CTOR_OFFSET UNITYSDK_OFFSET(0x87EBC60)

inline static constexpr unsigned int Class_2_850703FC67A72520_TypeDefinitionIndex = 43127;

class Class_2_850703FC67A72520 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_5; // 0x0
	::Class_3_5775A4FEC79026BC* Field_2_2; // 0x18
	::Class_3_5775A4FEC79026BC* Field_2_4; // 0x20
	::RPG::GameCore::ShowDeleteMissionDialog* Field_2_0; // 0x28
	::Class_3_5775A4FEC79026BC* Field_2_3; // 0x30
	::RPG::GameCore::TaskContext* Field_2_1; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowDeleteMissionDialog* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowDeleteMissionDialog*))((::PBYTE)hIl2Cpp + CLASS_2_850703FC67A72520__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_850703FC67A72520_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_850703FC67A72520_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_850703FC67A72520_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_850703FC67A72520_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_09AB8FC0B8BA1B6E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_850703FC67A72520_METHOD_2_09AB8FC0B8BA1B6E_OFFSET))(this, a1);
	}
};
