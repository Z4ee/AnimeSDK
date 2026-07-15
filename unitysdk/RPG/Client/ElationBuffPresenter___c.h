#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7807B2B04302CD7B_32;
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ELATIONBUFFPRESENTER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18E0EDD0)
#define RPG_CLIENT_ELATIONBUFFPRESENTER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18E0EE10)
#define RPG_CLIENT_ELATIONBUFFPRESENTER___C___MERGEBUFFDATABYLIFE_B__10_0_OFFSET UNITYSDK_OFFSET(0x18E0EE20)

namespace RPG::Client
{
	inline static constexpr unsigned int ElationBuffPresenter___c_TypeDefinitionIndex = 67979;

	class ElationBuffPresenter___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_1_7807B2B04302CD7B_32*>** StaticGet___9__10_0()
		{
			return (::System::Comparison_1<::Class_1_7807B2B04302CD7B_32*>**)Il2CppClass::FromTypeDefinitionIndex(ElationBuffPresenter___c_TypeDefinitionIndex)->GetStaticField(0x6BBA0);
		}
		static ::RPG::Client::ElationBuffPresenter___c** StaticGet___9()
		{
			return (::RPG::Client::ElationBuffPresenter___c**)Il2CppClass::FromTypeDefinitionIndex(ElationBuffPresenter___c_TypeDefinitionIndex)->GetStaticField(0x6BBA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBUFFPRESENTER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBUFFPRESENTER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __MergeBuffDataByLife_b__10_0(::Class_1_7807B2B04302CD7B_32* a1, ::Class_1_7807B2B04302CD7B_32* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_7807B2B04302CD7B_32*, ::Class_1_7807B2B04302CD7B_32*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBUFFPRESENTER___C___MERGEBUFFDATABYLIFE_B__10_0_OFFSET))(this, a1, a2);
		}
	};
}
