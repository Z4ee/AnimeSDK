#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraTalk.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraTalkContentWithWeight; }

#define RPG_GAMECORE_CHIMERAPERIODICRANDOMTALK_METHOD_3_2418E58DB6439DDE_OFFSET UNITYSDK_OFFSET(0x1E33F7A0)
#define RPG_GAMECORE_CHIMERAPERIODICRANDOMTALK_METHOD_3_42084D168C879C5A_OFFSET UNITYSDK_OFFSET(0x1E33F730)
#define RPG_GAMECORE_CHIMERAPERIODICRANDOMTALK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E33F790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraPeriodicRandomTalk_TypeDefinitionIndex = 15680;

	class ChimeraPeriodicRandomTalk : public ::RPG::GameCore::ChimeraTalk
	{
	public:
		::System::Single Interval; // 0x20
		::Il2CppArray<::RPG::GameCore::ChimeraTalkContentWithWeight*>* WeightedTalkConfigs; // 0x28
		::System::Single WeightOfDefault; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAPERIODICRANDOMTALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_42084D168C879C5A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraPeriodicRandomTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraPeriodicRandomTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAPERIODICRANDOMTALK_METHOD_3_42084D168C879C5A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2418E58DB6439DDE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraPeriodicRandomTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraPeriodicRandomTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAPERIODICRANDOMTALK_METHOD_3_2418E58DB6439DDE_OFFSET))(a1, a2);
		}
	};
}
