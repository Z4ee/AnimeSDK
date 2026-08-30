#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_121;
namespace RPG::Client::Promises { template <typename T> class Promise_1; }

#define RPG_CLIENT_VERSIONUPDATECHECK___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE3FA020)
#define RPG_CLIENT_VERSIONUPDATECHECK___C__DISPLAYCLASS5_0__ISPSSUBPACKPROMISED_B__0_OFFSET UNITYSDK_OFFSET(0xE3FDC70)

namespace RPG::Client
{
	inline static constexpr unsigned int VersionUpdateCheck___c__DisplayClass5_0_TypeDefinitionIndex = 61356;

	class VersionUpdateCheck___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise_1<::System::Boolean>* promise; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _IsPSSubpackPromised_b__0(::Class_1_43BD383C98B4C0C5_121* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_121*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK___C__DISPLAYCLASS5_0__ISPSSUBPACKPROMISED_B__0_OFFSET))(this, a1);
		}
	};
}
