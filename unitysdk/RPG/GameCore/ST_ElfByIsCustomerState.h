#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElfCustomerState.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ST_ELFBYISCUSTOMERSTATE_METHOD_4_37115905C1023B5A_OFFSET UNITYSDK_OFFSET(0x1B780050)
#define RPG_GAMECORE_ST_ELFBYISCUSTOMERSTATE_METHOD_4_5624341840F4A5CE_OFFSET UNITYSDK_OFFSET(0x1B77FE70)
#define RPG_GAMECORE_ST_ELFBYISCUSTOMERSTATE_METHOD_4_9504EF9988B6AA4D_OFFSET UNITYSDK_OFFSET(0x1B780020)
#define RPG_GAMECORE_ST_ELFBYISCUSTOMERSTATE_METHOD_4_96C071E485E83D9F_OFFSET UNITYSDK_OFFSET(0x1B77FE30)
#define RPG_GAMECORE_ST_ELFBYISCUSTOMERSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B77FE60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ElfByIsCustomerState_TypeDefinitionIndex = 20742;

	class ST_ElfByIsCustomerState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ElfCustomerState State; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_ELFBYISCUSTOMERSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_96C071E485E83D9F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ElfByIsCustomerState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ElfByIsCustomerState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_ELFBYISCUSTOMERSTATE_METHOD_4_96C071E485E83D9F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5624341840F4A5CE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ElfByIsCustomerState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ElfByIsCustomerState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_ELFBYISCUSTOMERSTATE_METHOD_4_5624341840F4A5CE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9504EF9988B6AA4D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ElfByIsCustomerState*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ElfByIsCustomerState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_ELFBYISCUSTOMERSTATE_METHOD_4_9504EF9988B6AA4D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_37115905C1023B5A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ElfByIsCustomerState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ElfByIsCustomerState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_ELFBYISCUSTOMERSTATE_METHOD_4_37115905C1023B5A_OFFSET))(a1, a2);
		}
	};
}
