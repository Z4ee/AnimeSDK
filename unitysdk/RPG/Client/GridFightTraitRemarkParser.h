#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightTraitRemarkPosition.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitConfigBase; }
namespace RPG::Client { class GridFightTraitRemarkLineEffectBase; }
namespace RPG::GameCore { class GridFightTraitRemarkRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER_CREATE_OFFSET UNITYSDK_OFFSET(0x1BAF6DB0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER_GETBACKSHOWINGLINEPARSERS_OFFSET UNITYSDK_OFFSET(0x1BB124C0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER_GETFRONTSHOWINGLINEPARSERS_OFFSET UNITYSDK_OFFSET(0x1BB120E0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER_GET_HASREMARK_OFFSET UNITYSDK_OFFSET(0x1BB12870)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER_GET_ISSHOWBACK_OFFSET UNITYSDK_OFFSET(0x1BB12820)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER_GET_ISSHOWFRONT_OFFSET UNITYSDK_OFFSET(0x1BB127D0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER_GET__BACKREMARK_OFFSET UNITYSDK_OFFSET(0x1BB129E0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER_GET__CURRENTTRAITCONFIG_OFFSET UNITYSDK_OFFSET(0x1BB12510)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER_GET__FRONTREMARK_OFFSET UNITYSDK_OFFSET(0x1BB12980)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB120D0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER__GETSHOWINGLINEPARSERS_OFFSET UNITYSDK_OFFSET(0x1BB12130)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER__HASSHOWINGEFFECT_OFFSET UNITYSDK_OFFSET(0x1BB125C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitRemarkParser_TypeDefinitionIndex = 65538;

	class GridFightTraitRemarkParser : public ::System::Object
	{
	public:
		::RPG::Client::GridFightTrait* _Trait; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::GridFightTraitRemarkParser* Create(::RPG::Client::GridFightTrait* a1)
		{
			return ((::RPG::Client::GridFightTraitRemarkParser*(*)(::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER_CREATE_OFFSET))(a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitRemarkLineEffectBase*>* GetFrontShowingLineParsers()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitRemarkLineEffectBase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER_GETFRONTSHOWINGLINEPARSERS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitRemarkLineEffectBase*>* GetBackShowingLineParsers()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitRemarkLineEffectBase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER_GETBACKSHOWINGLINEPARSERS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitRemarkLineEffectBase*>* _GetShowingLineParsers(::RPG::GameCore::GridFightTraitRemarkPosition a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitRemarkLineEffectBase*>*(*)(::PVOID, ::RPG::GameCore::GridFightTraitRemarkPosition))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER__GETSHOWINGLINEPARSERS_OFFSET))(this, a1);
		}

		::System::Boolean _HasShowingEffect(::RPG::GameCore::GridFightTraitRemarkPosition a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightTraitRemarkPosition))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER__HASSHOWINGEFFECT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsShowFront()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER_GET_ISSHOWFRONT_OFFSET))(this);
		}

		::System::Boolean get_IsShowBack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER_GET_ISSHOWBACK_OFFSET))(this);
		}

		::System::Boolean get_HasRemark()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER_GET_HASREMARK_OFFSET))(this);
		}

		::RPG::Client::GridFightTraitConfigBase* get__CurrentTraitConfig()
		{
			return ((::RPG::Client::GridFightTraitConfigBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER_GET__CURRENTTRAITCONFIG_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GridFightTraitRemarkRow*>* get__FrontRemark()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GridFightTraitRemarkRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER_GET__FRONTREMARK_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GridFightTraitRemarkRow*>* get__BackRemark()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GridFightTraitRemarkRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER_GET__BACKREMARK_OFFSET))(this);
		}
	};
}
