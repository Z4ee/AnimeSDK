#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralSubtitleV2PopWindowController; }
namespace System { class String; }

#define CLASS_2_B7243C9C64DCB5EF_CLASS_1_6F652B3DEBC51B8A_METHOD_1_0A5ADB5E7BBF1405_OFFSET UNITYSDK_OFFSET(0x14C83210)
#define CLASS_2_B7243C9C64DCB5EF_CLASS_1_6F652B3DEBC51B8A_METHOD_1_7F22E902205526A1_OFFSET UNITYSDK_OFFSET(0x14C82BA0)
#define CLASS_2_B7243C9C64DCB5EF_CLASS_1_6F652B3DEBC51B8A_METHOD_1_EDBC885B6838D667_OFFSET UNITYSDK_OFFSET(0x14C83010)
#define CLASS_2_B7243C9C64DCB5EF_CLASS_1_6F652B3DEBC51B8A__CTOR_OFFSET UNITYSDK_OFFSET(0x14C83200)

inline static constexpr unsigned int Class_2_B7243C9C64DCB5EF_Class_1_6F652B3DEBC51B8A_TypeDefinitionIndex = 71800;

class Class_2_B7243C9C64DCB5EF_Class_1_6F652B3DEBC51B8A : public ::System::Object
{
public:
	static ::MoleMole::UIGeneralSubtitleV2PopWindowController** StaticGet_Field_1_1()
	{
		return (::MoleMole::UIGeneralSubtitleV2PopWindowController**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B7243C9C64DCB5EF_Class_1_6F652B3DEBC51B8A_TypeDefinitionIndex)->GetStaticField(0x3EF70);
	}
	::MoleMole::UIGeneralSubtitleV2PopWindowController* Field_1_0; // 0x10
	::System::Boolean Field_1_7; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7243C9C64DCB5EF_CLASS_1_6F652B3DEBC51B8A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7F22E902205526A1(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B7243C9C64DCB5EF_CLASS_1_6F652B3DEBC51B8A_METHOD_1_7F22E902205526A1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_EDBC885B6838D667(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B7243C9C64DCB5EF_CLASS_1_6F652B3DEBC51B8A_METHOD_1_EDBC885B6838D667_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_0A5ADB5E7BBF1405(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B7243C9C64DCB5EF_CLASS_1_6F652B3DEBC51B8A_METHOD_1_0A5ADB5E7BBF1405_OFFSET))(a1);
	}
};
