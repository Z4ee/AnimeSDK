#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TASKCONFIG_GET_ISCLIENTONLY_OFFSET UNITYSDK_OFFSET(0x177D88D0)
#define RPG_GAMECORE_TASKCONFIG_METHOD_2_1ED259C7ABF370D3_OFFSET UNITYSDK_OFFSET(0x177D8680)
#define RPG_GAMECORE_TASKCONFIG_METHOD_2_577BAC1DE9DE59A7_OFFSET UNITYSDK_OFFSET(0x177D8800)
#define RPG_GAMECORE_TASKCONFIG_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x177D88C0)
#define RPG_GAMECORE_TASKCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x177D8910)
#define RPG_GAMECORE_TASKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x177D8900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TaskConfig_TypeDefinitionIndex = 22010;

	class TaskConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TaskConfig*>*>** StaticGet__FromBinary_TaskConfig_ImplDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TaskConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(TaskConfig_TypeDefinitionIndex)->GetStaticField(0x149A0);
		}
		::System::Boolean TaskEnabled; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONFIG__CCTOR_OFFSET))();
		}

		static ::System::Void Method_2_1ED259C7ABF370D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TaskConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TaskConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONFIG_METHOD_2_1ED259C7ABF370D3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_577BAC1DE9DE59A7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TaskConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TaskConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONFIG_METHOD_2_577BAC1DE9DE59A7_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONFIG_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
		}

		::System::Boolean get_IsClientOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONFIG_GET_ISCLIENTONLY_OFFSET))(this);
		}
	};
}
