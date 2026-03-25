#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_723;
namespace RPG::Client { class IRogueTournPersonaStyle; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E6C081C10A0434A1_METHOD_1_E5AE468270AE61D3_OFFSET UNITYSDK_OFFSET(0x11932910)

inline static constexpr unsigned int Class_1_E6C081C10A0434A1_TypeDefinitionIndex = 54761;

class Class_1_E6C081C10A0434A1 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaStyle*>* Method_1_E5AE468270AE61D3(::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_723*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaStyle*>*(*)(::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_723*>*))((::PBYTE)hIl2Cpp + CLASS_1_E6C081C10A0434A1_METHOD_1_E5AE468270AE61D3_OFFSET))(a1);
	}
};
