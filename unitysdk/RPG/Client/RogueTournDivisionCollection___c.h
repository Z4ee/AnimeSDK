#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournDivisionData; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC811890)
#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC8118C0)
#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION___C___GENERATEDIVISIONINFO_B__6_0_OFFSET UNITYSDK_OFFSET(0xC8118D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournDivisionCollection___c_TypeDefinitionIndex = 63228;

	class RogueTournDivisionCollection___c : public ::System::Object
	{
	public:
		static ::RPG::Client::RogueTournDivisionCollection___c** StaticGet___9()
		{
			return (::RPG::Client::RogueTournDivisionCollection___c**)Il2CppClass::FromTypeDefinitionIndex(RogueTournDivisionCollection___c_TypeDefinitionIndex)->GetStaticField(0x38E00);
		}
		static ::System::Comparison_1<::RPG::Client::RogueTournDivisionData*>** StaticGet___9__6_0()
		{
			return (::System::Comparison_1<::RPG::Client::RogueTournDivisionData*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournDivisionCollection___c_TypeDefinitionIndex)->GetStaticField(0x38E08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __GenerateDivisionInfo_b__6_0(::RPG::Client::RogueTournDivisionData* a1, ::RPG::Client::RogueTournDivisionData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueTournDivisionData*, ::RPG::Client::RogueTournDivisionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION___C___GENERATEDIVISIONINFO_B__6_0_OFFSET))(this, a1, a2);
		}
	};
}
