#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CUSTOMRP_DLSSPASS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6A0CB0)
#define RPG_CUSTOMRP_DLSSPASS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6A0CE0)
#define RPG_CUSTOMRP_DLSSPASS___C__WARMUP_B__4_0_OFFSET UNITYSDK_OFFSET(0x1C6A0CF0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int DLSSPass___c_TypeDefinitionIndex = 36876;

	class DLSSPass___c : public ::System::Object
	{
	public:
		static ::RPG::CustomRP::DLSSPass___c** StaticGet___9()
		{
			return (::RPG::CustomRP::DLSSPass___c**)Il2CppClass::FromTypeDefinitionIndex(DLSSPass___c_TypeDefinitionIndex)->GetStaticField(0x3A4B0);
		}
		static ::System::Action** StaticGet___9__4_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(DLSSPass___c_TypeDefinitionIndex)->GetStaticField(0x3A4B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS___C__CTOR_OFFSET))(this);
		}

		::System::Void _Warmup_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS___C__WARMUP_B__4_0_OFFSET))(this);
		}
	};
}
