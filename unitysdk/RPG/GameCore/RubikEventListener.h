#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RUBIKEVENTLISTENER_METHOD_3_276B609117525195_OFFSET UNITYSDK_OFFSET(0x1B772E40)
#define RPG_GAMECORE_RUBIKEVENTLISTENER_METHOD_3_DCB5001352564EE2_OFFSET UNITYSDK_OFFSET(0x1B772E00)
#define RPG_GAMECORE_RUBIKEVENTLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B772E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RubikEventListener_TypeDefinitionIndex = 21336;

	class RubikEventListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* UniqueName; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnRotateFinish; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUBIKEVENTLISTENER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DCB5001352564EE2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RubikEventListener*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RubikEventListener*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUBIKEVENTLISTENER_METHOD_3_DCB5001352564EE2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_276B609117525195(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RubikEventListener* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RubikEventListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUBIKEVENTLISTENER_METHOD_3_276B609117525195_OFFSET))(a1, a2);
		}
	};
}
