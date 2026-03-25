#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightDivisionConfig; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_GRIDFIGHTSEASONDIVISION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x98A0C90)
#define RPG_CLIENT_GRIDFIGHTSEASONDIVISION___C__CTOR_OFFSET UNITYSDK_OFFSET(0x98A0CD0)
#define RPG_CLIENT_GRIDFIGHTSEASONDIVISION___C__GETDISPLAYDIVISIONCONFIGS_B__4_0_OFFSET UNITYSDK_OFFSET(0x98A0CE0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSeasonDivision___c_TypeDefinitionIndex = 52435;

	class GridFightSeasonDivision___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::GridFightDivisionConfig*>** StaticGet___9__4_0()
		{
			return (::System::Comparison_1<::RPG::Client::GridFightDivisionConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightSeasonDivision___c_TypeDefinitionIndex)->GetStaticField(0x19E60);
		}
		static ::RPG::Client::GridFightSeasonDivision___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightSeasonDivision___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightSeasonDivision___c_TypeDefinitionIndex)->GetStaticField(0x19E68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONDIVISION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONDIVISION___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetDisplayDivisionConfigs_b__4_0(::RPG::Client::GridFightDivisionConfig* a, ::RPG::Client::GridFightDivisionConfig* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightDivisionConfig*, ::RPG::Client::GridFightDivisionConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONDIVISION___C__GETDISPLAYDIVISIONCONFIGS_B__4_0_OFFSET))(this, a, b);
		}
	};
}
