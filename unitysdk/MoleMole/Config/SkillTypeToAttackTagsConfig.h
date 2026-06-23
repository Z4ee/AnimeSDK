#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Config/EntitySkillType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_SKILLTYPETOATTACKTAGSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA76AD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SkillTypeToAttackTagsConfig_TypeDefinitionIndex = 65129;

	class SkillTypeToAttackTagsConfig : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EntitySkillType, ::System::Collections::Generic::List_1<::System::String*>*>* Config; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SKILLTYPETOATTACKTAGSCONFIG__CTOR_OFFSET))(this);
		}
	};
}
