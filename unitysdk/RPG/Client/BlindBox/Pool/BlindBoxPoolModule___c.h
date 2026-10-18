#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::BlindBox::Pool { class IBlindBox; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC88CAB0)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC88CAF0)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE___C___ONBLINDBOXOPENBOXSCRSP_B__6_2_OFFSET UNITYSDK_OFFSET(0xC88CB00)

namespace RPG::Client::BlindBox::Pool
{
	inline static constexpr unsigned int BlindBoxPoolModule___c_TypeDefinitionIndex = 74913;

	class BlindBoxPoolModule___c : public ::System::Object
	{
	public:
		static ::RPG::Client::BlindBox::Pool::BlindBoxPoolModule___c** StaticGet___9()
		{
			return (::RPG::Client::BlindBox::Pool::BlindBoxPoolModule___c**)Il2CppClass::FromTypeDefinitionIndex(BlindBoxPoolModule___c_TypeDefinitionIndex)->GetStaticField(0x5E050);
		}
		static ::System::Func_2<::RPG::Client::BlindBox::Pool::IBlindBox*, ::System::Boolean>** StaticGet___9__6_2()
		{
			return (::System::Func_2<::RPG::Client::BlindBox::Pool::IBlindBox*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(BlindBoxPoolModule___c_TypeDefinitionIndex)->GetStaticField(0x5E058);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __OnBlindBoxOpenBoxScRsp_b__6_2(::RPG::Client::BlindBox::Pool::IBlindBox* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BlindBox::Pool::IBlindBox*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXPOOLMODULE___C___ONBLINDBOXOPENBOXSCRSP_B__6_2_OFFSET))(this, a1);
		}
	};
}
