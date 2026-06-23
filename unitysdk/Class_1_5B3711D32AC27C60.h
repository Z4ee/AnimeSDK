#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4146D2C3F243C0E3.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
class Class_2_208CC9941471731A_649;
class Class_2_208CC9941471731A_965;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5B3711D32AC27C60_METHOD_1_804A24CF72636064_OFFSET UNITYSDK_OFFSET(0x126D0400)
#define CLASS_1_5B3711D32AC27C60_METHOD_1_CB613A5EF970C11B_1_OFFSET UNITYSDK_OFFSET(0x126D0390)
#define CLASS_1_5B3711D32AC27C60_METHOD_1_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0x126D0320)
#define CLASS_1_5B3711D32AC27C60__CTOR_OFFSET UNITYSDK_OFFSET(0x126D0310)

inline static constexpr unsigned int Class_1_5B3711D32AC27C60_TypeDefinitionIndex = 47673;

class Class_1_5B3711D32AC27C60 : public ::System::Object
{
public:
	::Class_2_208CC9941471731A_649* Field_1_3; // 0x10
	::Class_2_208CC9941471731A_965* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* Field_1_1; // 0x20
	::Enum_3_4146D2C3F243C0E3 Field_1_0; // 0x28

	::System::Void _ctor(::Enum_3_4146D2C3F243C0E3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_4146D2C3F243C0E3))((::PBYTE)hIl2Cpp + CLASS_1_5B3711D32AC27C60__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_CB613A5EF970C11B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5B3711D32AC27C60_METHOD_1_CB613A5EF970C11B_OFFSET))(this, a1);
	}

	::System::Void Method_1_CB613A5EF970C11B_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5B3711D32AC27C60_METHOD_1_CB613A5EF970C11B_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_804A24CF72636064(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_5B3711D32AC27C60_METHOD_1_804A24CF72636064_OFFSET))(this, a1);
	}
};
