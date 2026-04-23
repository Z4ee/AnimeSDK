#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_544;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_53F0644B4D7513CF_METHOD_1_7D599D6C5F28E144_OFFSET UNITYSDK_OFFSET(0x117D0CB0)
#define CLASS_1_53F0644B4D7513CF_METHOD_1_8B848E52913DFCE9_OFFSET UNITYSDK_OFFSET(0x117D1230)
#define CLASS_1_53F0644B4D7513CF_METHOD_1_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x117D0DD0)
#define CLASS_1_53F0644B4D7513CF_METHOD_1_94EBCBE0FCDA9467_OFFSET UNITYSDK_OFFSET(0x117D1130)
#define CLASS_1_53F0644B4D7513CF__CTOR_OFFSET UNITYSDK_OFFSET(0x117D1280)

inline static constexpr unsigned int Class_1_53F0644B4D7513CF_TypeDefinitionIndex = 62902;

class Class_1_53F0644B4D7513CF : public ::System::Object
{
public:
	::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_544*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53F0644B4D7513CF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7D599D6C5F28E144(::Class_0_16E4307DCC419505_544* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_544*))((::PBYTE)hIl2Cpp + CLASS_1_53F0644B4D7513CF_METHOD_1_7D599D6C5F28E144_OFFSET))(this, a1);
	}

	::System::Void Method_1_8D61BE16C9463302()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53F0644B4D7513CF_METHOD_1_8D61BE16C9463302_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_544*>* Method_1_94EBCBE0FCDA9467()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_544*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53F0644B4D7513CF_METHOD_1_94EBCBE0FCDA9467_OFFSET))(this);
	}

	::System::Void Method_1_8B848E52913DFCE9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53F0644B4D7513CF_METHOD_1_8B848E52913DFCE9_OFFSET))(this);
	}
};
