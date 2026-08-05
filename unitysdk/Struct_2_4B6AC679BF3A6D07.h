#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LiveHouseSceneSpotStruct.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_4B6AC679BF3A6D07__CCTOR_OFFSET UNITYSDK_OFFSET(0x18DBBC70)

inline static constexpr unsigned int Struct_2_4B6AC679BF3A6D07_TypeDefinitionIndex = 89668;

struct alignas(8) Struct_2_4B6AC679BF3A6D07
{
	static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_Field_2_1()
	{
		return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_4B6AC679BF3A6D07_TypeDefinitionIndex)->GetStaticField(0x357D0);
	}
	static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_Field_2_0()
	{
		return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_4B6AC679BF3A6D07_TypeDefinitionIndex)->GetStaticField(0x357D8);
	}
	::MoleMole::LiveHouseSceneSpotStruct Field_2_3; // 0x10
	::System::Int32 Field_2_2; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_4B6AC679BF3A6D07__CCTOR_OFFSET))();
	}
};
