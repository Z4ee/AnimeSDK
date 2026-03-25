#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournModule___O_TypeDefinitionIndex = 55297;

	class RogueTournModule___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::IAvatarInfoProvider*, ::System::Boolean>** StaticGet__0___CheckIsMarked()
		{
			return (::System::Func_2<::RPG::Client::IAvatarInfoProvider*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___O_TypeDefinitionIndex)->GetStaticField(0x1E430);
		}
	};
}
