#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace RPG::CustomRP { class CustomAdditionalLightData; }
namespace UnityEngine { class Light; }

#define RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_CLASS_1_157DF0DD0C4E4084_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0xCA6BAC0)
#define RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_CLASS_1_157DF0DD0C4E4084__CTOR_OFFSET UNITYSDK_OFFSET(0xCA66C00)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeSpaceCrisscrossLightsBehavior_Class_1_157DF0DD0C4E4084_TypeDefinitionIndex = 65670;

	class TimeSpaceCrisscrossLightsBehavior_Class_1_157DF0DD0C4E4084 : public ::System::Object
	{
	public:
		::UnityEngine::Light* Field_1_0; // 0x10
		::RPG::CustomRP::CustomAdditionalLightData* Field_1_1; // 0x18
		::UnityEngine::Bounds Field_1_2; // 0x20
		::System::Boolean Field_1_3; // 0x38
		::System::Single Field_1_4; // 0x3C

		::System::Void _ctor(::UnityEngine::Light* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Light*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_CLASS_1_157DF0DD0C4E4084__CTOR_OFFSET))(this, a1);
		}

		::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSLIGHTSBEHAVIOR_CLASS_1_157DF0DD0C4E4084_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
		}
	};
}
