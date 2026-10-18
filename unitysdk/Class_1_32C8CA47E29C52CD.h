#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AvatarRowData; }

#define CLASS_1_32C8CA47E29C52CD_METHOD_1_E5704F7CB69AA073_OFFSET UNITYSDK_OFFSET(0x15807000)
#define CLASS_1_32C8CA47E29C52CD__CCTOR_OFFSET UNITYSDK_OFFSET(0x15807040)
#define CLASS_1_32C8CA47E29C52CD__CTOR_OFFSET UNITYSDK_OFFSET(0x15806FF0)

inline static constexpr unsigned int Class_1_32C8CA47E29C52CD_TypeDefinitionIndex = 51993;

class Class_1_32C8CA47E29C52CD : public ::System::Object
{
public:
	static ::Class_1_32C8CA47E29C52CD** StaticGet_FMJPMFEDIJL()
	{
		return (::Class_1_32C8CA47E29C52CD**)Il2CppClass::FromTypeDefinitionIndex(Class_1_32C8CA47E29C52CD_TypeDefinitionIndex)->GetStaticField(0x24890);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32C8CA47E29C52CD__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_32C8CA47E29C52CD__CCTOR_OFFSET))();
	}

	::RPG::GameCore::AvatarRowData* Method_1_E5704F7CB69AA073()
	{
		return ((::RPG::GameCore::AvatarRowData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32C8CA47E29C52CD_METHOD_1_E5704F7CB69AA073_OFFSET))(this);
	}
};
