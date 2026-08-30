#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AchievementData; }
namespace RPG::Client { class IsometricViewModule; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_63AB485EFA8FBC73_DISPOSE_OFFSET UNITYSDK_OFFSET(0x180A1FB0)
#define CLASS_1_63AB485EFA8FBC73_METHOD_1_006FE46C1CBA320C_OFFSET UNITYSDK_OFFSET(0x180A2750)
#define CLASS_1_63AB485EFA8FBC73_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x180A1F00)
#define CLASS_1_63AB485EFA8FBC73_METHOD_1_FD3B916300F77FDA_1_OFFSET UNITYSDK_OFFSET(0x180A23A0)
#define CLASS_1_63AB485EFA8FBC73_METHOD_1_FD3B916300F77FDA_OFFSET UNITYSDK_OFFSET(0x180A1FF0)
#define CLASS_1_63AB485EFA8FBC73__CTOR_OFFSET UNITYSDK_OFFSET(0x180A2C20)

inline static constexpr unsigned int Class_1_63AB485EFA8FBC73_TypeDefinitionIndex = 60292;

class Class_1_63AB485EFA8FBC73 : public ::System::Object
{
public:
	::RPG::Client::AchievementData* JDHNECALNJB; // 0x10
	::RPG::Client::AchievementData* BBCKPPKLFII; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* PEKHPFIABFP; // 0x20
	::System::Collections::Generic::List_1<::System::UInt32>* HJFEGLFPIHA; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* FIIICPCKMGM; // 0x30
	::System::UInt32 KLEFBLNIMJE; // 0x38
	::System::UInt32 EAOPIJCBMIJ; // 0x3C

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

	::System::Void Method_1_FD3B916300F77FDA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63AB485EFA8FBC73_METHOD_1_FD3B916300F77FDA_OFFSET))(this);
	}

	::System::Void Method_1_FD3B916300F77FDA_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63AB485EFA8FBC73_METHOD_1_FD3B916300F77FDA_1_OFFSET))(this);
	}

	::System::Void Method_1_006FE46C1CBA320C(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::Client::IsometricViewModule* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::Client::IsometricViewModule*))((::PBYTE)hIl2Cpp + CLASS_1_63AB485EFA8FBC73_METHOD_1_006FE46C1CBA320C_OFFSET))(this, a1, a2, a3);
	}
};
