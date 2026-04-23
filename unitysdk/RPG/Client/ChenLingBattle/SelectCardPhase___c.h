#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9FAD5D0)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9FAD610)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE___C__REFRESHCARD_B__3_0_OFFSET UNITYSDK_OFFSET(0x9FAD620)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE___C__REQUESTSELLHANDCARD_B__7_0_OFFSET UNITYSDK_OFFSET(0x9FAD640)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE___C__SELECTCARD_B__5_1_OFFSET UNITYSDK_OFFSET(0x9FAD630)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int SelectCardPhase___c_TypeDefinitionIndex = 70076;

	class SelectCardPhase___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Exception*>** StaticGet___9__7_0()
		{
			return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(SelectCardPhase___c_TypeDefinitionIndex)->GetStaticField(0x4F440);
		}
		static ::System::Action_1<::System::Exception*>** StaticGet___9__5_1()
		{
			return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(SelectCardPhase___c_TypeDefinitionIndex)->GetStaticField(0x4F448);
		}
		static ::RPG::Client::ChenLingBattle::SelectCardPhase___c** StaticGet___9()
		{
			return (::RPG::Client::ChenLingBattle::SelectCardPhase___c**)Il2CppClass::FromTypeDefinitionIndex(SelectCardPhase___c_TypeDefinitionIndex)->GetStaticField(0x4F450);
		}
		static ::System::Action_1<::System::Exception*>** StaticGet___9__3_0()
		{
			return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(SelectCardPhase___c_TypeDefinitionIndex)->GetStaticField(0x4F458);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE___C__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshCard_b__3_0(::System::Exception* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE___C__REFRESHCARD_B__3_0_OFFSET))(this, e);
		}

		::System::Void _SelectCard_b__5_1(::System::Exception* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE___C__SELECTCARD_B__5_1_OFFSET))(this, e);
		}

		::System::Void _RequestSellHandCard_b__7_0(::System::Exception* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE___C__REQUESTSELLHANDCARD_B__7_0_OFFSET))(this, e);
		}
	};
}
