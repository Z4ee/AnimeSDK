#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5136E14D9202F88B.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_A4F0FA6F81B0B135;
class Class_2_FD51057495DB654F;
namespace System { class String; }

#define CLASS_2_18C037956E8D4134_METHOD_2_067C97A47F8621D9_OFFSET UNITYSDK_OFFSET(0x177B5EC0)
#define CLASS_2_18C037956E8D4134_METHOD_2_32F9C58B690E51E5_OFFSET UNITYSDK_OFFSET(0x177B6130)
#define CLASS_2_18C037956E8D4134_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x177B5DB0)
#define CLASS_2_18C037956E8D4134_METHOD_2_D4D72195FE5FCEC2_OFFSET UNITYSDK_OFFSET(0x177B65A0)
#define CLASS_2_18C037956E8D4134__CTOR_OFFSET UNITYSDK_OFFSET(0x177B5D90)

inline static constexpr unsigned int Class_2_18C037956E8D4134_TypeDefinitionIndex = 72075;

class Class_2_18C037956E8D4134 : public ::Class_1_5136E14D9202F88B
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	::RPG::MVector3 Field_2_2; // 0x28

	::System::Void _ctor(::Class_1_A4F0FA6F81B0B135* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A4F0FA6F81B0B135*))((::PBYTE)hIl2Cpp + CLASS_2_18C037956E8D4134__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_18C037956E8D4134_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_2_32F9C58B690E51E5(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_18C037956E8D4134_METHOD_2_32F9C58B690E51E5_OFFSET))(this, a1);
	}

	::RPG::MVector3 Method_2_067C97A47F8621D9(::Class_1_A4F0FA6F81B0B135* a1)
	{
		return ((::RPG::MVector3(*)(::PVOID, ::Class_1_A4F0FA6F81B0B135*))((::PBYTE)hIl2Cpp + CLASS_2_18C037956E8D4134_METHOD_2_067C97A47F8621D9_OFFSET))(this, a1);
	}

	::Class_2_FD51057495DB654F* Method_2_D4D72195FE5FCEC2(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::Class_2_FD51057495DB654F*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_18C037956E8D4134_METHOD_2_D4D72195FE5FCEC2_OFFSET))(this, a1, a2);
	}
};
