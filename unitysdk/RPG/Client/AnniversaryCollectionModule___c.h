#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AnniversaryCollectionGroupData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9D2DA00)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9D2DA30)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE___C__GETANNIVERSARY3RDCOLLECTIONGROUPDATA_B__22_0_OFFSET UNITYSDK_OFFSET(0x9D2DA40)

namespace RPG::Client
{
	inline static constexpr unsigned int AnniversaryCollectionModule___c_TypeDefinitionIndex = 57567;

	class AnniversaryCollectionModule___c : public ::System::Object
	{
	public:
		static ::RPG::Client::AnniversaryCollectionModule___c** StaticGet___9()
		{
			return (::RPG::Client::AnniversaryCollectionModule___c**)Il2CppClass::FromTypeDefinitionIndex(AnniversaryCollectionModule___c_TypeDefinitionIndex)->GetStaticField(0x2F8D0);
		}
		static ::System::Func_2<::RPG::Client::AnniversaryCollectionGroupData*, ::System::Boolean>** StaticGet___9__22_0()
		{
			return (::System::Func_2<::RPG::Client::AnniversaryCollectionGroupData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AnniversaryCollectionModule___c_TypeDefinitionIndex)->GetStaticField(0x2F8D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAnniversary3RDCollectionGroupData_b__22_0(::RPG::Client::AnniversaryCollectionGroupData* g)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AnniversaryCollectionGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE___C__GETANNIVERSARY3RDCOLLECTIONGROUPDATA_B__22_0_OFFSET))(this, g);
		}
	};
}
