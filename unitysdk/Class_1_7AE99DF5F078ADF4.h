#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_7AE99DF5F078ADF4__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3E06F0)

inline static constexpr unsigned int Class_1_7AE99DF5F078ADF4_TypeDefinitionIndex = 17888;

class Class_1_7AE99DF5F078ADF4 : public ::System::Object
{
public:
	::Foundation::AssetPath Field_1_1; // 0x10
	::Foundation::AssetPath Field_1_0; // 0x20

	::System::Void _ctor(::Foundation::AssetPath& a1, ::Foundation::AssetPath& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath&, ::Foundation::AssetPath&))((::PBYTE)hIl2Cpp + CLASS_1_7AE99DF5F078ADF4__CTOR_OFFSET))(this, a1, a2);
	}
};
