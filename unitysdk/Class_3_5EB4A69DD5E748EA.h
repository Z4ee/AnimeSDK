#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_5EB4A69DD5E748EA_METHOD_3_17D0AAA61173D944_OFFSET UNITYSDK_OFFSET(0x19EA6390)
#define CLASS_3_5EB4A69DD5E748EA_METHOD_3_2630ACAA1C726FBD_OFFSET UNITYSDK_OFFSET(0x19EA62F0)
#define CLASS_3_5EB4A69DD5E748EA__CTOR_OFFSET UNITYSDK_OFFSET(0x19EA6360)

inline static constexpr unsigned int Class_3_5EB4A69DD5E748EA_TypeDefinitionIndex = 20631;

class Class_3_5EB4A69DD5E748EA : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* Field_3_0; // 0x18
	::System::UInt32 Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5EB4A69DD5E748EA__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2630ACAA1C726FBD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_5EB4A69DD5E748EA*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_5EB4A69DD5E748EA*&))((::PBYTE)hIl2Cpp + CLASS_3_5EB4A69DD5E748EA_METHOD_3_2630ACAA1C726FBD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_17D0AAA61173D944(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_5EB4A69DD5E748EA* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_5EB4A69DD5E748EA*))((::PBYTE)hIl2Cpp + CLASS_3_5EB4A69DD5E748EA_METHOD_3_17D0AAA61173D944_OFFSET))(a1, a2);
	}
};
