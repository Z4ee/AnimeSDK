#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMECOMPONENTUPDATEHANDLERCOLLECTOR_ASSEMBLY_CSHARP_INIT_OFFSET UNITYSDK_OFFSET(0xBE47540)
#define RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMECOMPONENTUPDATEHANDLERCOLLECTOR_ASSEMBLY_CSHARP__CTOR_OFFSET UNITYSDK_OFFSET(0xBE47810)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int LittleGameComponentUpdateHandlerCollector_Assembly_CSharp_TypeDefinitionIndex = 68497;

	class LittleGameComponentUpdateHandlerCollector_Assembly_CSharp : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_Field_1_0()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(LittleGameComponentUpdateHandlerCollector_Assembly_CSharp_TypeDefinitionIndex)->GetStaticField(0xF470);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMECOMPONENTUPDATEHANDLERCOLLECTOR_ASSEMBLY_CSHARP__CTOR_OFFSET))(this);
		}

		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMECOMPONENTUPDATEHANDLERCOLLECTOR_ASSEMBLY_CSHARP_INIT_OFFSET))();
		}
	};
}
