#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREFOURROTATEVOXELCURRENTDIRECTION_METHOD_4_117D088C3ED4A5D8_OFFSET UNITYSDK_OFFSET(0x19CE5F40)
#define RPG_GAMECORE_BYCOMPAREFOURROTATEVOXELCURRENTDIRECTION_METHOD_4_2D3203A128553FFE_OFFSET UNITYSDK_OFFSET(0x19CE5D40)
#define RPG_GAMECORE_BYCOMPAREFOURROTATEVOXELCURRENTDIRECTION_METHOD_4_9B59605BE99DCEDF_OFFSET UNITYSDK_OFFSET(0x19CE5F10)
#define RPG_GAMECORE_BYCOMPAREFOURROTATEVOXELCURRENTDIRECTION_METHOD_4_E4DEFE1BC437F213_OFFSET UNITYSDK_OFFSET(0x19CE5D80)
#define RPG_GAMECORE_BYCOMPAREFOURROTATEVOXELCURRENTDIRECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19CE5D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareFourRotateVoxelCurrentDirection_TypeDefinitionIndex = 20205;

	class ByCompareFourRotateVoxelCurrentDirection : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Int32 Direction; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFOURROTATEVOXELCURRENTDIRECTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2D3203A128553FFE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareFourRotateVoxelCurrentDirection*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareFourRotateVoxelCurrentDirection*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFOURROTATEVOXELCURRENTDIRECTION_METHOD_4_2D3203A128553FFE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E4DEFE1BC437F213(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareFourRotateVoxelCurrentDirection* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareFourRotateVoxelCurrentDirection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFOURROTATEVOXELCURRENTDIRECTION_METHOD_4_E4DEFE1BC437F213_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9B59605BE99DCEDF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFourRotateVoxelCurrentDirection*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFourRotateVoxelCurrentDirection*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFOURROTATEVOXELCURRENTDIRECTION_METHOD_4_9B59605BE99DCEDF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_117D088C3ED4A5D8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFourRotateVoxelCurrentDirection* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFourRotateVoxelCurrentDirection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFOURROTATEVOXELCURRENTDIRECTION_METHOD_4_117D088C3ED4A5D8_OFFSET))(a1, a2);
		}
	};
}
