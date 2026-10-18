#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_UNITYTIMETOOL_METHOD_1_3150507749BCEAEC_OFFSET UNITYSDK_OFFSET(0x1EC4BE40)
#define RPG_UNITYTIMETOOL_METHOD_1_A5B6063FFC26FC8F_OFFSET UNITYSDK_OFFSET(0x1EC4BEF0)
#define RPG_UNITYTIMETOOL_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x1EC4C070)
#define RPG_UNITYTIMETOOL__INIT_OFFSET UNITYSDK_OFFSET(0x1EC4BEB0)

namespace RPG
{
	inline static constexpr unsigned int UnityTimeTool_TypeDefinitionIndex = 35177;

	class UnityTimeTool : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_LOOEBDMMDGI()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(UnityTimeTool_TypeDefinitionIndex)->GetStaticField(0x2DD0);
		}

		static ::System::Single Method_1_3150507749BCEAEC()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_UNITYTIMETOOL_METHOD_1_3150507749BCEAEC_OFFSET))();
		}

		static ::System::Void _Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_UNITYTIMETOOL__INIT_OFFSET))();
		}

		static ::System::Void Method_1_F8C7231308CD2C82()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_UNITYTIMETOOL_METHOD_1_F8C7231308CD2C82_OFFSET))();
		}

		static ::System::Void Method_1_A5B6063FFC26FC8F()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_UNITYTIMETOOL_METHOD_1_A5B6063FFC26FC8F_OFFSET))();
		}
	};
}
