#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_83665B095F1535B5_4.h"

class Class_1_613D3FC72C01EA96;
class Class_3_6E68CE2C9E51952D;
class Class_3_B8C2F5E253846EE2_2;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_FA1F0195F112B9C7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x189167A0)
#define CLASS_2_FA1F0195F112B9C7__CTOR_OFFSET UNITYSDK_OFFSET(0x189164B0)

inline static constexpr unsigned int Class_2_FA1F0195F112B9C7_TypeDefinitionIndex = 61448;

class Class_2_FA1F0195F112B9C7 : public ::Class_1_83665B095F1535B5_4
{
public:
	::System::Collections::Generic::List_1<::Class_1_613D3FC72C01EA96*>* Field_2_1; // 0x18
	::System::String* Field_2_0; // 0x20
	::System::Int32 Field_2_4; // 0x28
	::System::Boolean Field_2_5; // 0x2C
	::System::Boolean Field_2_3; // 0x2D
	::System::Boolean Field_2_2; // 0x2E

	::System::Void _ctor(::Class_3_6E68CE2C9E51952D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_6E68CE2C9E51952D*))((::PBYTE)hIl2Cpp + CLASS_2_FA1F0195F112B9C7__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::Class_3_B8C2F5E253846EE2_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_B8C2F5E253846EE2_2*))((::PBYTE)hIl2Cpp + CLASS_2_FA1F0195F112B9C7__CTOR_1_OFFSET))(this, a1);
	}
};
