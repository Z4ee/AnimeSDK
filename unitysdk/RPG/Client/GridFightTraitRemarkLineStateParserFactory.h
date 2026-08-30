#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightTraitRemarkActiveType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class IGridFightTraitRemarkLineStateParser; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINESTATEPARSERFACTORY_CREATEPARSER_OFFSET UNITYSDK_OFFSET(0x1BB0F300)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINESTATEPARSERFACTORY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB11260)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitRemarkLineStateParserFactory_TypeDefinitionIndex = 65555;

	class GridFightTraitRemarkLineStateParserFactory : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GridFightTraitRemarkActiveType, ::System::Func_3<::Il2CppArray<::System::UInt32>*, ::RPG::Client::GridFightTrait*, ::RPG::Client::IGridFightTraitRemarkLineStateParser*>*>** StaticGet__parserCreators()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GridFightTraitRemarkActiveType, ::System::Func_3<::Il2CppArray<::System::UInt32>*, ::RPG::Client::GridFightTrait*, ::RPG::Client::IGridFightTraitRemarkLineStateParser*>*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitRemarkLineStateParserFactory_TypeDefinitionIndex)->GetStaticField(0x511B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINESTATEPARSERFACTORY__CCTOR_OFFSET))();
		}

		static ::RPG::Client::IGridFightTraitRemarkLineStateParser* CreateParser(::RPG::Client::GridFightTrait* a1, ::RPG::GameCore::GridFightTraitRemarkActiveType a2, ::Il2CppArray<::System::UInt32>* a3)
		{
			return ((::RPG::Client::IGridFightTraitRemarkLineStateParser*(*)(::RPG::Client::GridFightTrait*, ::RPG::GameCore::GridFightTraitRemarkActiveType, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINESTATEPARSERFACTORY_CREATEPARSER_OFFSET))(a1, a2, a3);
		}
	};
}
