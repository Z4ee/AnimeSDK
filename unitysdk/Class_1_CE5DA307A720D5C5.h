#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapMappingInfoData; }

#define CLASS_1_CE5DA307A720D5C5_GET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0x13AB8650)
#define CLASS_1_CE5DA307A720D5C5_METHOD_1_1BE2698AD68A4457_OFFSET UNITYSDK_OFFSET(0x13AB8830)
#define CLASS_1_CE5DA307A720D5C5_METHOD_1_3F88464DF3DB32EF_OFFSET UNITYSDK_OFFSET(0x13AB8700)
#define CLASS_1_CE5DA307A720D5C5_METHOD_1_E7B4C3778DD6D6A7_OFFSET UNITYSDK_OFFSET(0x13AB8670)
#define CLASS_1_CE5DA307A720D5C5_SET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0x13AB8660)
#define CLASS_1_CE5DA307A720D5C5__CTOR_OFFSET UNITYSDK_OFFSET(0x13AB8820)

inline static constexpr unsigned int Class_1_CE5DA307A720D5C5_TypeDefinitionIndex = 58885;

class Class_1_CE5DA307A720D5C5 : public ::System::Object
{
public:
	::RPG::Client::MapMappingInfoData* Field_1_0; // 0x10
	::System::UInt32 _IconType_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE5DA307A720D5C5__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_IconType()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE5DA307A720D5C5_GET_ICONTYPE_OFFSET))(this);
	}

	::System::Void set_IconType(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CE5DA307A720D5C5_SET_ICONTYPE_OFFSET))(this, a1);
	}

	::System::Void Method_1_E7B4C3778DD6D6A7(::RPG::Client::MapMappingInfoData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapMappingInfoData*))((::PBYTE)hIl2Cpp + CLASS_1_CE5DA307A720D5C5_METHOD_1_E7B4C3778DD6D6A7_OFFSET))(this, a1);
	}

	static ::Class_1_CE5DA307A720D5C5* Method_1_3F88464DF3DB32EF(::RPG::Client::MapMappingInfoData* a1)
	{
		return ((::Class_1_CE5DA307A720D5C5*(*)(::RPG::Client::MapMappingInfoData*))((::PBYTE)hIl2Cpp + CLASS_1_CE5DA307A720D5C5_METHOD_1_3F88464DF3DB32EF_OFFSET))(a1);
	}

	::System::Int32 Method_1_1BE2698AD68A4457()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE5DA307A720D5C5_METHOD_1_1BE2698AD68A4457_OFFSET))(this);
	}
};
