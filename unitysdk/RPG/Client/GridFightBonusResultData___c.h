#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C954B10)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C954B50)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA___C__POPUPEXPERTROLE_B__15_0_OFFSET UNITYSDK_OFFSET(0x1C954B60)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBonusResultData___c_TypeDefinitionIndex = 64486;

	class GridFightBonusResultData___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::RPG::Client::GridFightRole*>** StaticGet___9__15_0()
		{
			return (::System::Predicate_1<::RPG::Client::GridFightRole*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightBonusResultData___c_TypeDefinitionIndex)->GetStaticField(0x1E540);
		}
		static ::RPG::Client::GridFightBonusResultData___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightBonusResultData___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightBonusResultData___c_TypeDefinitionIndex)->GetStaticField(0x1E548);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _PopupExpertRole_b__15_0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA___C__POPUPEXPERTROLE_B__15_0_OFFSET))(this, a1);
		}
	};
}
