#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C964C60)
#define RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C964CA0)
#define RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA___C__GET_ISTRAITTRACKED_B__13_0_OFFSET UNITYSDK_OFFSET(0x1C964CB0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightDraftItemData___c_TypeDefinitionIndex = 64604;

	class GridFightDraftItemData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightDraftItemData___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightDraftItemData___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightDraftItemData___c_TypeDefinitionIndex)->GetStaticField(0x1F470);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightDraftItemData___c_TypeDefinitionIndex)->GetStaticField(0x1F478);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_IsTraitTracked_b__13_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA___C__GET_ISTRAITTRACKED_B__13_0_OFFSET))(this, a1);
		}
	};
}
