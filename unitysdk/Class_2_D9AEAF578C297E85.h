#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/Struct_2_C8629618711DF8B3.h"

class Class_1_2A0117F72708B5DF;
class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIBossChallengeBadgeWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_0_16E4307DCC41950C_13;

#define CLASS_2_D9AEAF578C297E85_METHOD_2_2654A357D4E39BC5_OFFSET UNITYSDK_OFFSET(0x11E8EF30)
#define CLASS_2_D9AEAF578C297E85_METHOD_2_359889089C129707_OFFSET UNITYSDK_OFFSET(0x11E8ECB0)
#define CLASS_2_D9AEAF578C297E85_METHOD_2_47737F2C08E6496E_OFFSET UNITYSDK_OFFSET(0x11E8EED0)
#define CLASS_2_D9AEAF578C297E85_METHOD_2_603A06DE63EB7219_OFFSET UNITYSDK_OFFSET(0x11E8E4D0)
#define CLASS_2_D9AEAF578C297E85_METHOD_2_EDC14BF43D2DE2A9_OFFSET UNITYSDK_OFFSET(0x11E8E7F0)
#define CLASS_2_D9AEAF578C297E85_METHOD_2_EE316F8D07DCD948_OFFSET UNITYSDK_OFFSET(0x11E8EF20)
#define CLASS_2_D9AEAF578C297E85__CTOR_OFFSET UNITYSDK_OFFSET(0x11E8EC10)

inline static constexpr unsigned int Class_2_D9AEAF578C297E85_TypeDefinitionIndex = 46748;

class Class_2_D9AEAF578C297E85 : public ::Class_1_37DF30C8B3AA0F39
{
public:
	::System::Collections::Generic::List_1<::MoleMole::UIBossChallengeBadgeWidgetController*>* Field_2_1; // 0x50
	::Class_0_16E4307DCC41950C_13<::System::Boolean>* Field_2_0; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9AEAF578C297E85__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_603A06DE63EB7219(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_D9AEAF578C297E85_METHOD_2_603A06DE63EB7219_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_EDC14BF43D2DE2A9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9AEAF578C297E85_METHOD_2_EDC14BF43D2DE2A9_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_2A0117F72708B5DF*>* Method_2_359889089C129707(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_2A0117F72708B5DF*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_D9AEAF578C297E85_METHOD_2_359889089C129707_OFFSET))(this, a1);
	}

	::System::Void Method_2_47737F2C08E6496E(::Struct_2_C8629618711DF8B3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_C8629618711DF8B3&))((::PBYTE)hIl2Cpp + CLASS_2_D9AEAF578C297E85_METHOD_2_47737F2C08E6496E_OFFSET))(this, a1);
	}

	::System::Void Method_2_EE316F8D07DCD948(::Class_0_16E4307DCC41950C_13<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC41950C_13<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_D9AEAF578C297E85_METHOD_2_EE316F8D07DCD948_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC41950C_13<::System::Boolean>* Method_2_2654A357D4E39BC5()
	{
		return ((::Class_0_16E4307DCC41950C_13<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9AEAF578C297E85_METHOD_2_2654A357D4E39BC5_OFFSET))(this);
	}
};
