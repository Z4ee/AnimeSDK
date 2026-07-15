#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_WAITPROPSTATECHANGEBYCOLLECTIONMIRRORTAKENDIFF_METHOD_3_5063EEE4E7C375CB_OFFSET UNITYSDK_OFFSET(0x1D1BA230)
#define RPG_GAMECORE_WAITPROPSTATECHANGEBYCOLLECTIONMIRRORTAKENDIFF_METHOD_3_F0B7A18C5DDEE618_OFFSET UNITYSDK_OFFSET(0x1D1BA270)
#define RPG_GAMECORE_WAITPROPSTATECHANGEBYCOLLECTIONMIRRORTAKENDIFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1BA260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitPropStateChangeByCollectionMirrorTakenDiff_TypeDefinitionIndex = 19630;

	class WaitPropStateChangeByCollectionMirrorTakenDiff : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ColonyID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPSTATECHANGEBYCOLLECTIONMIRRORTAKENDIFF__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5063EEE4E7C375CB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitPropStateChangeByCollectionMirrorTakenDiff*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitPropStateChangeByCollectionMirrorTakenDiff*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPSTATECHANGEBYCOLLECTIONMIRRORTAKENDIFF_METHOD_3_5063EEE4E7C375CB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F0B7A18C5DDEE618(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitPropStateChangeByCollectionMirrorTakenDiff* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitPropStateChangeByCollectionMirrorTakenDiff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPSTATECHANGEBYCOLLECTIONMIRRORTAKENDIFF_METHOD_3_F0B7A18C5DDEE618_OFFSET))(a1, a2);
		}
	};
}
