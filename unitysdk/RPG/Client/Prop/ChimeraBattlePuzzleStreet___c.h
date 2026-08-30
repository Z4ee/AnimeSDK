#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraBattlePuzzleArea; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLESTREET___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xDC08940)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLESTREET___C__CTOR_OFFSET UNITYSDK_OFFSET(0xDC08980)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLESTREET___C__INIT_B__0_0_OFFSET UNITYSDK_OFFSET(0xDC08990)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraBattlePuzzleStreet___c_TypeDefinitionIndex = 77959;

	class ChimeraBattlePuzzleStreet___c : public ::System::Object
	{
	public:
		static ::RPG::Client::Prop::ChimeraBattlePuzzleStreet___c** StaticGet___9()
		{
			return (::RPG::Client::Prop::ChimeraBattlePuzzleStreet___c**)Il2CppClass::FromTypeDefinitionIndex(ChimeraBattlePuzzleStreet___c_TypeDefinitionIndex)->GetStaticField(0x63640);
		}
		static ::System::Comparison_1<::RPG::Client::ChimeraBattlePuzzleArea*>** StaticGet___9__0_0()
		{
			return (::System::Comparison_1<::RPG::Client::ChimeraBattlePuzzleArea*>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraBattlePuzzleStreet___c_TypeDefinitionIndex)->GetStaticField(0x63648);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLESTREET___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLESTREET___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _Init_b__0_0(::RPG::Client::ChimeraBattlePuzzleArea* a1, ::RPG::Client::ChimeraBattlePuzzleArea* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChimeraBattlePuzzleArea*, ::RPG::Client::ChimeraBattlePuzzleArea*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLESTREET___C__INIT_B__0_0_OFFSET))(this, a1, a2);
		}
	};
}
