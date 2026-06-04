#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9C3C83892C6E19EC_Mode.h"
#include "unitysdk/RPG/GameCore/ActionBarUIStatus.h"
#include "unitysdk/System/Object.h"

class Class_1_1FFDD73C4573633F;
class Class_1_80AF8BF5A186D7B9;
class Class_1_AB817CB39E494C61;
class Class_1_D19B260269D43396;
class Class_1_DDDB57AA67C3A9EA;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E4C311827855FDB8_METHOD_1_2E8C3A9EB158A39D_OFFSET UNITYSDK_OFFSET(0xA461C90)
#define CLASS_1_E4C311827855FDB8_METHOD_1_4BDABAD4514F1E5D_OFFSET UNITYSDK_OFFSET(0xA462000)
#define CLASS_1_E4C311827855FDB8_METHOD_1_5CDF16CC200D8B52_OFFSET UNITYSDK_OFFSET(0xA461C30)
#define CLASS_1_E4C311827855FDB8_METHOD_1_6B61FC8F1334140B_OFFSET UNITYSDK_OFFSET(0xA462370)
#define CLASS_1_E4C311827855FDB8_METHOD_1_8406C4503F4E50CD_OFFSET UNITYSDK_OFFSET(0xA4623D0)
#define CLASS_1_E4C311827855FDB8_METHOD_1_90BA143BCBF906E6_OFFSET UNITYSDK_OFFSET(0xA461CE0)
#define CLASS_1_E4C311827855FDB8_METHOD_1_AA3E8FC5C3E6B9A4_OFFSET UNITYSDK_OFFSET(0xA461F80)
#define CLASS_1_E4C311827855FDB8__CTOR_OFFSET UNITYSDK_OFFSET(0xA462420)

inline static constexpr unsigned int Class_1_E4C311827855FDB8_TypeDefinitionIndex = 66593;

class Class_1_E4C311827855FDB8 : public ::System::Object
{
public:
	::Class_1_AB817CB39E494C61* Field_1_0; // 0x10
	::Class_1_DDDB57AA67C3A9EA* Field_1_1; // 0x18
	::Class_3_9C3C83892C6E19EC_Mode Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4C311827855FDB8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5CDF16CC200D8B52(::Class_1_AB817CB39E494C61* a1, ::Class_1_DDDB57AA67C3A9EA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AB817CB39E494C61*, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_1_E4C311827855FDB8_METHOD_1_5CDF16CC200D8B52_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2E8C3A9EB158A39D(::Class_3_9C3C83892C6E19EC_Mode a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_9C3C83892C6E19EC_Mode))((::PBYTE)hIl2Cpp + CLASS_1_E4C311827855FDB8_METHOD_1_2E8C3A9EB158A39D_OFFSET))(this, a1);
	}

	::Class_1_D19B260269D43396* Method_1_90BA143BCBF906E6(::System::Int32 a1)
	{
		return ((::Class_1_D19B260269D43396*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E4C311827855FDB8_METHOD_1_90BA143BCBF906E6_OFFSET))(this, a1);
	}

	::Class_1_D19B260269D43396* Method_1_AA3E8FC5C3E6B9A4(::System::Collections::Generic::List_1<::Class_1_1FFDD73C4573633F*>* a1, ::System::Int32 a2)
	{
		return ((::Class_1_D19B260269D43396*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_1FFDD73C4573633F*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E4C311827855FDB8_METHOD_1_AA3E8FC5C3E6B9A4_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_80AF8BF5A186D7B9*>* Method_1_4BDABAD4514F1E5D(::System::Collections::Generic::List_1<::Class_1_1FFDD73C4573633F*>* a1, ::System::Int32 a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_80AF8BF5A186D7B9*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_1FFDD73C4573633F*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E4C311827855FDB8_METHOD_1_4BDABAD4514F1E5D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_6B61FC8F1334140B(::RPG::GameCore::ActionBarUIStatus a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ActionBarUIStatus))((::PBYTE)hIl2Cpp + CLASS_1_E4C311827855FDB8_METHOD_1_6B61FC8F1334140B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8406C4503F4E50CD(::RPG::GameCore::ActionBarUIStatus a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ActionBarUIStatus))((::PBYTE)hIl2Cpp + CLASS_1_E4C311827855FDB8_METHOD_1_8406C4503F4E50CD_OFFSET))(this, a1);
	}
};
