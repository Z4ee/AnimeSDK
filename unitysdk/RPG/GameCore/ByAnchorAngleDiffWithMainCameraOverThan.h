#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYANCHORANGLEDIFFWITHMAINCAMERAOVERTHAN_METHOD_4_75F946FE5271502F_OFFSET UNITYSDK_OFFSET(0x1CE99860)
#define RPG_GAMECORE_BYANCHORANGLEDIFFWITHMAINCAMERAOVERTHAN_METHOD_4_A0E262A979229EA8_OFFSET UNITYSDK_OFFSET(0x1CE99890)
#define RPG_GAMECORE_BYANCHORANGLEDIFFWITHMAINCAMERAOVERTHAN_METHOD_4_C36F8FB40AB2F684_OFFSET UNITYSDK_OFFSET(0x1CE99640)
#define RPG_GAMECORE_BYANCHORANGLEDIFFWITHMAINCAMERAOVERTHAN_METHOD_4_CB35697C455B036D_OFFSET UNITYSDK_OFFSET(0x1CE99600)
#define RPG_GAMECORE_BYANCHORANGLEDIFFWITHMAINCAMERAOVERTHAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE99630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByAnchorAngleDiffWithMainCameraOverThan_TypeDefinitionIndex = 22044;

	class ByAnchorAngleDiffWithMainCameraOverThan : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* AreaName; // 0x20
		::System::String* AnchorName; // 0x28
		::RPG::GameCore::DynamicString* LevelAreaCameraKey; // 0x30
		::System::Single Angle; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANCHORANGLEDIFFWITHMAINCAMERAOVERTHAN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CB35697C455B036D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByAnchorAngleDiffWithMainCameraOverThan*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByAnchorAngleDiffWithMainCameraOverThan*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANCHORANGLEDIFFWITHMAINCAMERAOVERTHAN_METHOD_4_CB35697C455B036D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C36F8FB40AB2F684(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByAnchorAngleDiffWithMainCameraOverThan* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByAnchorAngleDiffWithMainCameraOverThan*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANCHORANGLEDIFFWITHMAINCAMERAOVERTHAN_METHOD_4_C36F8FB40AB2F684_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_75F946FE5271502F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAnchorAngleDiffWithMainCameraOverThan*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAnchorAngleDiffWithMainCameraOverThan*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANCHORANGLEDIFFWITHMAINCAMERAOVERTHAN_METHOD_4_75F946FE5271502F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A0E262A979229EA8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAnchorAngleDiffWithMainCameraOverThan* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAnchorAngleDiffWithMainCameraOverThan*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANCHORANGLEDIFFWITHMAINCAMERAOVERTHAN_METHOD_4_A0E262A979229EA8_OFFSET))(a1, a2);
		}
	};
}
