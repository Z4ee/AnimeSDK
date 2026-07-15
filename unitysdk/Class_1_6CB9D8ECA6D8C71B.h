#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateContentParamType.h"
#include "unitysdk/Struct_2_AEFDCF1C254BBD23.h"
#include "unitysdk/System/Object.h"

class Class_1_2787ABBB14E52A15;
class Class_1_C50814066AD5D308;
namespace System { class String; }

#define CLASS_1_6CB9D8ECA6D8C71B_METHOD_1_28296B7F0CE322EB_OFFSET UNITYSDK_OFFSET(0x16969810)
#define CLASS_1_6CB9D8ECA6D8C71B_TOSTRING_OFFSET UNITYSDK_OFFSET(0x169697C0)
#define CLASS_1_6CB9D8ECA6D8C71B__CTOR_OFFSET UNITYSDK_OFFSET(0x169697B0)
#define CLASS_1_6CB9D8ECA6D8C71B__GETPARAMETER_B__2_0_OFFSET UNITYSDK_OFFSET(0x16969CD0)

inline static constexpr unsigned int Class_1_6CB9D8ECA6D8C71B_TypeDefinitionIndex = 61111;

class Class_1_6CB9D8ECA6D8C71B : public ::System::Object
{
public:
	::Class_1_2787ABBB14E52A15* Field_1_0; // 0x10
	::Struct_2_AEFDCF1C254BBD23 Field_1_1; // 0x18

	::System::Void _ctor(::Class_1_2787ABBB14E52A15* a1, ::Struct_2_AEFDCF1C254BBD23 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2787ABBB14E52A15*, ::Struct_2_AEFDCF1C254BBD23))((::PBYTE)hIl2Cpp + CLASS_1_6CB9D8ECA6D8C71B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB9D8ECA6D8C71B_TOSTRING_OFFSET))(this);
	}

	::System::Double Method_1_28296B7F0CE322EB(::RPG::GameCore::FateContentParamType a1)
	{
		return ((::System::Double(*)(::PVOID, ::RPG::GameCore::FateContentParamType))((::PBYTE)hIl2Cpp + CLASS_1_6CB9D8ECA6D8C71B_METHOD_1_28296B7F0CE322EB_OFFSET))(this, a1);
	}

	::System::Boolean _GetParameter_b__2_0(::Class_1_C50814066AD5D308* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C50814066AD5D308*))((::PBYTE)hIl2Cpp + CLASS_1_6CB9D8ECA6D8C71B__GETPARAMETER_B__2_0_OFFSET))(this, a1);
	}
};
