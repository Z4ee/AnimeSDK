#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FDRIStateMaskEnum.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_FIVEDIMRENDERINGITEMSTATEMAPPINGCONFIG_METHOD_2_DDFA9E36DCBD396A_OFFSET UNITYSDK_OFFSET(0x1D876BB0)
#define RPG_GAMECORE_FIVEDIMRENDERINGITEMSTATEMAPPINGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D876C90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimRenderingItemStateMappingConfig_TypeDefinitionIndex = 16544;

	class FiveDimRenderingItemStateMappingConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FDRIStateMaskEnum>* RenderingItemStateMapping; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMRENDERINGITEMSTATEMAPPINGCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_DDFA9E36DCBD396A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimRenderingItemStateMappingConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimRenderingItemStateMappingConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMRENDERINGITEMSTATEMAPPINGCONFIG_METHOD_2_DDFA9E36DCBD396A_OFFSET))(a1, a2);
		}
	};
}
