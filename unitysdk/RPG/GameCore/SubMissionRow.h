#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SubMissionInfoConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SUBMISSIONROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x17787F10)
#define RPG_GAMECORE_SUBMISSIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x177880F0)
#define RPG_GAMECORE_SUBMISSIONROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1778A430)
#define RPG_GAMECORE_SUBMISSIONROW_GETMAINMISSIONIDBYSUBMISSION_OFFSET UNITYSDK_OFFSET(0x1778A780)
#define RPG_GAMECORE_SUBMISSIONROW_GETSUBMISSIONINFOCONFIGFOREDITOR_OFFSET UNITYSDK_OFFSET(0x1778A9C0)
#define RPG_GAMECORE_SUBMISSIONROW_GET_INITED_OFFSET UNITYSDK_OFFSET(0x1778A4C0)
#define RPG_GAMECORE_SUBMISSIONROW_GET_MAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x1778A990)
#define RPG_GAMECORE_SUBMISSIONROW_LAZYLOADLEGACYIDMAPPING_OFFSET UNITYSDK_OFFSET(0x1778A4E0)
#define RPG_GAMECORE_SUBMISSIONROW_RESET_OFFSET UNITYSDK_OFFSET(0x1778A490)
#define RPG_GAMECORE_SUBMISSIONROW_SET_INITED_OFFSET UNITYSDK_OFFSET(0x1778A4D0)
#define RPG_GAMECORE_SUBMISSIONROW__CCTOR_OFFSET UNITYSDK_OFFSET(0x1778AB40)
#define RPG_GAMECORE_SUBMISSIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1778A4B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SubMissionRow_TypeDefinitionIndex = 12933;

	class SubMissionRow : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>** StaticGet__LegacyMissionIDPair()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(SubMissionRow_TypeDefinitionIndex)->GetStaticField(0x129A0);
		}
		static ::System::String** StaticGet_MISSION_ID_PAIR_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(SubMissionRow_TypeDefinitionIndex)->GetStaticField(0x129A8);
		}
		::RPG::GameCore::SubMissionInfoConfig* _SubMissionInfoConfig; // 0x10
		::RPG::Client::TextID DescrptionText; // 0x18
		::System::UInt32 SubMissionID; // 0x28
		::System::Boolean _Inited_k__BackingField; // 0x2C
		::RPG::Client::TextID TargetText; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONROW__CCTOR_OFFSET))();
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> offsetData)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONROW_FROMTABLEOFFSET_OFFSET))(this, offsetData);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::SubMissionRow* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SubMissionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONROW_FROMBINARYWITHOUTNEW_OFFSET))(array, val);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::SubMissionRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SubMissionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONROW_FROMBINARY_OFFSET))(array, val);
		}

		::System::Boolean get_Inited()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONROW_GET_INITED_OFFSET))(this);
		}

		::System::Void set_Inited(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONROW_SET_INITED_OFFSET))(this, value);
		}

		static ::System::Void LazyLoadLegacyIDMapping()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONROW_LAZYLOADLEGACYIDMAPPING_OFFSET))();
		}

		static ::System::UInt32 GetMainMissionIDBySubMission(::System::UInt32 subMissionID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONROW_GETMAINMISSIONIDBYSUBMISSION_OFFSET))(subMissionID);
		}

		::System::UInt32 get_MainMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONROW_GET_MAINMISSIONID_OFFSET))(this);
		}

		::RPG::GameCore::SubMissionInfoConfig* GetSubMissionInfoConfigForEditor()
		{
			return ((::RPG::GameCore::SubMissionInfoConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONROW_GETSUBMISSIONINFOCONFIGFOREDITOR_OFFSET))(this);
		}
	};
}
