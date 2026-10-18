#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::BlindBox::Pool { class IBlindBoxPool; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_BLINDBOX_POOL_IBLINDBOXPOOLREPOSITORYEXTENSIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC88DBA0)
#define RPG_CLIENT_BLINDBOX_POOL_IBLINDBOXPOOLREPOSITORYEXTENSIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC88DBE0)
#define RPG_CLIENT_BLINDBOX_POOL_IBLINDBOXPOOLREPOSITORYEXTENSIONS___C__GETALLOPEN_B__0_0_OFFSET UNITYSDK_OFFSET(0xC88DBF0)
#define RPG_CLIENT_BLINDBOX_POOL_IBLINDBOXPOOLREPOSITORYEXTENSIONS___C__GETFIRSTOPEN_B__1_0_OFFSET UNITYSDK_OFFSET(0xC88DC10)

namespace RPG::Client::BlindBox::Pool
{
	inline static constexpr unsigned int IBlindBoxPoolRepositoryExtensions___c_TypeDefinitionIndex = 74951;

	class IBlindBoxPoolRepositoryExtensions___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::BlindBox::Pool::IBlindBoxPool*, ::System::Boolean>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::RPG::Client::BlindBox::Pool::IBlindBoxPool*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IBlindBoxPoolRepositoryExtensions___c_TypeDefinitionIndex)->GetStaticField(0x5E100);
		}
		static ::System::Func_2<::RPG::Client::BlindBox::Pool::IBlindBoxPool*, ::System::Boolean>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::RPG::Client::BlindBox::Pool::IBlindBoxPool*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(IBlindBoxPoolRepositoryExtensions___c_TypeDefinitionIndex)->GetStaticField(0x5E108);
		}
		static ::RPG::Client::BlindBox::Pool::IBlindBoxPoolRepositoryExtensions___c** StaticGet___9()
		{
			return (::RPG::Client::BlindBox::Pool::IBlindBoxPoolRepositoryExtensions___c**)Il2CppClass::FromTypeDefinitionIndex(IBlindBoxPoolRepositoryExtensions___c_TypeDefinitionIndex)->GetStaticField(0x5E110);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_IBLINDBOXPOOLREPOSITORYEXTENSIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_IBLINDBOXPOOLREPOSITORYEXTENSIONS___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAllOpen_b__0_0(::RPG::Client::BlindBox::Pool::IBlindBoxPool* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BlindBox::Pool::IBlindBoxPool*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_IBLINDBOXPOOLREPOSITORYEXTENSIONS___C__GETALLOPEN_B__0_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetFirstOpen_b__1_0(::RPG::Client::BlindBox::Pool::IBlindBoxPool* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BlindBox::Pool::IBlindBoxPool*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_IBLINDBOXPOOLREPOSITORYEXTENSIONS___C__GETFIRSTOPEN_B__1_0_OFFSET))(this, a1);
		}
	};
}
