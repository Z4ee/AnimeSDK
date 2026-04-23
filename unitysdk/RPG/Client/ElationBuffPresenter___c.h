#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7807B2B04302CD7B_29;
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ELATIONBUFFPRESENTER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA216F50)
#define RPG_CLIENT_ELATIONBUFFPRESENTER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA216F90)
#define RPG_CLIENT_ELATIONBUFFPRESENTER___C___MERGEBUFFDATABYLIFE_B__9_0_OFFSET UNITYSDK_OFFSET(0xA216FA0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElationBuffPresenter___c_TypeDefinitionIndex = 65609;

	class ElationBuffPresenter___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_1_7807B2B04302CD7B_29*>** StaticGet___9__9_0()
		{
			return (::System::Comparison_1<::Class_1_7807B2B04302CD7B_29*>**)Il2CppClass::FromTypeDefinitionIndex(ElationBuffPresenter___c_TypeDefinitionIndex)->GetStaticField(0x5980);
		}
		static ::RPG::Client::ElationBuffPresenter___c** StaticGet___9()
		{
			return (::RPG::Client::ElationBuffPresenter___c**)Il2CppClass::FromTypeDefinitionIndex(ElationBuffPresenter___c_TypeDefinitionIndex)->GetStaticField(0x5988);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBUFFPRESENTER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBUFFPRESENTER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __MergeBuffDataByLife_b__9_0(::Class_1_7807B2B04302CD7B_29* a, ::Class_1_7807B2B04302CD7B_29* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_7807B2B04302CD7B_29*, ::Class_1_7807B2B04302CD7B_29*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBUFFPRESENTER___C___MERGEBUFFDATABYLIFE_B__9_0_OFFSET))(this, a, b);
		}
	};
}
