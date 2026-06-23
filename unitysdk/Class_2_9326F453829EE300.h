#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_321489CFFF7B18E7.h"
#include "unitysdk/Class_2_9326F453829EE300_Struct_2_E81A211B6662113C_9.h"

class Class_2_785FDC7D0DA58280;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_9326F453829EE300_METHOD_2_0F8D6364B34C7195_OFFSET UNITYSDK_OFFSET(0x1DDF4700)
#define CLASS_2_9326F453829EE300_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1DDF43D0)
#define CLASS_2_9326F453829EE300_METHOD_2_3783F0665AED1E64_OFFSET UNITYSDK_OFFSET(0x1DDF47A0)
#define CLASS_2_9326F453829EE300_METHOD_2_453F0151859DAB80_OFFSET UNITYSDK_OFFSET(0x1DDF45D0)
#define CLASS_2_9326F453829EE300_METHOD_2_88A0DD05E233A7F9_OFFSET UNITYSDK_OFFSET(0x1DDF4530)
#define CLASS_2_9326F453829EE300_METHOD_2_98511BB23D2E3748_OFFSET UNITYSDK_OFFSET(0x1DDF4380)
#define CLASS_2_9326F453829EE300__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDF4470)

inline static constexpr unsigned int Class_2_9326F453829EE300_TypeDefinitionIndex = 90964;

class Class_2_9326F453829EE300 : public ::Class_1_321489CFFF7B18E7
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_9326F453829EE300_Struct_2_E81A211B6662113C_9>* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9326F453829EE300__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_98511BB23D2E3748(::Class_2_785FDC7D0DA58280* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_785FDC7D0DA58280*))((::PBYTE)hIl2Cpp + CLASS_2_9326F453829EE300_METHOD_2_98511BB23D2E3748_OFFSET))(this, a1);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9326F453829EE300_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_88A0DD05E233A7F9(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_9326F453829EE300_METHOD_2_88A0DD05E233A7F9_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_453F0151859DAB80(::System::UInt32 a1, ::System::UInt32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_2_9326F453829EE300_METHOD_2_453F0151859DAB80_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_2_0F8D6364B34C7195(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_9326F453829EE300_METHOD_2_0F8D6364B34C7195_OFFSET))(this, a1);
	}

	::System::Void Method_2_3783F0665AED1E64(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_9326F453829EE300_METHOD_2_3783F0665AED1E64_OFFSET))(this, a1);
	}
};
