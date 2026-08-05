#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2BABAD86425D1A28.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/Struct_2_90E529DB4DCB014F.h"

class Class_0_16E4307DCC419505_239;
class Class_1_DED04E46213B89CB;
class Class_2_C52BB67DB026329F;
class Class_2_F5737224A0253470;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_10296FB1905BB73C_METHOD_2_0D3F8DD0A2DA638E_OFFSET UNITYSDK_OFFSET(0x145CD4B0)
#define CLASS_2_10296FB1905BB73C_METHOD_2_2F0F99A12DB93F30_OFFSET UNITYSDK_OFFSET(0x145CD170)
#define CLASS_2_10296FB1905BB73C_METHOD_2_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x145CCFF0)
#define CLASS_2_10296FB1905BB73C_METHOD_2_7A142F4A7F87406A_OFFSET UNITYSDK_OFFSET(0x145CCD30)
#define CLASS_2_10296FB1905BB73C_METHOD_2_A7FF6AA8FA2F7FEB_OFFSET UNITYSDK_OFFSET(0x145CC7E0)
#define CLASS_2_10296FB1905BB73C_METHOD_2_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0x145CC990)
#define CLASS_2_10296FB1905BB73C_METHOD_2_EBAF10BBA97B82DD_OFFSET UNITYSDK_OFFSET(0x145CCFA0)
#define CLASS_2_10296FB1905BB73C__CTOR_OFFSET UNITYSDK_OFFSET(0x145CC5A0)

inline static constexpr unsigned int Class_2_10296FB1905BB73C_TypeDefinitionIndex = 45992;

class Class_2_10296FB1905BB73C : public ::Class_1_2BABAD86425D1A28
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_6; // 0x28
	::Class_2_C52BB67DB026329F* Field_2_7; // 0x30
	::Class_2_F5737224A0253470* Field_2_0; // 0x38
	::System::Collections::Generic::List_1<::System::String*>* Field_2_4; // 0x40
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_239*>* Field_2_5; // 0x48
	::System::Boolean Field_2_11; // 0x50
	::System::Boolean Field_2_10; // 0x51

	::System::Void _ctor(::Class_2_C52BB67DB026329F* a1, ::MoleMole::HollowChessboard::HollowChessboardUID a2, ::Struct_2_90E529DB4DCB014F a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_C52BB67DB026329F*, ::MoleMole::HollowChessboard::HollowChessboardUID, ::Struct_2_90E529DB4DCB014F))((::PBYTE)hIl2Cpp + CLASS_2_10296FB1905BB73C__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_A7FF6AA8FA2F7FEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10296FB1905BB73C_METHOD_2_A7FF6AA8FA2F7FEB_OFFSET))(this);
	}

	::System::Void Method_2_EBAF10BBA97B82DD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10296FB1905BB73C_METHOD_2_EBAF10BBA97B82DD_OFFSET))(this);
	}

	::System::Void Method_2_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10296FB1905BB73C_METHOD_2_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Void Method_2_2F0F99A12DB93F30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10296FB1905BB73C_METHOD_2_2F0F99A12DB93F30_OFFSET))(this);
	}

	::System::Void Method_2_7A142F4A7F87406A(::Class_1_DED04E46213B89CB* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DED04E46213B89CB*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_10296FB1905BB73C_METHOD_2_7A142F4A7F87406A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0D3F8DD0A2DA638E(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_10296FB1905BB73C_METHOD_2_0D3F8DD0A2DA638E_OFFSET))(this, a1);
	}

	::System::Void Method_2_DD784213055292FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10296FB1905BB73C_METHOD_2_DD784213055292FB_OFFSET))(this);
	}
};
