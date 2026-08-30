#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CONTENTPACKAGECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D000470)
#define RPG_GAMECORE_CONTENTPACKAGECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D000780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ContentPackageConfigRow_TypeDefinitionIndex = 12987;

	class ContentPackageConfigRow : public ::System::Object
	{
	public:
		::System::String* GuideConditions; // 0x10
		::Il2CppArray<::System::UInt32>* MainMissionIDList; // 0x18
		::System::String* ReleaseCondition; // 0x20
		::System::String* EarlyAccessCondition; // 0x28
		::System::UInt32 InitEntranceID; // 0x30
		::System::UInt32 AfterGuideEntranceID; // 0x34
		::System::Boolean IsHaveResidentPart; // 0x38
		::System::UInt32 ActivityModuleID; // 0x3C
		::System::UInt32 ContentID; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONTENTPACKAGECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ContentPackageConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ContentPackageConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONTENTPACKAGECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
