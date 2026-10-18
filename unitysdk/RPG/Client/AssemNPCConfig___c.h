#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AssemNPC; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ASSEMNPCCONFIG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC6960F0)
#define RPG_CLIENT_ASSEMNPCCONFIG___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC696130)
#define RPG_CLIENT_ASSEMNPCCONFIG___C__INSERTNPCTODIC_B__5_0_OFFSET UNITYSDK_OFFSET(0xC696140)

namespace RPG::Client
{
	inline static constexpr unsigned int AssemNPCConfig___c_TypeDefinitionIndex = 60005;

	class AssemNPCConfig___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::AssemNPC*>** StaticGet___9__5_0()
		{
			return (::System::Comparison_1<::RPG::Client::AssemNPC*>**)Il2CppClass::FromTypeDefinitionIndex(AssemNPCConfig___c_TypeDefinitionIndex)->GetStaticField(0x46CF0);
		}
		static ::RPG::Client::AssemNPCConfig___c** StaticGet___9()
		{
			return (::RPG::Client::AssemNPCConfig___c**)Il2CppClass::FromTypeDefinitionIndex(AssemNPCConfig___c_TypeDefinitionIndex)->GetStaticField(0x46CF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPCCONFIG___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPCCONFIG___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _InsertNPCToDic_b__5_0(::RPG::Client::AssemNPC* a1, ::RPG::Client::AssemNPC* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AssemNPC*, ::RPG::Client::AssemNPC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPCCONFIG___C__INSERTNPCTODIC_B__5_0_OFFSET))(this, a1, a2);
		}
	};
}
