#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"
#include "unitysdk/Struct_2_F8D9CEC872B937AF.h"

class Class_3_8EFB058F44A33334;
namespace RPG::Client { class FiveDimGameInstance; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5C01DB3813C27EF2_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF7C5B0)
#define CLASS_3_5C01DB3813C27EF2__CTOR_OFFSET UNITYSDK_OFFSET(0xBF7C310)
#define CLASS_3_5C01DB3813C27EF2__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xBF7C610)
#define CLASS_3_5C01DB3813C27EF2__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xBF7C690)
#define CLASS_3_5C01DB3813C27EF2__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xBF7C820)

inline static constexpr unsigned int Class_3_5C01DB3813C27EF2_TypeDefinitionIndex = 53105;

class Class_3_5C01DB3813C27EF2 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::Class_3_8EFB058F44A33334*>
{
public:
	::Struct_2_F8D9CEC872B937AF MPKAFEJFNKN; // 0x68
	::RPG::Client::FiveDimGameInstance* HOADGOKCPDG; // 0xF8

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_8EFB058F44A33334* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_8EFB058F44A33334*))((::PBYTE)hIl2Cpp + CLASS_3_5C01DB3813C27EF2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5C01DB3813C27EF2_DISPOSE_OFFSET))(this);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5C01DB3813C27EF2__PREPAREDATA_OFFSET))(this);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5C01DB3813C27EF2__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5C01DB3813C27EF2__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};
