#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UTILS_MONSTERCARDUTILS_CARDGROUP_GET_AVESTRENGTH_OFFSET UNITYSDK_OFFSET(0xD07F5E0)
#define MOLEMOLE_UTILS_MONSTERCARDUTILS_CARDGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xD07F640)

namespace MoleMole::Utils
{
	inline static constexpr unsigned int MonsterCardUtils_CardGroup_TypeDefinitionIndex = 76344;

	class MonsterCardUtils_CardGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* cardIds; // 0x10
		::System::String* stageName; // 0x18
		::System::Int32 totalStrength; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_MONSTERCARDUTILS_CARDGROUP__CTOR_OFFSET))(this);
		}

		::System::Int32 get_aveStrength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_MONSTERCARDUTILS_CARDGROUP_GET_AVESTRENGTH_OFFSET))(this);
		}
	};
}
