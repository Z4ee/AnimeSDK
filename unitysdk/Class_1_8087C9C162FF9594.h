#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_963;
namespace RPG::Client { class IRogueTournPersonaStyle; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8087C9C162FF9594_METHOD_1_321EAC27BB13092A_OFFSET UNITYSDK_OFFSET(0xCFA2480)

inline static constexpr unsigned int Class_1_8087C9C162FF9594_TypeDefinitionIndex = 67244;

class Class_1_8087C9C162FF9594 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaStyle*>* Method_1_321EAC27BB13092A(::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_963*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaStyle*>*(*)(::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_963*>*))((::PBYTE)hIl2Cpp + CLASS_1_8087C9C162FF9594_METHOD_1_321EAC27BB13092A_OFFSET))(a1);
	}
};
