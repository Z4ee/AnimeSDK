#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_298CB0A85460240D.h"

class Class_0_16E4307DCC419505_44;
class Class_1_7AB88D713F5121B3_7;
namespace RPG::Client { class RPGProfilerMarker; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_2_998075D03876FDE3_METHOD_2_275E630421A3BC85_OFFSET UNITYSDK_OFFSET(0x166B7E30)
#define CLASS_2_998075D03876FDE3_METHOD_2_57AC80B9B63C9081_OFFSET UNITYSDK_OFFSET(0x166B7EB0)
#define CLASS_2_998075D03876FDE3_METHOD_2_EA0F766346CA24B1_OFFSET UNITYSDK_OFFSET(0x166B7F70)
#define CLASS_2_998075D03876FDE3__CTOR_OFFSET UNITYSDK_OFFSET(0x166B7DC0)

inline static constexpr unsigned int Class_2_998075D03876FDE3_TypeDefinitionIndex = 28676;

class Class_2_998075D03876FDE3 : public ::Class_1_298CB0A85460240D
{
public:
	::RPG::Client::RPGProfilerMarker* Field_2_0; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_44* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_44*))((::PBYTE)hIl2Cpp + CLASS_2_998075D03876FDE3__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_275E630421A3BC85(::Class_1_7AB88D713F5121B3_7* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7AB88D713F5121B3_7*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_998075D03876FDE3_METHOD_2_275E630421A3BC85_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_57AC80B9B63C9081(::System::UInt32 a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_998075D03876FDE3_METHOD_2_57AC80B9B63C9081_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_EA0F766346CA24B1(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_998075D03876FDE3_METHOD_2_EA0F766346CA24B1_OFFSET))(this, a1, a2, a3);
	}
};
