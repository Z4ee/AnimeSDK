#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SilverWolfBaseMissionData.h"

namespace RPG::Client { class SilverWolfImgPath; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SILVERWOLFSHOOTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC8C6CB0)

namespace RPG::Client
{
	inline static constexpr unsigned int SilverWolfShootData_TypeDefinitionIndex = 63581;

	class SilverWolfShootData : public ::RPG::Client::SilverWolfBaseMissionData
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::SilverWolfImgPath*>* QuestImgPaths; // 0x30

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFSHOOTDATA__CTOR_OFFSET))(this, a1);
		}
	};
}
