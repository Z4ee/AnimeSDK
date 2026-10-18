#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SUBMISSIONROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1DB301C0)
#define RPG_GAMECORE_SUBMISSIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB303A0)
#define RPG_GAMECORE_SUBMISSIONROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1DB36FE0)
#define RPG_GAMECORE_SUBMISSIONROW_GETMAINMISSIONIDBYSUBMISSION_OFFSET UNITYSDK_OFFSET(0x1DB37340)
#define RPG_GAMECORE_SUBMISSIONROW_GET_INITED_OFFSET UNITYSDK_OFFSET(0x1DB37070)
#define RPG_GAMECORE_SUBMISSIONROW_GET_MAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x1DB37550)
#define RPG_GAMECORE_SUBMISSIONROW_LAZYLOADLEGACYIDMAPPING_OFFSET UNITYSDK_OFFSET(0x1DB37090)
#define RPG_GAMECORE_SUBMISSIONROW_RESET_OFFSET UNITYSDK_OFFSET(0x1DB37040)
#define RPG_GAMECORE_SUBMISSIONROW_SET_INITED_OFFSET UNITYSDK_OFFSET(0x1DB37080)
#define RPG_GAMECORE_SUBMISSIONROW__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DB37580)
#define RPG_GAMECORE_SUBMISSIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB37060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SubMissionRow_TypeDefinitionIndex = 14139;

	class SubMissionRow : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>** StaticGet__LegacyMissionIDPair()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(SubMissionRow_TypeDefinitionIndex)->GetStaticField(0x1FEB0);
		}
		static ::System::String** StaticGet_MISSION_ID_PAIR_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(SubMissionRow_TypeDefinitionIndex)->GetStaticField(0x1FEB8);
		}
		::RPG::Client::TextID DescrptionText; // 0x10
		::RPG::Client::TextID TargetText; // 0x20
		::System::UInt32 SubMissionID; // 0x30
		::System::Boolean _Inited_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONROW__CCTOR_OFFSET))();
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SubMissionRow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SubMissionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SubMissionRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SubMissionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONROW_FROMBINARY_OFFSET))(a1, a2);
		}

		::System::Boolean get_Inited()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONROW_GET_INITED_OFFSET))(this);
		}

		::System::Void set_Inited(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONROW_SET_INITED_OFFSET))(this, a1);
		}

		static ::System::Void LazyLoadLegacyIDMapping()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONROW_LAZYLOADLEGACYIDMAPPING_OFFSET))();
		}

		static ::System::UInt32 GetMainMissionIDBySubMission(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONROW_GETMAINMISSIONIDBYSUBMISSION_OFFSET))(a1);
		}

		::System::UInt32 get_MainMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONROW_GET_MAINMISSIONID_OFFSET))(this);
		}
	};
}
