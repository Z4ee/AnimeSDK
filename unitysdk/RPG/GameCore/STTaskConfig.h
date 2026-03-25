#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_STTASKCONFIG_METHOD_3_A92D01A7216B76BB_OFFSET UNITYSDK_OFFSET(0x1767D690)
#define RPG_GAMECORE_STTASKCONFIG_METHOD_3_CC4DA5CB5998AC1F_OFFSET UNITYSDK_OFFSET(0x1767D510)
#define RPG_GAMECORE_STTASKCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1767D780)
#define RPG_GAMECORE_STTASKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1767D750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int STTaskConfig_TypeDefinitionIndex = 18372;

	class STTaskConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::STTaskConfig*>*>** StaticGet__FromBinary_STTaskConfig_ImplDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::STTaskConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(STTaskConfig_TypeDefinitionIndex)->GetStaticField(0x6AF0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STTASKCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STTASKCONFIG__CCTOR_OFFSET))();
		}

		static ::System::Void Method_3_CC4DA5CB5998AC1F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::STTaskConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::STTaskConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STTASKCONFIG_METHOD_3_CC4DA5CB5998AC1F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A92D01A7216B76BB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::STTaskConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::STTaskConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STTASKCONFIG_METHOD_3_A92D01A7216B76BB_OFFSET))(a1, a2);
		}
	};
}
