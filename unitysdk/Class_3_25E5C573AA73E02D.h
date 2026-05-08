#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E1E8F78EF830D7DA.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/Struct_2_6E23A591AC26A31E.h"
#include "unitysdk/Struct_2_6E318F2AEABB84CB.h"
#include "unitysdk/Struct_2_F5A3652C7E8D84F8.h"

class Class_1_1B319070EAD6DC38;
class Class_1_2A7ADB371EC0A4D0;
class Class_2_B69C3858051DCD8F;
namespace MoleMole::Config { class HollowChessboardUvAnimConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define CLASS_3_25E5C573AA73E02D_METHOD_3_549C6AD81CA75D32_OFFSET UNITYSDK_OFFSET(0x115AEA40)
#define CLASS_3_25E5C573AA73E02D_METHOD_3_69157CB59E2380BE_OFFSET UNITYSDK_OFFSET(0x115AEB20)
#define CLASS_3_25E5C573AA73E02D_METHOD_3_85ECB7BCBDEDE6C2_OFFSET UNITYSDK_OFFSET(0x115AE8B0)
#define CLASS_3_25E5C573AA73E02D_METHOD_3_B2AF81294D9C69C7_OFFSET UNITYSDK_OFFSET(0x115ADDB0)
#define CLASS_3_25E5C573AA73E02D_METHOD_3_D20BF56E36607D54_OFFSET UNITYSDK_OFFSET(0x115AE860)
#define CLASS_3_25E5C573AA73E02D_METHOD_3_E26C99C52BC1E654_OFFSET UNITYSDK_OFFSET(0x115ADD60)
#define CLASS_3_25E5C573AA73E02D_METHOD_3_EB403C66E62C3C7B_OFFSET UNITYSDK_OFFSET(0x115AEDF0)
#define CLASS_3_25E5C573AA73E02D_METHOD_3_ECF88F94F2E269F4_OFFSET UNITYSDK_OFFSET(0x115ADF10)
#define CLASS_3_25E5C573AA73E02D__CTOR_OFFSET UNITYSDK_OFFSET(0x115ADBC0)

inline static constexpr unsigned int Class_3_25E5C573AA73E02D_TypeDefinitionIndex = 40875;

class Class_3_25E5C573AA73E02D : public ::Class_2_E1E8F78EF830D7DA
{
public:
	::Class_1_1B319070EAD6DC38* Field_3_0; // 0x28
	::System::Collections::Generic::List_1<::Class_2_B69C3858051DCD8F*>* Field_3_1; // 0x30
	::Struct_2_F5A3652C7E8D84F8 Field_3_2; // 0x38

	::System::Void _ctor(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_25E5C573AA73E02D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_E26C99C52BC1E654()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_25E5C573AA73E02D_METHOD_3_E26C99C52BC1E654_OFFSET))(this);
	}

	::System::Void Method_3_ECF88F94F2E269F4(::Struct_2_6E23A591AC26A31E& a1, ::System::Single a2, ::MoleMole::HollowChessboard::HollowCell a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_6E23A591AC26A31E&, ::System::Single, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_25E5C573AA73E02D_METHOD_3_ECF88F94F2E269F4_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_D20BF56E36607D54(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_25E5C573AA73E02D_METHOD_3_D20BF56E36607D54_OFFSET))(this, a1);
	}

	::Class_1_2A7ADB371EC0A4D0* Method_3_85ECB7BCBDEDE6C2(::Struct_2_6E318F2AEABB84CB a1)
	{
		return ((::Class_1_2A7ADB371EC0A4D0*(*)(::PVOID, ::Struct_2_6E318F2AEABB84CB))((::PBYTE)hIl2Cpp + CLASS_3_25E5C573AA73E02D_METHOD_3_85ECB7BCBDEDE6C2_OFFSET))(this, a1);
	}

	::Class_1_2A7ADB371EC0A4D0* Method_3_549C6AD81CA75D32(::MoleMole::Config::HollowChessboardUvAnimConfig* a1, ::System::Int32 a2, ::UnityEngine::Events::UnityAction_1<::System::Boolean>* a3)
	{
		return ((::Class_1_2A7ADB371EC0A4D0*(*)(::PVOID, ::MoleMole::Config::HollowChessboardUvAnimConfig*, ::System::Int32, ::UnityEngine::Events::UnityAction_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_3_25E5C573AA73E02D_METHOD_3_549C6AD81CA75D32_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_2A7ADB371EC0A4D0* Method_3_69157CB59E2380BE(::System::String* a1, ::System::Int32 a2, ::UnityEngine::Events::UnityAction_1<::System::Boolean>* a3)
	{
		return ((::Class_1_2A7ADB371EC0A4D0*(*)(::PVOID, ::System::String*, ::System::Int32, ::UnityEngine::Events::UnityAction_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_3_25E5C573AA73E02D_METHOD_3_69157CB59E2380BE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_B2AF81294D9C69C7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_25E5C573AA73E02D_METHOD_3_B2AF81294D9C69C7_OFFSET))(this);
	}

	::System::Boolean Method_3_EB403C66E62C3C7B(::Class_1_2A7ADB371EC0A4D0* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2A7ADB371EC0A4D0*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_25E5C573AA73E02D_METHOD_3_EB403C66E62C3C7B_OFFSET))(this, a1, a2);
	}
};
