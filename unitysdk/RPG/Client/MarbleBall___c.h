#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MarbleSkill; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_MARBLEBALL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA809CD0)
#define RPG_CLIENT_MARBLEBALL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA809D10)
#define RPG_CLIENT_MARBLEBALL___C__GETSKILLS_B__21_0_OFFSET UNITYSDK_OFFSET(0xA809D20)

namespace RPG::Client
{
	inline static constexpr unsigned int MarbleBall___c_TypeDefinitionIndex = 60582;

	class MarbleBall___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::MarbleSkill*>** StaticGet___9__21_0()
		{
			return (::System::Comparison_1<::RPG::Client::MarbleSkill*>**)Il2CppClass::FromTypeDefinitionIndex(MarbleBall___c_TypeDefinitionIndex)->GetStaticField(0x25490);
		}
		static ::RPG::Client::MarbleBall___c** StaticGet___9()
		{
			return (::RPG::Client::MarbleBall___c**)Il2CppClass::FromTypeDefinitionIndex(MarbleBall___c_TypeDefinitionIndex)->GetStaticField(0x25498);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBALL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBALL___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetSkills_b__21_0(::RPG::Client::MarbleSkill* a, ::RPG::Client::MarbleSkill* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MarbleSkill*, ::RPG::Client::MarbleSkill*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBALL___C__GETSKILLS_B__21_0_OFFSET))(this, a, b);
		}
	};
}
