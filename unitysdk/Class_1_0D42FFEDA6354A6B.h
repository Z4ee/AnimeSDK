#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/InputSignalType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_0D42FFEDA6354A6B__CTOR_OFFSET UNITYSDK_OFFSET(0x1C36B100)

inline static constexpr unsigned int Class_1_0D42FFEDA6354A6B_TypeDefinitionIndex = 41573;

class Class_1_0D42FFEDA6354A6B : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_FGGNLDMCMNA()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0D42FFEDA6354A6B_TypeDefinitionIndex)->GetStaticField(0x13EC0);
	}
	::System::Collections::Generic::HashSet_1<::RPG::Client::LittleGame::FourRotateVoxel::InputSignalType>* FCCACCAJHBL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D42FFEDA6354A6B__CTOR_OFFSET))(this);
	}
};
