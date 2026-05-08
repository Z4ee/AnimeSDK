#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_32770405D1E18A2A.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ServerListInfo; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net { class WebResponse; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define CLASS_1_EFD1B99A3262983F_METHOD_1_05D207BA2F85C878_OFFSET UNITYSDK_OFFSET(0x1441D730)
#define CLASS_1_EFD1B99A3262983F_METHOD_1_0D3ABB0C7F33A531_OFFSET UNITYSDK_OFFSET(0x1441DB80)
#define CLASS_1_EFD1B99A3262983F_METHOD_1_179774CFFF738583_OFFSET UNITYSDK_OFFSET(0x1441DD50)
#define CLASS_1_EFD1B99A3262983F_METHOD_1_1D508E5CB45035BD_OFFSET UNITYSDK_OFFSET(0x1441D270)
#define CLASS_1_EFD1B99A3262983F_METHOD_1_6B650F2101946579_OFFSET UNITYSDK_OFFSET(0x1441DAB0)
#define CLASS_1_EFD1B99A3262983F_METHOD_1_7091142C27660520_OFFSET UNITYSDK_OFFSET(0x1441D610)
#define CLASS_1_EFD1B99A3262983F_METHOD_1_80F7476847662088_OFFSET UNITYSDK_OFFSET(0x1441D3E0)
#define CLASS_1_EFD1B99A3262983F_METHOD_1_8DCF15AB7598259E_OFFSET UNITYSDK_OFFSET(0x1441D860)
#define CLASS_1_EFD1B99A3262983F_METHOD_1_92ED7F225BEF71B7_OFFSET UNITYSDK_OFFSET(0x1441DFF0)
#define CLASS_1_EFD1B99A3262983F_METHOD_1_96AB138F2DB852A3_OFFSET UNITYSDK_OFFSET(0x1441DC30)
#define CLASS_1_EFD1B99A3262983F_METHOD_1_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x1441E190)
#define CLASS_1_EFD1B99A3262983F_METHOD_1_FA5B75ADBE368722_OFFSET UNITYSDK_OFFSET(0x1441DA20)
#define CLASS_1_EFD1B99A3262983F__CCTOR_OFFSET UNITYSDK_OFFSET(0x1441D260)
#define CLASS_1_EFD1B99A3262983F__CTOR_OFFSET UNITYSDK_OFFSET(0x1441D190)

inline static constexpr unsigned int Class_1_EFD1B99A3262983F_TypeDefinitionIndex = 79245;

class Class_1_EFD1B99A3262983F : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_9()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_EFD1B99A3262983F_TypeDefinitionIndex)->GetStaticField(0x103E0);
	}
	// static const ::System::Int32 Field_1_0 = 0x3E8; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x3; // 0x0
	::System::Collections::Generic::List_1<::MoleMole::ServerListInfo*>* Field_1_7; // 0x10
	::System::Action_1<::MoleMole::ServerListInfo*>* Field_1_6; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::ServerListInfo*>* Field_1_8; // 0x20
	::System::Boolean Field_1_4; // 0x28
	::System::Boolean Field_1_5; // 0x29
	::System::Int32 Field_1_1; // 0x2C
	::System::Int32 Field_1_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFD1B99A3262983F__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EFD1B99A3262983F__CCTOR_OFFSET))();
	}

	::System::Void Method_1_1D508E5CB45035BD(::System::Collections::Generic::List_1<::MoleMole::ServerListInfo*>* a1, ::System::Action_1<::MoleMole::ServerListInfo*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::ServerListInfo*>*, ::System::Action_1<::MoleMole::ServerListInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_EFD1B99A3262983F_METHOD_1_1D508E5CB45035BD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_05D207BA2F85C878(::System::Action_1<::MoleMole::ServerListInfo*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::ServerListInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_EFD1B99A3262983F_METHOD_1_05D207BA2F85C878_OFFSET))(this, a1);
	}

	static ::System::Collections::IEnumerator* Method_1_FA5B75ADBE368722(::MoleMole::ServerListInfo* a1, ::System::Action_1<::Struct_2_32770405D1E18A2A>* a2)
	{
		return ((::System::Collections::IEnumerator*(*)(::MoleMole::ServerListInfo*, ::System::Action_1<::Struct_2_32770405D1E18A2A>*))((::PBYTE)hIl2Cpp + CLASS_1_EFD1B99A3262983F_METHOD_1_FA5B75ADBE368722_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6B650F2101946579(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EFD1B99A3262983F_METHOD_1_6B650F2101946579_OFFSET))(a1, a2);
	}

	static ::System::Collections::IEnumerator* Method_1_0D3ABB0C7F33A531(::MoleMole::ServerListInfo* a1, ::Struct_2_32770405D1E18A2A a2, ::System::Int32 a3)
	{
		return ((::System::Collections::IEnumerator*(*)(::MoleMole::ServerListInfo*, ::Struct_2_32770405D1E18A2A, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EFD1B99A3262983F_METHOD_1_0D3ABB0C7F33A531_OFFSET))(a1, a2, a3);
	}

	::MoleMole::ServerListInfo* Method_1_96AB138F2DB852A3(::System::Collections::Generic::List_1<::MoleMole::ServerListInfo*>* a1)
	{
		return ((::MoleMole::ServerListInfo*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::ServerListInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_EFD1B99A3262983F_METHOD_1_96AB138F2DB852A3_OFFSET))(this, a1);
	}

	::System::Void Method_1_8DCF15AB7598259E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EFD1B99A3262983F_METHOD_1_8DCF15AB7598259E_OFFSET))(this, a1);
	}

	static ::System::Threading::Tasks::Task_1<::System::Net::WebResponse*>* Method_1_179774CFFF738583(::System::String* a1)
	{
		return ((::System::Threading::Tasks::Task_1<::System::Net::WebResponse*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EFD1B99A3262983F_METHOD_1_179774CFFF738583_OFFSET))(a1);
	}

	::MoleMole::ServerListInfo* Method_1_92ED7F225BEF71B7(::System::Collections::Generic::List_1<::MoleMole::ServerListInfo*>* a1)
	{
		return ((::MoleMole::ServerListInfo*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::ServerListInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_EFD1B99A3262983F_METHOD_1_92ED7F225BEF71B7_OFFSET))(this, a1);
	}

	::System::Void Method_1_7091142C27660520(::System::Collections::Generic::List_1<::MoleMole::ServerListInfo*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::ServerListInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_EFD1B99A3262983F_METHOD_1_7091142C27660520_OFFSET))(this, a1);
	}

	::System::Void Method_1_F4ADC37B63F4E9EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFD1B99A3262983F_METHOD_1_F4ADC37B63F4E9EF_OFFSET))(this);
	}

	::MoleMole::ServerListInfo* Method_1_80F7476847662088(::System::Collections::Generic::List_1<::MoleMole::ServerListInfo*>* a1)
	{
		return ((::MoleMole::ServerListInfo*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::ServerListInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_EFD1B99A3262983F_METHOD_1_80F7476847662088_OFFSET))(this, a1);
	}
};
