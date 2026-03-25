#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapMappingInfoData; }

#define CLASS_1_A9EFE673F8789E58_GET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0x894BB20)
#define CLASS_1_A9EFE673F8789E58_METHOD_1_1BE2698AD68A4457_OFFSET UNITYSDK_OFFSET(0x894BD00)
#define CLASS_1_A9EFE673F8789E58_METHOD_1_3F88464DF3DB32EF_OFFSET UNITYSDK_OFFSET(0x894BBD0)
#define CLASS_1_A9EFE673F8789E58_METHOD_1_E7B4C3778DD6D6A7_OFFSET UNITYSDK_OFFSET(0x894BB40)
#define CLASS_1_A9EFE673F8789E58_SET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0x894BB30)
#define CLASS_1_A9EFE673F8789E58__CTOR_OFFSET UNITYSDK_OFFSET(0x894BCF0)

inline static constexpr unsigned int Class_1_A9EFE673F8789E58_TypeDefinitionIndex = 51085;

class Class_1_A9EFE673F8789E58 : public ::System::Object
{
public:
	::RPG::Client::MapMappingInfoData* Field_1_1; // 0x10
	::System::UInt32 _IconType_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9EFE673F8789E58__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_IconType()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9EFE673F8789E58_GET_ICONTYPE_OFFSET))(this);
	}

	::System::Void set_IconType(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A9EFE673F8789E58_SET_ICONTYPE_OFFSET))(this, value);
	}

	::System::Void Method_1_E7B4C3778DD6D6A7(::RPG::Client::MapMappingInfoData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapMappingInfoData*))((::PBYTE)hIl2Cpp + CLASS_1_A9EFE673F8789E58_METHOD_1_E7B4C3778DD6D6A7_OFFSET))(this, a1);
	}

	static ::Class_1_A9EFE673F8789E58* Method_1_3F88464DF3DB32EF(::RPG::Client::MapMappingInfoData* a1)
	{
		return ((::Class_1_A9EFE673F8789E58*(*)(::RPG::Client::MapMappingInfoData*))((::PBYTE)hIl2Cpp + CLASS_1_A9EFE673F8789E58_METHOD_1_3F88464DF3DB32EF_OFFSET))(a1);
	}

	::System::Int32 Method_1_1BE2698AD68A4457()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9EFE673F8789E58_METHOD_1_1BE2698AD68A4457_OFFSET))(this);
	}
};
