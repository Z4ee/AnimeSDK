#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PlayerReturnInviteRow; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityPlayerReturnModule___O_TypeDefinitionIndex = 57070;

	class ActivityPlayerReturnModule___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::PlayerReturnInviteRow*, ::System::Boolean>** StaticGet__0____IsInviteInSchedule()
		{
			return (::System::Func_2<::RPG::GameCore::PlayerReturnInviteRow*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ActivityPlayerReturnModule___O_TypeDefinitionIndex)->GetStaticField(0x3C9B0);
		}
	};
}
