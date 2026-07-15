#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameComponentTypeInfoHelper_1_TypeDefinitionIndex = 55017;

	template <typename T>
	class GameComponentTypeInfoHelper_1 : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_ComponentTypeIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GameComponentTypeInfoHelper_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Boolean* StaticGet_IsTickImplemented()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GameComponentTypeInfoHelper_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Boolean* StaticGet_IsLateUpdateImplemented()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GameComponentTypeInfoHelper_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
