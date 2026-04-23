#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AchievementData; }
namespace RPG::Client { class IsometricViewModule; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_63AB485EFA8FBC73_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12ADD7D0)
#define CLASS_1_63AB485EFA8FBC73_METHOD_1_006FE46C1CBA320C_OFFSET UNITYSDK_OFFSET(0x12ADE050)
#define CLASS_1_63AB485EFA8FBC73_METHOD_1_8542E37E74FDE1B5_1_OFFSET UNITYSDK_OFFSET(0x12ADDC30)
#define CLASS_1_63AB485EFA8FBC73_METHOD_1_8542E37E74FDE1B5_OFFSET UNITYSDK_OFFSET(0x12ADD810)
#define CLASS_1_63AB485EFA8FBC73_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x12ADD720)
#define CLASS_1_63AB485EFA8FBC73__CTOR_OFFSET UNITYSDK_OFFSET(0x12ADE530)

inline static constexpr unsigned int Class_1_63AB485EFA8FBC73_TypeDefinitionIndex = 55485;

class Class_1_63AB485EFA8FBC73 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_4; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_5; // 0x18
	::RPG::Client::AchievementData* Field_1_1; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_1_6; // 0x28
	::RPG::Client::AchievementData* Field_1_0; // 0x30
	::System::UInt32 Field_1_3; // 0x38
	::System::UInt32 Field_1_2; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63AB485EFA8FBC73__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63AB485EFA8FBC73_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63AB485EFA8FBC73_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_8542E37E74FDE1B5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63AB485EFA8FBC73_METHOD_1_8542E37E74FDE1B5_OFFSET))(this);
	}

	::System::Void Method_1_8542E37E74FDE1B5_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63AB485EFA8FBC73_METHOD_1_8542E37E74FDE1B5_1_OFFSET))(this);
	}

	::System::Void Method_1_006FE46C1CBA320C(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::Client::IsometricViewModule* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::Client::IsometricViewModule*))((::PBYTE)hIl2Cpp + CLASS_1_63AB485EFA8FBC73_METHOD_1_006FE46C1CBA320C_OFFSET))(this, a1, a2, a3);
	}
};
