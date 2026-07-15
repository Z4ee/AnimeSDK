#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_601;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_53F0644B4D7513CF_METHOD_1_1092C5537716905B_OFFSET UNITYSDK_OFFSET(0x1630D5E0)
#define CLASS_1_53F0644B4D7513CF_METHOD_1_7D599D6C5F28E144_OFFSET UNITYSDK_OFFSET(0x1630CE20)
#define CLASS_1_53F0644B4D7513CF_METHOD_1_94EBCBE0FCDA9467_OFFSET UNITYSDK_OFFSET(0x1630D480)
#define CLASS_1_53F0644B4D7513CF_METHOD_1_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0x1630CFA0)
#define CLASS_1_53F0644B4D7513CF__CTOR_OFFSET UNITYSDK_OFFSET(0x1630D630)

inline static constexpr unsigned int Class_1_53F0644B4D7513CF_TypeDefinitionIndex = 65206;

class Class_1_53F0644B4D7513CF : public ::System::Object
{
public:
	::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_601*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53F0644B4D7513CF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7D599D6C5F28E144(::Class_0_16E4307DCC419505_601* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_601*))((::PBYTE)hIl2Cpp + CLASS_1_53F0644B4D7513CF_METHOD_1_7D599D6C5F28E144_OFFSET))(this, a1);
	}

	::System::Void Method_1_B2C0ADBFEA309440()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53F0644B4D7513CF_METHOD_1_B2C0ADBFEA309440_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_601*>* Method_1_94EBCBE0FCDA9467()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_601*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53F0644B4D7513CF_METHOD_1_94EBCBE0FCDA9467_OFFSET))(this);
	}

	::System::Void Method_1_1092C5537716905B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53F0644B4D7513CF_METHOD_1_1092C5537716905B_OFFSET))(this);
	}
};
