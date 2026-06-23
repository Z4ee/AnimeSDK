#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_9B3E7D0DA0CE3B43;
class Class_3_01A715AD62081B7F;
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define CLASS_2_A1D87FC6A37D09B4_CLASS_1_E964204F36686DC8_METHOD_1_A911D9E72C0F1A5C_1_OFFSET UNITYSDK_OFFSET(0x12E0D600)
#define CLASS_2_A1D87FC6A37D09B4_CLASS_1_E964204F36686DC8_METHOD_1_A911D9E72C0F1A5C_OFFSET UNITYSDK_OFFSET(0x12E0D5B0)
#define CLASS_2_A1D87FC6A37D09B4_CLASS_1_E964204F36686DC8_METHOD_1_D0CD9A971CA3B1CF_OFFSET UNITYSDK_OFFSET(0x12E0D5E0)
#define CLASS_2_A1D87FC6A37D09B4_CLASS_1_E964204F36686DC8__CTOR_OFFSET UNITYSDK_OFFSET(0x12E0D5A0)

inline static constexpr unsigned int Class_2_A1D87FC6A37D09B4_Class_1_E964204F36686DC8_TypeDefinitionIndex = 47579;

class Class_2_A1D87FC6A37D09B4_Class_1_E964204F36686DC8 : public ::System::Object
{
public:
	::UnityEngine::Events::UnityAction* Field_1_2; // 0x10
	::Class_3_01A715AD62081B7F* Field_1_0; // 0x18
	::UnityEngine::Events::UnityAction_1<::System::Boolean>* Field_1_3; // 0x20
	::UnityEngine::Events::UnityAction_1<::System::Boolean>* Field_1_4; // 0x28
	::Class_2_9B3E7D0DA0CE3B43* Field_1_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1D87FC6A37D09B4_CLASS_1_E964204F36686DC8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A911D9E72C0F1A5C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A1D87FC6A37D09B4_CLASS_1_E964204F36686DC8_METHOD_1_A911D9E72C0F1A5C_OFFSET))(this, a1);
	}

	::System::Void Method_1_D0CD9A971CA3B1CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1D87FC6A37D09B4_CLASS_1_E964204F36686DC8_METHOD_1_D0CD9A971CA3B1CF_OFFSET))(this);
	}

	::System::Void Method_1_A911D9E72C0F1A5C_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A1D87FC6A37D09B4_CLASS_1_E964204F36686DC8_METHOD_1_A911D9E72C0F1A5C_1_OFFSET))(this, a1);
	}
};
