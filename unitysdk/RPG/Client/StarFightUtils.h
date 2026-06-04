#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonsterData; }
namespace RPG::Client { class StarFightRedDotFilter; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_STARFIGHTUTILS_GETMONSTERDATALIST_OFFSET UNITYSDK_OFFSET(0xC920DC0)
#define RPG_CLIENT_STARFIGHTUTILS_GET_NATIVEFILTER_OFFSET UNITYSDK_OFFSET(0xC91CB00)
#define RPG_CLIENT_STARFIGHTUTILS_ISINSTARFIGHTACTIVITYBATTLE_OFFSET UNITYSDK_OFFSET(0xC9207B0)
#define RPG_CLIENT_STARFIGHTUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0xC921210)

namespace RPG::Client
{
	inline static constexpr unsigned int StarFightUtils_TypeDefinitionIndex = 63606;

	class StarFightUtils : public ::System::Object
	{
	public:
		static ::RPG::Client::StarFightRedDotFilter** StaticGet__NativeFilter()
		{
			return (::RPG::Client::StarFightRedDotFilter**)Il2CppClass::FromTypeDefinitionIndex(StarFightUtils_TypeDefinitionIndex)->GetStaticField(0x49D00);
		}
		static ::System::UInt32* StaticGet_REWARD_ID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(StarFightUtils_TypeDefinitionIndex)->GetStaticField(0xDD40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTUTILS__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* GetMonsterDataList(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTUTILS_GETMONSTERDATALIST_OFFSET))(a1);
		}

		static ::System::Boolean IsInStarFightActivityBattle()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTUTILS_ISINSTARFIGHTACTIVITYBATTLE_OFFSET))();
		}

		static ::RPG::Client::StarFightRedDotFilter* get_NativeFilter()
		{
			return ((::RPG::Client::StarFightRedDotFilter*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTUTILS_GET_NATIVEFILTER_OFFSET))();
		}
	};
}
