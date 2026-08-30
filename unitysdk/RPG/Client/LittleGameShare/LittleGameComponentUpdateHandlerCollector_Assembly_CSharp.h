#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMECOMPONENTUPDATEHANDLERCOLLECTOR_ASSEMBLY_CSHARP_INIT_OFFSET UNITYSDK_OFFSET(0x1860B0E0)
#define RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMECOMPONENTUPDATEHANDLERCOLLECTOR_ASSEMBLY_CSHARP__CTOR_OFFSET UNITYSDK_OFFSET(0x1860B690)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int LittleGameComponentUpdateHandlerCollector_Assembly_CSharp_TypeDefinitionIndex = 73248;

	class LittleGameComponentUpdateHandlerCollector_Assembly_CSharp : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_DBAHJNANIOG()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(LittleGameComponentUpdateHandlerCollector_Assembly_CSharp_TypeDefinitionIndex)->GetStaticField(0x14710);
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
