#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_057B1A249C805498.h"
#include "unitysdk/Enum_3_DE516C6CF47482AF.h"
#include "unitysdk/Struct_2_032E3093F309FC91.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class UIThreeDMapElement_LocalPlayerContext; }
namespace MoleMole { class UIUrbanMapPointPlayerWidgetController; }
template <typename T> class Class_2_000597E145D7A42A;
template <typename T> class Class_2_F16D73323D71766B;

#define CLASS_2_1CDA5F9D6F8E0D57_1_METHOD_2_17FBBB3C961B3F27_OFFSET UNITYSDK_OFFSET(0x133E7870)
#define CLASS_2_1CDA5F9D6F8E0D57_1_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x133E7860)
#define CLASS_2_1CDA5F9D6F8E0D57_1_METHOD_2_C7AE9FA0679B9404_OFFSET UNITYSDK_OFFSET(0x133E7B70)
#define CLASS_2_1CDA5F9D6F8E0D57_1_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x133E7850)
#define CLASS_2_1CDA5F9D6F8E0D57_1_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x133E7840)
#define CLASS_2_1CDA5F9D6F8E0D57_1__CTOR_OFFSET UNITYSDK_OFFSET(0x133E7B30)

inline static constexpr unsigned int Class_2_1CDA5F9D6F8E0D57_1_TypeDefinitionIndex = 77144;

class Class_2_1CDA5F9D6F8E0D57_1 : public ::Class_1_057B1A249C805498<::MoleMole::UIUrbanMapPointPlayerWidgetController*, ::MoleMole::UIThreeDMapElement_LocalPlayerContext*>
{
public:
	::Class_2_000597E145D7A42A<::UnityEngine::Vector3>* Field_2_0; // 0x230
	::Class_2_F16D73323D71766B<::Struct_2_032E3093F309FC91>* Field_2_1; // 0x238
	::Class_2_000597E145D7A42A<::System::Single>* Field_2_7; // 0x240

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1CDA5F9D6F8E0D57_1__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1CDA5F9D6F8E0D57_1_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1CDA5F9D6F8E0D57_1_METHOD_2_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::Enum_3_DE516C6CF47482AF Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_DE516C6CF47482AF(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1CDA5F9D6F8E0D57_1_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::Class_2_F16D73323D71766B<::Struct_2_032E3093F309FC91>* Method_2_17FBBB3C961B3F27()
	{
		return ((::Class_2_F16D73323D71766B<::Struct_2_032E3093F309FC91>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1CDA5F9D6F8E0D57_1_METHOD_2_17FBBB3C961B3F27_OFFSET))(this);
	}

	::Struct_2_032E3093F309FC91 Method_2_C7AE9FA0679B9404()
	{
		return ((::Struct_2_032E3093F309FC91(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1CDA5F9D6F8E0D57_1_METHOD_2_C7AE9FA0679B9404_OFFSET))(this);
	}
};
