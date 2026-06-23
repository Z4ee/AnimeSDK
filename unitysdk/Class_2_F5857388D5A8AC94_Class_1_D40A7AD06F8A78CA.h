#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_F5857388D5A8AC94_Class_1_1608714C949270E5;
class Class_3_C3F0E3B5AB5977AE;
namespace UnityEngine { class RectTransform; }

#define CLASS_2_F5857388D5A8AC94_CLASS_1_D40A7AD06F8A78CA_METHOD_1_484306249F602FCA_OFFSET UNITYSDK_OFFSET(0x16234710)
#define CLASS_2_F5857388D5A8AC94_CLASS_1_D40A7AD06F8A78CA_METHOD_1_66B6F5BA70183A79_OFFSET UNITYSDK_OFFSET(0x16234370)
#define CLASS_2_F5857388D5A8AC94_CLASS_1_D40A7AD06F8A78CA__CTOR_OFFSET UNITYSDK_OFFSET(0x16234360)

inline static constexpr unsigned int Class_2_F5857388D5A8AC94_Class_1_D40A7AD06F8A78CA_TypeDefinitionIndex = 56837;

class Class_2_F5857388D5A8AC94_Class_1_D40A7AD06F8A78CA : public ::System::Object
{
public:
	::UnityEngine::RectTransform* Field_1_1; // 0x10
	::Class_2_F5857388D5A8AC94_Class_1_1608714C949270E5* Field_1_3; // 0x18
	::UnityEngine::RectTransform* Field_1_2; // 0x20
	::System::Int32 Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94_CLASS_1_D40A7AD06F8A78CA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_66B6F5BA70183A79(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94_CLASS_1_D40A7AD06F8A78CA_METHOD_1_66B6F5BA70183A79_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_484306249F602FCA(::Class_3_C3F0E3B5AB5977AE* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_C3F0E3B5AB5977AE*))((::PBYTE)hIl2Cpp + CLASS_2_F5857388D5A8AC94_CLASS_1_D40A7AD06F8A78CA_METHOD_1_484306249F602FCA_OFFSET))(this, a1);
	}
};
