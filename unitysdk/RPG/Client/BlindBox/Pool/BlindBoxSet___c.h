#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::BlindBox::Pool { class BlindBox; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXSET___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC886220)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXSET___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC886260)
#define RPG_CLIENT_BLINDBOX_POOL_BLINDBOXSET___C__GET__DEBUGGERDISPLAY_B__9_0_OFFSET UNITYSDK_OFFSET(0xC886270)

namespace RPG::Client::BlindBox::Pool
{
	inline static constexpr unsigned int BlindBoxSet___c_TypeDefinitionIndex = 74918;

	class BlindBoxSet___c : public ::System::Object
	{
	public:
		static ::RPG::Client::BlindBox::Pool::BlindBoxSet___c** StaticGet___9()
		{
			return (::RPG::Client::BlindBox::Pool::BlindBoxSet___c**)Il2CppClass::FromTypeDefinitionIndex(BlindBoxSet___c_TypeDefinitionIndex)->GetStaticField(0x63B30);
		}
		static ::System::Func_2<::RPG::Client::BlindBox::Pool::BlindBox*, ::System::Boolean>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::RPG::Client::BlindBox::Pool::BlindBox*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(BlindBoxSet___c_TypeDefinitionIndex)->GetStaticField(0x63B38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXSET___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXSET___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get__DebuggerDisplay_b__9_0(::RPG::Client::BlindBox::Pool::BlindBox* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BlindBox::Pool::BlindBox*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_POOL_BLINDBOXSET___C__GET__DEBUGGERDISPLAY_B__9_0_OFFSET))(this, a1);
		}
	};
}
