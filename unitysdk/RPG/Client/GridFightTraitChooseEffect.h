#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitEffectBase.h"

class Class_1_640990790F67F83E;
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitSubTraitConfig; }
namespace RPG::Client { class IGridFightTraitEffect; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTRAITCHOOSEEFFECT_GETCURSUBTRAITMODULEID_OFFSET UNITYSDK_OFFSET(0x1BAF8D10)
#define RPG_CLIENT_GRIDFIGHTTRAITCHOOSEEFFECT_GET_CURRENTSUBTRAITCONFIG_OFFSET UNITYSDK_OFFSET(0x1BAFF050)
#define RPG_CLIENT_GRIDFIGHTTRAITCHOOSEEFFECT_GET_ISSUBTRAITACTIVE_OFFSET UNITYSDK_OFFSET(0x1BAFF010)
#define RPG_CLIENT_GRIDFIGHTTRAITCHOOSEEFFECT_GET_SUBTRAITEFFECTS_OFFSET UNITYSDK_OFFSET(0x1BAFF2D0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHOOSEEFFECT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1BAFFBE0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHOOSEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAFF550)
#define RPG_CLIENT_GRIDFIGHTTRAITCHOOSEEFFECT__GETCUREFFECTS_OFFSET UNITYSDK_OFFSET(0x1BAFF320)
#define RPG_CLIENT_GRIDFIGHTTRAITCHOOSEEFFECT__GETCURSUBTRAITCONFIG_OFFSET UNITYSDK_OFFSET(0x1BAFF0A0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHOOSEEFFECT__INITSUBTRAITCONFIG_OFFSET UNITYSDK_OFFSET(0x1BAFF780)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitChooseEffect_TypeDefinitionIndex = 65452;

	class GridFightTraitChooseEffect : public ::RPG::Client::GridFightTraitEffectBase
	{
	public:
		::RPG::Client::GridFightTraitSubTraitConfig* _DefaultSubTraitConfig; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightTraitSubTraitConfig*>* _SubTraitConfigByModuleID; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitEffect*>*>* _SubTraitEffectsByModuleID; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitEffect*>* _DefaultSubTraitEffects; // 0x48

		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::GridFightTrait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHOOSEEFFECT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsSubTraitActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHOOSEEFFECT_GET_ISSUBTRAITACTIVE_OFFSET))(this);
		}

		::RPG::Client::GridFightTraitSubTraitConfig* get_CurrentSubTraitConfig()
		{
			return ((::RPG::Client::GridFightTraitSubTraitConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHOOSEEFFECT_GET_CURRENTSUBTRAITCONFIG_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IGridFightTraitEffect*>* get_SubTraitEffects()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IGridFightTraitEffect*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHOOSEEFFECT_GET_SUBTRAITEFFECTS_OFFSET))(this);
		}

		::System::Void OnUpdate(::Class_1_640990790F67F83E* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_640990790F67F83E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHOOSEEFFECT_ONUPDATE_OFFSET))(this, a1);
		}

		::System::Void _InitSubTraitConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHOOSEEFFECT__INITSUBTRAITCONFIG_OFFSET))(this);
		}

		::RPG::Client::GridFightTraitSubTraitConfig* _GetCurSubTraitConfig()
		{
			return ((::RPG::Client::GridFightTraitSubTraitConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHOOSEEFFECT__GETCURSUBTRAITCONFIG_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitEffect*>* _GetCurEffects()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitEffect*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHOOSEEFFECT__GETCUREFFECTS_OFFSET))(this);
		}

		::System::UInt32 GetCurSubTraitModuleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHOOSEEFFECT_GETCURSUBTRAITMODULEID_OFFSET))(this);
		}
	};
}
