#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CUSTOMRP_RPGFINALCOMPOSEDEBUG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1859EC70)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGFinalComposeDebug_TypeDefinitionIndex = 37124;

	class RPGFinalComposeDebug : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_DumpTonemappingDataFileName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RPGFinalComposeDebug_TypeDefinitionIndex)->GetStaticField(0x39F50);
		}
		static ::System::Boolean* StaticGet_DebugEnableGamutClipping()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RPGFinalComposeDebug_TypeDefinitionIndex)->GetStaticField(0xEEA0);
		}
		static ::System::Boolean* StaticGet_NeedDumpTonemappingData()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RPGFinalComposeDebug_TypeDefinitionIndex)->GetStaticField(0xEEA1);
		}
		static ::System::Boolean* StaticGet_DebugHDROutputIntermediate()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RPGFinalComposeDebug_TypeDefinitionIndex)->GetStaticField(0xEEA2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSEDEBUG__CCTOR_OFFSET))();
		}
	};
}
