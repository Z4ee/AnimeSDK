#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitRemarkLineColorType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitRemarkLineConfig; }
namespace RPG::Client { class IGridFightTraitRemarkLineStateParser; }
namespace RPG::GameCore { class GridFightTraitRemarkRow; }

#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEFFECTBASE_GET_STATEPARSER_OFFSET UNITYSDK_OFFSET(0xBC2F900)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEFFECTBASE_GET_TEXTID_OFFSET UNITYSDK_OFFSET(0xBC2F8B0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEFFECTBASE_GET_TEXTPARAMLIST_OFFSET UNITYSDK_OFFSET(0xBC2F8E0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEFFECTBASE_SET_STATEPARSER_OFFSET UNITYSDK_OFFSET(0xBC2F910)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEFFECTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xBC2F490)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitRemarkLineEffectBase_TypeDefinitionIndex = 61200;

	class GridFightTraitRemarkLineEffectBase : public ::System::Object
	{
	public:
		::RPG::Client::IGridFightTraitRemarkLineStateParser* _StateParser_k__BackingField; // 0x10
		::RPG::Client::GridFightTraitRemarkLineConfig* Config; // 0x18

		::System::Void _ctor(::RPG::Client::GridFightTrait* a1, ::RPG::GameCore::GridFightTraitRemarkRow* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTrait*, ::RPG::GameCore::GridFightTraitRemarkRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEFFECTBASE__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TextID get_TextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEFFECTBASE_GET_TEXTID_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_TextParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEFFECTBASE_GET_TEXTPARAMLIST_OFFSET))(this);
		}

		::RPG::Client::IGridFightTraitRemarkLineStateParser* get_StateParser()
		{
			return ((::RPG::Client::IGridFightTraitRemarkLineStateParser*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEFFECTBASE_GET_STATEPARSER_OFFSET))(this);
		}

		::System::Void set_StateParser(::RPG::Client::IGridFightTraitRemarkLineStateParser* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IGridFightTraitRemarkLineStateParser*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEFFECTBASE_SET_STATEPARSER_OFFSET))(this, a1);
		}
	};
}
