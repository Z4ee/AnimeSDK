#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/VariantUnion.h"
#include "unitysdk/NodeGraph/VariantUnion_VariantType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_305;
namespace System { class String; }

#define CLASS_1_ACC7918E25577FE3_METHOD_1_633BBB4160977F7D_OFFSET UNITYSDK_OFFSET(0xFBDF9E0)
#define CLASS_1_ACC7918E25577FE3_METHOD_1_92ED3BEBA246A912_OFFSET UNITYSDK_OFFSET(0xFBDFAF0)
#define CLASS_1_ACC7918E25577FE3_METHOD_1_ECD2D005F3F06B84_OFFSET UNITYSDK_OFFSET(0xFBDFB50)
#define CLASS_1_ACC7918E25577FE3__CTOR_OFFSET UNITYSDK_OFFSET(0xFBDF9D0)

inline static constexpr unsigned int Class_1_ACC7918E25577FE3_TypeDefinitionIndex = 43157;

class Class_1_ACC7918E25577FE3 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x3; // 0x0
	::NodeGraph::VariantUnion Field_1_3; // 0x10
	::System::Int32 Field_1_4; // 0x20

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ACC7918E25577FE3__CTOR_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_305* Method_1_633BBB4160977F7D(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_305*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_ACC7918E25577FE3_METHOD_1_633BBB4160977F7D_OFFSET))(this, a1);
	}

	::NodeGraph::VariantUnion_VariantType Method_1_92ED3BEBA246A912()
	{
		return ((::NodeGraph::VariantUnion_VariantType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACC7918E25577FE3_METHOD_1_92ED3BEBA246A912_OFFSET))(this);
	}

	::NodeGraph::VariantUnion Method_1_ECD2D005F3F06B84()
	{
		return ((::NodeGraph::VariantUnion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACC7918E25577FE3_METHOD_1_ECD2D005F3F06B84_OFFSET))(this);
	}
};
