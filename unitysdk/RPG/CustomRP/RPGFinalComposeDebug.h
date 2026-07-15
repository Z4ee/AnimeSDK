#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CUSTOMRP_RPGFINALCOMPOSEDEBUG__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C0F340)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGFinalComposeDebug_TypeDefinitionIndex = 36265;

	class RPGFinalComposeDebug : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_DumpTonemappingDataFileName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RPGFinalComposeDebug_TypeDefinitionIndex)->GetStaticField(0x3A0D0);
		}
		static ::System::Boolean* StaticGet_NeedDumpTonemappingData()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RPGFinalComposeDebug_TypeDefinitionIndex)->GetStaticField(0x9B50);
		}
		static ::System::Boolean* StaticGet_DebugHDROutputIntermediate()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RPGFinalComposeDebug_TypeDefinitionIndex)->GetStaticField(0x9B51);
		}
		static ::System::Boolean* StaticGet_DebugEnableGamutClipping()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RPGFinalComposeDebug_TypeDefinitionIndex)->GetStaticField(0x9B52);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSEDEBUG__CCTOR_OFFSET))();
		}
	};
}
