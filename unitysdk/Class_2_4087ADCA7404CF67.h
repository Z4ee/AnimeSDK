#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_384338DD03F999FE.h"

class Class_0_16E4307DCC419505_43;
class Class_1_7AB88D713F5121B3_14;
namespace RPG::Client { class RPGProfilerMarker; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_2_4087ADCA7404CF67_METHOD_2_52D4B8B149A0F5C1_OFFSET UNITYSDK_OFFSET(0x18988FE0)
#define CLASS_2_4087ADCA7404CF67_METHOD_2_64F22FAEBCB2F18D_OFFSET UNITYSDK_OFFSET(0x189BC0C0)
#define CLASS_2_4087ADCA7404CF67_METHOD_2_EA0F766346CA24B1_OFFSET UNITYSDK_OFFSET(0x18988820)
#define CLASS_2_4087ADCA7404CF67__CTOR_OFFSET UNITYSDK_OFFSET(0x18989600)

inline static constexpr unsigned int Class_2_4087ADCA7404CF67_TypeDefinitionIndex = 34685;

class Class_2_4087ADCA7404CF67 : public ::Class_1_384338DD03F999FE
{
public:
	::RPG::Client::RPGProfilerMarker* Field_2_0; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_43* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_43*))((::PBYTE)hIl2Cpp + CLASS_2_4087ADCA7404CF67__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_64F22FAEBCB2F18D(::Class_1_7AB88D713F5121B3_14* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7AB88D713F5121B3_14*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_4087ADCA7404CF67_METHOD_2_64F22FAEBCB2F18D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_52D4B8B149A0F5C1(::System::UInt32 a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_4087ADCA7404CF67_METHOD_2_52D4B8B149A0F5C1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_EA0F766346CA24B1(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_4087ADCA7404CF67_METHOD_2_EA0F766346CA24B1_OFFSET))(this, a1, a2, a3);
	}
};
