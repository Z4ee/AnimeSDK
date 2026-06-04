#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2E81B539DAB8D165_1;
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHIMERAWORKROUNDINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB6C8BC0)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB6C8BF0)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO___C__SYNCNEWLYUNLOCKEDCHIMERAS_B__39_0_OFFSET UNITYSDK_OFFSET(0xB6C8C20)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO___C__SYNCUNLOCKEDCHIMERAS_B__38_0_OFFSET UNITYSDK_OFFSET(0xB6C8C00)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraWorkRoundInfo___c_TypeDefinitionIndex = 59445;

	class ChimeraWorkRoundInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_2E81B539DAB8D165_1*, ::System::UInt32>** StaticGet___9__39_0()
		{
			return (::System::Func_2<::Class_1_2E81B539DAB8D165_1*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraWorkRoundInfo___c_TypeDefinitionIndex)->GetStaticField(0x65250);
		}
		static ::RPG::Client::ChimeraWorkRoundInfo___c** StaticGet___9()
		{
			return (::RPG::Client::ChimeraWorkRoundInfo___c**)Il2CppClass::FromTypeDefinitionIndex(ChimeraWorkRoundInfo___c_TypeDefinitionIndex)->GetStaticField(0x65258);
		}
		static ::System::Func_2<::Class_1_2E81B539DAB8D165_1*, ::System::UInt32>** StaticGet___9__38_0()
		{
			return (::System::Func_2<::Class_1_2E81B539DAB8D165_1*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraWorkRoundInfo___c_TypeDefinitionIndex)->GetStaticField(0x65260);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _SyncUnlockedChimeras_b__38_0(::Class_1_2E81B539DAB8D165_1* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_2E81B539DAB8D165_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO___C__SYNCUNLOCKEDCHIMERAS_B__38_0_OFFSET))(this, a1);
		}

		::System::UInt32 _SyncNewlyUnlockedChimeras_b__39_0(::Class_1_2E81B539DAB8D165_1* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_2E81B539DAB8D165_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO___C__SYNCNEWLYUNLOCKEDCHIMERAS_B__39_0_OFFSET))(this, a1);
		}
	};
}
