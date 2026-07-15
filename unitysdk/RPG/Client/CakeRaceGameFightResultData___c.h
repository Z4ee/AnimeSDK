#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CakeRaceGameFightResultParticipantData; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AACB110)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AACB150)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA___C___INITSORTEDPARTICIPANTLIST_B__23_0_OFFSET UNITYSDK_OFFSET(0x1AACB160)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA___C___INITSORTEDPARTICIPANTLIST_B__23_1_OFFSET UNITYSDK_OFFSET(0x1AACB170)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA___C___INITSORTEDPARTICIPANTLIST_B__23_2_OFFSET UNITYSDK_OFFSET(0x1AACB1C0)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA___C___INITSORTEDPARTICIPANTLIST_B__23_3_OFFSET UNITYSDK_OFFSET(0x1AACB1E0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceGameFightResultData___c_TypeDefinitionIndex = 60242;

	class CakeRaceGameFightResultData___c : public ::System::Object
	{
	public:
		static ::System::Func_3<::RPG::Client::CakeRaceGameFightResultParticipantData*, ::System::Int32, ::RPG::Client::CakeRaceGameFightResultParticipantData*>** StaticGet___9__23_3()
		{
			return (::System::Func_3<::RPG::Client::CakeRaceGameFightResultParticipantData*, ::System::Int32, ::RPG::Client::CakeRaceGameFightResultParticipantData*>**)Il2CppClass::FromTypeDefinitionIndex(CakeRaceGameFightResultData___c_TypeDefinitionIndex)->GetStaticField(0x5F800);
		}
		static ::RPG::Client::CakeRaceGameFightResultData___c** StaticGet___9()
		{
			return (::RPG::Client::CakeRaceGameFightResultData___c**)Il2CppClass::FromTypeDefinitionIndex(CakeRaceGameFightResultData___c_TypeDefinitionIndex)->GetStaticField(0x5F808);
		}
		static ::System::Func_2<::RPG::Client::CakeRaceGameFightResultParticipantData*, ::System::Boolean>** StaticGet___9__23_2()
		{
			return (::System::Func_2<::RPG::Client::CakeRaceGameFightResultParticipantData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(CakeRaceGameFightResultData___c_TypeDefinitionIndex)->GetStaticField(0x5F810);
		}
		static ::System::Func_2<::RPG::Client::CakeRaceGameFightResultParticipantData*, ::System::Int64>** StaticGet___9__23_1()
		{
			return (::System::Func_2<::RPG::Client::CakeRaceGameFightResultParticipantData*, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(CakeRaceGameFightResultData___c_TypeDefinitionIndex)->GetStaticField(0x5F818);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::CakeRaceGameFightResultParticipantData*>, ::RPG::Client::CakeRaceGameFightResultParticipantData*>** StaticGet___9__23_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::CakeRaceGameFightResultParticipantData*>, ::RPG::Client::CakeRaceGameFightResultParticipantData*>**)Il2CppClass::FromTypeDefinitionIndex(CakeRaceGameFightResultData___c_TypeDefinitionIndex)->GetStaticField(0x5F820);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::CakeRaceGameFightResultParticipantData* __InitSortedParticipantList_b__23_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::CakeRaceGameFightResultParticipantData*> a1)
		{
			return ((::RPG::Client::CakeRaceGameFightResultParticipantData*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::CakeRaceGameFightResultParticipantData*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA___C___INITSORTEDPARTICIPANTLIST_B__23_0_OFFSET))(this, a1);
		}

		::System::Int64 __InitSortedParticipantList_b__23_1(::RPG::Client::CakeRaceGameFightResultParticipantData* a1)
		{
			return ((::System::Int64(*)(::PVOID, ::RPG::Client::CakeRaceGameFightResultParticipantData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA___C___INITSORTEDPARTICIPANTLIST_B__23_1_OFFSET))(this, a1);
		}

		::System::Boolean __InitSortedParticipantList_b__23_2(::RPG::Client::CakeRaceGameFightResultParticipantData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CakeRaceGameFightResultParticipantData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA___C___INITSORTEDPARTICIPANTLIST_B__23_2_OFFSET))(this, a1);
		}

		::RPG::Client::CakeRaceGameFightResultParticipantData* __InitSortedParticipantList_b__23_3(::RPG::Client::CakeRaceGameFightResultParticipantData* a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::CakeRaceGameFightResultParticipantData*(*)(::PVOID, ::RPG::Client::CakeRaceGameFightResultParticipantData*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA___C___INITSORTEDPARTICIPANTLIST_B__23_3_OFFSET))(this, a1, a2);
		}
	};
}
