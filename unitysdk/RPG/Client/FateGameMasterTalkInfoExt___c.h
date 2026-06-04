#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FateGameMasterTalkInfoItem; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_FATEGAMEMASTERTALKINFOEXT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB998180)
#define RPG_CLIENT_FATEGAMEMASTERTALKINFOEXT___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB9981C0)
#define RPG_CLIENT_FATEGAMEMASTERTALKINFOEXT___C__GETRANDOMITEMSONOVERVIEWPAGE_B__1_0_OFFSET UNITYSDK_OFFSET(0xB9981D0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateGameMasterTalkInfoExt___c_TypeDefinitionIndex = 59902;

	class FateGameMasterTalkInfoExt___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::FateGameMasterTalkInfoItem*, ::System::Boolean>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::RPG::Client::FateGameMasterTalkInfoItem*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FateGameMasterTalkInfoExt___c_TypeDefinitionIndex)->GetStaticField(0x17B40);
		}
		static ::RPG::Client::FateGameMasterTalkInfoExt___c** StaticGet___9()
		{
			return (::RPG::Client::FateGameMasterTalkInfoExt___c**)Il2CppClass::FromTypeDefinitionIndex(FateGameMasterTalkInfoExt___c_TypeDefinitionIndex)->GetStaticField(0x17B48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERTALKINFOEXT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERTALKINFOEXT___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRandomItemsOnOverviewPage_b__1_0(::RPG::Client::FateGameMasterTalkInfoItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateGameMasterTalkInfoItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERTALKINFOEXT___C__GETRANDOMITEMSONOVERVIEWPAGE_B__1_0_OFFSET))(this, a1);
		}
	};
}
