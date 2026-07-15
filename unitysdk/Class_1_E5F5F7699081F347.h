#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/InputSignalType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_E5F5F7699081F347__CTOR_OFFSET UNITYSDK_OFFSET(0x1A025AE0)

inline static constexpr unsigned int Class_1_E5F5F7699081F347_TypeDefinitionIndex = 40621;

class Class_1_E5F5F7699081F347 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E5F5F7699081F347_TypeDefinitionIndex)->GetStaticField(0xDF60);
	}
	::System::Collections::Generic::HashSet_1<::RPG::Client::LittleGame::FourRotateVoxel::InputSignalType>* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5F5F7699081F347__CTOR_OFFSET))(this);
	}
};
