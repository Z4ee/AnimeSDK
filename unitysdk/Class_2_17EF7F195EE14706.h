#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7AE99DF5F078ADF4.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace System { class String; }

#define CLASS_2_17EF7F195EE14706__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16A2FE30)
#define CLASS_2_17EF7F195EE14706__CTOR_OFFSET UNITYSDK_OFFSET(0x16A2FE10)

inline static constexpr unsigned int Class_2_17EF7F195EE14706_TypeDefinitionIndex = 9833;

class Class_2_17EF7F195EE14706 : public ::Class_1_7AE99DF5F078ADF4
{
public:
	::System::String* Field_2_0; // 0x30
	::System::String* Field_2_7; // 0x38

	::System::Void _ctor(::Foundation::AssetPath& a1, ::Foundation::AssetPath& a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath&, ::Foundation::AssetPath&, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_17EF7F195EE14706__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_1(::Class_2_17EF7F195EE14706* a1, ::Foundation::AssetPath& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_17EF7F195EE14706*, ::Foundation::AssetPath&))((::PBYTE)hIl2Cpp + CLASS_2_17EF7F195EE14706__CTOR_1_OFFSET))(this, a1, a2);
	}
};
