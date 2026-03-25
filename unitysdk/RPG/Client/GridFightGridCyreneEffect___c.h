#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTGRIDCYRENEEFFECT___C__CANCASTER_B__5_0_OFFSET UNITYSDK_OFFSET(0x984A7E0)
#define RPG_CLIENT_GRIDFIGHTGRIDCYRENEEFFECT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x984A790)
#define RPG_CLIENT_GRIDFIGHTGRIDCYRENEEFFECT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x984A7D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGridCyreneEffect___c_TypeDefinitionIndex = 52638;

	class GridFightGridCyreneEffect___c : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightGridCyreneEffect___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightGridCyreneEffect___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightGridCyreneEffect___c_TypeDefinitionIndex)->GetStaticField(0x16240);
		}
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGridCyreneEffect___c_TypeDefinitionIndex)->GetStaticField(0x16248);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDCYRENEEFFECT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDCYRENEEFFECT___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _CanCaster_b__5_0(::RPG::Client::GridFightRole* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDCYRENEEFFECT___C__CANCASTER_B__5_0_OFFSET))(this, x);
		}
	};
}
