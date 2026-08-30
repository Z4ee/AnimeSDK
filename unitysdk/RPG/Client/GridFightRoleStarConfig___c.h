#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AvatarPropertyValue; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C59D360)
#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C59D3A0)
#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG___C__GET_HPADDEDRATIO2_B__32_0_OFFSET UNITYSDK_OFFSET(0x1C59D3B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleStarConfig___c_TypeDefinitionIndex = 65183;

	class GridFightRoleStarConfig___c : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightRoleStarConfig___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightRoleStarConfig___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleStarConfig___c_TypeDefinitionIndex)->GetStaticField(0x41EF0);
		}
		static ::System::Func_2<::RPG::GameCore::AvatarPropertyValue*, ::System::Boolean>** StaticGet___9__32_0()
		{
			return (::System::Func_2<::RPG::GameCore::AvatarPropertyValue*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleStarConfig___c_TypeDefinitionIndex)->GetStaticField(0x41EF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_HPAddedRatio2_b__32_0(::RPG::GameCore::AvatarPropertyValue* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AvatarPropertyValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG___C__GET_HPADDEDRATIO2_B__32_0_OFFSET))(this, a1);
		}
	};
}
