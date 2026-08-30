#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_1CBA230307F9C289_32;
namespace RPG::Client { class FightFestChallengeLevelData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_CEE7CE649BE83DBF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7FCF0)
#define STRUCT_2_CEE7CE649BE83DBF_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x7FD00)
#define STRUCT_2_CEE7CE649BE83DBF_METHOD_2_BA52C45F577A134E_OFFSET UNITYSDK_OFFSET(0xB6E3850)

inline static constexpr unsigned int Struct_2_CEE7CE649BE83DBF_TypeDefinitionIndex = 64255;

struct alignas(8) Struct_2_CEE7CE649BE83DBF
{
	::RPG::Client::FightFestChallengeLevelData* LBCDHCAMJPP; // 0x10
	::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_32*>* BFLKGPLDHJK; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* IHEOAPPAGNJ; // 0x20

	static ::Struct_2_CEE7CE649BE83DBF Method_2_BA52C45F577A134E(::RPG::Client::FightFestChallengeLevelData* a1, ::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_32*>* a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3)
	{
		return ((::Struct_2_CEE7CE649BE83DBF(*)(::RPG::Client::FightFestChallengeLevelData*, ::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_32*>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + STRUCT_2_CEE7CE649BE83DBF_METHOD_2_BA52C45F577A134E_OFFSET))(a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CEE7CE649BE83DBF_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CEE7CE649BE83DBF_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}
};
