#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTVALUECOMPONENT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x98E7270)
#define RPG_CLIENT_GRIDFIGHTVALUECOMPONENT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x98E72B0)
#define RPG_CLIENT_GRIDFIGHTVALUECOMPONENT___C__TRYGETVALUEFROMTEAM_B__3_0_OFFSET UNITYSDK_OFFSET(0x98E72C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightValueComponent___c_TypeDefinitionIndex = 52932;

	class GridFightValueComponent___c : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightValueComponent___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightValueComponent___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightValueComponent___c_TypeDefinitionIndex)->GetStaticField(0x1E160);
		}
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightValueComponent___c_TypeDefinitionIndex)->GetStaticField(0x1E168);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTVALUECOMPONENT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTVALUECOMPONENT___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _TryGetValueFromTeam_b__3_0(::RPG::Client::GridFightRole* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTVALUECOMPONENT___C__TRYGETVALUEFROMTEAM_B__3_0_OFFSET))(this, x);
		}
	};
}
