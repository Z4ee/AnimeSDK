#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3B5AB7569B3158C1.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimEntryConfig; }
namespace System { class String; }

#define CLASS_1_E3E6EC75C8FC3508_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x1BA99110)
#define CLASS_1_E3E6EC75C8FC3508__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA99150)

inline static constexpr unsigned int Class_1_E3E6EC75C8FC3508_TypeDefinitionIndex = 41702;

class Class_1_E3E6EC75C8FC3508 : public ::System::Object
{
public:
	::Struct_2_3B5AB7569B3158C1 BPAPBAFOMCH; // 0x10
	::RPG::GameCore::FiveDimEntryConfig* EABKOHGCHFP; // 0xF0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3E6EC75C8FC3508__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3E6EC75C8FC3508_METHOD_1_DA1BF2C227DC3D86_OFFSET))(this);
	}
};
