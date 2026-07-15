#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PhotoGraphAimContainer_PhotoGraphAim; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F572A0)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17F572E0)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER___C___ACQUIREAIM_B__17_0_OFFSET UNITYSDK_OFFSET(0x17F572F0)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphAimContainer___c_TypeDefinitionIndex = 66301;

	class PhotoGraphAimContainer___c : public ::System::Object
	{
	public:
		static ::RPG::Client::PhotoGraphAimContainer___c** StaticGet___9()
		{
			return (::RPG::Client::PhotoGraphAimContainer___c**)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphAimContainer___c_TypeDefinitionIndex)->GetStaticField(0x65FF0);
		}
		static ::System::Func_2<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*, ::System::Boolean>** StaticGet___9__17_0()
		{
			return (::System::Func_2<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphAimContainer___c_TypeDefinitionIndex)->GetStaticField(0x65FF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __AcquireAim_b__17_0(::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER___C___ACQUIREAIM_B__17_0_OFFSET))(this, a1);
		}
	};
}
