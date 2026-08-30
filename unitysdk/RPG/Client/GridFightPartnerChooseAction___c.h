#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTPARTNERCHOOSEACTION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC5CC90)
#define RPG_CLIENT_GRIDFIGHTPARTNERCHOOSEACTION___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC5CCD0)
#define RPG_CLIENT_GRIDFIGHTPARTNERCHOOSEACTION___C__SYNC_B__1_0_OFFSET UNITYSDK_OFFSET(0x1BC5CCE0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPartnerChooseAction___c_TypeDefinitionIndex = 65419;

	class GridFightPartnerChooseAction___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightRole*>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightRole*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightPartnerChooseAction___c_TypeDefinitionIndex)->GetStaticField(0x39B10);
		}
		static ::RPG::Client::GridFightPartnerChooseAction___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightPartnerChooseAction___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightPartnerChooseAction___c_TypeDefinitionIndex)->GetStaticField(0x39B18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERCHOOSEACTION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERCHOOSEACTION___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* _Sync_b__1_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERCHOOSEACTION___C__SYNC_B__1_0_OFFSET))(this, a1);
		}
	};
}
