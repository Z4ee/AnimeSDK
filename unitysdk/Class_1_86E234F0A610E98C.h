#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A47ACAABA9AAFE92.h"
#include "unitysdk/System/Object.h"

class Class_1_982D1D66E14C5EA5;
class Class_2_7C14488DAEE516C3;
namespace MoleMole::UI::FlowerShop { class FlowerExpressionContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_86E234F0A610E98C_METHOD_1_07F779F326EEF65B_OFFSET UNITYSDK_OFFSET(0xBDF8D90)
#define CLASS_1_86E234F0A610E98C_METHOD_1_C8B732F13FE31DFC_OFFSET UNITYSDK_OFFSET(0xBDF8D00)
#define CLASS_1_86E234F0A610E98C_METHOD_1_D3F386645BCA2662_OFFSET UNITYSDK_OFFSET(0xBDF8FB0)
#define CLASS_1_86E234F0A610E98C_METHOD_1_DC388DC6F82177FE_OFFSET UNITYSDK_OFFSET(0xBDF9190)
#define CLASS_1_86E234F0A610E98C_METHOD_1_E4ECE662B8B338A0_OFFSET UNITYSDK_OFFSET(0xBDF91F0)
#define CLASS_1_86E234F0A610E98C__CTOR_OFFSET UNITYSDK_OFFSET(0xBDF8CF0)

inline static constexpr unsigned int Class_1_86E234F0A610E98C_TypeDefinitionIndex = 48057;

class Class_1_86E234F0A610E98C : public ::System::Object
{
public:
	::Class_2_7C14488DAEE516C3* Field_1_1; // 0x10
	::MoleMole::UI::FlowerShop::FlowerExpressionContext* Field_1_0; // 0x18

	::System::Void _ctor(::MoleMole::UI::FlowerShop::FlowerExpressionContext* a1, ::Class_2_7C14488DAEE516C3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UI::FlowerShop::FlowerExpressionContext*, ::Class_2_7C14488DAEE516C3*))((::PBYTE)hIl2Cpp + CLASS_1_86E234F0A610E98C__CTOR_OFFSET))(this, a1, a2);
	}

	::Struct_2_A47ACAABA9AAFE92 Method_1_C8B732F13FE31DFC(::System::String* a1)
	{
		return ((::Struct_2_A47ACAABA9AAFE92(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_86E234F0A610E98C_METHOD_1_C8B732F13FE31DFC_OFFSET))(this, a1);
	}

	::Struct_2_A47ACAABA9AAFE92 Method_1_07F779F326EEF65B(::System::String* a1, ::Struct_2_A47ACAABA9AAFE92 a2)
	{
		return ((::Struct_2_A47ACAABA9AAFE92(*)(::PVOID, ::System::String*, ::Struct_2_A47ACAABA9AAFE92))((::PBYTE)hIl2Cpp + CLASS_1_86E234F0A610E98C_METHOD_1_07F779F326EEF65B_OFFSET))(this, a1, a2);
	}

	::Struct_2_A47ACAABA9AAFE92 Method_1_D3F386645BCA2662(::System::String* a1, ::Struct_2_A47ACAABA9AAFE92 a2, ::Struct_2_A47ACAABA9AAFE92 a3)
	{
		return ((::Struct_2_A47ACAABA9AAFE92(*)(::PVOID, ::System::String*, ::Struct_2_A47ACAABA9AAFE92, ::Struct_2_A47ACAABA9AAFE92))((::PBYTE)hIl2Cpp + CLASS_1_86E234F0A610E98C_METHOD_1_D3F386645BCA2662_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_DC388DC6F82177FE(::Class_1_982D1D66E14C5EA5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_982D1D66E14C5EA5*))((::PBYTE)hIl2Cpp + CLASS_1_86E234F0A610E98C_METHOD_1_DC388DC6F82177FE_OFFSET))(this, a1);
	}

	::System::Void Method_1_E4ECE662B8B338A0(::Class_1_982D1D66E14C5EA5* a1, ::System::Collections::Generic::List_1<::Class_1_982D1D66E14C5EA5*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_982D1D66E14C5EA5*, ::System::Collections::Generic::List_1<::Class_1_982D1D66E14C5EA5*>*))((::PBYTE)hIl2Cpp + CLASS_1_86E234F0A610E98C_METHOD_1_E4ECE662B8B338A0_OFFSET))(this, a1, a2);
	}
};
