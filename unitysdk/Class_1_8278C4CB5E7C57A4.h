#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/SpawnEntityMode.h"
#include "unitysdk/System/Object.h"

class Class_1_829CFD6018DBC4E4;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8278C4CB5E7C57A4__CTOR_OFFSET UNITYSDK_OFFSET(0x18ACEE30)

inline static constexpr unsigned int Class_1_8278C4CB5E7C57A4_TypeDefinitionIndex = 34698;

class Class_1_8278C4CB5E7C57A4 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_829CFD6018DBC4E4*>* Field_1_0; // 0x10
	::System::UInt64 Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x20
	::RPG::Client::LittleGameShare::SpawnEntityMode Field_1_3; // 0x24
	::System::Int32 Field_1_4; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8278C4CB5E7C57A4__CTOR_OFFSET))(this);
	}
};
