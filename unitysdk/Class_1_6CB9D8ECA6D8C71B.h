#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateContentParamType.h"
#include "unitysdk/Struct_2_AEFDCF1C254BBD23.h"
#include "unitysdk/System/Object.h"

class Class_1_2787ABBB14E52A15;
class Class_1_5CFC3AE61DDB76FA;
namespace System { class String; }

#define CLASS_1_6CB9D8ECA6D8C71B_METHOD_1_28296B7F0CE322EB_OFFSET UNITYSDK_OFFSET(0xF40F070)
#define CLASS_1_6CB9D8ECA6D8C71B_TOSTRING_OFFSET UNITYSDK_OFFSET(0xF40F020)
#define CLASS_1_6CB9D8ECA6D8C71B__CTOR_OFFSET UNITYSDK_OFFSET(0xF40F010)
#define CLASS_1_6CB9D8ECA6D8C71B__GETPARAMETER_B__2_0_OFFSET UNITYSDK_OFFSET(0xF40F530)

inline static constexpr unsigned int Class_1_6CB9D8ECA6D8C71B_TypeDefinitionIndex = 64092;

class Class_1_6CB9D8ECA6D8C71B : public ::System::Object
{
public:
	::Class_1_2787ABBB14E52A15* JOIPPIKNILC; // 0x10
	::Struct_2_AEFDCF1C254BBD23 ADPIPGEDKOH; // 0x18

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

	::System::Boolean _GetParameter_b__2_0(::Class_1_5CFC3AE61DDB76FA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5CFC3AE61DDB76FA*))((::PBYTE)hIl2Cpp + CLASS_1_6CB9D8ECA6D8C71B__GETPARAMETER_B__2_0_OFFSET))(this, a1);
	}
};
