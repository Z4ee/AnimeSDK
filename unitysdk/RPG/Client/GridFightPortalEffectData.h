#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightBonusResultData; }
namespace RPG::Client { class GridFightBonusSrcInfo; }

#define RPG_CLIENT_GRIDFIGHTPORTALEFFECTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA56F60)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPortalEffectData_TypeDefinitionIndex = 64451;

	class GridFightPortalEffectData : public ::System::Object
	{
	public:
		::RPG::Client::GridFightBonusSrcInfo* SrcInfo; // 0x10
		::RPG::Client::GridFightBonusResultData* Bonus; // 0x18

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALEFFECTDATA__CTOR_OFFSET))(this, a1);
		}
	};
}
