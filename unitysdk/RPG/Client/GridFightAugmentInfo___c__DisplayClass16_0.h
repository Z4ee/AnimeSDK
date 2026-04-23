#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_355A2207C3B7A99D_35;
namespace RPG::Client { class GridFightAugment; }

#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA448A60)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO___C__DISPLAYCLASS16_0__UPDATE_B__0_OFFSET UNITYSDK_OFFSET(0xA448DC0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAugmentInfo___c__DisplayClass16_0_TypeDefinitionIndex = 59236;

	class GridFightAugmentInfo___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::Class_1_355A2207C3B7A99D_35* augmentUpdate; // 0x10

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
