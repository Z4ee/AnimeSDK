#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_355A2207C3B7A99D_36;
namespace RPG::Client { class GridFightAugment; }

#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBAE56E0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO___C__DISPLAYCLASS16_0__UPDATE_B__0_OFFSET UNITYSDK_OFFSET(0xBAE5A60)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAugmentInfo___c__DisplayClass16_0_TypeDefinitionIndex = 60171;

	class GridFightAugmentInfo___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::Class_1_355A2207C3B7A99D_36* augmentUpdate; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _Update_b__0(::RPG::Client::GridFightAugment* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightAugment*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO___C__DISPLAYCLASS16_0__UPDATE_B__0_OFFSET))(this, a1);
		}
	};
}
