#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STAGEPVSOFFLINEVISIBLITYINFO_METHOD_2_CAE35A46A25C51B5_OFFSET UNITYSDK_OFFSET(0x1B0B2D90)
#define RPG_GAMECORE_STAGEPVSOFFLINEVISIBLITYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0B31F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StagePVSOfflineVisiblityInfo_TypeDefinitionIndex = 18431;

	class StagePVSOfflineVisiblityInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::UInt16>* ObjIdx; // 0x10
		::Il2CppArray<::System::UInt32>* ObjIdxEx; // 0x18
		::Il2CppArray<::System::UInt16>* Visibility; // 0x20
		::System::Single VisibilityThreshold; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPVSOFFLINEVISIBLITYINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CAE35A46A25C51B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StagePVSOfflineVisiblityInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StagePVSOfflineVisiblityInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPVSOFFLINEVISIBLITYINFO_METHOD_2_CAE35A46A25C51B5_OFFSET))(a1, a2);
		}
	};
}
