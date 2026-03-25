#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateContentParamType.h"
#include "unitysdk/Struct_2_AEFDCF1C254BBD23.h"
#include "unitysdk/System/Object.h"

class Class_1_0A92C1436010F884;
class Class_1_A64CC8A9B1CC56C5;
namespace System { class String; }

#define CLASS_1_6CB9D8ECA6D8C71B_METHOD_1_348FA928BB5CC2DD_OFFSET UNITYSDK_OFFSET(0x8C53980)
#define CLASS_1_6CB9D8ECA6D8C71B_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8C53930)
#define CLASS_1_6CB9D8ECA6D8C71B__CTOR_OFFSET UNITYSDK_OFFSET(0x8C53920)
#define CLASS_1_6CB9D8ECA6D8C71B__GETPARAMETER_B__2_0_OFFSET UNITYSDK_OFFSET(0x8C53D70)
#define CLASS_1_6CB9D8ECA6D8C71B___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8C53DA0)

inline static constexpr unsigned int Class_1_6CB9D8ECA6D8C71B_TypeDefinitionIndex = 51947;

class Class_1_6CB9D8ECA6D8C71B : public ::System::Object
{
public:
	::Class_1_0A92C1436010F884* Field_1_0; // 0x10
	::Struct_2_AEFDCF1C254BBD23 Field_1_1; // 0x18

	::System::Void _ctor(::Class_1_0A92C1436010F884* a1, ::Struct_2_AEFDCF1C254BBD23 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A92C1436010F884*, ::Struct_2_AEFDCF1C254BBD23))((::PBYTE)hIl2Cpp + CLASS_1_6CB9D8ECA6D8C71B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB9D8ECA6D8C71B_TOSTRING_OFFSET))(this);
	}

	::System::Double Method_1_348FA928BB5CC2DD(::RPG::GameCore::FateContentParamType a1)
	{
		return ((::System::Double(*)(::PVOID, ::RPG::GameCore::FateContentParamType))((::PBYTE)hIl2Cpp + CLASS_1_6CB9D8ECA6D8C71B_METHOD_1_348FA928BB5CC2DD_OFFSET))(this, a1);
	}

	::System::Boolean _GetParameter_b__2_0(::Class_1_A64CC8A9B1CC56C5* content)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A64CC8A9B1CC56C5*))((::PBYTE)hIl2Cpp + CLASS_1_6CB9D8ECA6D8C71B__GETPARAMETER_B__2_0_OFFSET))(this, content);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB9D8ECA6D8C71B___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
