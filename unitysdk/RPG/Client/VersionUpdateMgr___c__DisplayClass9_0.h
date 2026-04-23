#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_81;
class Class_1_AD0B53B56535FBAD;
namespace System { class String; }

#define RPG_CLIENT_VERSIONUPDATEMGR___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB471260)
#define RPG_CLIENT_VERSIONUPDATEMGR___C__DISPLAYCLASS9_0___CALCBLOCKHPATCHDOWNLOADINFOSCORE_B__2_OFFSET UNITYSDK_OFFSET(0xB475DB0)
#define RPG_CLIENT_VERSIONUPDATEMGR___C__DISPLAYCLASS9_0___CALCBLOCKHPATCHDOWNLOADINFOSCORE_B__3_OFFSET UNITYSDK_OFFSET(0xB475DD0)

namespace RPG::Client
{
	inline static constexpr unsigned int VersionUpdateMgr___c__DisplayClass9_0_TypeDefinitionIndex = 56512;

	class VersionUpdateMgr___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::String* rootPath; // 0x10
		::Class_0_16E4307DCC419505_81* index; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::Class_1_AD0B53B56535FBAD* __CalcBlockHPatchDownloadInfosCore_b__2(::System::UInt32 e)
		{
			return ((::Class_1_AD0B53B56535FBAD*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR___C__DISPLAYCLASS9_0___CALCBLOCKHPATCHDOWNLOADINFOSCORE_B__2_OFFSET))(this, e);
		}

		::System::Boolean __CalcBlockHPatchDownloadInfosCore_b__3(::Class_1_AD0B53B56535FBAD* e)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_AD0B53B56535FBAD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATEMGR___C__DISPLAYCLASS9_0___CALCBLOCKHPATCHDOWNLOADINFOSCORE_B__3_OFFSET))(this, e);
		}
	};
}
