#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_6BD9E25D4C69114D;
class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIActivityCompRewardBtnGroupWidgetController; }
namespace MoleMole { class UINeoGoldenMechaGroupTabWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_0_16E4307DCC419505_159;

#define CLASS_2_D64917D1E9139335_METHOD_2_621DAF77F46095F0_OFFSET UNITYSDK_OFFSET(0x1158B7F0)
#define CLASS_2_D64917D1E9139335_METHOD_2_9D768FB7C06C1DF3_OFFSET UNITYSDK_OFFSET(0x1158ABF0)
#define CLASS_2_D64917D1E9139335_METHOD_2_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x1158B010)
#define CLASS_2_D64917D1E9139335_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1158B760)
#define CLASS_2_D64917D1E9139335_METHOD_2_E52129E82CD2D7F8_OFFSET UNITYSDK_OFFSET(0x1158AC40)
#define CLASS_2_D64917D1E9139335_METHOD_2_F4DD08A31BA3F883_OFFSET UNITYSDK_OFFSET(0x1158B060)
#define CLASS_2_D64917D1E9139335__CTOR_OFFSET UNITYSDK_OFFSET(0x1158AFC0)

inline static constexpr unsigned int Class_2_D64917D1E9139335_TypeDefinitionIndex = 82411;

class Class_2_D64917D1E9139335 : public ::Class_1_37DF30C8B3AA0F39
{
public:
	::Class_0_16E4307DCC419505_159<::System::Int32>* Field_2_2; // 0x50
	::Class_0_16E4307DCC419505_159<::System::Collections::Generic::List_1<::Class_1_6BD9E25D4C69114D*>*>* Field_2_3; // 0x58
	::MoleMole::UIActivityCompRewardBtnGroupWidgetController* Field_2_1; // 0x60
	::System::Collections::Generic::List_1<::MoleMole::UINeoGoldenMechaGroupTabWidgetController*>* Field_2_0; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D64917D1E9139335__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9D768FB7C06C1DF3(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_D64917D1E9139335_METHOD_2_9D768FB7C06C1DF3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E52129E82CD2D7F8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D64917D1E9139335_METHOD_2_E52129E82CD2D7F8_OFFSET))(this);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D64917D1E9139335_METHOD_2_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Void Method_2_F4DD08A31BA3F883()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D64917D1E9139335_METHOD_2_F4DD08A31BA3F883_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D64917D1E9139335_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_621DAF77F46095F0(::System::Collections::Generic::List_1<::Class_1_6BD9E25D4C69114D*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_6BD9E25D4C69114D*>*))((::PBYTE)hIl2Cpp + CLASS_2_D64917D1E9139335_METHOD_2_621DAF77F46095F0_OFFSET))(this, a1);
	}
};
