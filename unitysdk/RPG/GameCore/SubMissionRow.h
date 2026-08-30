#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SUBMISSIONROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1D579BD0)
#define RPG_GAMECORE_SUBMISSIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D579DB0)
#define RPG_GAMECORE_SUBMISSIONROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1D5809F0)
#define RPG_GAMECORE_SUBMISSIONROW_GETMAINMISSIONIDBYSUBMISSION_OFFSET UNITYSDK_OFFSET(0x1D580D50)
#define RPG_GAMECORE_SUBMISSIONROW_GET_INITED_OFFSET UNITYSDK_OFFSET(0x1D580A80)
#define RPG_GAMECORE_SUBMISSIONROW_GET_MAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x1D580F60)
#define RPG_GAMECORE_SUBMISSIONROW_LAZYLOADLEGACYIDMAPPING_OFFSET UNITYSDK_OFFSET(0x1D580AA0)
#define RPG_GAMECORE_SUBMISSIONROW_RESET_OFFSET UNITYSDK_OFFSET(0x1D580A50)
#define RPG_GAMECORE_SUBMISSIONROW_SET_INITED_OFFSET UNITYSDK_OFFSET(0x1D580A90)
#define RPG_GAMECORE_SUBMISSIONROW__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D580F90)
#define RPG_GAMECORE_SUBMISSIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D580A70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SubMissionRow_TypeDefinitionIndex = 14032;

	class SubMissionRow : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_MISSION_ID_PAIR_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(SubMissionRow_TypeDefinitionIndex)->GetStaticField(0x21960);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>** StaticGet__LegacyMissionIDPair()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(SubMissionRow_TypeDefinitionIndex)->GetStaticField(0x21968);
		}
		::System::Boolean _Inited_k__BackingField; // 0x10
		::System::UInt32 SubMissionID; // 0x14
		::RPG::Client::TextID TargetText; // 0x18
		::RPG::Client::TextID DescrptionText; // 0x28

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
