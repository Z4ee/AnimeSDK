#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_948;
class Class_1_E85115A4C331A9DA;
namespace RPG::Client { class PedestrianMemberExternalConfig_MaterialShowParts; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1028571A621B51A7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14353980)
#define CLASS_1_1028571A621B51A7_METHOD_1_0D3455A2B8A3E6D4_OFFSET UNITYSDK_OFFSET(0x14353B20)
#define CLASS_1_1028571A621B51A7__CTOR_OFFSET UNITYSDK_OFFSET(0x14353680)

inline static constexpr unsigned int Class_1_1028571A621B51A7_TypeDefinitionIndex = 64782;

class Class_1_1028571A621B51A7 : public ::System::Object
{
public:
	::RPG::Client::PedestrianMemberExternalConfig_MaterialShowParts* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_E85115A4C331A9DA*>* Field_1_1; // 0x18

	::System::Void _ctor(::RPG::Client::PedestrianMemberExternalConfig_MaterialShowParts* a1, ::System::String* a2, ::Class_0_16E4307DCC419505_948* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PedestrianMemberExternalConfig_MaterialShowParts*, ::System::String*, ::Class_0_16E4307DCC419505_948*))((::PBYTE)hIl2Cpp + CLASS_1_1028571A621B51A7__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1028571A621B51A7_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_0D3455A2B8A3E6D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1028571A621B51A7_METHOD_1_0D3455A2B8A3E6D4_OFFSET))(this);
	}
};
