#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_3E29218FF6DB22A3;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ReShaRouteDisplayRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RESHASCENESELECTIONMODULEUIFACADE_GETCURROUTEEASTEREGGCONDITIONMATCHEDCOUNT_OFFSET UNITYSDK_OFFSET(0xA2879F0)
#define RPG_CLIENT_RESHASCENESELECTIONMODULEUIFACADE_GETROUTEDISPLAYROWS_OFFSET UNITYSDK_OFFSET(0xA287840)
#define RPG_CLIENT_RESHASCENESELECTIONMODULEUIFACADE_GET_CURROUTEDISPLAYID_OFFSET UNITYSDK_OFFSET(0xA287B40)
#define RPG_CLIENT_RESHASCENESELECTIONMODULEUIFACADE_GET_ISCURROUTESELECTED_OFFSET UNITYSDK_OFFSET(0xA287C00)
#define RPG_CLIENT_RESHASCENESELECTIONMODULEUIFACADE_GET_PLANETDISPLAYID_OFFSET UNITYSDK_OFFSET(0xA287BA0)
#define RPG_CLIENT_RESHASCENESELECTIONMODULEUIFACADE_GET_REACTPROP_OFFSET UNITYSDK_OFFSET(0xA287C60)
#define RPG_CLIENT_RESHASCENESELECTIONMODULEUIFACADE_TRYCREATECURMODULEFACADE_OFFSET UNITYSDK_OFFSET(0xA2876A0)
#define RPG_CLIENT_RESHASCENESELECTIONMODULEUIFACADE__CTOR_OFFSET UNITYSDK_OFFSET(0xA287690)

namespace RPG::Client
{
	inline static constexpr unsigned int ReShaSceneSelectionModuleUIFacade_TypeDefinitionIndex = 48810;

	class ReShaSceneSelectionModuleUIFacade : public ::System::Object
	{
	public:
		::Class_2_3E29218FF6DB22A3* _Module; // 0x10

		::System::Void _ctor(::Class_2_3E29218FF6DB22A3* module)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_3E29218FF6DB22A3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESHASCENESELECTIONMODULEUIFACADE__CTOR_OFFSET))(this, module);
		}

		static ::RPG::Client::ReShaSceneSelectionModuleUIFacade* TryCreateCurModuleFacade()
		{
			return ((::RPG::Client::ReShaSceneSelectionModuleUIFacade*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RESHASCENESELECTIONMODULEUIFACADE_TRYCREATECURMODULEFACADE_OFFSET))();
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ReShaRouteDisplayRow*>* GetRouteDisplayRows()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ReShaRouteDisplayRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESHASCENESELECTIONMODULEUIFACADE_GETROUTEDISPLAYROWS_OFFSET))(this);
		}

		::System::UInt32 GetCurRouteEasterEggConditionMatchedCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESHASCENESELECTIONMODULEUIFACADE_GETCURROUTEEASTEREGGCONDITIONMATCHEDCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_PlanetDisplayID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESHASCENESELECTIONMODULEUIFACADE_GET_PLANETDISPLAYID_OFFSET))(this);
		}

		::System::UInt32 get_CurRouteDisplayID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESHASCENESELECTIONMODULEUIFACADE_GET_CURROUTEDISPLAYID_OFFSET))(this);
		}

		::System::Boolean get_IsCurRouteSelected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESHASCENESELECTIONMODULEUIFACADE_GET_ISCURROUTESELECTED_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_ReactProp()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESHASCENESELECTIONMODULEUIFACADE_GET_REACTPROP_OFFSET))(this);
		}
	};
}
