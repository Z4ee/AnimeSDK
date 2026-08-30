#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1042;
class Class_1_E85115A4C331A9DA;
namespace RPG::Client { class PedestrianMemberExternalConfig_MaterialShowParts; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1028571A621B51A7_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB4997E0)
#define CLASS_1_1028571A621B51A7_METHOD_1_0D3455A2B8A3E6D4_OFFSET UNITYSDK_OFFSET(0xB499980)
#define CLASS_1_1028571A621B51A7__CTOR_OFFSET UNITYSDK_OFFSET(0xB4994E0)

inline static constexpr unsigned int Class_1_1028571A621B51A7_TypeDefinitionIndex = 69225;

class Class_1_1028571A621B51A7 : public ::System::Object
{
public:
	::RPG::Client::PedestrianMemberExternalConfig_MaterialShowParts* IGHAHBNLIJA; // 0x10
	::System::Collections::Generic::List_1<::Class_1_E85115A4C331A9DA*>* AHMGINCDBJG; // 0x18

	::System::Void _ctor(::RPG::Client::PedestrianMemberExternalConfig_MaterialShowParts* a1, ::System::String* a2, ::Class_0_16E4307DCC419505_1042* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PedestrianMemberExternalConfig_MaterialShowParts*, ::System::String*, ::Class_0_16E4307DCC419505_1042*))((::PBYTE)hIl2Cpp + CLASS_1_1028571A621B51A7__CTOR_OFFSET))(this, a1, a2, a3);
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
