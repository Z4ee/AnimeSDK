#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_90E1D0C94F205181.h"
#include "unitysdk/Enum_3_7AADF24AF29C5ADF.h"
#include "unitysdk/Struct_2_032E3093F309FC91.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class UIThreeDMapElement_SignalPointContext; }
namespace MoleMole { class UIUrbanMapPointPlayerWidgetController; }
template <typename T> class Class_2_000597E145D7A42A;
template <typename T> class Class_2_F16D73323D71766B;

#define CLASS_2_D8C451FFB298569C_1_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x11A98260)
#define CLASS_2_D8C451FFB298569C_1_METHOD_2_CE0D95FB6B7A2F7E_OFFSET UNITYSDK_OFFSET(0x11A98270)
#define CLASS_2_D8C451FFB298569C_1_METHOD_2_EA793DDD482F1172_OFFSET UNITYSDK_OFFSET(0x11A985B0)
#define CLASS_2_D8C451FFB298569C_1_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x11A98250)
#define CLASS_2_D8C451FFB298569C_1_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x11A98240)
#define CLASS_2_D8C451FFB298569C_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11A98570)

inline static constexpr unsigned int Class_2_D8C451FFB298569C_1_TypeDefinitionIndex = 58652;

class Class_2_D8C451FFB298569C_1 : public ::Class_1_90E1D0C94F205181<::MoleMole::UIUrbanMapPointPlayerWidgetController*, ::MoleMole::UIThreeDMapElement_SignalPointContext*>
{
public:
	::Class_2_000597E145D7A42A<::System::Single>* Field_2_2; // 0x1F0
	::Class_2_F16D73323D71766B<::Struct_2_032E3093F309FC91>* Field_2_0; // 0x1F8
	::Class_2_000597E145D7A42A<::UnityEngine::Vector3>* Field_2_1; // 0x200

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8C451FFB298569C_1__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8C451FFB298569C_1_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8C451FFB298569C_1_METHOD_2_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::Enum_3_7AADF24AF29C5ADF Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_7AADF24AF29C5ADF(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8C451FFB298569C_1_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::Class_2_F16D73323D71766B<::Struct_2_032E3093F309FC91>* Method_2_CE0D95FB6B7A2F7E()
	{
		return ((::Class_2_F16D73323D71766B<::Struct_2_032E3093F309FC91>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8C451FFB298569C_1_METHOD_2_CE0D95FB6B7A2F7E_OFFSET))(this);
	}

	::Struct_2_032E3093F309FC91 Method_2_EA793DDD482F1172()
	{
		return ((::Struct_2_032E3093F309FC91(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8C451FFB298569C_1_METHOD_2_EA793DDD482F1172_OFFSET))(this);
	}
};
