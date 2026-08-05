#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class AvatarUIElementColor; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_AVATARUIELEMENTCOLORCONFIGS__CTOR_OFFSET UNITYSDK_OFFSET(0xF11A690)

namespace MoleMole
{
	inline static constexpr unsigned int AvatarUIElementColorConfigs_TypeDefinitionIndex = 67769;

	class AvatarUIElementColorConfigs : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::AvatarUIElementColor*>*>* AvatarColorConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARUIELEMENTCOLORCONFIGS__CTOR_OFFSET))(this);
		}
	};
}
