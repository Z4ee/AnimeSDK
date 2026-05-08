#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ToolBuddy/Pooling/Collections/SubArray_1.h"

namespace FluffyUnderware::Curvy::Generator::Modules { class CreateMesh; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH___C__DISPLAYCLASS123_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C31DE80)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH___C__DISPLAYCLASS123_0__UPDATECOLLIDERS_B__0_OFFSET UNITYSDK_OFFSET(0x1C31DE90)

namespace FluffyUnderware::Curvy::Generator::Modules
{
	inline static constexpr unsigned int CreateMesh___c__DisplayClass123_0_TypeDefinitionIndex = 37406;

	class CreateMesh___c__DisplayClass123_0 : public ::System::Object
	{
	public:
		::FluffyUnderware::Curvy::Generator::Modules::CreateMesh* __4__this; // 0x10
		::ToolBuddy::Pooling::Collections::SubArray_1<::System::Int32> meshIds; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH___C__DISPLAYCLASS123_0__CTOR_OFFSET))(this);
		}

		::System::Void _UpdateColliders_b__0(::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEMESH___C__DISPLAYCLASS123_0__UPDATECOLLIDERS_B__0_OFFSET))(this, i);
		}
	};
}
