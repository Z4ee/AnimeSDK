#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RPGProfilerMarker; }

#define CLASS_1_B5096A867126D7C0__CCTOR_OFFSET UNITYSDK_OFFSET(0x18BE2260)

inline static constexpr unsigned int Class_1_B5096A867126D7C0_TypeDefinitionIndex = 50340;

class Class_1_B5096A867126D7C0 : public ::System::Object
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_OFBKLIODDCP()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B5096A867126D7C0_TypeDefinitionIndex)->GetStaticField(0x5C650);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_GOCKNOPAEAN()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B5096A867126D7C0_TypeDefinitionIndex)->GetStaticField(0x5C658);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B5096A867126D7C0__CCTOR_OFFSET))();
	}
};
