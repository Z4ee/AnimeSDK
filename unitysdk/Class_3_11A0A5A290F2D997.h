#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"
#include "unitysdk/Struct_2_F8D9CEC872B937AF.h"

class Class_3_8EFB058F44A33334;
namespace RPG::Client { class FiveDimGameInstance; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_11A0A5A290F2D997_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE5BC60)
#define CLASS_3_11A0A5A290F2D997__CTOR_OFFSET UNITYSDK_OFFSET(0xBE5B9F0)
#define CLASS_3_11A0A5A290F2D997__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xBE5BCC0)
#define CLASS_3_11A0A5A290F2D997__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xBE5BD40)
#define CLASS_3_11A0A5A290F2D997__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xBE5BED0)

inline static constexpr unsigned int Class_3_11A0A5A290F2D997_TypeDefinitionIndex = 52831;

class Class_3_11A0A5A290F2D997 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::Class_3_8EFB058F44A33334*>
{
public:
	::Struct_2_F8D9CEC872B937AF MPKAFEJFNKN; // 0x68
	::RPG::Client::FiveDimGameInstance* HOADGOKCPDG; // 0xF8

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_8EFB058F44A33334* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_8EFB058F44A33334*))((::PBYTE)hIl2Cpp + CLASS_3_11A0A5A290F2D997__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_11A0A5A290F2D997_DISPOSE_OFFSET))(this);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_11A0A5A290F2D997__PREPAREDATA_OFFSET))(this);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_11A0A5A290F2D997__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_11A0A5A290F2D997__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};
