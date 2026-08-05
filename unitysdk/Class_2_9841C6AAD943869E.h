#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIUrbanMapLeftTastListRow03Context; }
namespace MoleMole { class UIUrbanMapMissionProgressRowContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_2_9841C6AAD943869E_METHOD_2_05414D908FAFAF7F_OFFSET UNITYSDK_OFFSET(0x18A8EBE0)
#define CLASS_2_9841C6AAD943869E_METHOD_2_576AB3DAB8318A1D_OFFSET UNITYSDK_OFFSET(0x18A8F490)
#define CLASS_2_9841C6AAD943869E_METHOD_2_676E831338583C9D_OFFSET UNITYSDK_OFFSET(0x18A8EE40)
#define CLASS_2_9841C6AAD943869E_METHOD_2_9DB227B002CE5A5B_OFFSET UNITYSDK_OFFSET(0x18A8F080)
#define CLASS_2_9841C6AAD943869E_METHOD_2_EC7F8E2509451583_OFFSET UNITYSDK_OFFSET(0x18A8EFE0)
#define CLASS_2_9841C6AAD943869E__CTOR_OFFSET UNITYSDK_OFFSET(0x18A8EDF0)

inline static constexpr unsigned int Class_2_9841C6AAD943869E_TypeDefinitionIndex = 42061;

class Class_2_9841C6AAD943869E : public ::Class_1_37DF30C8B3AA0F39
{
public:
	::Class_2_000597E145D7A42A<::MoleMole::UIUrbanMapLeftTastListRow03Context*>* Field_2_0; // 0x50
	::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapMissionProgressRowContext*>* Field_2_1; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9841C6AAD943869E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_05414D908FAFAF7F(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_9841C6AAD943869E_METHOD_2_05414D908FAFAF7F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_676E831338583C9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9841C6AAD943869E_METHOD_2_676E831338583C9D_OFFSET))(this);
	}

	::System::Void Method_2_EC7F8E2509451583(::MoleMole::UIUrbanMapLeftTastListRow03Context* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapLeftTastListRow03Context*))((::PBYTE)hIl2Cpp + CLASS_2_9841C6AAD943869E_METHOD_2_EC7F8E2509451583_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_9DB227B002CE5A5B(::MoleMole::UIUrbanMapMissionProgressRowContext* a1, ::MoleMole::UIUrbanMapMissionProgressRowContext* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::UIUrbanMapMissionProgressRowContext*, ::MoleMole::UIUrbanMapMissionProgressRowContext*))((::PBYTE)hIl2Cpp + CLASS_2_9841C6AAD943869E_METHOD_2_9DB227B002CE5A5B_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapMissionProgressRowContext*>* Method_2_576AB3DAB8318A1D()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapMissionProgressRowContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9841C6AAD943869E_METHOD_2_576AB3DAB8318A1D_OFFSET))(this);
	}
};
