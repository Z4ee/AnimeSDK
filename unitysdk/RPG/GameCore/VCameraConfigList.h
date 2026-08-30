#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class VCameraConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_VCAMERACONFIGLIST_METHOD_2_6BFD12A4FF85E4C7_OFFSET UNITYSDK_OFFSET(0x1D629900)
#define RPG_GAMECORE_VCAMERACONFIGLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6299E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VCameraConfigList_TypeDefinitionIndex = 16271;

	class VCameraConfigList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::VCameraConfig*>* Configs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERACONFIGLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6BFD12A4FF85E4C7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VCameraConfigList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VCameraConfigList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERACONFIGLIST_METHOD_2_6BFD12A4FF85E4C7_OFFSET))(a1, a2);
		}
	};
}
