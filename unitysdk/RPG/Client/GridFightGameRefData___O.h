#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightAugment; }
namespace RPG::Client { class GridFightPortalData; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefData___O_TypeDefinitionIndex = 64787;

	class GridFightGameRefData___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightPortalData*>** StaticGet__1___Create()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightPortalData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___O_TypeDefinitionIndex)->GetStaticField(0x341C0);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightAugment*>** StaticGet__0___Create()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightAugment*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___O_TypeDefinitionIndex)->GetStaticField(0x341C8);
		}
	};
}
