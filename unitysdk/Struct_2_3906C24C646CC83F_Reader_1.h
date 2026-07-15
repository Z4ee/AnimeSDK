#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3906C24C646CC83F.h"
#include "unitysdk/System/Object.h"

namespace RPG::GCFreeClosure { template <typename T1, typename T2> class FuncByRef_2; }

inline static constexpr unsigned int Struct_2_3906C24C646CC83F_Reader_1_TypeDefinitionIndex = 6921;

template <typename T>
class Struct_2_3906C24C646CC83F_Reader_1 : public ::System::Object
{
public:
	static ::RPG::GCFreeClosure::FuncByRef_2<::Struct_2_3906C24C646CC83F, T>** StaticGet_InternalInvoke()
	{
		return (::RPG::GCFreeClosure::FuncByRef_2<::Struct_2_3906C24C646CC83F, T>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_3906C24C646CC83F_Reader_1_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::RPG::GCFreeClosure::FuncByRef_2<::Struct_2_3906C24C646CC83F, T>** StaticGet_Default()
	{
		return (::RPG::GCFreeClosure::FuncByRef_2<::Struct_2_3906C24C646CC83F, T>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_3906C24C646CC83F_Reader_1_TypeDefinitionIndex)->GetStaticField(0x0);
	}
};
