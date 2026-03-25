#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MARBLETASKCONFIG_METHOD_2_209BF5C52BDE17F7_OFFSET UNITYSDK_OFFSET(0x1739AD90)
#define RPG_GAMECORE_MARBLETASKCONFIG_METHOD_2_A165820FBE30C8ED_OFFSET UNITYSDK_OFFSET(0x1739AF50)
#define RPG_GAMECORE_MARBLETASKCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1739AFB0)
#define RPG_GAMECORE_MARBLETASKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17386D00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleTaskConfig_TypeDefinitionIndex = 15410;

	class MarbleTaskConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleTaskConfig*>*>** StaticGet__FromBinary_MarbleTaskConfig_ImplDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleTaskConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(MarbleTaskConfig_TypeDefinitionIndex)->GetStaticField(0x27BC0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLETASKCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLETASKCONFIG__CCTOR_OFFSET))();
		}

		static ::System::Void Method_2_209BF5C52BDE17F7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleTaskConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleTaskConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLETASKCONFIG_METHOD_2_209BF5C52BDE17F7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_A165820FBE30C8ED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleTaskConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleTaskConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLETASKCONFIG_METHOD_2_A165820FBE30C8ED_OFFSET))(a1, a2);
		}
	};
}
