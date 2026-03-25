#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }
template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;
template <typename T> class Class_1_F5630E87DACEF386_DelegateToBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int DynamicValue___O_TypeDefinitionIndex = 22587;

	class DynamicValue___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateToBinary_1<::RPG::GameCore::DynamicValue*>** StaticGet__1___ToBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateToBinary_1<::RPG::GameCore::DynamicValue*>**)Il2CppClass::FromTypeDefinitionIndex(DynamicValue___O_TypeDefinitionIndex)->GetStaticField(0x2B500);
		}
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DynamicValue*>** StaticGet__0___FromByteBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::DynamicValue*>**)Il2CppClass::FromTypeDefinitionIndex(DynamicValue___O_TypeDefinitionIndex)->GetStaticField(0x2B508);
		}
	};
}
