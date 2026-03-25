#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMECOMPONENTUPDATEHANDLERCOLLECTOR_ASSEMBLY_CSHARP_INIT_OFFSET UNITYSDK_OFFSET(0x9A398C0)
#define RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMECOMPONENTUPDATEHANDLERCOLLECTOR_ASSEMBLY_CSHARP__CTOR_OFFSET UNITYSDK_OFFSET(0x9A39BC0)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int LittleGameComponentUpdateHandlerCollector_Assembly_CSharp_TypeDefinitionIndex = 60110;

	class LittleGameComponentUpdateHandlerCollector_Assembly_CSharp : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_Field_1_0()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(LittleGameComponentUpdateHandlerCollector_Assembly_CSharp_TypeDefinitionIndex)->GetStaticField(0xC890);
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
