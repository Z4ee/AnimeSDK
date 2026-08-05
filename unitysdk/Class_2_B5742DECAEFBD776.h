#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2DD57B8CAD4CF82D.h"
#include "unitysdk/Class_2_B5742DECAEFBD776_Enum_3_4F5A55A93E28EF40.h"
#include "unitysdk/Enum_3_C64432A6918BE61F.h"
#include "unitysdk/Enum_3_DE516C6CF47482AF.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_207;
class Class_2_B5742DECAEFBD776_Class_2_8504E12A716501A1_25;
namespace MoleMole { class UIHackerBlasting3DModelController; }
namespace MoleMole { class UIHackerCharging3DModelController; }
namespace MoleMole { class UIWindowController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define CLASS_2_B5742DECAEFBD776_METHOD_2_39AC1E4F3A4B451E_OFFSET UNITYSDK_OFFSET(0x10673790)
#define CLASS_2_B5742DECAEFBD776_METHOD_2_3B491386D1EDEB42_OFFSET UNITYSDK_OFFSET(0x10672DE0)
#define CLASS_2_B5742DECAEFBD776_METHOD_2_593902392F58D937_OFFSET UNITYSDK_OFFSET(0x10672C60)
#define CLASS_2_B5742DECAEFBD776_METHOD_2_64F3965CE4C4DB47_OFFSET UNITYSDK_OFFSET(0x10673480)
#define CLASS_2_B5742DECAEFBD776_METHOD_2_9D8CB5E47C1952BD_OFFSET UNITYSDK_OFFSET(0x106727C0)
#define CLASS_2_B5742DECAEFBD776_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x106726F0)
#define CLASS_2_B5742DECAEFBD776_METHOD_2_B74D3688C9F7FE4B_OFFSET UNITYSDK_OFFSET(0x10672700)
#define CLASS_2_B5742DECAEFBD776_METHOD_2_BC8B92C73ACC6778_OFFSET UNITYSDK_OFFSET(0x10673320)
#define CLASS_2_B5742DECAEFBD776_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10673700)
#define CLASS_2_B5742DECAEFBD776_METHOD_2_E9E8684D4EBFAE5E_OFFSET UNITYSDK_OFFSET(0x106730F0)
#define CLASS_2_B5742DECAEFBD776__CCTOR_OFFSET UNITYSDK_OFFSET(0x10672AD0)
#define CLASS_2_B5742DECAEFBD776__CTOR_OFFSET UNITYSDK_OFFSET(0x10672A40)

inline static constexpr unsigned int Class_2_B5742DECAEFBD776_TypeDefinitionIndex = 78791;

class Class_2_B5742DECAEFBD776 : public ::Class_1_2DD57B8CAD4CF82D
{
public:
	static ::UnityEngine::Transform** StaticGet_Field_2_0()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B5742DECAEFBD776_TypeDefinitionIndex)->GetStaticField(0x33230);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::ValueTuple_2<::Enum_3_DE516C6CF47482AF, ::Class_2_B5742DECAEFBD776_Enum_3_4F5A55A93E28EF40>>** StaticGet_Field_2_5()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::ValueTuple_2<::Enum_3_DE516C6CF47482AF, ::Class_2_B5742DECAEFBD776_Enum_3_4F5A55A93E28EF40>>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B5742DECAEFBD776_TypeDefinitionIndex)->GetStaticField(0x33238);
	}
	::Class_2_B5742DECAEFBD776_Class_2_8504E12A716501A1_25* Field_2_7; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::UIWindowController*>* Field_2_6; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B5742DECAEFBD776__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_B5742DECAEFBD776__CCTOR_OFFSET))();
	}

	::Enum_3_C64432A6918BE61F Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_C64432A6918BE61F(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B5742DECAEFBD776_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_B74D3688C9F7FE4B(::Class_0_16E4307DCC419505_207* a1, ::MoleMole::UIWindowController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_207*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_B5742DECAEFBD776_METHOD_2_B74D3688C9F7FE4B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9D8CB5E47C1952BD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B5742DECAEFBD776_METHOD_2_9D8CB5E47C1952BD_OFFSET))(this);
	}

	::MoleMole::UIHackerCharging3DModelController* Method_2_593902392F58D937(::System::UInt32 a1, ::System::String* a2, ::System::String* a3, ::Struct_2_575273D27F02957E a4)
	{
		return ((::MoleMole::UIHackerCharging3DModelController*(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::String*, ::Struct_2_575273D27F02957E))((::PBYTE)hIl2Cpp + CLASS_2_B5742DECAEFBD776_METHOD_2_593902392F58D937_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::String* Method_2_3B491386D1EDEB42(::System::UInt32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_B5742DECAEFBD776_METHOD_2_3B491386D1EDEB42_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9E8684D4EBFAE5E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_B5742DECAEFBD776_METHOD_2_E9E8684D4EBFAE5E_OFFSET))(this, a1);
	}

	::MoleMole::UIHackerBlasting3DModelController* Method_2_BC8B92C73ACC6778(::System::UInt32 a1, ::System::String* a2, ::Struct_2_575273D27F02957E a3)
	{
		return ((::MoleMole::UIHackerBlasting3DModelController*(*)(::PVOID, ::System::UInt32, ::System::String*, ::Struct_2_575273D27F02957E))((::PBYTE)hIl2Cpp + CLASS_2_B5742DECAEFBD776_METHOD_2_BC8B92C73ACC6778_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_64F3965CE4C4DB47()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B5742DECAEFBD776_METHOD_2_64F3965CE4C4DB47_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B5742DECAEFBD776_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::MoleMole::UIWindowController* Method_2_39AC1E4F3A4B451E(::System::UInt32 a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::MoleMole::UIWindowController*(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B5742DECAEFBD776_METHOD_2_39AC1E4F3A4B451E_OFFSET))(this, a1, a2, a3);
	}
};
