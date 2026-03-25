#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C3C5C0E033C47270_9;
namespace RPG::Client { class GridFightAugment; }

#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x97CFEF0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO___C__DISPLAYCLASS16_0__UPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x97D0250)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAugmentInfo___c__DisplayClass16_0_TypeDefinitionIndex = 52284;

	class GridFightAugmentInfo___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::Class_1_C3C5C0E033C47270_9* augmentUpdate; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _Update_b__0(::RPG::Client::GridFightAugment* augment)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightAugment*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO___C__DISPLAYCLASS16_0__UPDATE_B__0_OFFSET))(this, augment);
		}
	};
}
