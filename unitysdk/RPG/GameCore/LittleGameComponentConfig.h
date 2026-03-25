#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_LITTLEGAMECOMPONENTCONFIG_METHOD_2_023E3262BB481847_OFFSET UNITYSDK_OFFSET(0x17355660)
#define RPG_GAMECORE_LITTLEGAMECOMPONENTCONFIG_METHOD_2_EEF854FCE3DA42CE_OFFSET UNITYSDK_OFFSET(0x173557E0)
#define RPG_GAMECORE_LITTLEGAMECOMPONENTCONFIG_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17355840)
#define RPG_GAMECORE_LITTLEGAMECOMPONENTCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x17355850)
#define RPG_GAMECORE_LITTLEGAMECOMPONENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17354060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameComponentConfig_TypeDefinitionIndex = 17288;

	class LittleGameComponentConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameComponentConfig*>*>** StaticGet__FromBinary_LittleGameComponentConfig_ImplDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameComponentConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(LittleGameComponentConfig_TypeDefinitionIndex)->GetStaticField(0x26350);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECOMPONENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECOMPONENTCONFIG__CCTOR_OFFSET))();
		}

		static ::System::Void Method_2_023E3262BB481847(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameComponentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameComponentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECOMPONENTCONFIG_METHOD_2_023E3262BB481847_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_EEF854FCE3DA42CE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameComponentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECOMPONENTCONFIG_METHOD_2_EEF854FCE3DA42CE_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECOMPONENTCONFIG_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
		}
	};
}
