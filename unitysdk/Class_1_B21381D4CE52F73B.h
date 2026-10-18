#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class VoracityInvasionFightEntranceData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B21381D4CE52F73B_METHOD_1_FFDD2AB38560598A_OFFSET UNITYSDK_OFFSET(0xB23F020)
#define CLASS_1_B21381D4CE52F73B__CCTOR_OFFSET UNITYSDK_OFFSET(0xB23F2E0)

inline static constexpr unsigned int Class_1_B21381D4CE52F73B_TypeDefinitionIndex = 68262;

class Class_1_B21381D4CE52F73B : public ::System::Object
{
public:
	static ::Il2CppArray<::System::UInt32>** StaticGet_FFLIALCHAIO()
	{
		return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B21381D4CE52F73B_TypeDefinitionIndex)->GetStaticField(0x1BC70);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B21381D4CE52F73B__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::RPG::Client::VoracityInvasionFightEntranceData*>* Method_1_FFDD2AB38560598A()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::VoracityInvasionFightEntranceData*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B21381D4CE52F73B_METHOD_1_FFDD2AB38560598A_OFFSET))();
	}
};
