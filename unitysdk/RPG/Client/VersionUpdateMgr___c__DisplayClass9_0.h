#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_99;
class Class_1_942D03E5A029CB94;
namespace System { class String; }

#define RPG_CLIENT_VERSIONUPDATEMGR___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE3FFC60)
#define RPG_CLIENT_VERSIONUPDATEMGR___C__DISPLAYCLASS9_0___CALCBLOCKHPATCHDOWNLOADINFOSCORE_B__2_OFFSET UNITYSDK_OFFSET(0xE405380)
#define RPG_CLIENT_VERSIONUPDATEMGR___C__DISPLAYCLASS9_0___CALCBLOCKHPATCHDOWNLOADINFOSCORE_B__3_OFFSET UNITYSDK_OFFSET(0xE405400)

namespace RPG::Client
{
	inline static constexpr unsigned int VersionUpdateMgr___c__DisplayClass9_0_TypeDefinitionIndex = 61377;

	class VersionUpdateMgr___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_99* index; // 0x10
		::System::String* rootPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::Class_1_942D03E5A029CB94* __CalcBlockHPatchDownloadInfosCore_b__2(::System::UInt32 a1)
		{
			return ((::Class_1_942D03E5A029CB94*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR___C__DISPLAYCLASS9_0___CALCBLOCKHPATCHDOWNLOADINFOSCORE_B__2_OFFSET))(this, a1);
		}

		::System::Boolean __CalcBlockHPatchDownloadInfosCore_b__3(::Class_1_942D03E5A029CB94* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_942D03E5A029CB94*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR___C__DISPLAYCLASS9_0___CALCBLOCKHPATCHDOWNLOADINFOSCORE_B__3_OFFSET))(this, a1);
		}
	};
}
