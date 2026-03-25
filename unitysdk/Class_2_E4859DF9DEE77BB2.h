#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_375;
class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class AdvIsometricZoomListener; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_E4859DF9DEE77BB2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8980100)
#define CLASS_2_E4859DF9DEE77BB2_METHOD_2_EF7FF4D68C8A0DF5_OFFSET UNITYSDK_OFFSET(0x89801A0)
#define CLASS_2_E4859DF9DEE77BB2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x897FF10)
#define CLASS_2_E4859DF9DEE77BB2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8980000)
#define CLASS_2_E4859DF9DEE77BB2_TICK_OFFSET UNITYSDK_OFFSET(0x89803A0)
#define CLASS_2_E4859DF9DEE77BB2__CTOR_OFFSET UNITYSDK_OFFSET(0x897FE20)

inline static constexpr unsigned int Class_2_E4859DF9DEE77BB2_TypeDefinitionIndex = 42405;

class Class_2_E4859DF9DEE77BB2 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_5775A4FEC79026BC* Field_2_4; // 0x18
	::RPG::GameCore::TaskContext* Field_2_0; // 0x20
	::RPG::GameCore::AdvIsometricZoomListener* Field_2_1; // 0x28
	::Class_3_5775A4FEC79026BC* Field_2_3; // 0x30
	::System::Boolean Field_2_2; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvIsometricZoomListener* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvIsometricZoomListener*))((::PBYTE)hIl2Cpp + CLASS_2_E4859DF9DEE77BB2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4859DF9DEE77BB2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4859DF9DEE77BB2_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4859DF9DEE77BB2_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_EF7FF4D68C8A0DF5(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_2_E4859DF9DEE77BB2_METHOD_2_EF7FF4D68C8A0DF5_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E4859DF9DEE77BB2_TICK_OFFSET))(this, a1);
	}
};
