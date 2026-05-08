#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_PROPBGLEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0x11DED230)

namespace MoleMole
{
	inline static constexpr unsigned int PropBgLevel_TypeDefinitionIndex = 42584;

	class PropBgLevel : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* res; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Il2CppArray<::UnityEngine::Color>*>* costumColor; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PROPBGLEVEL__CTOR_OFFSET))(this);
		}
	};
}
