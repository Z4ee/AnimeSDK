#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_90889A2023AB884E_1.h"
#include "unitysdk/RPG/GameCore/RogueFormulaCategory.h"

class Class_1_4BC858D7C27E10ED_57;
namespace RPG::Client { class RogueFormulaData; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B55FA7FAECDB2163_METHOD_2_19FB5FBEA9EA66CD_OFFSET UNITYSDK_OFFSET(0x1371CD40)
#define CLASS_2_B55FA7FAECDB2163_METHOD_2_542E8C10DA52DB1F_OFFSET UNITYSDK_OFFSET(0x1371D260)
#define CLASS_2_B55FA7FAECDB2163_METHOD_2_959C0C43ADD4886A_OFFSET UNITYSDK_OFFSET(0x1371D030)
#define CLASS_2_B55FA7FAECDB2163_METHOD_2_AC0DD1E1A2A784A0_OFFSET UNITYSDK_OFFSET(0x1371D100)
#define CLASS_2_B55FA7FAECDB2163_METHOD_2_D78B3920F664D043_OFFSET UNITYSDK_OFFSET(0x1371D340)
#define CLASS_2_B55FA7FAECDB2163_METHOD_2_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x1371CC40)
#define CLASS_2_B55FA7FAECDB2163__CCTOR_OFFSET UNITYSDK_OFFSET(0x1371D700)
#define CLASS_2_B55FA7FAECDB2163__CTOR_OFFSET UNITYSDK_OFFSET(0x1371C700)
#define CLASS_2_B55FA7FAECDB2163___NOTIFYFLOWDISPOSE_B__5_0_OFFSET UNITYSDK_OFFSET(0x1371D850)

inline static constexpr unsigned int Class_2_B55FA7FAECDB2163_TypeDefinitionIndex = 63272;

class Class_2_B55FA7FAECDB2163 : public ::Class_1_90889A2023AB884E_1
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RogueFormulaCategory, ::System::UInt32>** StaticGet_Field_2_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RogueFormulaCategory, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B55FA7FAECDB2163_TypeDefinitionIndex)->GetStaticField(0x51930);
	}
	::System::Collections::Generic::List_1<::Class_1_4BC858D7C27E10ED_57*>* Field_2_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueFormulaData*>* Field_2_2; // 0x20

	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_1_4BC858D7C27E10ED_57*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_4BC858D7C27E10ED_57*>*))((::PBYTE)hIl2Cpp + CLASS_2_B55FA7FAECDB2163__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_B55FA7FAECDB2163__CCTOR_OFFSET))();
	}

	::System::Void Method_2_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B55FA7FAECDB2163_METHOD_2_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_2_19FB5FBEA9EA66CD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B55FA7FAECDB2163_METHOD_2_19FB5FBEA9EA66CD_OFFSET))(this);
	}

	::System::Func_1<::RPG::Client::Promises::IPromise*>* Method_2_959C0C43ADD4886A(::RPG::Client::RogueFormulaData* a1)
	{
		return ((::System::Func_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + CLASS_2_B55FA7FAECDB2163_METHOD_2_959C0C43ADD4886A_OFFSET))(this, a1);
	}

	::System::Func_1<::RPG::Client::Promises::IPromise*>* Method_2_AC0DD1E1A2A784A0(::Class_1_4BC858D7C27E10ED_57* a1)
	{
		return ((::System::Func_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_57*))((::PBYTE)hIl2Cpp + CLASS_2_B55FA7FAECDB2163_METHOD_2_AC0DD1E1A2A784A0_OFFSET))(this, a1);
	}

	::System::Func_1<::RPG::Client::Promises::IPromise*>* Method_2_542E8C10DA52DB1F()
	{
		return ((::System::Func_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B55FA7FAECDB2163_METHOD_2_542E8C10DA52DB1F_OFFSET))(this);
	}

	::System::Int32 Method_2_D78B3920F664D043(::Class_1_4BC858D7C27E10ED_57* a1, ::Class_1_4BC858D7C27E10ED_57* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_57*, ::Class_1_4BC858D7C27E10ED_57*))((::PBYTE)hIl2Cpp + CLASS_2_B55FA7FAECDB2163_METHOD_2_D78B3920F664D043_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise* __NotifyFlowDispose_b__5_0()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B55FA7FAECDB2163___NOTIFYFLOWDISPOSE_B__5_0_OFFSET))(this);
	}
};
