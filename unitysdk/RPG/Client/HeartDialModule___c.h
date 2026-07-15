#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ItemConfig; }
namespace System { template <typename T1, typename T2> class Converter_2; }

#define RPG_CLIENT_HEARTDIALMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17939150)
#define RPG_CLIENT_HEARTDIALMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17939190)
#define RPG_CLIENT_HEARTDIALMODULE___C__SENDSUBMITEMOTIONITEMCSREQ_B__15_0_OFFSET UNITYSDK_OFFSET(0x179391A0)

namespace RPG::Client
{
	inline static constexpr unsigned int HeartDialModule___c_TypeDefinitionIndex = 62736;

	class HeartDialModule___c : public ::System::Object
	{
	public:
		static ::RPG::Client::HeartDialModule___c** StaticGet___9()
		{
			return (::RPG::Client::HeartDialModule___c**)Il2CppClass::FromTypeDefinitionIndex(HeartDialModule___c_TypeDefinitionIndex)->GetStaticField(0x30FD0);
		}
		static ::System::Converter_2<::RPG::GameCore::ItemConfig*, ::System::UInt32>** StaticGet___9__15_0()
		{
			return (::System::Converter_2<::RPG::GameCore::ItemConfig*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(HeartDialModule___c_TypeDefinitionIndex)->GetStaticField(0x30FD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _SendSubmitEmotionItemCsReq_b__15_0(::RPG::GameCore::ItemConfig* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HEARTDIALMODULE___C__SENDSUBMITEMOTIONITEMCSREQ_B__15_0_OFFSET))(this, a1);
		}
	};
}
