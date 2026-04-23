#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MonopolyMapCell; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_MONOPOLYMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAABB740)
#define RPG_CLIENT_MONOPOLYMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAABB780)
#define RPG_CLIENT_MONOPOLYMODULE___C__GETCELLLISTBYMAP_B__155_0_OFFSET UNITYSDK_OFFSET(0xAABB790)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyModule___c_TypeDefinitionIndex = 61032;

	class MonopolyModule___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MonopolyModule___c** StaticGet___9()
		{
			return (::RPG::Client::MonopolyModule___c**)Il2CppClass::FromTypeDefinitionIndex(MonopolyModule___c_TypeDefinitionIndex)->GetStaticField(0x44B90);
		}
		static ::System::Comparison_1<::RPG::GameCore::MonopolyMapCell*>** StaticGet___9__155_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::MonopolyMapCell*>**)Il2CppClass::FromTypeDefinitionIndex(MonopolyModule___c_TypeDefinitionIndex)->GetStaticField(0x44B98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetCellListByMap_b__155_0(::RPG::GameCore::MonopolyMapCell* cell1, ::RPG::GameCore::MonopolyMapCell* cell2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::MonopolyMapCell*, ::RPG::GameCore::MonopolyMapCell*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYMODULE___C__GETCELLLISTBYMAP_B__155_0_OFFSET))(this, cell1, cell2);
		}
	};
}
