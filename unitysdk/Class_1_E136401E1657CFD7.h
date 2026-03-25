#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E136401E1657CFD7_Class_1_53986EDE807DFFE7;
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E136401E1657CFD7_CLEAR_OFFSET UNITYSDK_OFFSET(0x10905D90)
#define CLASS_1_E136401E1657CFD7_METHOD_1_01B842B7F45D4CF0_OFFSET UNITYSDK_OFFSET(0x10905990)
#define CLASS_1_E136401E1657CFD7_METHOD_1_1A85D48A6C6870FC_OFFSET UNITYSDK_OFFSET(0x10905C80)
#define CLASS_1_E136401E1657CFD7_METHOD_1_513F60E1612756A9_OFFSET UNITYSDK_OFFSET(0x109056E0)
#define CLASS_1_E136401E1657CFD7_METHOD_1_8AF19EDAC56C6A55_OFFSET UNITYSDK_OFFSET(0x10904F50)
#define CLASS_1_E136401E1657CFD7_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x10905D30)
#define CLASS_1_E136401E1657CFD7_METHOD_1_96D29A8C7C053BD5_OFFSET UNITYSDK_OFFSET(0x109053D0)
#define CLASS_1_E136401E1657CFD7_METHOD_1_ACFC23552ECCD2F2_OFFSET UNITYSDK_OFFSET(0x10905760)
#define CLASS_1_E136401E1657CFD7_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x10905A90)
#define CLASS_1_E136401E1657CFD7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x10904F10)
#define CLASS_1_E136401E1657CFD7__CTOR_OFFSET UNITYSDK_OFFSET(0x10904D20)

inline static constexpr unsigned int Class_1_E136401E1657CFD7_TypeDefinitionIndex = 60464;

class Class_1_E136401E1657CFD7 : public ::System::Object
{
public:
	::Class_1_E136401E1657CFD7_Class_1_53986EDE807DFFE7* Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E136401E1657CFD7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Collections::Generic::IList_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_E136401E1657CFD7__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_8AF19EDAC56C6A55(::System::Collections::Generic::IList_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_E136401E1657CFD7_METHOD_1_8AF19EDAC56C6A55_OFFSET))(this, a1);
	}

	::System::Void Method_1_96D29A8C7C053BD5(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E136401E1657CFD7_METHOD_1_96D29A8C7C053BD5_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_513F60E1612756A9(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E136401E1657CFD7_METHOD_1_513F60E1612756A9_OFFSET))(this, a1);
	}

	::System::Void Method_1_ACFC23552ECCD2F2(::System::Collections::Generic::IList_1<::System::Int32>* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::Int32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E136401E1657CFD7_METHOD_1_ACFC23552ECCD2F2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_01B842B7F45D4CF0(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E136401E1657CFD7_METHOD_1_01B842B7F45D4CF0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E136401E1657CFD7_METHOD_1_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_1A85D48A6C6870FC()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E136401E1657CFD7_METHOD_1_1A85D48A6C6870FC_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E136401E1657CFD7_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E136401E1657CFD7_CLEAR_OFFSET))(this);
	}
};
