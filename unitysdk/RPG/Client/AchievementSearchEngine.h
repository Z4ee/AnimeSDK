#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AchievementData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACHIEVEMENTSEARCHENGINE_BUILDTITLECACHE_OFFSET UNITYSDK_OFFSET(0x1ABBFFA0)
#define RPG_CLIENT_ACHIEVEMENTSEARCHENGINE_CREATE_OFFSET UNITYSDK_OFFSET(0x1ABBFE30)
#define RPG_CLIENT_ACHIEVEMENTSEARCHENGINE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1ABC0800)
#define RPG_CLIENT_ACHIEVEMENTSEARCHENGINE_SEARCHBYNAME_OFFSET UNITYSDK_OFFSET(0x1ABC08F0)
#define RPG_CLIENT_ACHIEVEMENTSEARCHENGINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABBFEB0)
#define RPG_CLIENT_ACHIEVEMENTSEARCHENGINE__ONTEXTLANGUAGECHANGE_OFFSET UNITYSDK_OFFSET(0x1ABC1230)

namespace RPG::Client
{
	inline static constexpr unsigned int AchievementSearchEngine_TypeDefinitionIndex = 61456;

	class AchievementSearchEngine : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* _AchievementTitleCache; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTSEARCHENGINE__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::AchievementSearchEngine* Create()
		{
			return ((::RPG::Client::AchievementSearchEngine*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTSEARCHENGINE_CREATE_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTSEARCHENGINE_DISPOSE_OFFSET))(this);
		}

		::System::Void BuildTitleCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTSEARCHENGINE_BUILDTITLECACHE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AchievementData*>* SearchByName(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AchievementData*>*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTSEARCHENGINE_SEARCHBYNAME_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTextLanguageChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTSEARCHENGINE__ONTEXTLANGUAGECHANGE_OFFSET))(this, a1);
		}
	};
}
