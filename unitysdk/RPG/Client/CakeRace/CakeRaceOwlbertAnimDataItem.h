#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CakeRaceOwlbertAnim; }
namespace System { class String; }

#define RPG_CLIENT_CAKERACE_CAKERACEOWLBERTANIMDATAITEM_CREATE_OFFSET UNITYSDK_OFFSET(0x1AAB84B0)
#define RPG_CLIENT_CAKERACE_CAKERACEOWLBERTANIMDATAITEM_GET_INANIMNAME_OFFSET UNITYSDK_OFFSET(0x1AAB8510)
#define RPG_CLIENT_CAKERACE_CAKERACEOWLBERTANIMDATAITEM_GET_ISSINGLE_OFFSET UNITYSDK_OFFSET(0x1AAB8650)
#define RPG_CLIENT_CAKERACE_CAKERACEOWLBERTANIMDATAITEM_GET_LOOPANIMNAME_OFFSET UNITYSDK_OFFSET(0x1AAB8560)
#define RPG_CLIENT_CAKERACE_CAKERACEOWLBERTANIMDATAITEM_GET_OUTANIMNAME_OFFSET UNITYSDK_OFFSET(0x1AAB85B0)
#define RPG_CLIENT_CAKERACE_CAKERACEOWLBERTANIMDATAITEM_GET_SINGLEANIMNAME_OFFSET UNITYSDK_OFFSET(0x1AAB8600)
#define RPG_CLIENT_CAKERACE_CAKERACEOWLBERTANIMDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAB8500)

namespace RPG::Client::CakeRace
{
	inline static constexpr unsigned int CakeRaceOwlbertAnimDataItem_TypeDefinitionIndex = 72555;

	class CakeRaceOwlbertAnimDataItem : public ::System::Object
	{
	public:
		::RPG::GameCore::CakeRaceOwlbertAnim* _Config; // 0x10

		::System::Void _ctor(::RPG::GameCore::CakeRaceOwlbertAnim* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceOwlbertAnim*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEOWLBERTANIMDATAITEM__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::CakeRace::CakeRaceOwlbertAnimDataItem* Create(::RPG::GameCore::CakeRaceOwlbertAnim* a1)
		{
			return ((::RPG::Client::CakeRace::CakeRaceOwlbertAnimDataItem*(*)(::RPG::GameCore::CakeRaceOwlbertAnim*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEOWLBERTANIMDATAITEM_CREATE_OFFSET))(a1);
		}

		::System::String* get_InAnimName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEOWLBERTANIMDATAITEM_GET_INANIMNAME_OFFSET))(this);
		}

		::System::String* get_LoopAnimName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEOWLBERTANIMDATAITEM_GET_LOOPANIMNAME_OFFSET))(this);
		}

		::System::String* get_OutAnimName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEOWLBERTANIMDATAITEM_GET_OUTANIMNAME_OFFSET))(this);
		}

		::System::String* get_SingleAnimName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEOWLBERTANIMDATAITEM_GET_SINGLEANIMNAME_OFFSET))(this);
		}

		::System::Boolean get_IsSingle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEOWLBERTANIMDATAITEM_GET_ISSINGLE_OFFSET))(this);
		}
	};
}
