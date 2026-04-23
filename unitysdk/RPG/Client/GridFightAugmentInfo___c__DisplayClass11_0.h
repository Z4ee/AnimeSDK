#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightAugment; }

#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA447B40)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO___C__DISPLAYCLASS11_0__GETAUGMENTBYID_B__0_OFFSET UNITYSDK_OFFSET(0xA448D80)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAugmentInfo___c__DisplayClass11_0_TypeDefinitionIndex = 59235;

	class GridFightAugmentInfo___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAugmentByID_b__0(::RPG::Client::GridFightAugment* augment)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightAugment*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO___C__DISPLAYCLASS11_0__GETAUGMENTBYID_B__0_OFFSET))(this, augment);
		}
	};
}
